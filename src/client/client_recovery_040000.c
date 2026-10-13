#include "shared_client.h"
/* 0x1400403F0 is not a routine of its own: it is a patch block that 0x14003B920 jumps to and back from,
   written over the start of a small routine nothing calls. src/engine/frame.c has it as part of game_frame. */

//----- (0000000140041B80) ----------------------------------------------------
__int64 sub_140041B80()
{
  __int64 v0;
  int v1;
  float *v2;
  __int64 v3;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float *v17;
  float *v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  signed int v25;
  __int64 v26;
  __int64 v27;
  signed int v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  __int64 v36;
  float *v37;
  float *v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float *v63;
  __int64 v64;
  signed int v65;
  int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  __int64 v74;
  float v75;
  float v76;
  float v77;
  unsigned int *v78;
  signed int v79;
  int v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  signed int v88;
  unsigned int v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  signed int v97;
  unsigned int v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  signed int v106;
  unsigned int v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140041B80[96];
#define v116 (*(__int64 (*))(void *)(sr_frame_140041B80 + 0)) /* [rsp+8h] */
#define v117 (*(__int64 (*))(void *)(sr_frame_140041B80 + 32)) /* [rsp+28h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_140041B80 + 40)) /* [rsp+30h] */
#define v119 (*(float (*))(void *)(sr_frame_140041B80 + 48)) /* [rsp+38h] */
#define v120 (*(float (*))(void *)(sr_frame_140041B80 + 52)) /* [rsp+3Ch] */
#define v121 (*(float (*))(void *)(sr_frame_140041B80 + 56)) /* [rsp+40h] */
#define v122 (*(float (*))(void *)(sr_frame_140041B80 + 64)) /* [rsp+48h] */
#define v123 (*(float (*))(void *)(sr_frame_140041B80 + 68)) /* [rsp+4Ch] */
#define v124 (*(__int64 (*))(void *)(sr_frame_140041B80 + 72)) /* [rsp+50h] */
#define v125 (*(__int64 (*))(void *)(sr_frame_140041B80 + 80)) /* [rsp+58h] */

  v0 = 0;
  v1 = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    v2 = (float *)&dword_140404A6C[132401018];
    do
    {
      v3 = *((int *)v2 - 381);
      v4 = *((_DWORD *)v2 - 6);
      *(v2 - 357) = 3.0;
      v5 = (float)(*(float *)&dword_140404A6C[24944 * v3 + 346731818] * 0.875)
         - *(float *)&dword_140404A6C[24944 * v3 + 346731821];
      if ( v4 >= (int)game_tick )
      {
        v12 = *(v2 - 377);
      }
      else
      {
        v6 = *(v2 - 4);
        v7 = *(v2 - 5) - *(v2 - 1);
        v8 = v6 - *v2;
        v9 = *(v2 - 3) - v2[1];
        v10 = (float)(v4 - *((_DWORD *)v2 - 2));
        if ( v10 > 0.0 )
        {
          v7 = v7 * (float)(1.0 / v10);
          v8 = v8 * (float)(1.0 / v10);
          v9 = v9 * (float)(1.0 / v10);
        }
        v11 = fminf((float)(game_tick - v4), 64.0);
        v12 = (float)(v7 * v11) + *(v2 - 5);
        v13 = (float)(v9 * v11) + *(v2 - 3);
        *(v2 - 377) = v12;
        *(v2 - 376) = (float)(v8 * v11) + v6;
        *(v2 - 375) = v13;
      }
      v14 = *(v2 - 376);
      v15 = *(v2 - 375);
      v119 = (float)(*(float *)&dword_1402F6188 * 2.0) + v12;
      v122 = v12 - (float)(*(float *)&dword_1402F6188 * 8.0);
      v120 = (float)(*(float *)&dword_1402F618C * 2.0) + v14;
      v123 = v14 - (float)(*(float *)&dword_1402F618C * 8.0);
      v121 = (float)(*(float *)&dword_1402F6190 * 2.0) + v15;
      *(float *)&v124 = v15 - (float)(*(float *)&dword_1402F6190 * 8.0);
      if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
        *(v2 - 376) = ragdoll_unknown_height + v5;
      v16 = 383LL * v1;
      *((_QWORD *)v2 - 185) = 1065353216;
      v17 = (float *)&dword_140404A6C[v16 + 132400651];
      *((_QWORD *)v2 - 184) = 0;
      v18 = (float *)&dword_140404A6C[v16 + 132400648];
      *((_QWORD *)v2 - 183) = 1065353216;
      *((_QWORD *)v2 - 182) = 0;
      *(v2 - 362) = 1.0;
      sub_14007B2A0(
        (__int64)&dword_140404A6C[v16 + 132400648],
        (float *)&dword_140404A6C[v16 + 132400651],
        sr_export_float_lane_container(1070141403));
      sub_14007B2A0((__int64)v18, v17, sr_export_float_lane_container((unsigned __int64)*((_DWORD *)v2 - 371)));
      v19 = -*(v2 - 357);
      v20 = (float)(v19 * *(v2 - 364)) + *(v2 - 377);
      v21 = (float)(v19 * *(v2 - 363)) + *(v2 - 376);
      v22 = (float)(v19 * *(v2 - 362)) + *(v2 - 375);
      v119 = v20;
      v120 = v21;
      v122 = v20 - (float)(*(float *)&dword_1402F6188 * 32.0);
      v121 = v22;
      *(float *)&v124 = v22 - (float)(*(float *)&dword_1402F6190 * 32.0);
      v123 = v21 - (float)(*(float *)&dword_1402F618C * 32.0);
      if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
      {
        v23 = dword_140404A6C[73006982];
        v24 = *(v2 - 357);
        v120 = ragdoll_unknown_height + v5;
        *(float *)&v23 = sub_14023F704((float)(ragdoll_unknown_height + v5) - *(v2 - 376), v24);
        sub_14007B2A0((__int64)v18, v18, sr_export_float_lane_container(v23 ^ 0x80000000LL));
      }
      ++v1;
      v2 += 383;
    }
    while ( v1 < (int)world_unknown_15fd16260_count );
  }
  v25 = game_tick;
  v26 = 256;
  v27 = 0;
  v118 = 256;
  v117 = 256;
  do
  {
    if ( dword_140404A6C[v0 + 280651303] )
    {
      v28 = dword_140404A6C[v0 + 280658451];
      if ( v28 < v25 )
      {
        v29 = *(float *)&dword_140404A6C[v0 + 280658453];
        v30 = *(float *)&dword_140404A6C[v0 + 280658454];
        v31 = *(float *)&dword_140404A6C[v0 + 280658452] - *(float *)&dword_140404A6C[v0 + 280658456];
        v32 = v29 - *(float *)&dword_140404A6C[v0 + 280658457];
        v33 = v30 - *(float *)&dword_140404A6C[v0 + 280658458];
        v34 = (float)(int)(v28 - dword_140404A6C[v0 + 280658455]);
        if ( v34 > 0.0 )
        {
          v31 = v31 * (float)(1.0 / v34);
          v32 = v32 * (float)(1.0 / v34);
          v33 = v33 * (float)(1.0 / v34);
        }
        v35 = 1;
        v36 = 78;
        v37 = (float *)&dword_140404A6C[282486075];
        v38 = (float *)&dword_140404A6C[v0 + 280651519];
        v39 = fminf((float)(v25 - v28), 64.0);
        *(float *)&dword_140404A6C[v0 + 280651440] = (float)(v31 * v39) + *(float *)&dword_140404A6C[v0 + 280658452];
        *(float *)&dword_140404A6C[v0 + 280651441] = (float)(v32 * v39) + v29;
        *(float *)&dword_140404A6C[v0 + 280651442] = (float)(v33 * v39) + v30;
        do
        {
          if ( dword_140404A6C[v0 + 280651313] == -1 || (unsigned int)v35 < 0xA )
          {
            v40 = *(v37 - 1);
            v41 = *v37;
            v42 = 78LL * *((int *)v37 - 5);
            v43 = *v37;
            v44 = *v37;
            v45 = v0 * 4 + v42 * 4;
            v46 = (float)(v40 * *(float *)&dword_140404A6C[v0 + 280651452 + v42])
                + *(float *)&dword_140404A6C[v0 + 280651440 + v42];
            *(v38 - 1) = v46;
            v47 = (float)(v40 * *(float *)((char *)&dword_140404A6C[280651453] + v45))
                + *(float *)((char *)&dword_140404A6C[280651441] + v45);
            *v38 = v47;
            v48 = (float)(v40 * *(float *)((char *)&dword_140404A6C[280651454] + v45))
                + *(float *)((char *)&dword_140404A6C[280651442] + v45);
            v38[1] = v48;
            v49 = (float)(v43 * *(float *)&dword_140404A6C[v0 + 280651455 + v42]) + v46;
            v50 = v37[1];
            *(v38 - 1) = v49;
            v51 = (float)(v44 * *(float *)&dword_140404A6C[v0 + 280651456 + v42]) + v47;
            *v38 = v51;
            v52 = (float)(v41 * *(float *)&dword_140404A6C[v0 + 280651457 + v42]) + v48;
            v38[1] = v52;
            *(v38 - 1) = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651458 + v42]) + v49;
            *v38 = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651459 + v42]) + v51;
            v38[1] = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651460 + v42]) + v52;
            sub_14007A010(
              (__int64)&dword_140404A6C[v36 + 280651452 + v27],
              (__int64)&dword_140404A6C[v36 + 280651493 + v27],
              (__int64)&dword_140404A6C[v27 + 280651452 + v42]);
            v53 = *(v37 - 4) - *(v37 - 1);
            v54 = *(v37 - 3) - *v37;
            v55 = *(v37 - 2) - v37[1];
            v119 = v53;
            v56 = v53 * v38[11];
            v120 = v54;
            v121 = v55;
            v57 = v56 + *(v38 - 1);
            *(v38 - 1) = v57;
            v58 = (float)(v53 * v38[12]) + *v38;
            *v38 = v58;
            v59 = (float)(v53 * v38[13]) + v38[1];
            v38[1] = v59;
            v60 = (float)(v54 * v38[14]) + v57;
            *(v38 - 1) = v60;
            v61 = (float)(v54 * v38[15]) + v58;
            *v38 = v61;
            v62 = (float)(v54 * v38[16]) + v59;
            v38[1] = v62;
            *(v38 - 1) = (float)(v55 * v38[17]) + v60;
            *v38 = (float)(v55 * v38[18]) + v61;
            v38[1] = (float)(v55 * v38[19]) + v62;
          }
          ++v35;
          v36 += 78;
          v37 += 25;
          v38 += 78;
        }
        while ( v35 < 16 );
        v25 = game_tick;
        v26 = v117;
      }
    }
    v27 += 7166;
    v0 += 7166;
    v117 = --v26;
  }
  while ( v26 );
  v63 = (float *)&dword_140404A6C[129721917];
  v64 = 512;
  do
  {
    if ( *((_DWORD *)v63 - 5208) )
    {
      v65 = *((_DWORD *)v63 - 7);
      if ( v65 != -1 )
      {
        v66 = *((_DWORD *)v63 - 3);
        if ( v66 != -1 )
        {
          v68 = *(v63 - 6);
          v69 = *(v63 - 5);
          v70 = v68 - *(v63 - 2);
          *(float *)&v117 = *(v63 - 4);
          v67 = *(float *)&v117;
          v71 = v69 - *(v63 - 1);
          v72 = *(float *)&v117 - *v63;
          v73 = (float)(v65 - v66);
          if ( v73 > 0.0 )
          {
            v70 = v70 * (float)(1.0 / v73);
            v71 = v71 * (float)(1.0 / v73);
            v72 = v72 * (float)(1.0 / v73);
          }
          v74 = 24944LL * *((int *)v63 - 5207);
          *(v63 - 5173) = v70;
          *(v63 - 5172) = v71;
          *(v63 - 5171) = v72;
          if ( v65 < v25 )
          {
            v75 = *(float *)&dword_140404A6C[v74 + 346731821]
                - (float)(*(float *)&dword_140404A6C[v74 + 346731818] * 0.875);
            v119 = v68 + *(float *)&dword_1402F6188;
            v120 = v69 + *(float *)&dword_1402F618C;
            v121 = v67 + *(float *)&dword_1402F6190;
            v76 = fminf((float)(v25 - v65), 64.0);
            v122 = (float)((float)(v75 * *(float *)&dword_1402F6188) + v68) + (float)(v70 * v76);
            v123 = (float)((float)(v75 * *(float *)&dword_1402F618C) + v69) + (float)(v71 * v76);
            *(float *)&v124 = (float)((float)(v75 * *(float *)&dword_1402F6190) + *(float *)&v117) + (float)(v72 * v76);
            if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
            {
              v77 = -(float)((float)((float)(v70 * *(float *)&dword_140404A6C[73006984])
                                   + (float)(v71 * *(float *)&dword_140404A6C[73006985]))
                           + (float)(v72 * *(float *)&dword_140404A6C[73006986]));
              v70 = v70 + (float)(*(float *)&dword_140404A6C[73006984] * v77);
              v71 = v71 + (float)(*(float *)&dword_140404A6C[73006985] * v77);
              v72 = v72 + (float)(*(float *)&dword_140404A6C[73006986] * v77);
            }
            v25 = game_tick;
            *(v63 - 5197) = (float)(v70 * v76) + *(v63 - 6);
            *(v63 - 5196) = (float)(v71 * v76) + *(v63 - 5);
            *(v63 - 5195) = (float)(v72 * v76) + *(v63 - 4);
          }
        }
      }
    }
    v63 += 5210;
    --v64;
  }
  while ( v64 );
  v78 = &dword_140404A6C[278846109];
  do
  {
    if ( *(v78 - 216) )
    {
      v79 = *(v78 - 7);
      if ( v79 < v25 && v79 != -1 )
      {
        v80 = *(v78 - 2);
        if ( v80 != -1 )
        {
          v81 = *((float *)v78 - 5);
          v82 = *((float *)v78 - 4);
          v83 = *((float *)v78 - 6) - *((float *)v78 - 1);
          v84 = v81 - *(float *)v78;
          v85 = v82 - *((float *)v78 + 1);
          v86 = (float)(v79 - v80);
          if ( v86 > 0.0 )
          {
            v83 = v83 * (float)(1.0 / v86);
            v84 = v84 * (float)(1.0 / v86);
            v85 = v85 * (float)(1.0 / v86);
          }
          v87 = fminf((float)(v25 - v79), 64.0);
          *((float *)v78 - 193) = (float)(v83 * v87) + *((float *)v78 - 6);
          *((float *)v78 - 192) = (float)(v84 * v87) + v81;
          *((float *)v78 - 191) = (float)(v85 * v87) + v82;
        }
      }
    }
    if ( v78[1544] )
    {
      v88 = v78[1753];
      if ( v88 < v25 && v88 != -1 )
      {
        v89 = v78[1758];
        if ( v89 != -1 )
        {
          v90 = *((float *)v78 + 1755);
          v91 = *((float *)v78 + 1756);
          v92 = *((float *)v78 + 1754) - *((float *)v78 + 1759);
          v93 = v90 - *((float *)v78 + 1760);
          v94 = v91 - *((float *)v78 + 1761);
          v95 = (float)(int)(v88 - v89);
          if ( v95 > 0.0 )
          {
            v92 = v92 * (float)(1.0 / v95);
            v93 = v93 * (float)(1.0 / v95);
            v94 = v94 * (float)(1.0 / v95);
          }
          v96 = fminf((float)(v25 - v88), 64.0);
          *((float *)v78 + 1567) = (float)(v92 * v96) + *((float *)v78 + 1754);
          *((float *)v78 + 1568) = (float)(v93 * v96) + v90;
          *((float *)v78 + 1569) = (float)(v94 * v96) + v91;
        }
      }
    }
    if ( v78[3304] )
    {
      v97 = v78[3513];
      if ( v97 < v25 && v97 != -1 )
      {
        v98 = v78[3518];
        if ( v98 != -1 )
        {
          v99 = *((float *)v78 + 3515);
          v100 = *((float *)v78 + 3516);
          v101 = *((float *)v78 + 3514) - *((float *)v78 + 3519);
          v102 = v99 - *((float *)v78 + 3520);
          v103 = v100 - *((float *)v78 + 3521);
          v104 = (float)(int)(v97 - v98);
          if ( v104 > 0.0 )
          {
            v101 = v101 * (float)(1.0 / v104);
            v102 = v102 * (float)(1.0 / v104);
            v103 = v103 * (float)(1.0 / v104);
          }
          v105 = fminf((float)(v25 - v97), 64.0);
          *((float *)v78 + 3327) = (float)(v101 * v105) + *((float *)v78 + 3514);
          *((float *)v78 + 3328) = (float)(v102 * v105) + v99;
          *((float *)v78 + 3329) = (float)(v103 * v105) + v100;
        }
      }
    }
    if ( v78[5064] )
    {
      v106 = v78[5273];
      if ( v106 < v25 && v106 != -1 )
      {
        v107 = v78[5278];
        if ( v107 != -1 )
        {
          v108 = *((float *)v78 + 5275);
          v109 = *((float *)v78 + 5276);
          v110 = *((float *)v78 + 5274) - *((float *)v78 + 5279);
          v111 = v108 - *((float *)v78 + 5280);
          v112 = v109 - *((float *)v78 + 5281);
          v113 = (float)(int)(v106 - v107);
          if ( v113 > 0.0 )
          {
            v110 = v110 * (float)(1.0 / v113);
            v111 = v111 * (float)(1.0 / v113);
            v112 = v112 * (float)(1.0 / v113);
          }
          v114 = fminf((float)(v25 - v106), 64.0);
          *((float *)v78 + 5087) = (float)(v110 * v114) + *((float *)v78 + 5274);
          *((float *)v78 + 5088) = (float)(v111 * v114) + v108;
          *((float *)v78 + 5089) = (float)(v112 * v114) + v109;
        }
      }
    }
    v78 += 7040;
    --v118;
  }
  while ( v118 );
  return 0; /* no result: rax is residue at 0x1400428EE */
}
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125

//----- (00000001400447C0) ----------------------------------------------------
__int64 sub_1400447C0()
{
  unsigned int *v0;
  __int64 v1;
  unsigned int *v2;
  __int64 result;
  signed int v4;
  int v5;
  int v6;
  __int64 v7;
  __int128 v8;
  __int128 v9;

  v0 = &dword_140404A6C[438881245];
  v1 = 256;
  v2 = &dword_140404A6C[438881247];
  do
  {
    result = sub_140115AE0(v2 - 2, 1);
    if ( *v0 )
    {
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        v5 = dword_140404A6C[289317483];
        result = dword_140404A6C[289317484] + 4;
        v6 = dword_140404A6C[289317485];
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v4 = dword_140404A6C[289317484] + 1;
            v6 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v7 = v4;
          v4 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          *v2 = result;
          dword_140404A6C[289317484] = v4;
        }
        if ( v4 < 0x10000 )
        {
          result = (unsigned int)(v4 + 32);
          if ( (int)result <= v5 )
          {
            if ( v6 > 0 )
            {
              ++v4;
              v6 = 0;
              dword_140404A6C[289317484] = v4;
              dword_140404A6C[289317485] = 0;
            }
            result = v4;
            v4 += 32;
            v8 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + result);
            v9 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + result);
            dword_140404A6C[289317484] = v4;
            *(_OWORD *)(v2 + 1) = v8;
            *(_OWORD *)(v2 + 5) = v9;
          }
          if ( v4 < 0x10000 )
          {
            result = (unsigned int)(v4 + 4);
            if ( (int)result <= v5 )
            {
              if ( v6 > 0 )
              {
                ++v4;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v4;
              }
              result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v4);
              v2[17] = result;
              dword_140404A6C[289317484] = v4 + 4;
            }
          }
        }
      }
    }
    v2 += 20;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  return result;
}

//----- (0000000140044920) ----------------------------------------------------
void sub_140044920()
{
  __int64 v0;
  __int64 v1;
  signed int v2;
  signed int v3;
  char *v4;
  unsigned int v5;
  int v6;
  int v7;
  signed int v8;
  char v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  signed int v15;
  __int64 v16;
  _BYTE *v17;
  int v18;
  __int64 v19;
  int v20;
  _BYTE *v21;
  _DWORD *v22;
  __int64 v23;
  signed int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  signed int v28;
  char v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  unsigned __int64 v33;
  signed int v34;
  signed int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  signed int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  signed int v45;
  unsigned int v46;

  if ( local_player != -1 )
  {
    v0 = (int)local_player;
    v1 = 3597LL * (int)local_player;
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 9;
    LOBYTE(dword_140404A6C[289301095]) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = game_unknown_183ebfcc8;
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856293], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856294], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856295], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856296], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856297], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856298], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856299], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856300], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856301], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856309], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856310], 24);
    v2 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v2 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v2) = dword_140404A6C[v1 + 71856325];
      dword_140404A6C[289301092] += 4;
    }
    sub_140115D90(&dword_140404A6C[v1 + 71856339], 8);
    sub_140115D90(&dword_140404A6C[v1 + 71856330], 4);
    sub_140115D90(&dword_140404A6C[308307069], 16);
    v3 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v3 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v3) = dword_140404A6C[456202728];
      v3 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v3;
      if ( v3 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v3;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v3;
        }
        v4 = (char *)&dword_140404A6C[289301094] + v3;
        v5 = dword_140404A6C[284024504];
        *(_QWORD *)v4 = *(_QWORD *)&dword_140404A6C[284024502];
        *((_DWORD *)v4 + 2) = v5;
        v3 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v6 = dword_140404A6C[v1 + 71856363];
    v7 = dword_140404A6C[v1 + 71856362] - v6;
    if ( (int)dword_140404A6C[v1 + 71856362] < v6 )
      v7 += 64;
    if ( v7 > 15 )
      v7 = 15;
    v8 = 4;
    if ( v3 < 0x10000 )
    {
      v9 = dword_140404A6C[289301093];
      v10 = v7 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v3) &= ~(((1 << v8) - 1) << v9);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        if ( v8 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v8 == v11 )
        {
          ++dword_140404A6C[289301092];
          goto LABEL_25;
        }
        v8 -= v11;
        v3 = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        ++dword_140404A6C[289301092];
        v9 = 0;
        if ( v8 <= 0 )
          goto LABEL_25;
      }
      dword_140404A6C[289301093] += v8;
    }
LABEL_25:
    sub_140115D90(&dword_140404A6C[v1 + 71856363], 8);
    if ( v7 > 0 )
    {
      v12 = (unsigned int)v7;
      while ( 1 )
      {
        v13 = v1 * 4 + 84LL * v6;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856367] + v13), 4);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[71856367] + v13);
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 6);
            v18 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v13);
            if ( v18 > 0 )
            {
              v19 = (unsigned int)v18;
              v20 = dword_140404A6C[289301092];
              v21 = (char *)&dword_140404A6C[71856372] + v13;
              do
              {
                if ( v20 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v20;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v20;
                  }
                  *((_BYTE *)&dword_140404A6C[289301094] + v20) = *v21;
                  v20 = ++dword_140404A6C[289301092];
                }
                ++v21;
                --v19;
              }
              while ( v19 );
            }
            v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 4);
            v15 = dword_140404A6C[289301092];
LABEL_48:
            if ( v14 == 3 )
            {
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
              sub_140115D90(v22, 16);
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856370] + v13), 16);
              v15 = dword_140404A6C[289301092];
            }
            else if ( (unsigned int)(v14 - 4) <= 1 && v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856368]
                                                                                             + v13);
              v15 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v15;
              if ( v15 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v15;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v15;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                               + v13);
                v15 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
            goto LABEL_61;
          }
          v15 = dword_140404A6C[289301092];
        }
        else
        {
          sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 8);
          v15 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v15 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                           + v13);
            v15 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v16 = 16;
          v17 = (char *)&dword_140404A6C[71856372] + v13;
          do
          {
            if ( v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *((_BYTE *)&dword_140404A6C[289301094] + v15) = *v17;
              v15 = ++dword_140404A6C[289301092];
            }
            ++v17;
            --v16;
          }
          while ( v16 );
        }
        v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
        if ( v14 != 2 )
          goto LABEL_48;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 16);
        v15 = dword_140404A6C[289301092];
LABEL_61:
        v6 = ((_BYTE)v6 + 1) & 0x3F;
        if ( !--v12 )
          goto LABEL_64;
      }
    }
    v15 = dword_140404A6C[289301092];
LABEL_64:
    v23 = 32901 * v0;
    v24 = 11;
    v25 = dword_140404A6C[32901 * v0 + 299853696] & 0x3F;
    dword_140404A6C[32901 * v0 + 299853696] = v25;
    v26 = ((_BYTE)v25 - 6) & 0x3F;
    if ( (_DWORD)v26 != v25 )
    {
      v27 = 32901 * v0;
      do
      {
        v28 = 6;
        if ( v15 < 0x10000 )
        {
          v29 = dword_140404A6C[289301093];
          v30 = v26;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v28) - 1) << v29);
            *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
            v31 = 8 - dword_140404A6C[289301093];
            if ( v28 < 8 - dword_140404A6C[289301093] )
              break;
            dword_140404A6C[289301093] = 0;
            if ( v28 == v31 )
            {
              ++dword_140404A6C[289301092];
              goto LABEL_74;
            }
            v28 -= v31;
            v15 = dword_140404A6C[289301092] + 1;
            v30 >>= v31;
            ++dword_140404A6C[289301092];
            v29 = 0;
            if ( v28 <= 0 )
              goto LABEL_74;
          }
          dword_140404A6C[289301093] += v28;
        }
LABEL_74:
        v32 = v26 + v27;
        sub_140115D90(&dword_140404A6C[v32 + 299853762], 11);
        sub_140115D90(&dword_140404A6C[v32 + 299853698], 2);
        v15 = dword_140404A6C[289301092];
        v33 = (int)dword_140404A6C[v32 + 299853762];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v15 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = 0;
            ++dword_140404A6C[289301092];
          }
          crt_memcpy(
            (__m128i *)((char *)&dword_140404A6C[289301094] + v15),
            (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v26 + 299853826 + v23],
            v33);
          v15 = v33 + dword_140404A6C[289301092];
          dword_140404A6C[289301092] += v33;
        }
        v26 = ((_BYTE)v26 + 1) & 0x3F;
      }
      while ( (_DWORD)v26 != v25 );
    }
    sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 * 4 + 1203628128), 1);
    v34 = dword_140404A6C[289301092];
    v35 = 8;
    LOBYTE(v36) = dword_140404A6C[289301093];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v37 = LOBYTE(dword_140404A6C[284021982]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v35) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v37 << SLOBYTE(dword_140404A6C[289301093]);
        v38 = 8 - dword_140404A6C[289301093];
        v34 = dword_140404A6C[289301092];
        if ( v35 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v35 == v38 )
        {
          v34 = ++dword_140404A6C[289301092];
          v36 = 0;
          goto LABEL_87;
        }
        v34 = dword_140404A6C[289301092] + 1;
        v37 >>= v38;
        LOBYTE(v36) = 0;
        ++dword_140404A6C[289301092];
        v35 -= v38;
        dword_140404A6C[289301093] = 0;
        if ( v35 <= 0 )
          goto LABEL_88;
      }
      v36 = v35 + dword_140404A6C[289301093];
LABEL_87:
      dword_140404A6C[289301093] = v36;
LABEL_88:
      if ( v34 < 0x10000 )
      {
        v39 = dword_140404A6C[421835947] & 0x7FF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v24) - 1) << v36);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v39 << SLOBYTE(dword_140404A6C[289301093]);
          v40 = 8 - dword_140404A6C[289301093];
          v34 = dword_140404A6C[289301092];
          if ( v24 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v24 == v40 )
          {
            v34 = ++dword_140404A6C[289301092];
            v36 = 0;
            goto LABEL_96;
          }
          v34 = dword_140404A6C[289301092] + 1;
          v39 >>= v40;
          LOBYTE(v36) = 0;
          ++dword_140404A6C[289301092];
          v24 -= v40;
          dword_140404A6C[289301093] = 0;
          if ( v24 <= 0 )
            goto LABEL_97;
        }
        v36 = v24 + dword_140404A6C[289301093];
LABEL_96:
        dword_140404A6C[289301093] = v36;
      }
    }
LABEL_97:
    v41 = 8;
    if ( v34 < 0x10000 )
    {
      v42 = LOBYTE(dword_140404A6C[421846188]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v41) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v42 << SLOBYTE(dword_140404A6C[289301093]);
        v43 = 8 - dword_140404A6C[289301093];
        if ( v41 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v41 == v43 )
        {
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          goto LABEL_105;
        }
        LOBYTE(v36) = 0;
        v34 = dword_140404A6C[289301092] + 1;
        v42 >>= v43;
        v41 -= v43;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v41 <= 0 )
          goto LABEL_105;
      }
      dword_140404A6C[289301093] += v41;
    }
LABEL_105:
    v44 = sub_140198F9B();
    v45 = dword_140404A6C[289301092];
    dword_140404A6C[LOBYTE(dword_140404A6C[430859442]) + 430859443] = v44;
    v46 = dword_140404A6C[430859442];
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = dword_140404A6C[430859442];
      v45 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] += 4;
    }
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = *(_DWORD *)(4LL * (unsigned __int8)v46
                                                                               + 1727651128
                                                                               + ((intptr_t)dword_140404A6C - 0x404a6cLL));
      dword_140404A6C[289301092] += 4;
    }
    dword_140404A6C[430859442] = v46 + 1;
    sub_140130350(dword_140404A6C[456202714], dword_140404A6C[456202715], *(__int64 *)&dword_140404A6C[456202717]);
  }
}

//----- (00000001400453F0) ----------------------------------------------------
__int64 sub_1400453F0()
{
  __int64 result;

  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    result = ((__int64 (*)(void))FreeLibrary)();
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (0000000140045420) ----------------------------------------------------
__int64            sub_140045420(int *a1, _DWORD *a2)
{
  float v2;
  int v3;
  int *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD *v9;
  float v10;
  int v11;
  int v12;
  float v13;
  float v14;
  float v15;
  int v16;
  int *v17;
  int v18;
  __int64 v19;
  int v20;
  int *v21;
  int *v22;
  __int64 v23;
  int *v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  float v29;
  int v30;
  int v31;
  int v32;
  float v33;
  float v34;
  float v35;
  float v36;
  int v37;
  __int64 v38;
  int v39;
  int *v40;
  __int64 v41;
  int v42;
  float v43;
  int *v44;
  int v45;
  float *v46;
  float *v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  bool v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int *v63;
  int *v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int *v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  int v76;
  int *v77;
  __int64 v78;
  int v79;
  _DWORD *v80;
  BOOL v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int *v86;
  float v87;
  float v88;
  float v89;
  float v90;
  int v91;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140045420[304];
#define v93 (*(_DWORD (*)[14])(void *)(sr_frame_140045420 + 0)) /* [rsp+8h] */
#define v94 (*(float (*))(void *)(sr_frame_140045420 + 80)) /* [rsp+58h] */
#define v95 (*(int (*))(void *)(sr_frame_140045420 + 84)) /* [rsp+5Ch] */
#define v96 (*(__int64 (*))(void *)(sr_frame_140045420 + 88)) /* [rsp+60h] */
#define v97 (*(float (*))(void *)(sr_frame_140045420 + 96)) /* [rsp+68h] */
#define v98 (*(float (*))(void *)(sr_frame_140045420 + 104)) /* [rsp+70h] */
#define v99 (*(float (*))(void *)(sr_frame_140045420 + 108)) /* [rsp+74h] */
#define v100 (*(__int64 (*))(void *)(sr_frame_140045420 + 112)) /* [rsp+78h] */
#define v101 (*(float (*))(void *)(sr_frame_140045420 + 120)) /* [rsp+80h] */
#define v102 (*(float (*))(void *)(sr_frame_140045420 + 128)) /* [rsp+88h] */
#define v103 (*(float (*))(void *)(sr_frame_140045420 + 136)) /* [rsp+90h] */
#define v104 (*(float (*))(void *)(sr_frame_140045420 + 140)) /* [rsp+94h] */
#define v105 (*(float (*))(void *)(sr_frame_140045420 + 144)) /* [rsp+98h] */
#define v106 (*(float (*))(void *)(sr_frame_140045420 + 152)) /* [rsp+A0h] */
#define v107 (*(float (*))(void *)(sr_frame_140045420 + 156)) /* [rsp+A4h] */
#define v108 (*(float (*))(void *)(sr_frame_140045420 + 160)) /* [rsp+A8h] */
#define v109 (*(int * (*))(void *)(sr_frame_140045420 + 168)) /* [rsp+B0h] */
#define v110 (*(int (*))(void *)(sr_frame_140045420 + 180)) /* [rsp+BCh] */
#define v111 (*(int (*))(void *)(sr_frame_140045420 + 184)) /* [rsp+C0h] */
#define i (*(int * (*))(void *)(sr_frame_140045420 + 192)) /* [rsp+C8h] */
#define v113 (*(float (*)[3])(void *)(sr_frame_140045420 + 200)) /* [rsp+D0h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140045420 + 212)) /* [rsp+DCh] */
#define v115 (*(float (*))(void *)(sr_frame_140045420 + 220)) /* [rsp+E4h] */
#define v116 (*(float (*))(void *)(sr_frame_140045420 + 240)) /* [rsp+F8h] */
#define v117 (*(float (*))(void *)(sr_frame_140045420 + 244)) /* [rsp+FCh] */
#define v118 (*(float (*))(void *)(sr_frame_140045420 + 248)) /* [rsp+100h] */
#define v119 (*(float (*))(void *)(sr_frame_140045420 + 252)) /* [rsp+104h] */
#define v120 (*(float (*))(void *)(sr_frame_140045420 + 256)) /* [rsp+108h] */
#define v121 (*(float (*))(void *)(sr_frame_140045420 + 260)) /* [rsp+10Ch] */
#define v122 (*(float (*)[3])(void *)(sr_frame_140045420 + 264)) /* [rsp+110h] */
#define v123 (*(float (*)[3])(void *)(sr_frame_140045420 + 276)) /* [rsp+11Ch] */
#define v124 (*(__int64 (*))(void *)(sr_frame_140045420 + 288)) /* [rsp+128h] */

  v2 = v94;
  v3 = 0;
  v5 = a1;
  for ( i = a1; v3 < *v5; ++v3 )
  {
    v6 = 0;
    v7 = 23LL * v3;
    v8 = 0;
    v9 = v5 + 2436;
    v10 = *(float *)&v5[v7 + 21];
    v11 = v5[v7 + 22];
    v12 = v5[v7 + 23];
    v13 = *(float *)&v5[v7 + 18];
    v14 = *(float *)&v5[v7 + 19];
    v15 = *(float *)&v5[v7 + 20];
    v99 = v10;
    v116 = v10;
    v95 = v11;
    v117 = *(float *)&v11;
    v118 = *(float *)&v12;
    v119 = v13;
    v120 = v14;
    v121 = v15;
    while ( (int)*(v9 - 1) <= 0 || *v9 != v3 || v9[1] || v9[2] || v9[3] )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v8;
      v9 += 18;
      if ( v8 >= 64 )
      {
        LODWORD(v6) = -1;
        goto LABEL_10;
      }
    }
    v10 = *(float *)&v5[18 * v6 + 2440];
    v11 = v5[18 * v6 + 2441];
    v12 = v5[18 * v6 + 2442];
    v99 = v10;
    v116 = v10;
    v95 = v11;
    v117 = *(float *)&v11;
    v118 = *(float *)&v12;
LABEL_10:
    if ( sub_1400DA580((__int64)v113, (__int64)a2, &v116, &v119) )
    {
      v96 = v114;
      v97 = v115;
      v2 = (float)((float)((float)(v113[1] - v14) * *((float *)&v114 + 1))
                 + (float)((float)(v113[0] - v13) * *(float *)&v114))
         + (float)((float)(v113[2] - v15) * v115);
      v94 = v2;
      if ( v2 < 0.0625 )
      {
        v94 = 0.0625;
        v2 = 0.0625;
      }
      v16 = 0;
      v100 = 0;
      v101 = 0.0;
      if ( v5[v7 + 1] > 0 )
      {
        v17 = &v5[v7 + 2];
        do
        {
          sub_140005160(*v17, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          ++v16;
          v17 += 4;
        }
        while ( v16 < v5[v7 + 1] );
        v10 = v99;
        v11 = v95;
      }
      if ( (_DWORD)v6 == -1 )
      {
        v18 = sub_140048090((__int64)v5);
        if ( v18 != -1 )
        {
          v19 = 9LL * v18;
          v5[2 * v19 + 2435] = 2;
          v5[2 * v19 + 2436] = v3;
          *(_QWORD *)&v5[2 * v19 + 2437] = 0;
          v5[2 * v19 + 2439] = 0;
          *(float *)&v5[2 * v19 + 2440] = v10;
          v5[2 * v19 + 2441] = v11;
          v5[2 * v19 + 2442] = v12;
        }
      }
      else
      {
        v5[18 * (int)v6 + 2435] = 2;
      }
    }
  }
  v20 = v5[1473];
  v102 = 0.0;
  if ( v20 > 0 )
  {
    v21 = v5 + 1475;
    v22 = v5 + 2436;
    v109 = v5 + 1475;
    do
    {
      v23 = *(v21 - 1);
      v24 = v22;
      v25 = *v21;
      v26 = v5[23 * v23 + 21];
      v27 = v5[23 * v23 + 22];
      v28 = v5[23 * v23 + 23];
      v116 = *(float *)&v26;
      v117 = *(float *)&v27;
      v118 = *(float *)&v28;
      v110 = v23;
      v111 = v25;
      v29 = *(float *)&v5[23 * v25 + 19];
      v30 = v5[23 * v25 + 21];
      v31 = v5[23 * v25 + 22];
      v32 = v5[23 * v25 + 23];
      LODWORD(v122[0]) = v5[23 * v25 + 18];
      v33 = *(float *)&v5[23 * v25 + 20];
      v122[1] = v29;
      v34 = *(float *)&v5[23 * v23 + 18];
      v122[2] = v33;
      v35 = *(float *)&v5[23 * v23 + 19];
      v123[0] = v34;
      v36 = *(float *)&v5[23 * v23 + 20];
      *(float *)&v37 = 0.0;
      *(float *)&v95 = 0.0;
      v38 = 0;
      v119 = *(float *)&v30;
      v120 = *(float *)&v31;
      v121 = *(float *)&v32;
      v123[1] = v35;
      v123[2] = v36;
      while ( *(v24 - 1) <= 0 || *v24 != (_DWORD)v23 || v24[1] || v24[2] || v24[3] )
      {
        ++v37;
        ++v38;
        v24 += 18;
        v95 = v37;
        if ( v38 >= 64 )
        {
          *(float *)&v37 = NAN;
          *(float *)&v95 = NAN;
          break;
        }
      }
      v39 = 0;
      v40 = v22;
      v41 = 0;
      while ( *(v40 - 1) <= 0 || *v40 != (_DWORD)v25 || v40[1] || v40[2] || v40[3] )
      {
        ++v39;
        ++v41;
        v40 += 18;
        if ( v41 >= 64 )
        {
          v39 = -1;
          break;
        }
      }
      if ( *(float *)&v37 != NAN )
      {
        v26 = v5[18 * v37 + 2440];
        v27 = v5[18 * v37 + 2441];
        v28 = v5[18 * v37 + 2442];
        v116 = *(float *)&v26;
        v117 = *(float *)&v27;
        v118 = *(float *)&v28;
      }
      if ( v39 != -1 )
      {
        v30 = v5[18 * v39 + 2440];
        v31 = v5[18 * v39 + 2441];
        v32 = v5[18 * v39 + 2442];
        v119 = *(float *)&v30;
        v120 = *(float *)&v31;
        v121 = *(float *)&v32;
      }
      v42 = 0;
      v43 = 65536.0;
      v99 = 65536.0;
      if ( (int)a2[16386] <= 0 )
        goto LABEL_71;
      v44 = a2 + 16387;
      v45 = 0;
      do
      {
        if ( sub_140184710(&v103, &v116, &v119, v122, v123, (float *)&a2[4 * *v44 + 2], (float *)&a2[4 * v44[1] + 2]) )
        {
          v46 = (float *)&a2[4 * v44[1] + 2];
          v47 = (float *)&a2[4 * *v44 + 2];
          if ( sub_1400D6890(&v103, &v106, &v98, &v116, &v119, v47, v46, 64.0) && v43 > v98 )
          {
            v45 = 1;
            v48 = v103 - v106;
            v49 = v104 - v107;
            v50 = v105 - v108;
            v2 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
            v94 = v2;
            if ( v2 == 0.0 )
            {
              v96 = 0;
              v97 = 0.0;
            }
            else
            {
              *(float *)&v96 = (float)(1.0 / v2) * v48;
              *((float *)&v96 + 1) = (float)(1.0 / v2) * v49;
              v97 = (float)(1.0 / v2) * v50;
            }
            if ( sub_1400D6890(&v103, &v106, &v98, v122, v123, v47, v46, 64.0) )
            {
              v51 = v106 - v103;
              v52 = v107 - v104;
              v53 = v108 - v105;
              *(float *)&v100 = v106 - v103;
              *((float *)&v100 + 1) = v107 - v104;
              v101 = v108 - v105;
              v2 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
              v94 = v2;
              if ( v2 == 0.0 )
              {
                v96 = 0;
                v97 = 0.0;
              }
              else
              {
                *(float *)&v96 = (float)(1.0 / v2) * v51;
                *((float *)&v96 + 1) = (float)(1.0 / v2) * v52;
                v97 = (float)(1.0 / v2) * v53;
              }
            }
            v43 = v98;
          }
        }
        ++v42;
        v44 += 2;
      }
      while ( v42 < a2[16386] );
      v54 = v45 == 0;
      v99 = v43;
      v5 = i;
      if ( !v54 )
      {
        if ( v2 < 0.0625 )
        {
          v94 = 0.0625;
          v2 = 0.0625;
        }
        v93[12] = 1048576000;
        v93[10] = 1031798784;
        v55 = v109[2];
        v100 = 0;
        v101 = 0.0;
        sub_140005160(v55, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
        if ( *(float *)&v95 == NAN )
        {
          v56 = sub_140048090((__int64)v5);
          if ( v56 != -1 )
          {
            v57 = 9LL * v56;
            v58 = v110;
            v5[2 * v57 + 2435] = 2;
            v5[2 * v57 + 2436] = v58;
            *(_QWORD *)&v5[2 * v57 + 2437] = 0;
            v5[2 * v57 + 2439] = 0;
            v5[2 * v57 + 2440] = v26;
            v5[2 * v57 + 2441] = v27;
            v5[2 * v57 + 2442] = v28;
          }
        }
        else
        {
          v5[18 * v95 + 2435] = 2;
        }
        if ( v39 == -1 )
        {
          v59 = sub_140048090((__int64)v5);
          v22 = v5 + 2436;
          if ( v59 != -1 )
          {
            v60 = 9LL * v59;
            v61 = v111;
            v5[2 * v60 + 2435] = 2;
            v5[2 * v60 + 2436] = v61;
            *(_QWORD *)&v5[2 * v60 + 2437] = 0;
            v5[2 * v60 + 2439] = 0;
            v5[2 * v60 + 2440] = v30;
            v5[2 * v60 + 2441] = v31;
            v5[2 * v60 + 2442] = v32;
          }
          goto LABEL_71;
        }
        v5[18 * v39 + 2435] = 2;
      }
      v22 = v5 + 2436;
LABEL_71:
      v20 = v5[1473];
      v21 = v109 + 5;
      ++LODWORD(v102);
      v109 += 5;
    }
    while ( SLODWORD(v102) < v20 );
  }
  v62 = 0;
  if ( v20 > 0 )
  {
    v63 = v5 + 2436;
    v64 = v5 + 1477;
    do
    {
      v65 = *(v64 - 3);
      v66 = 0;
      v67 = *(v64 - 2);
      v68 = v63;
      v69 = *(float *)&v5[23 * v65 + 18];
      v70 = *(float *)&v5[23 * v65 + 19];
      v71 = *(float *)&v5[23 * v65 + 20];
      v102 = v69;
      v116 = v69;
      *(float *)&v95 = v70;
      v117 = v70;
      v98 = v71;
      v118 = v71;
      v72 = *(float *)&v5[23 * v67 + 18];
      v73 = *(float *)&v5[23 * v67 + 19];
      v74 = *(float *)&v5[23 * v67 + 20];
      v75 = 0;
      v119 = v72;
      v120 = v73;
      v121 = v74;
      while ( *(v68 - 1) <= 0 || *v68 != (_DWORD)v65 || v68[1] || v68[2] || v68[3] )
      {
        ++v66;
        ++v75;
        v68 += 18;
        if ( v75 >= 64 )
        {
          v66 = -1;
          break;
        }
      }
      v76 = 0;
      v77 = v63;
      v78 = 0;
      while ( *(v77 - 1) <= 0 || *v77 != (_DWORD)v67 || v77[1] || v77[2] || v77[3] )
      {
        ++v76;
        ++v78;
        v77 += 18;
        if ( v78 >= 64 )
        {
          v76 = -1;
          break;
        }
      }
      if ( v66 != -1 )
      {
        v69 = *(float *)&v5[18 * v66 + 2440];
        v70 = *(float *)&v5[18 * v66 + 2441];
        v71 = *(float *)&v5[18 * v66 + 2442];
        v102 = v69;
        v116 = v69;
        *(float *)&v95 = v70;
        v117 = v70;
        v98 = v71;
        v118 = v71;
      }
      if ( v76 != -1 )
      {
        v72 = *(float *)&v5[18 * v76 + 2440];
        v73 = *(float *)&v5[18 * v76 + 2441];
        v74 = *(float *)&v5[18 * v76 + 2442];
        v119 = v72;
        v120 = v73;
        v121 = v74;
      }
      v79 = 0;
      if ( (int)a2[8193] > 0 )
      {
        v80 = a2 + 8194;
        do
        {
          v81 = 0;
          if ( *v80 == 3 )
          {
            v82 = sub_140035B70(
                    &v103,
                    (float *)&v96,
                    &v94,
                    &v116,
                    &v119,
                    0.0625,
                    (float *)&a2[4 * v80[1] + 2],
                    (float *)&a2[4 * v80[2] + 2],
                    (float *)&a2[4 * v80[3] + 2]);
            v2 = v94;
            v81 = v82 != 0;
          }
          if ( *v80 == 4
            && (v83 = sub_1400346F0(
                        &v103,
                        (float *)&v96,
                        &v94,
                        &v116,
                        &v119,
                        0.0625,
                        (float *)&a2[4 * v80[1] + 2],
                        (float *)&a2[4 * v80[2] + 2],
                        (float *)&a2[4 * v80[3] + 2],
                        (float *)&a2[4 * v80[4] + 2]),
                v2 = v94,
                v83)
            || v81 )
          {
            v84 = *v64;
            v100 = 0;
            v101 = 0.0;
            v94 = 0.0625 - v2;
            v2 = 0.0625 - v2;
            sub_140005160(v84, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          }
          ++v79;
          v80 += 8;
        }
        while ( v79 < a2[8193] );
        v69 = v102;
        v70 = *(float *)&v95;
        v71 = v98;
        v5 = i;
      }
      v85 = 0;
      if ( (int)a2[16386] > 0 )
      {
        v86 = a2 + 16387;
        do
        {
          if ( sub_1400D6890(
                 &v103,
                 &v106,
                 &v99,
                 &v116,
                 &v119,
                 (float *)&a2[4 * *v86 + 2],
                 (float *)&a2[4 * v86[1] + 2],
                 0.0625) )
          {
            v87 = v103 - v106;
            v88 = v104 - v107;
            v89 = v105 - v108;
            v90 = fsqrt((float)((float)(v88 * v88) + (float)(v87 * v87)) + (float)(v89 * v89));
            if ( v90 == 0.0 )
            {
              v96 = 0;
              v97 = 0.0;
            }
            else
            {
              *(float *)&v96 = (float)(1.0 / v90) * v87;
              *((float *)&v96 + 1) = (float)(1.0 / v90) * v88;
              v97 = (float)(1.0 / v90) * v89;
            }
            v91 = *v64;
            v2 = 0.0625 - v99;
            v94 = 0.0625 - v99;
            *(float *)&v100 = v103 - (float)((float)(v72 + v69) * 0.5);
            *((float *)&v100 + 1) = v104 - (float)((float)(v73 + v70) * 0.5);
            v101 = v105 - (float)((float)(v74 + v71) * 0.5);
            sub_140005160(
              v91,
              (unsigned int *)&v100,
              (unsigned int *)&v96,
              0.0625 - v99,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
          }
          ++v85;
          v86 += 2;
        }
        while ( v85 < a2[16386] );
      }
      ++v62;
      v63 = v5 + 2436;
      v64 += 5;
    }
    while ( v62 < v5[1473] );
  }
  return 0; /* the function has no caller */
}
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef i
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124

//----- (0000000140048090) ----------------------------------------------------
__int64            sub_140048090(__int64 a1)
{
  unsigned int v1;
  _DWORD *v2;
  __int64 v3;

  v1 = 0;
  v2 = (_DWORD *)(a1 + 9740);
  v3 = 0;
  while ( *v2 )
  {
    ++v1;
    ++v3;
    v2 += 18;
    if ( v3 >= 64 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}

//----- (0000000140048DA0) ----------------------------------------------------
__int64            sub_140048DA0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        char a9)
{
  extern int collision_mesh_contact(int body_a, int body_b, const void *a, const void *b, const float *position_a,
                                    const float *rotation_a, const float *position_b, const float *rotation_b,
                                    unsigned int flags);
  /* src/engine/collision_mesh.c; only bit 0 of the flag is read. */
  return collision_mesh_contact(a1, a2, (const void *)(uintptr_t)a3, (const void *)(uintptr_t)a4, a5, a6, a7, a8,
                                (unsigned char)a9);
}

//----- (000000014004A130) ----------------------------------------------------
__int64            sub_14004A130(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_mesh_point_sweep(void *hit, const void *mesh, const float *position, const float *rotation,
                                        const float *from, const float *to);
  /* src/engine/collision_mesh.c. Hex-Rays had dropped the last two arguments (the sweep's ends, read from the stack)
     and passed two unset locals instead; no code of the original calls this routine. */
  return collision_mesh_point_sweep(a1, (const void *)a2, a3, a4, a5, a6);
}

//----- (000000014004A1D0) ----------------------------------------------------
_BOOL8            sub_14004A1D0(float *a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6)
{
  extern int collision_mesh_point_faces(void *hit, const void *mesh, const float (*points)[3], const float (*normals)[3],
                                        const float *from, const float *to);
  /* src/engine/collision_mesh.c */
  return collision_mesh_point_faces(a1, (const void *)a2, (const float (*)[3])a3, (const float (*)[3])a4, a5, a6);
}

//----- (000000014004A480) ----------------------------------------------------
__int64            sub_14004A480(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  extern void collision_mesh_transform(float (*points)[3], float (*normals)[3], const void *mesh, const float *position,
                                       const float *r);
  /* src/engine/collision_mesh.c; the original returns a leftover pointer; its callers (0x14004A130 and
     0x140048DA0, now in src/engine) do not read it. */
  collision_mesh_transform((float (*)[3])a1, (float (*)[3])a2, (const void *)a3, a4, a5);
  return 0;
}

//----- (000000014004BFC0) ----------------------------------------------------
__int64            sub_14004BFC0(__int16 a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6;
  __int64 v8;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  int v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float *v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v53;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004BFC0[12832];
#define v54 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 0)) /* [rsp+20h] */
#define v55 (*(float (*))(void *)(sr_frame_14004BFC0 + 8)) /* [rsp+28h] */
#define v56 (*(float (*))(void *)(sr_frame_14004BFC0 + 16)) /* [rsp+30h] */
#define v57 (*(float (*))(void *)(sr_frame_14004BFC0 + 20)) /* [rsp+34h] */
#define v58 (*(float (*))(void *)(sr_frame_14004BFC0 + 24)) /* [rsp+38h] */
#define v59 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 32)) /* [rsp+40h] */
#define v60 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 44)) /* [rsp+4Ch] */
#define v61 (*(float (*))(void *)(sr_frame_14004BFC0 + 56)) /* [rsp+58h] */
#define v62 (*(float (*))(void *)(sr_frame_14004BFC0 + 60)) /* [rsp+5Ch] */
#define v63 (*(float (*))(void *)(sr_frame_14004BFC0 + 6592)) /* [rsp+19E0h] */
#define v64 (*(float (*)[4])(void *)(sr_frame_14004BFC0 + 6600)) /* [rsp+19E8h] */
#define v65 (*(unsigned int (*)[4])(void *)(sr_frame_14004BFC0 + 6616)) /* [rsp+19F8h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 6632)) /* [rsp+1A08h] */
#define v67 (*(float * (*))(void *)(sr_frame_14004BFC0 + 6640)) /* [rsp+1A10h] */
#define v68 (*(int (*))(void *)(sr_frame_14004BFC0 + 6656)) /* [rsp+1A20h] */
#define v69 (*(char (*))(void *)(sr_frame_14004BFC0 + 6660)) /* [rsp+1A24h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 12816)) /* [rsp+3230h] */

  v6 = a4;
  v67 = a4;
  v8 = a2;
  v66 = a2;
  v10 = 0;
  v68 = 0;
  sub_14000C180(&v68, 0, a5, a6);
  if ( *(int *)(v8 + 64) > 0 )
  {
    v11 = v68;
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 72);
      v15 = v6[3];
      v16 = *v6;
      v17 = v6[6];
      v18 = v6[4];
      v19 = v6[1];
      v20 = v6[7];
      v21 = 3 * *(_DWORD *)(v14 + v12);
      v57 = v6[5];
      v56 = v6[2];
      v22 = *(float *)(v13 + 4LL * v21);
      v23 = *(float *)(v13 + 4LL * v21 + 4);
      v24 = *(float *)(v13 + 4LL * v21 + 8);
      v25 = 3 * *(_DWORD *)(v14 + v12 + 4);
      v26 = (float)((float)(v17 * v24) + (float)(v16 * v22)) + (float)((float)(v15 * v23) + *a3);
      v27 = (float)(v20 * v24) + (float)(v19 * v22);
      v28 = v6[2] * v22;
      v29 = (float)(v18 * v23) + a3[1];
      v30 = *(float *)(v13 + 4 * v25 + 4);
      v59[0] = v26;
      v31 = v6[8] * v24;
      v32 = *(float *)(v13 + 4 * v25);
      v33 = v27 + v29;
      v34 = v6[5] * v23;
      v35 = *(float *)(v13 + 4 * v25 + 8);
      v59[1] = v33;
      v36 = (float)(v31 + v28) + (float)(v34 + a3[2]);
      v37 = (float)(v30 * v15) + *a3;
      v59[2] = v36;
      v38 = v35;
      v39 = (float)((float)(v35 * v17) + (float)(v32 * v16)) + v37;
      v40 = v30;
      v41 = (float)(v35 * v6[8]) + (float)(v32 * v56);
      v42 = (float)(v30 * v57) + a3[2];
      v60[0] = v39;
      v43 = (float)((float)(v38 * v20) + (float)(v32 * v19)) + (float)((float)(v40 * v18) + a3[1]);
      v60[2] = v41 + v42;
      v60[1] = v43;
      if ( v11 > 0 )
      {
        v44 = (float *)&v69;
        v45 = (unsigned int)v11;
        do
        {
          if ( (unsigned int)sub_14008CEB0(v64, &v61, &v58, v59, v60, v44, v44 + 3)
            && sub_140187410(v44, v44 + 3, a3, v59, v60) )
          {
            v46 = v61 - v64[0];
            v47 = v62 - v64[1];
            v48 = v63 - v64[2];
            v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
            if ( v49 == 0.0 )
            {
              v54 = 0;
              v55 = 0.0;
            }
            else
            {
              *(float *)&v54 = (float)(1.0 / v49) * v46;
              *((float *)&v54 + 1) = (float)(1.0 / v49) * v47;
              v55 = (float)(1.0 / v49) * v48;
            }
            *(float *)&v50 = v62 - a3[1];
            *(float *)&v51 = v63 - a3[2];
            *(float *)v65 = v61 - *a3;
            v65[1] = v50;
            v65[2] = v51;
            sub_140005160(a1, v65, (unsigned int *)&v54, v58, 0x3F19999Au, 0.001953125, 0x3B800000u);
          }
          v44 += 6;
          --v45;
        }
        while ( v45 );
        v8 = v66;
        v11 = v68;
        v6 = v67;
      }
      ++v10;
      v12 += 12;
    }
    while ( v10 < *(_DWORD *)(v8 + 64) );
  }
  return 0; /* the function has no caller */
}
#undef v54
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
#undef v68
#undef v69
#undef v70

//----- (000000014004C4C0) ----------------------------------------------------
__int64            sub_14004C4C0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2;
  unsigned __int8 v3;

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}

//----- (000000014004C4E0) ----------------------------------------------------
__int64            sub_14004C4E0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char *v7;
  bool v8;
  char v9;
  __int64 v10;
  char *v11;
  char v12;
  char *v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char *v18;
  char v19;
  __int64 v20;
  char *v21;
  char v22;
  char *v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  char *v28;
  char v29;
  __int64 v30;
  char *v31;
  char v32;
  char *v33;
  __int64 v34;
  char v35;
  __int64 v36;
  char *v37;
  __int64 v38;
  char v39;
  __int64 v40;
  char *v41;
  __int64 v42;
  char v43;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C4E0[592];
#define v45 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 0)) /* [rsp+0h] */
#define v46 (*(int (*))(void *)(sr_frame_14004C4E0 + 32)) /* [rsp+20h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 40)) /* [rsp+28h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 48)) /* [rsp+30h] */
#define v49 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 56)) /* [rsp+38h] */
#define v50 (*(_BYTE (*)[512])(void *)(sr_frame_14004C4E0 + 64)) /* [rsp+40h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 576)) /* [rsp+240h] */

  v4 = a1;
  v49 = a2;
  v47 = a3;
  v48 = a4;
  LOBYTE(dword_140404A6C[71807077]) = 0;
  if ( a2 )
  {
    v5 = 60LL * a1;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[v5 + 71737686], 1, (const char *const *)&v49, nullptr);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v7 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v7 == 0;
      while ( !v8 );
      v6 = 0;
      do
      {
        v9 = *((_BYTE *)&dword_140404A6C[71807077] + v6);
        v7[v6++] = v9;
      }
      while ( v9 );
    }
    unk_140404200(dword_140404A6C[v5 + 71737686], v6);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v11 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v11 == 0;
      while ( !v8 );
      v10 = 0;
      do
      {
        v12 = *((_BYTE *)&dword_140404A6C[71807077] + v10);
        v11[v10++] = v12;
      }
      while ( v12 );
    }
    unk_1404041F0(dword_140404A6C[v5 + 71737685], dword_140404A6C[v5 + 71737686], v10);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v13 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v13 == 0;
      while ( !v8 );
      v14 = 0;
      do
      {
        v15 = *((_BYTE *)&dword_140404A6C[71807077] + v14);
        v13[v14++] = v15;
      }
      while ( v15 );
    }
  }
  else if ( !a3 && !a4 )
  {
    return dword_140404A6C[60 * (__int64)a1 + 71737689];
  }
  if ( v47 )
  {
    v16 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737687], 1, (const char *const *)&v47, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v18 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v18 == 0;
      while ( !v8 );
      v17 = 0;
      do
      {
        v19 = *((_BYTE *)&dword_140404A6C[71807077] + v17);
        v18[v17++] = v19;
      }
      while ( v19 );
    }
    unk_140404200(dword_140404A6C[v16 + 71737687], v17);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v21 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v21 == 0;
      while ( !v8 );
      v20 = 0;
      do
      {
        v22 = *((_BYTE *)&dword_140404A6C[71807077] + v20);
        v21[v20++] = v22;
      }
      while ( v22 );
    }
    unk_1404041F0(dword_140404A6C[v16 + 71737685], dword_140404A6C[v16 + 71737687], v20);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v23 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v23 == 0;
      while ( !v8 );
      v24 = 0;
      do
      {
        v25 = *((_BYTE *)&dword_140404A6C[71807077] + v24);
        v23[v24++] = v25;
      }
      while ( v25 );
    }
  }
  if ( v48 )
  {
    v26 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737688], 1, (const char *const *)&v48, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v28 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v28 == 0;
      while ( !v8 );
      v27 = 0;
      do
      {
        v29 = *((_BYTE *)&dword_140404A6C[71807077] + v27);
        v28[v27++] = v29;
      }
      while ( v29 );
    }
    unk_140404200(dword_140404A6C[v26 + 71737688], v27);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v31 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v31 == 0;
      while ( !v8 );
      v30 = 0;
      do
      {
        v32 = *((_BYTE *)&dword_140404A6C[71807077] + v30);
        v31[v30++] = v32;
      }
      while ( v32 );
    }
    unk_1404041F0(dword_140404A6C[v26 + 71737685], dword_140404A6C[v26 + 71737688], v30);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v33 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v33 == 0;
      while ( !v8 );
      v34 = 0;
      do
      {
        v35 = *((_BYTE *)&dword_140404A6C[71807077] + v34);
        v33[v34++] = v35;
      }
      while ( v35 );
    }
  }
  v36 = 60 * v4;
  unk_1404042D0(dword_140404A6C[v36 + 71737685]);
  unk_140404268(dword_140404A6C[v36 + 71737685], 0x10000, &v46, &dword_140404A6C[71807077]);
  if ( v46 > 0 )
  {
    v37 = (char *)&dword_140404A6C[71741524] + 3;
    do
      v8 = *++v37 == 0;
    while ( !v8 );
    v38 = 0;
    do
    {
      v39 = *((_BYTE *)&dword_140404A6C[71807077] + v38);
      v37[v38++] = v39;
    }
    while ( v39 );
  }
  v40 = dword_140404A6C[v36 + 71737685];
  dword_140404A6C[v36 + 71737689] = 1;
  unk_140404380(v40, v37, v38);
  crt_sprintf(v50, "\r\n\r\n");
  v41 = (char *)&dword_140404A6C[71741524] + 3;
  do
    v8 = *++v41 == 0;
  while ( !v8 );
  v42 = 0;
  do
  {
    v43 = v50[v42];
    v41[v42++] = v43;
  }
  while ( v43 );
  return dword_140404A6C[60 * (__int64)a1 + 71737689];
}
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

//----- (000000014004C960) ----------------------------------------------------
__int64            sub_14004C960(int a1, int a2)
{
  __int64 v3;

  if ( a2 == 2 )
    return dword_140404A6C[1760 * a1 + 278846098];
  if ( a2 )
    return 0xFFFFFFFFLL;
  v3 = 1760LL * a1;
  if ( (int)dword_140404A6C[v3 + 278845906] <= 0 )
    return 0xFFFFFFFFLL;
  return dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
}

//----- (000000014004C9C0) ----------------------------------------------------
__int64            sub_14004C9C0(int a1, int *a2, int *a3, __int64 a4, int *a5)
{
  __int64 v8;
  __int64 v9;
  __int64 i;
  unsigned __int8 v11;
  int *v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  signed int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  char v22;
  int v23;
  __int64 v24;
  int v25;
  _DWORD *j;
  unsigned int *v27;
  _BYTE *v28;
  int v29;
  int v30;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C9C0[576];
#define v32 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 0)) /* [rsp+0h] */
#define v33 (*(int * (*))(void *)(sr_frame_14004C9C0 + 32)) /* [rsp+20h] */
#define v34 (*(_BYTE (*)[512])(void *)(sr_frame_14004C9C0 + 48)) /* [rsp+30h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 560)) /* [rsp+230h] */

  v33 = a5;
  v8 = a1;
  v9 = *a5;
  for ( i = v9; i < 62; ++i )
  {
    if ( *(_BYTE *)(i + a4) != 32 )
      break;
    LODWORD(v9) = v9 + 1;
  }
  v11 = toupper(*(unsigned __int8 *)((int)v9 + a4));
  if ( (unsigned __int8)(v11 - 65) <= 0x19u && *(_BYTE *)((int)v9 + a4 + 1) == 58 )
  {
    *a2 = v11 - 65;
    LODWORD(v9) = v9 + 2;
  }
  v12 = v33;
  *v33 = v9;
  v13 = *a2;
  if ( (_DWORD)v13 == 2 )
  {
    v14 = 1760 * v8;
    v15 = v8;
    v16 = dword_140404A6C[1760 * v8 + 278846098];
  }
  else
  {
    if ( (_DWORD)v13 )
      return (unsigned int)-1; /* 0x14004CA7E: jne -> mov eax, 0xffffffff */
    v14 = 1760 * v8;
    v15 = v8;
    if ( (int)dword_140404A6C[1760 * v8 + 278845906] <= 0 )
      return (unsigned int)-1; /* 0x14004CA9D: jle -> mov eax, 0xffffffff */
    v16 = dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278846098];
  }
  if ( v16 != -1 )
  {
    *a3 = dword_140404A6C[1760 * v15 + 278847173 + 18 * v13 + (int)dword_140404A6C[18 * v13 + 278847172 + v14]];
    if ( *(_BYTE *)((int)v9 + a4) == 92 )
    {
      *a3 = 0;
      LODWORD(v9) = v9 + 1;
    }
    v17 = (int)v9;
    v18 = v16;
    while ( 1 )
    {
      while ( 1 )
      {
        *v12 = v9;
        if ( *(_BYTE *)(v17 + a4) != 46 )
          break;
        ++v17;
        v19 = v9 + 1;
        if ( *(_BYTE *)(v17 + a4) == 46 )
        {
          v20 = *(_BYTE *)((int)v9 + a4 + 2);
          if ( v20 != 92 && v20 )
            return (unsigned int)-1; /* 0x14004CB3A: jne -> mov eax, 0xffffffff */
          ++v17;
          *a3 = dword_140404A6C[2570 * v18 + 275753051 + 4 * *a3];
        }
        else
        {
          v19 = v9;
        }
        LODWORD(v9) = v19 + 1;
        if ( *(_BYTE *)(v17 + a4) != 92 )
          break;
        LODWORD(v9) = v19 + 2;
        ++v17;
      }
      v21 = 0;
      if ( v17 < 62 )
      {
        do
        {
          v22 = *(_BYTE *)(v17 + a4);
          if ( v22 == 92 || v22 == 32 || !v22 )
            break;
          if ( v21 >= 12 )
            return (unsigned int)-1; /* 0x14004CB9A: jge -> mov eax, 0xffffffff */
          v34[v21] = v22;
          LODWORD(v9) = v9 + 1;
          ++v21;
          ++v17;
        }
        while ( v17 < 62 );
        if ( (unsigned __int64)v21 >= 0x200 )
          sub_1401F8694();
      }
      v34[v21] = 0;
      if ( v21 <= 0 )
        return 1; /* 0x14004CBC7: jle -> mov eax, 1 */
      v23 = 1;
      v24 = 2570 * v18;
      v25 = dword_140404A6C[2570 * v18 + 275753047];
      if ( v25 <= 1 )
        return 0; /* 0x14004CBE9: jle -> xor eax, eax */
      for ( j = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 * 4 + 1107225576); ; j += 4 )
      {
        if ( *j == *a3 )
        {
          v27 = &dword_140404A6C[4 * v23 + 275753048 + v24];
          v28 = (_BYTE *)(v34 - (_BYTE *)v27);
          do
          {
            v29 = (unsigned __int8)v28[(_QWORD)v27];
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
            break;
        }
        if ( ++v23 >= v25 )
          return 0; /* 0x14004CC31: jge -> xor eax, eax */
      }
      if ( v23 == -1 )
        return 0; /* 0x14004CC40: je -> xor eax, eax */
      *a3 = v23;
      if ( *(_BYTE *)(v17 + a4) != 92 )
        return 1; /* 0x14004CC4B: jne -> mov eax, 1 */
      v12 = v33;
      LODWORD(v9) = v9 + 1;
      ++v17;
    }
  }
  return (unsigned int)-1; /* 0x14004CABE: je -> mov eax, 0xffffffff */
}
#undef v32
#undef v33
#undef v34
#undef v35

//----- (000000014004CE30) ----------------------------------------------------
double            sub_14004CE30(int a1)
{
  __int64 v1;
  __int64 v2;
  void *v3;
  __m128i *v4;
  unsigned int v5;
  unsigned int v6;
  void *v7;
  __m128i *v8;
  unsigned int v9;
  __m128i *v10;
  unsigned int v11;
  __m128i *v12;
  unsigned int v13;
  __m128i *v14;
  unsigned int v15;
  __m128i *v16;
  unsigned int v17;
  void *v18;
  __m128i *v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v1 = a1;
  v2 = 908LL * a1;
  v3 = *(void **)&dword_140404A6C[v2 + 178527463];
  dword_140404A6C[v2 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v2 + 178527462] = dword_140404A6C[177167566];
  free(v3);
  v4 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177167566] * dword_140404A6C[177495247]);
  v5 = dword_140404A6C[177167566] * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527463] = (uint64)(uintptr_t)(v4);
  crt_memcpy(v4, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v5));
  v6 = dword_140404A6C[177495247];
  v7 = *(void **)&dword_140404A6C[v2 + 178527467];
  dword_140404A6C[v2 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v2 + 178527475] = v6;
  free(v7);
  v8 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v9 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527467] = (uint64)(uintptr_t)(v8);
  crt_memcpy(v8, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v9));
  free(*(void **)&dword_140404A6C[v2 + 178527469]);
  v10 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v11 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527469] = (uint64)(uintptr_t)(v10);
  crt_memcpy(v10, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v11));
  free(*(void **)&dword_140404A6C[v2 + 178527471]);
  v12 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v13 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527471] = (uint64)(uintptr_t)(v12);
  crt_memcpy(v12, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v13));
  free(*(void **)&dword_140404A6C[v2 + 178527473]);
  v14 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v15 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527473] = (uint64)(uintptr_t)(v14);
  crt_memcpy(v14, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v15));
  free(*(void **)&dword_140404A6C[v2 + 178527477]);
  v16 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v17 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527477] = (uint64)(uintptr_t)(v16);
  crt_memcpy(v16, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v17));
  v18 = *(void **)&dword_140404A6C[v2 + 178527481];
  dword_140404A6C[v2 + 178527479] = dword_140404A6C[178519250];
  free(v18);
  v19 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v20 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v2 + 178527481] = (uint64)(uintptr_t)(v19);
  crt_memcpy(v19, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v20));
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793813], v21);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v2 + 178527462] * dword_140404A6C[v2 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v2 + 178527463],
    35044);
  qword_140404170(34962, 0, v22);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793814], v23);
  unk_140404190(34963, (int)(24 * dword_140404A6C[v2 + 178527465]), *(_QWORD *)&dword_140404A6C[v2 + 178527477], 35044);
  return qword_140404170(34963, 0, v24);
}

//----- (000000014004E160) ----------------------------------------------------
__int64            sub_14004E160(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int *v6;
  unsigned int v10;
  __int64 v12;
  unsigned int *v13;

  v6 = &dword_140404A6C[486149253];
  v10 = 0;
  while ( *v6 )
  {
    ++v10;
    v6 += 61;
    if ( (__int64)v6 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v10 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 61LL * (int)v10;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v12 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v12 + 486149253] = 1;
  dword_140404A6C[v12 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
  dword_140404A6C[v12 + 486149292] = a2;
  dword_140404A6C[v12 + 486149291] = a1;
  dword_140404A6C[v12 + 486149293] = -1;
  dword_140404A6C[v12 + 486149281] = 1048576000;
  dword_140404A6C[v12 + 486149282] = 1052770304;
  v13 = &dword_140404A6C[36 * v10 + 485543029];
  *(_OWORD *)v13 = 0;
  *((_OWORD *)v13 + 1) = 0;
  *((_OWORD *)v13 + 2) = 0;
  *((_OWORD *)v13 + 3) = 0;
  *((_OWORD *)v13 + 4) = 0;
  *((_OWORD *)v13 + 5) = 0;
  *((_OWORD *)v13 + 6) = 0;
  *((_OWORD *)v13 + 7) = 0;
  *((_OWORD *)v13 + 8) = 0;
  dword_140404A6C[v12 + 486149278] = a5;
  dword_140404A6C[v12 + 486149267] = *a3;
  dword_140404A6C[v12 + 486149268] = a3[1];
  dword_140404A6C[v12 + 486149269] = a3[2];
  dword_140404A6C[v12 + 486149270] = *a4;
  dword_140404A6C[v12 + 486149271] = a4[1];
  dword_140404A6C[v12 + 486149272] = a4[2];
  return v10;
}

//----- (000000014004E2E0) ----------------------------------------------------
__int64            sub_14004E2E0(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4;
  unsigned int v7;
  __int64 v9;
  unsigned int *v10;

  v4 = &dword_140404A6C[486149253];
  v7 = 0;
  while ( *v4 )
  {
    ++v7;
    v4 += 61;
    if ( (__int64)v4 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 61LL * (int)v7;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v9 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v9 + 486149253] = 1;
  dword_140404A6C[v9 + 486149254] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 486149256] = 0x10000;
  dword_140404A6C[v9 + 486149291] = a1;
  dword_140404A6C[v9 + 486149281] = 1031798784;
  dword_140404A6C[v9 + 486149282] = 1040187392;
  v10 = &dword_140404A6C[36 * v7 + 485543029];
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  *((_OWORD *)v10 + 7) = 0;
  *((_OWORD *)v10 + 8) = 0;
  dword_140404A6C[v9 + 486149267] = *a2;
  dword_140404A6C[v9 + 486149268] = a2[1];
  dword_140404A6C[v9 + 486149269] = a2[2];
  dword_140404A6C[v9 + 486149264] = *a3;
  dword_140404A6C[v9 + 486149265] = a3[1];
  dword_140404A6C[v9 + 486149266] = a3[2];
  return v7;
}

//----- (000000014004E430) ----------------------------------------------------
__int64            sub_14004E430(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v5;
  unsigned int v9;
  __int64 v11;
  unsigned int *v12;

  v5 = &dword_140404A6C[486149253];
  v9 = 0;
  while ( *v5 )
  {
    ++v9;
    v5 += 61;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 61LL * (int)v9;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v11 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v11 + 486149253] = 1;
  dword_140404A6C[v11 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 486149256] = 0x10000;
  dword_140404A6C[v11 + 486149292] = a2;
  dword_140404A6C[v11 + 486149291] = a1;
  dword_140404A6C[v11 + 486149293] = -1;
  dword_140404A6C[v11 + 486149281] = 1048576000;
  dword_140404A6C[v11 + 486149282] = 1052770304;
  v12 = &dword_140404A6C[36 * v9 + 485543029];
  *(_OWORD *)v12 = 0;
  *((_OWORD *)v12 + 1) = 0;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  *((_OWORD *)v12 + 4) = 0;
  *((_OWORD *)v12 + 5) = 0;
  *((_OWORD *)v12 + 6) = 0;
  *((_OWORD *)v12 + 7) = 0;
  *((_OWORD *)v12 + 8) = 0;
  dword_140404A6C[v11 + 486149267] = *a3;
  dword_140404A6C[v11 + 486149268] = a3[1];
  dword_140404A6C[v11 + 486149269] = a3[2];
  dword_140404A6C[v11 + 486149270] = *a4;
  dword_140404A6C[v11 + 486149271] = a4[1];
  dword_140404A6C[v11 + 486149272] = a4[2];
  return v9;
}

//----- (000000014004E5B0) ----------------------------------------------------
__int64            sub_14004E5B0(unsigned int a1, unsigned int a2)
{
  unsigned int *v3;
  unsigned int v5;
  __int64 v7;
  unsigned int *v8;

  v3 = &dword_140404A6C[486149253];
  v5 = 0;
  while ( *v3 )
  {
    ++v5;
    v3 += 61;
    if ( (__int64)v3 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v7 = 61LL * (int)v5;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v7 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v7 + 486149253] = 1;
  dword_140404A6C[v7 + 486149254] = 8;
  *(_QWORD *)&dword_140404A6C[v7 + 486149256] = 0x10000;
  dword_140404A6C[v7 + 486149292] = a2;
  dword_140404A6C[v7 + 486149291] = a1;
  dword_140404A6C[v7 + 486149293] = -1;
  v8 = &dword_140404A6C[36 * v5 + 485543029];
  dword_140404A6C[v7 + 486149281] = 1031798784;
  dword_140404A6C[v7 + 486149282] = 1040187392;
  *(_OWORD *)v8 = 0;
  *((_OWORD *)v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  *((_OWORD *)v8 + 3) = 0;
  *((_OWORD *)v8 + 4) = 0;
  *((_OWORD *)v8 + 5) = 0;
  *((_OWORD *)v8 + 6) = 0;
  *((_OWORD *)v8 + 7) = 0;
  *((_OWORD *)v8 + 8) = 0;
  return v5;
}

//----- (000000014004E6E0) ----------------------------------------------------
void            sub_14004E6E0(int a1, float a2, float a3, float a4)
{
  int v5;
  unsigned int *v6;
  float sr_shape_position[3];
  float sr_shape_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004E6E0[112];
#define v8 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 0)) /* [rsp+8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 104)) /* [rsp+70h] */

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  sr_shape_position[2] = 0.0;
  if ( a1 == dword_140404A6C[283826981] )
  {
    (*(__int64 *)sr_shape_position) = 0;
    sub_140002D00((float *)&(*(__int64 *)sr_shape_position), a2, a3, a4);
  }
  else
  {
    LODWORD((*(__int64 *)sr_shape_position)) = 0;
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = a3 * -0.5;
    (*(__int128 *)sr_shape_matrix) = xmmword_140278D30;
    (*(__int128 *)(sr_shape_matrix + 4)) = xmmword_140278D30;
    sr_shape_matrix[8] = 1.0;
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 5);
    sub_14007B2A0((__int64)&(*(__int128 *)sr_shape_matrix), (float *)&(*(__int128 *)sr_shape_matrix), sr_export_float_lane_container(1061752795));
    *(float *)&(*(__int64 *)sr_shape_position) = (float)(*((float *)&(*(__int128 *)sr_shape_matrix) + 3) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 2) * a4);
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = (float)(*(float *)&(*(__int128 *)(sr_shape_matrix + 4)) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 3) * a4);
    sr_shape_position[2] = (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 1) * (float)(a3 * 0.5)) + (float)(sr_shape_matrix[8] * a4);
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 0);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v8
#undef v14

//----- (000000014004E8A0) ----------------------------------------------------
__int64            sub_14004E8A0(signed int a1, unsigned int *a2, float *a3, unsigned int a4)
{
  /* Ported to src/engine/world_bullets.c and compared with the original
     (tools/native-compare, suite bullet). Returns the index zero-extended,
     or 0xFFFFFFFF when the table is full, as the original. */
  extern unsigned int world_fire_bullet(int, const float *, const float *, int);
  return world_fire_bullet(a1, (const float *)a2, a3, (int)a4);
}

//----- (000000014004EB60) ----------------------------------------------------
double            sub_14004EB60(int a1, int a2, int a3)
{
  double v3;
  int v4;
  unsigned int v5;
  __int64 v8;
  __m128 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __m128d v14;
  __m128 v15;
  double v16;
  unsigned int v17;
  unsigned int v18;
  __m128d v19;
  unsigned int v20;
  __int64 v21;
  __m128 v22;
  unsigned int v23;
  unsigned int v24;
  __m128d v25;
  unsigned int v26;
  __int64 v27;
  __m128 v28;
  unsigned int v29;
  unsigned int v30;
  __m128d v31;
  unsigned int v32;
  __int64 v33;
  __m128 v34;
  unsigned int v35;
  float v36;
  float v37;
  __int64 v38;
  double v39;
  __m128 v40;
  unsigned int v41;
  unsigned int v42;
  double v43;
  unsigned int v44;
  __int64 v45;
  __m128 v46;
  unsigned int v47;
  unsigned int v48;
  double v49;
  unsigned int v50;
  __int64 v51;
  __m128 v52;
  unsigned int v53;
  unsigned int v54;
  double v55;
  unsigned int v56;
  __int64 v57;
  __m128 v58;
  unsigned int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  int v71;
  unsigned int *v72;
  int v73;
  float *v74;
  int v75;
  unsigned int *v76;
  int v77;
  float *v78;
  __int64 v79;
  float v80;
  float v81;
  float v82;
  __int64 v83;
  __int64 v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  __int64 v99;
  float v100;
  float *v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;

  v4 = 0;
  v5 = 0;
  v8 = 2;
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v10 = 3LL * a2;
  dword_140404A6C[178322641] = 0;
  v11 = *(float *)&dword_140404A6C[2 * v10 + 437914200];
  v12 = *(float *)&dword_140404A6C[2 * v10 + 437914199];
  v13 = v11 * 0.5;
  dword_140404A6C[178519250] = 0;
  do
  {
    v14 = _mm_cvtps_pd(v9);
    v15 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v14, f64)[0], v10, v3));
    SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 0.7853981633975;
    v16 = v12;
    *(float *)&v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v12;
    dword_140404A6C[3 * v5 + 177167567] = v17;
    *(float *)&v18 = -(*(double *)SR_VEC_LANES(128, v15, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v18;
    v19 = _mm_cvtps_pd(_mm_cvtpd_ps(v14));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v17;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v18;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v20 = dword_140404A6C[177167565];
    v22 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v19, f64)[0], v21, COERCE_DOUBLE((unsigned __int64)v17)));
    *(float *)&v23 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v22, (__m128d)v22, 1), f64)[0] * v12;
    dword_140404A6C[3 * v20 + 177167567] = v23;
    *(float *)&v24 = -(*(double *)SR_VEC_LANES(128, v22, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v24;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v23;
    SR_VEC_LANES(128, v19, f64)[0] = SR_VEC_LANES(128, v19, f64)[0] + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v24;
    v25 = _mm_cvtps_pd(_mm_cvtpd_ps(v19));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v26 = dword_140404A6C[177167565];
    v28 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v25, f64)[0], v27, COERCE_DOUBLE((unsigned __int64)v23)));
    SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 0.7853981633975;
    *(float *)&v29 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v28, (__m128d)v28, 1), f64)[0] * v12;
    dword_140404A6C[3 * v26 + 177167567] = v29;
    *(float *)&v30 = -(*(double *)SR_VEC_LANES(128, v28, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v30;
    v31 = _mm_cvtps_pd(_mm_cvtpd_ps(v25));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v29;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v30;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v32 = dword_140404A6C[177167565];
    v34 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v31, f64)[0], v33, COERCE_DOUBLE((unsigned __int64)v29)));
    HIDWORD(v3) = 0;
    *(float *)&v3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1), f64)[0] * v12;
    dword_140404A6C[3 * v32 + 177167567] = LODWORD(v3);
    SR_VEC_LANES(128, v31, f64)[0] = SR_VEC_LANES(128, v31, f64)[0] + 0.7853981633975;
    *(float *)&v35 = -(*(double *)SR_VEC_LANES(128, v34, u64) * v12);
    v9 = _mm_cvtpd_ps(v31);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v35;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(v3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v5 = ++dword_140404A6C[177167565];
    --v8;
  }
  while ( v8 );
  v36 = 0.0;
  v37 = v11 * -0.5;
  v38 = 2;
  do
  {
    v39 = v36;
    v40 = _mm_castpd_ps(sub_1401F8A50(v36, v10, COERCE_DOUBLE((unsigned __int64)LODWORD(v3))));
    *(float *)&v41 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v40, (__m128d)v40, 1), f64)[0] * v16;
    dword_140404A6C[3 * v5 + 177167567] = v41;
    *(float *)&v42 = -(*(double *)SR_VEC_LANES(128, v40, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v42;
    v43 = (float)(v39 + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v41;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v42;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v44 = dword_140404A6C[177167565];
    v46 = _mm_castpd_ps(sub_1401F8A50(v43, v45, COERCE_DOUBLE((unsigned __int64)v41)));
    *(float *)&v47 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v46, (__m128d)v46, 1), f64)[0] * v16;
    dword_140404A6C[3 * v44 + 177167567] = v47;
    *(float *)&v48 = -(*(double *)SR_VEC_LANES(128, v46, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v48;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v47;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v48;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v49 = (float)(v43 + 0.7853981633975);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v50 = dword_140404A6C[177167565];
    v52 = _mm_castpd_ps(sub_1401F8A50(v49, v51, COERCE_DOUBLE((unsigned __int64)v47)));
    *(float *)&v53 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v52, (__m128d)v52, 1), f64)[0] * v16;
    dword_140404A6C[3 * v50 + 177167567] = v53;
    *(float *)&v54 = -(*(double *)SR_VEC_LANES(128, v52, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v54;
    v55 = (float)(v49 + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v53;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v54;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v56 = dword_140404A6C[177167565];
    v58 = _mm_castpd_ps(sub_1401F8A50(v55, v57, COERCE_DOUBLE((unsigned __int64)v53)));
    *(float *)&v3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v58, (__m128d)v58, 1), f64)[0] * v16;
    dword_140404A6C[3 * v56 + 177167567] = LODWORD(v3);
    *(float *)&v59 = -(*(double *)SR_VEC_LANES(128, v58, u64) * v16);
    v36 = v55 + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v59;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(v3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v59;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v5 = ++dword_140404A6C[177167565];
    --v38;
  }
  while ( v38 );
  dword_140404A6C[3 * v5 + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  v60 = 3 * dword_140404A6C[177167565];
  if ( a3 )
    *(float *)&dword_140404A6C[v60 + 177167569] = v11 * -0.25;
  else
    *(float *)&dword_140404A6C[v60 + 177167569] = v37 * 1.5;
  v61 = 1;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v62 = dword_140404A6C[177495247];
  do
  {
    v63 = v61 & 7;
    dword_140404A6C[3 * v62 + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v63 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v64 = ((_BYTE)v61 + 1) & 7;
    v65 = v64 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 8;
    v66 = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v64 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v64;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64;
    v67 = ((_BYTE)v61 + 2) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65;
    v68 = v67 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 9;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67;
    v69 = ((_BYTE)v61 + 3) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v68;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 9;
    v70 = v61 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v61 += 4;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v69 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v62 = ++dword_140404A6C[177495247];
  }
  while ( v61 <= 8 );
  v71 = 0;
  if ( v62 > 0 )
  {
    v72 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v72 - 1) = 0;
      ++v71;
      *(_QWORD *)(v72 + 1) = 0;
      *(_QWORD *)(v72 + 3) = 0;
      v72 += 6;
      v62 = dword_140404A6C[177495247];
    }
    while ( v71 < (int)dword_140404A6C[177495247] );
  }
  v73 = dword_140404A6C[177167565];
  v74 = (float *)&dword_140404A6C[177249489];
  v75 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v76 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v76 - 1) = 0;
      ++v75;
      *v76 = 0;
      v76 += 3;
      v73 = dword_140404A6C[177167565];
    }
    while ( v75 < (int)dword_140404A6C[177167565] );
    v62 = dword_140404A6C[177495247];
  }
  v77 = 0;
  if ( v62 > 0 )
  {
    v78 = (float *)&dword_140404A6C[177814739];
    do
    {
      v79 = 3 * *((_DWORD *)v78 - 319491);
      v80 = *(float *)&dword_140404A6C[v79 + 177167568];
      v81 = *(float *)&dword_140404A6C[v79 + 177167569];
      v82 = *(float *)&dword_140404A6C[v79 + 177167567];
      v83 = 3 * *((_DWORD *)v78 - 319490);
      v84 = 3 * *((_DWORD *)v78 - 319489);
      v85 = *(float *)&dword_140404A6C[v83 + 177167569] - v81;
      v86 = *(float *)&dword_140404A6C[v84 + 177167568] - v80;
      v87 = *(float *)&dword_140404A6C[v84 + 177167567] - v82;
      v88 = *(float *)&dword_140404A6C[v83 + 177167568] - v80;
      v89 = *(float *)&dword_140404A6C[v83 + 177167567] - v82;
      v90 = *(float *)&dword_140404A6C[v84 + 177167569] - v81;
      v91 = (float)(v86 * v85) - (float)(v90 * v88);
      v92 = (float)(v90 * v89) - (float)(v87 * v85);
      v93 = (float)(v87 * v88) - (float)(v86 * v89);
      v94 = fsqrt((float)((float)(v92 * v92) + (float)(v91 * v91)) + (float)(v93 * v93));
      if ( v94 == 0.0 )
      {
        v95 = 0.0;
        v96 = 0.0;
        v97 = 0.0;
      }
      else
      {
        v95 = (float)(1.0 / v94) * v91;
        v96 = (float)(1.0 / v94) * v92;
        v97 = (float)(1.0 / v94) * v93;
      }
      *(v78 - 2) = v95;
      *(v78 - 1) = v96;
      *v78 = v97;
      ++v77;
      *(float *)&dword_140404A6C[v79 + 177249487] = v95 + *(float *)&dword_140404A6C[v79 + 177249487];
      *(float *)&dword_140404A6C[v79 + 177249488] = v96 + *(float *)&dword_140404A6C[v79 + 177249488];
      *(float *)&dword_140404A6C[v79 + 177249489] = v97 + *(float *)&dword_140404A6C[v79 + 177249489];
      v98 = 3 * *((_DWORD *)v78 - 319490);
      *(float *)&dword_140404A6C[v98 + 177249487] = v95 + *(float *)&dword_140404A6C[v98 + 177249487];
      *(float *)&dword_140404A6C[v98 + 177249488] = v96 + *(float *)&dword_140404A6C[v98 + 177249488];
      *(float *)&dword_140404A6C[v98 + 177249489] = v97 + *(float *)&dword_140404A6C[v98 + 177249489];
      *(float *)&v98 = *(v78 - 319489);
      v78 += 3;
      v99 = 3 * (int)v98;
      *(float *)&dword_140404A6C[v99 + 177249487] = v95 + *(float *)&dword_140404A6C[v99 + 177249487];
      *(float *)&dword_140404A6C[v99 + 177249488] = v96 + *(float *)&dword_140404A6C[v99 + 177249488];
      *(float *)&dword_140404A6C[v99 + 177249489] = v97 + *(float *)&dword_140404A6C[v99 + 177249489];
    }
    while ( v77 < (int)dword_140404A6C[177495247] );
    v73 = dword_140404A6C[177167565];
  }
  if ( v73 > 0 )
  {
    do
    {
      v100 = *(v74 - 1);
      v101 = v74;
      v102 = *(v74 - 2);
      v103 = *v74;
      v104 = fsqrt((float)((float)(v102 * v102) + (float)(v100 * v100)) + (float)(v103 * v103));
      if ( v104 == 0.0 )
      {
        v105 = 0.0;
        v106 = 0.0;
        v107 = 0.0;
      }
      else
      {
        v105 = v103 * (float)(1.0 / v104);
        v106 = v100 * (float)(1.0 / v104);
        v107 = (float)(1.0 / v104) * v102;
      }
      *(v74 - 2) = v107;
      ++v4;
      *(v74 - 1) = v106;
      v74 += 3;
      *v101 = v105;
    }
    while ( v4 < (int)dword_140404A6C[177167565] );
  }
  return sub_1401449C0(a1, 0);
}

//----- (000000014004FDB0) ----------------------------------------------------
void            sub_14004FDB0(int a1)
{
  int v1;
  int v3;
  int v4;
  unsigned int *v5;
  int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int *v12;
  _DWORD sr_layer_position[3];
  _DWORD sr_layer_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004FDB0[96];
#define v14 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 0)) /* [rsp+0h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 88)) /* [rsp+58h] */

  v1 = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  (*(__int64 *)sr_layer_position) = 0;
  sr_layer_position[2] = 0;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1040187392), 0.03125);
  v3 = dword_140404A6C[177495247];
  v4 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v5 = &dword_140404A6C[178011346];
    do
    {
      *(v5 - 1) = 998244352;
      ++v4;
      *v5 = 998244352;
      v5[1] = 998244352;
      v5[2] = 998244352;
      v5[3] = 998244352;
      v5[4] = 998244352;
      v5 += 6;
      v3 = dword_140404A6C[177495247];
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  sr_layer_position[2] = 1025507328;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  v6 = dword_140404A6C[177495247];
  if ( v3 < (int)dword_140404A6C[177495247] )
  {
    v7 = &dword_140404A6C[6 * v3 + 178011346];
    do
    {
      *(v7 - 1) = 1010827264;
      ++v3;
      *v7 = 998244352;
      v7[1] = 1010827264;
      v7[2] = 998244352;
      v7[3] = 1010827264;
      v7[4] = 998244352;
      v7 += 6;
      v6 = dword_140404A6C[177495247];
    }
    while ( v3 < (int)dword_140404A6C[177495247] );
  }
  sr_layer_position[2] = -1121976320;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  v8 = dword_140404A6C[177495247];
  if ( v6 < (int)dword_140404A6C[177495247] )
  {
    v9 = &dword_140404A6C[6 * v6 + 178011346];
    do
    {
      *(v9 - 1) = 1010827264;
      ++v6;
      *v9 = 998244352;
      v9[1] = 1010827264;
      v9[2] = 998244352;
      v9[3] = 1010827264;
      v9[4] = 998244352;
      v9 += 6;
      v8 = dword_140404A6C[177495247];
    }
    while ( v6 < (int)dword_140404A6C[177495247] );
  }
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v10 = &dword_140404A6C[178322642];
    v11 = &dword_140404A6C[178388181];
    v12 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v8 + 177495248] = *v10;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v10[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v10[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v11 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v11 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v11 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v11;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v11[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v11[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v10;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v10[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v10[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v11 - 3);
      v10 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v11 - 2);
      v11 += 8;
      v12 += 8;
      ++v1;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v12 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v12 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v12 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v12 - 6);
      v8 = ++dword_140404A6C[177495247];
    }
    while ( v1 < (int)dword_140404A6C[178322641] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v14
#undef v20

//----- (0000000140050280) ----------------------------------------------------
double            sub_140050280(int a1, float a2, float a3, float a4)
{
  int v4;
  float v5;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  unsigned int v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140050280[16];
#define v13 (*(__int64 (*))(void *)(sr_frame_140050280 + 0)) /* [rsp+20h] */
#define v14 (*(float (*))(void *)(sr_frame_140050280 + 8)) /* [rsp+28h] */

  v4 = 0;
  v5 = a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v13 = 0;
  if ( a4 <= 0.0 )
  {
    v5 = -a4;
    v14 = a4;
  }
  else
  {
    v14 = 0.0;
  }
  sub_140002D00((float *)&v13, a2, a3, v5);
  v7 = dword_140404A6C[177495247];
  v8 = &dword_140404A6C[178011346];
  v9 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v10 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v10 - 1) = 0;
      ++v9;
      *(_QWORD *)(v10 + 1) = 0;
      *(_QWORD *)(v10 + 3) = 0;
      v10 += 6;
      v7 = dword_140404A6C[177495247];
    }
    while ( v9 < (int)dword_140404A6C[177495247] );
  }
  if ( a1 != dword_140404A6C[283826994] )
  {
    v11 = dword_140404A6C[283827004];
    if ( a1 == dword_140404A6C[283827003] || a1 == dword_140404A6C[283827004] )
    {
      if ( v7 > 0 )
      {
        do
        {
          *(v8 - 1) = 1035993088;
          *v8 = 1063780352;
          v8[1] = 1035993088;
          v8[2] = 1063780352;
          v8[3] = 1035993088;
          v8[4] = 1063780352;
          if ( a1 == v11 )
          {
            *v8 = 1064828928;
            v8[2] = 1064828928;
            v8[4] = 1064828928;
          }
          ++v4;
          v8 += 6;
        }
        while ( v4 < (int)dword_140404A6C[177495247] );
      }
    }
    else if ( a1 == dword_140404A6C[283827005] )
    {
      v14 = 0.015625;
      sub_140002D00((float *)&v13, a2 * 0.875, a3 * 0.875, v5);
      *(_OWORD *)&dword_140404A6C[178011429] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011437] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011433] = xmmword_1402794A0;
    }
    else
    {
      *(_OWORD *)&dword_140404A6C[178011381] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011385] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011389] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011409] = xmmword_1402794A0;
      *(_OWORD *)&dword_140404A6C[178011405] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011345] = xmmword_140278E20;
      *(_OWORD *)&dword_140404A6C[178011413] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011353] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011349] = xmmword_140278D90;
    }
  }
  return sub_1401449C0(a1, 0);
}
#undef v13
#undef v14

//----- (00000001400504C0) ----------------------------------------------------
double            sub_1400504C0(int a1, float a2, float a3, float a4)
{
  int v4;
  unsigned int *v5;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  unsigned int v27;
  unsigned int *v28;
  unsigned int *v29;
  unsigned int *v30;
  _DWORD sr_extrude_position[3];

  v4 = 0;
  *(float *)&dword_140404A6C[177167575] = a4;
  *(float *)&dword_140404A6C[177167570] = a2;
  v5 = (unsigned int *)dword_1402B3664;
  *(float *)&dword_140404A6C[177167567] = -a2;
  dword_140404A6C[177495247] = 0;
  *(float *)&dword_140404A6C[177167573] = a2;
  *(float *)&dword_140404A6C[177167568] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167571] = a3 * -0.75;
  v7 = 0;
  *(float *)&dword_140404A6C[177167574] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167577] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167569] = -a4;
  *(float *)&dword_140404A6C[177167572] = -a4;
  *(float *)&dword_140404A6C[177167576] = -a2;
  *(float *)&dword_140404A6C[177167578] = a4;
  *(float *)&dword_140404A6C[177167579] = -a2;
  *(float *)&dword_140404A6C[177167580] = a3;
  *(float *)&dword_140404A6C[177167581] = -a4;
  *(float *)&dword_140404A6C[177167582] = a2;
  *(float *)&dword_140404A6C[177167583] = a3;
  *(float *)&dword_140404A6C[177167584] = -a4;
  *(float *)&dword_140404A6C[177167585] = a2;
  *(float *)&dword_140404A6C[177167586] = a3;
  *(float *)&dword_140404A6C[177167587] = a4;
  *(float *)&dword_140404A6C[177167588] = -a2;
  *(float *)&dword_140404A6C[177167589] = a3;
  *(float *)&dword_140404A6C[177167590] = a4;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  dword_140404A6C[177167565] = 8;
  do
  {
    dword_140404A6C[4 * v7 + 178322642] = *(v5 - 1);
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = *v5;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v5[1];
    v8 = v5[2];
    v5 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v8;
    v9 = 8LL * (int)dword_140404A6C[178322641];
    *(_OWORD *)&dword_140404A6C[v9 + 178388178] = 0;
    *(_OWORD *)&dword_140404A6C[v9 + 178388182] = 0;
    v7 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v5 < (__int64)&dword_1402B36C4 );
  sr_extrude_position[0] = 0;
  sr_extrude_position[2] = 0;
  (*(float *)&sr_extrude_position[1]) = a3 * -0.25;
  sub_140101220(0, (float *)&sr_extrude_position[0]);
  sr_extrude_position[2] = -1124073472;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167564] = *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167564]
                                                                         - (float)(a2 * 0.5);
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167555] = *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167555]
                                                                         - (float)(a2 * 0.5);
  v10 = 8LL * (dword_140404A6C[178322641] - 5);
  *(_OWORD *)&dword_140404A6C[v10 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v10 + 178388182] = 0;
  v11 = 8LL * (dword_140404A6C[178322641] - 4);
  *(_OWORD *)&dword_140404A6C[v11 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v11 + 178388182] = 0;
  v12 = 8LL * (dword_140404A6C[178322641] - 3);
  *(_OWORD *)&dword_140404A6C[v12 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v12 + 178388182] = 0;
  v13 = 8LL * (dword_140404A6C[178322641] - 2);
  *(_OWORD *)&dword_140404A6C[v13 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v13 + 178388182] = 0;
  v14 = 8LL * (dword_140404A6C[178322641] - 1);
  *(_OWORD *)&dword_140404A6C[v14 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v14 + 178388182] = 0;
  (*(float *)&sr_extrude_position[1]) = 0.125;
  sub_140002D00((float *)&sr_extrude_position[0], 0.015625, 0.25, 0.015625);
  v15 = 6 * (dword_140404A6C[177495247] - 12);
  *(_QWORD *)&dword_140404A6C[v15 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v15 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v15 + 178011349] = 1065353216;
  v16 = 6 * (dword_140404A6C[177495247] - 11);
  *(_QWORD *)&dword_140404A6C[v16 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v16 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v16 + 178011349] = 1065353216;
  v17 = 6 * (dword_140404A6C[177495247] - 10);
  *(_QWORD *)&dword_140404A6C[v17 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v17 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v17 + 178011349] = 1065353216;
  v18 = 6 * (dword_140404A6C[177495247] - 9);
  *(_QWORD *)&dword_140404A6C[v18 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v18 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v18 + 178011349] = 1065353216;
  v19 = 6 * (dword_140404A6C[177495247] - 8);
  *(_QWORD *)&dword_140404A6C[v19 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v19 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v19 + 178011349] = 1065353216;
  v20 = 6 * (dword_140404A6C[177495247] - 7);
  *(_QWORD *)&dword_140404A6C[v20 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v20 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v20 + 178011349] = 1065353216;
  v21 = 6 * (dword_140404A6C[177495247] - 6);
  *(_QWORD *)&dword_140404A6C[v21 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v21 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v21 + 178011349] = 1065353216;
  v22 = 6 * (dword_140404A6C[177495247] - 5);
  *(_QWORD *)&dword_140404A6C[v22 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v22 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v22 + 178011349] = 1065353216;
  v23 = 6 * (dword_140404A6C[177495247] - 4);
  *(_QWORD *)&dword_140404A6C[v23 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v23 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v23 + 178011349] = 1065353216;
  v24 = 6 * (dword_140404A6C[177495247] - 3);
  *(_QWORD *)&dword_140404A6C[v24 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v24 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v24 + 178011349] = 1065353216;
  v25 = 6 * (dword_140404A6C[177495247] - 2);
  *(_QWORD *)&dword_140404A6C[v25 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v25 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v25 + 178011349] = 1065353216;
  v26 = 6 * (dword_140404A6C[177495247] - 1);
  *(_QWORD *)&dword_140404A6C[v26 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v26 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v26 + 178011349] = 1065353216;
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v27 = dword_140404A6C[177495247];
    v28 = &dword_140404A6C[178322642];
    v29 = &dword_140404A6C[178388181];
    v30 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v27 + 177495248] = *v28;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v28[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v28[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v29 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v29 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v29 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v29;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v29[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v29[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v28;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v28[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v28[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v29 - 3);
      v28 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v29 - 2);
      v29 += 8;
      v30 += 8;
      ++v4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v30 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v30 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v30 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v30 - 6);
      v27 = ++dword_140404A6C[177495247];
    }
    while ( v4 < (int)dword_140404A6C[178322641] );
  }
  return sub_1401449C0(a1, 0);
}

//----- (0000000140050EF0) ----------------------------------------------------
__int64            sub_140050EF0(unsigned int a1)
{
  unsigned int *v2;
  unsigned int v3;
  __int64 v5;

  v2 = &dword_140404A6C[275753045];
  v3 = 0;
  while ( *v2 )
  {
    ++v3;
    v2 += 2570;
    if ( (__int64)v2 >= (__int64)&dword_140404A6C[278384725] )
      return 0xFFFFFFFFLL;
  }
  if ( v3 != -1 )
  {
    v5 = 2570LL * (int)v3;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[v5 + 275753046]), 0, 0x2824u);
    dword_140404A6C[v5 + 275753045] = 1;
    dword_140404A6C[v5 + 275753046] = a1;
  }
  return v3;
}

//----- (0000000140050F90) ----------------------------------------------------
__int64            sub_140050F90(int a1, signed int a2)
{
  /* Ported to src/engine/item_text.c and compared with the original
     (tools/native-compare, suite itemtext). Returns the record zero-extended,
     or 0xFFFFFFFF when none is free, as the original. */
  extern unsigned int item_link_text_line(int, int);
  return item_link_text_line((int)a1, (int)a2);
}

//----- (0000000140051170) ----------------------------------------------------
__int64            sub_140051170(int a1, unsigned int a2, int a3)
{
  __int64 v4;
  unsigned int *v5;
  unsigned int v6;
  signed int v8;
  __int64 v9;
  unsigned int v10;

  v4 = a1;
  v5 = &dword_140404A6C[290382645];
  v6 = 0;
  while ( *v5 )
  {
    ++v6;
    v5 += 39;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 64;
  if ( a3 <= 64 )
    v8 = a3;
  v9 = 39LL * (int)v6;
  v10 = game_tick;
  dword_140404A6C[v9 + 290382649] = v4;
  dword_140404A6C[v9 + 290382651] = v8;
  dword_140404A6C[v9 + 290382650] = a2;
  dword_140404A6C[v9 + 290382648] = v10;
  *(_QWORD *)&dword_140404A6C[v9 + 290382645] = 1;
  dword_140404A6C[v9 + 290382647] = 0;
  crt_memcpy(
    (__m128i *)&dword_140404A6C[v9 + 290382652],
    (     __m128i *)((char *)&dword_140404A6C[1760 * v4 + 278846111] + (int)(a2 << 6)),
    v8);
  return v6;
}

//----- (0000000140051230) ----------------------------------------------------
void            sub_140051230(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;

  if ( game_connected )
  {
    v4 = world_event_count;
    v5 = game_tick;
    v6 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a2[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = a3[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    world_event_count = v4 + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a4;
    HIWORD(world_event_count) = 0;
  }
}

//----- (00000001400512D0) ----------------------------------------------------
void            sub_1400512D0(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;

  if ( game_connected )
  {
    v4 = game_tick;
    v5 = world_event_count;
    v6 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a3[2];
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a4[1];
      v7 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v6) = 0;
      v7 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a2;
    world_event_count = v5 + 1;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051480) ----------------------------------------------------
__int64            sub_140051480(unsigned int a1,      __m128i *a2, unsigned int a3, unsigned int a4)
{
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 result;

  if ( game_connected )
  {
    v7 = -1;
    do
      ++v7;
    while ( SR_VEC_PTR_LANES(128, a2, i8)[v7] );
    v8 = world_event_count;
    if ( (int)v7 > 63 )
      LODWORD(v7) = 63;
    v9 = game_tick;
    v10 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    crt_memcpy((__m128i *)((char *)&dword_140404A6C[297756301] + v10), a2, (int)v7);
    *((_BYTE *)&dword_140404A6C[297756301] + v10 + (int)v7) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v10) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v10) = a4;
    world_event_count = v8 + 1;
    HIWORD(world_event_count) = 0;
    return 0;
  }
  return result;
}

//----- (0000000140051560) ----------------------------------------------------
void            sub_140051560(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5;
  __int64 v6;
  unsigned int v7;

  if ( game_connected )
  {
    v5 = game_tick;
    v6 = (__int64)(int)world_event_count << 7;
    v7 = world_event_count + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 18;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v6) = a5;
    world_event_count = v7;
    HIWORD(world_event_count) = 0;
  }
}

//----- (00000001400515E0) ----------------------------------------------------
__int64            sub_1400515E0(unsigned int a1, unsigned int *a2, float a3, float a4)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;

  if ( game_connected )
  {
    v4 = game_tick;
    v5 = (__int64)(int)world_event_count << 7;
    v6 = world_event_count + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 9;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v5) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v5) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v5) = a2[2];
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    world_event_count = v6;
    HIWORD(world_event_count) = 0;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    return 0;
  }
  return result;
}

//----- (0000000140051650) ----------------------------------------------------
__int64            sub_140051650(unsigned int a1, unsigned int a2, float a3, float a4)
{
  unsigned int v4;
  __int64 v5;
  __int64 result;

  if ( game_connected )
  {
    v4 = game_tick;
    v5 = (__int64)(int)world_event_count++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = a2;
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    HIWORD(world_event_count) = 0;
    return 0;
  }
  return result;
}

//----- (00000001400516B0) ----------------------------------------------------
void            sub_1400516B0(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6;
  __int64 v7;
  unsigned int v8;

  if ( game_connected )
  {
    v6 = game_tick;
    v7 = (__int64)(int)world_event_count << 7;
    v8 = world_event_count + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 15;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a6;
    world_event_count = v8;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051730) ----------------------------------------------------
void            sub_140051730(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;

  if ( game_connected )
  {
    v8 = game_tick;
    v9 = 0;
    v10 = world_event_count;
    v11 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v11) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v11) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v11) = a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = a7[1];
      v12 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v11) = 0;
      v12 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = a8[1];
      v9 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v11) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
    world_event_count = v10 + 1;
    HIWORD(world_event_count) = 0;
  }
}

//----- (00000001400518B0) ----------------------------------------------------
__int64            sub_1400518B0(unsigned int a1, unsigned int a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 result;

  if ( game_connected )
  {
    v2 = game_tick;
    v3 = (__int64)(int)world_event_count++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = a1;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = a2;
    return 0;
  }
  return result;
}

//----- (0000000140051940) ----------------------------------------------------
__int64            sub_140051940(unsigned int a1)
{
  /* Ported to src/engine/item_phone.c and compared with the original
     (tools/native-compare, suite itemphone). Callers discard the result. */
  extern void item_phone_changed(int);
  item_phone_changed((int)a1);
  return 0;
}

//----- (00000001400519F0) ----------------------------------------------------
void            sub_1400519F0(int a1, int a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  int v8;

  if ( game_connected )
  {
    v2 = game_tick;
    v3 = (__int64)(int)world_event_count << 7;
    v4 = world_event_count + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 12;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    world_event_count = v4;
    v5 = 1116LL * a2 + 23492LL * a1;
    v6 = (*(unsigned int *)((char *)&dword_140404A6C[283831606] + v5) + 1) << 16;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[283831595] + v5)
       + 16
       * (*(unsigned int *)((char *)&dword_140404A6C[283831596] + v5)
        + 16 * *(unsigned int *)((char *)&dword_140404A6C[283831604] + v5));
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831588]
                                                                                  + v5)
                                                                + 2
                                                                * (a2
                                                                 + 8
                                                                 * (a1
                                                                  + 16
                                                                  * (*(unsigned int *)((char *)&dword_140404A6C[283831591]
                                                                                     + v5)
                                                                   + (*(unsigned int *)((char *)&dword_140404A6C[283831603]
                                                                                      + v5) << 8))));
    v8 = *(unsigned int *)((char *)&dword_140404A6C[283831605] + v5);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v8 / 60 + v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831607]
                                                                                  + v5);
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051B00) ----------------------------------------------------
void            sub_140051B00(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4;
  signed int v5;
  __int64 v6;
  __int64 v7;

  if ( game_connected )
  {
    v4 = game_tick;
    v5 = 64;
    v6 = (int)world_event_count;
    if ( a4 <= 64 )
      v5 = a4;
    v7 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 22;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 8);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = v5;
    crt_memcpy(
      (__m128i *)&dword_140404A6C[32 * v6 + 297756301],
      (     __m128i *)((char *)&dword_140404A6C[5873 * a1 + 283831611 + 279 * a2] + (int)(a3 << 6)),
      v5);
    world_event_count = v6 + 1;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051BD0) ----------------------------------------------------
void            sub_140051BD0(int a1, int a2)
{
  __int64 v2;
  unsigned int *v3;
  int v4;
  signed int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;

  if ( game_connected )
  {
    v2 = -1;
    v3 = &dword_140404A6C[5873 * a1 + 283831611 + 279 * a2];
    do
      ++v2;
    while ( *((_BYTE *)v3 + v2) );
    v4 = ((int)v2 + 1) >> 6;
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = game_tick;
      v7 = (a2 << 8) + a1;
      do
      {
        v8 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        v9 = *(_OWORD *)v3;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 22;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v6;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = v7;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = v5++;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = 64;
        v10 = *((_OWORD *)v3 + 1);
        v3 += 16;
        *(_OWORD *)((char *)&dword_140404A6C[297756301] + v8) = v9;
        v11 = *((_OWORD *)v3 - 2);
        *(_OWORD *)((char *)&dword_140404A6C[297756305] + v8) = v10;
        v12 = *((_OWORD *)v3 - 1);
        *(_OWORD *)((char *)&dword_140404A6C[297756309] + v8) = v11;
        *(_OWORD *)((char *)&dword_140404A6C[297756313] + v8) = v12;
      }
      while ( v5 <= v4 );
    }
  }
}

//----- (0000000140051CF0) ----------------------------------------------------
void            sub_140051CF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;

  if ( game_connected )
  {
    v5 = world_event_count;
    v6 = 0;
    v7 = game_tick;
    v8 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = a3;
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v8) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v8) = a4[1];
      v9 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v8) = 0;
      v9 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v8) = v9;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v8) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v8) = a5[1];
      v6 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v8) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v8) = v6;
    world_event_count = v5 + 1;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051DC0) ----------------------------------------------------
void            sub_140051DC0(int a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int128 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;

  if ( game_connected )
  {
    v2 = game_tick;
    v3 = 3597LL * a1;
    v4 = (__int64)(int)world_event_count++ << 7;
    v5 = *(_OWORD *)&dword_140404A6C[v3 + 71856254];
    v6 = dword_140404A6C[v3 + 71856286] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4) = 7;
    v7 = *(_QWORD *)&dword_140404A6C[v3 + 71856258];
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) = v2;
    v8 = dword_140404A6C[v3 + 71856292];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) = a1
                                                                + ((dword_140404A6C[v3 + 71859139]
                                                                  + 2 * (dword_140404A6C[v3 + 71856253] + 2 * v6)) << 8);
    v9 = dword_140404A6C[v3 + 71859819];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) = v8;
    v10 = dword_140404A6C[v3 + 71859820];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) = dword_140404A6C[v3 + 71859816]
                                                                + 2
                                                                * (dword_140404A6C[v3 + 71859825]
                                                                 + 32 * (dword_140404A6C[v3 + 71859817] + 8 * v9));
    v11 = v10
        + 8
        * (dword_140404A6C[v3 + 71859818]
         + 16
         * (dword_140404A6C[v3 + 71859821]
          + 32
          * (dword_140404A6C[v3 + 71859822] + 16
                                            * (dword_140404A6C[v3 + 71859823] + 16 * dword_140404A6C[v3 + 71859826]))));
    v12 = dword_140404A6C[v3 + 71856260];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4) = v11;
    *(_OWORD *)((char *)&dword_140404A6C[297756301] + v4) = v5;
    *(_QWORD *)((char *)&dword_140404A6C[297756305] + v4) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756307] + v4) = v12;
    *(_WORD *)((char *)&dword_140404A6C[297756308] + v4) = dword_140404A6C[v3 + 71856261];
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 2) = BYTE2(dword_140404A6C[v3 + 71856261]);
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 3) = 0;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140051F50) ----------------------------------------------------
__int64            sub_140051F50(signed int a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  if ( game_connected )
  {
    v1 = game_tick;
    v2 = (__int64)(int)world_event_count++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v2) = 8;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v2) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v2) = a1;
    v3 = 3597LL * a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v2) = dword_140404A6C[v3 + 71856272];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v2) = dword_140404A6C[v3 + 71856288];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v2) = dword_140404A6C[v3 + 71856265];
    HIWORD(world_event_count) = 0;
    return 0;
  }
  return result;
}

//----- (0000000140051FF0) ----------------------------------------------------
void            sub_140051FF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;

  if ( game_connected )
  {
    v5 = world_event_count;
    v6 = game_tick;
    v7 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 21;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a4;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v7) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v7) = a5[1];
      v8 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v7) = 0;
      v8 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v7) = v8;
    world_event_count = v5 + 1;
    HIWORD(world_event_count) = 0;
  }
}

//----- (0000000140052090) ----------------------------------------------------
__int64 sub_140052090()
{
  float v0;
  unsigned int v1;
  float v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  __int64 result;

  if ( game_connected )
  {
    v0 = *(float *)&dword_140404A6C[335047074];
    v1 = world_event_count + 1;
    v2 = *(float *)&dword_140404A6C[335047062] * 10.0;
    v3 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 13;
    world_event_count = v1;
    dword_140404A6C[335047064] = (int)v2;
    dword_140404A6C[335047076] = (int)(float)(v0 * 10.0);
    dword_140404A6C[335047070] = (int)(float)(*(float *)&dword_140404A6C[335047068] * 10.0);
    v4 = (int)v2 + (dword_140404A6C[335047070] << 16);
    v5 = (int)(float)(*(float *)&dword_140404A6C[335047086] * 10.0);
    dword_140404A6C[335047082] = (int)(float)(*(float *)&dword_140404A6C[335047080] * 10.0);
    v6 = dword_140404A6C[335047076] + (dword_140404A6C[335047082] << 16);
    dword_140404A6C[335047088] = v5;
    dword_140404A6C[335047094] = (int)(float)(*(float *)&dword_140404A6C[335047092] * 10.0);
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = game_tick;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v5;
    HIWORD(world_event_count) = 0;
    return 0;
  }
  return result;
}

//----- (00000001400521A0) ----------------------------------------------------
double            sub_1400521A0(int a1, float a2, float a3, float a4)
{
  int v5;
  unsigned int *v6;
  float v8[6];

  v8[0] = 0.0;
  v8[1] = -0.03125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  v8[2] = a4 * -0.5;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

//----- (0000000140052240) ----------------------------------------------------
double            sub_140052240(int a1, int a2, double a3)
{
  __int64 v3;
  __m128 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __m128d v13;
  __m128 v14;
  double v15;
  unsigned int v16;
  unsigned int v17;
  __m128d v18;
  unsigned int v19;
  __int64 v20;
  __m128 v21;
  unsigned int v22;
  unsigned int v23;
  __m128d v24;
  unsigned int v25;
  __int64 v26;
  __m128 v27;
  unsigned int v28;
  unsigned int v29;
  __m128d v30;
  unsigned int v31;
  __int64 v32;
  __m128 v33;
  unsigned int v34;
  unsigned int v35;
  __m128 v36;
  unsigned int v37;
  unsigned int v38;
  double v39;
  unsigned int v40;
  __int64 v41;
  __m128 v42;
  unsigned int v43;
  unsigned int v44;
  double v45;
  unsigned int v46;
  __int64 v47;
  __m128 v48;
  unsigned int v49;
  unsigned int v50;
  double v51;
  unsigned int v52;
  __int64 v53;
  __m128 v54;
  unsigned int v55;
  float v56;
  int v57;
  unsigned int v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  int v73;
  unsigned int *v74;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140052240[16];
#define v76 (*(int (*))(void *)(sr_frame_140052240 + 0)) /* [rsp+20h] */
#define v77 (*(int (*))(void *)(sr_frame_140052240 + 4)) /* [rsp+24h] */
#define v78 (*(float (*))(void *)(sr_frame_140052240 + 8)) /* [rsp+28h] */

  v3 = 4;
  v5 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v6 = 4;
  v7 = 0.0;
  v8 = 1268LL * a2;
  v9 = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[178322641] = 0;
  v10 = (int)dword_140404A6C[v8 + 278521292];
  dword_140404A6C[178519250] = 0;
  v11 = 3 * v10;
  v12 = *(float *)&dword_140404A6C[6 * v10 + 437914199] + 0.0049999999;
  do
  {
    v13 = _mm_cvtps_pd(v5);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], v11, a3));
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 0.39269908169875;
    v15 = v12;
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0] * v12;
    dword_140404A6C[3 * v9 + 177167567] = v16;
    *(float *)&v17 = -(*(double *)SR_VEC_LANES(128, v14, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v17;
    v18 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v16;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v17;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v19 = dword_140404A6C[177167565];
    v21 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v18, f64)[0], v20, COERCE_DOUBLE((unsigned __int64)v16)));
    *(float *)&v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v12;
    dword_140404A6C[3 * v19 + 177167567] = v22;
    *(float *)&v23 = -(*(double *)SR_VEC_LANES(128, v21, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v23;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v22;
    SR_VEC_LANES(128, v18, f64)[0] = SR_VEC_LANES(128, v18, f64)[0] + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v23;
    v24 = _mm_cvtps_pd(_mm_cvtpd_ps(v18));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v25 = dword_140404A6C[177167565];
    v27 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v24, f64)[0], v26, COERCE_DOUBLE((unsigned __int64)v22)));
    SR_VEC_LANES(128, v24, f64)[0] = SR_VEC_LANES(128, v24, f64)[0] + 0.39269908169875;
    *(float *)&v28 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v27, (__m128d)v27, 1), f64)[0] * v12;
    dword_140404A6C[3 * v25 + 177167567] = v28;
    *(float *)&v29 = -(*(double *)SR_VEC_LANES(128, v27, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v29;
    v30 = _mm_cvtps_pd(_mm_cvtpd_ps(v24));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v28;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v29;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v31 = dword_140404A6C[177167565];
    v33 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v30, f64)[0], v32, COERCE_DOUBLE((unsigned __int64)v28)));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v33, (__m128d)v33, 1), f64)[0] * v12;
    dword_140404A6C[3 * v31 + 177167567] = LODWORD(a3);
    SR_VEC_LANES(128, v30, f64)[0] = SR_VEC_LANES(128, v30, f64)[0] + 0.39269908169875;
    *(float *)&v34 = -(*(double *)SR_VEC_LANES(128, v33, u64) * v12);
    v5 = _mm_cvtpd_ps(v30);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v34;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v34;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v9 = ++dword_140404A6C[177167565];
    --v6;
  }
  while ( v6 );
  v35 = dword_140404A6C[v8 + 278521315];
  do
  {
    v36 = _mm_castpd_ps(sub_1401F8A50(v7, v11, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
    *(float *)&v37 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v36, (__m128d)v36, 1), f64)[0] * v15;
    dword_140404A6C[3 * v9 + 177167567] = v37;
    *(float *)&v38 = -(*(double *)SR_VEC_LANES(128, v36, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v38;
    v39 = (float)(v7 + 0.39269908169875);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v38;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v40 = dword_140404A6C[177167565];
    v42 = _mm_castpd_ps(sub_1401F8A50(v39, v41, COERCE_DOUBLE((unsigned __int64)v37)));
    *(float *)&v43 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v42, (__m128d)v42, 1), f64)[0] * v15;
    dword_140404A6C[3 * v40 + 177167567] = v43;
    *(float *)&v44 = -(*(double *)SR_VEC_LANES(128, v42, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v44;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v43;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v44;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v45 = (float)(v39 + 0.39269908169875);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v46 = dword_140404A6C[177167565];
    v48 = _mm_castpd_ps(sub_1401F8A50(v45, v47, COERCE_DOUBLE((unsigned __int64)v43)));
    *(float *)&v49 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v48, (__m128d)v48, 1), f64)[0] * v15;
    dword_140404A6C[3 * v46 + 177167567] = v49;
    *(float *)&v50 = -(*(double *)SR_VEC_LANES(128, v48, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v50;
    v51 = (float)(v45 + 0.39269908169875);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v49;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v50;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v52 = dword_140404A6C[177167565];
    v54 = _mm_castpd_ps(sub_1401F8A50(v51, v53, COERCE_DOUBLE((unsigned __int64)v49)));
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v54, (__m128d)v54, 1), f64)[0] * v15;
    dword_140404A6C[3 * v52 + 177167567] = LODWORD(a3);
    *(float *)&v55 = -(*(double *)SR_VEC_LANES(128, v54, u64) * v15);
    v7 = v51 + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v55;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v55;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v9 = ++dword_140404A6C[177167565];
    --v3;
  }
  while ( v3 );
  v56 = *(float *)&dword_140404A6C[v8 + 278521347];
  v57 = 1;
  dword_140404A6C[3 * v9 + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v56 * -0.125;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v58 = dword_140404A6C[177495247];
  do
  {
    v59 = v57 & 0xF;
    dword_140404A6C[3 * v58 + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    v60 = ((_BYTE)v57 + 1) & 0xF;
    v61 = v60 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 16;
    v62 = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60;
    v63 = ((_BYTE)v57 + 2) & 0xF;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    v64 = v63 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 17;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
    v65 = ((_BYTE)v57 + 3) & 0xF;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v64;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 17;
    v66 = v57 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v65 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v65;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v57 += 4;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    v58 = ++dword_140404A6C[177495247];
  }
  while ( v57 <= 16 );
  v67 = *(float *)&dword_140404A6C[v8 + 278521348] * 0.5;
  v76 = 0;
  v68 = v56 * 0.5;
  v69 = *(float *)&dword_140404A6C[v8 + 278521346];
  v77 = -1132462080;
  v70 = v67 - v68;
  v71 = v68 + v67;
  v72 = *(float *)&dword_140404A6C[v8 + 278521349];
  v78 = v70;
  sub_140002D00((float *)&v76, v69, v72, v71);
  v77 = -1107296256;
  v78 = 0.0;
  sub_140002D00((float *)&v76, 0.03125, 0.125, 0.03125);
  v73 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v74 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v74 - 1) = 0;
      ++v73;
      *(_QWORD *)(v74 + 1) = 0;
      *(_QWORD *)(v74 + 3) = 0;
      v74 += 6;
    }
    while ( v73 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v76
#undef v77
#undef v78

//----- (0000000140054750) ----------------------------------------------------
__int64            sub_140054750(int a1, double a2, float a3, float a4)
{
  __int64 v4;
  int v5;
  float v6;
  double v7;
  int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  float v12;
  __m128 v13;
  double v14;
  __int64 v15;
  __m128d v16;
  __int64 v17;
  __m128 v18;
  double v19;
  float v20;
  float v21;
  float v22;
  int v23;
  unsigned int v24;
  __m128d v25;
  __int64 v26;
  __m128 v27;
  double v28;
  float v29;
  float v30;
  float v31;
  int v32;
  unsigned int v33;
  __m128d v34;
  __m128 v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  int v56;
  unsigned int *v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  bool v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  unsigned int *v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 result;
  unsigned int *v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;

  v79 = LODWORD(a2);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = 2;
  v9 = 0;
  v10 = 0;
  v11 = a1;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177544400] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  do
  {
    if ( (unsigned int)v10 >= 2 )
      v12 = v6;
    else
      v12 = *(float *)&v7;
    if ( (_DWORD)v11 == 45 )
    {
      if ( !v10 || v10 == 3 )
        v12 = v6;
      else
        v12 = *(float *)&v7;
    }
    v13 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v14 = v12;
    v15 = 2;
    do
    {
      v16 = _mm_cvtps_pd(v13);
      v18 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v16, f64)[0], v4, v7));
      HIDWORD(v19) = 0;
      *(float *)&v19 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v18, (__m128d)v18, 1), f64)[0] * v14;
      v20 = -(*(double *)SR_VEC_LANES(128, v18, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v21 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v21 = 0.375;
        }
        else
        {
          v21 = 0.5;
        }
      }
      else
      {
        v21 = -0.5;
      }
      v22 = v21 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v22 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v22 = a4 * 0.375;
          }
          else
          {
            v22 = a4 * 0.5;
          }
        }
        else
        {
          v22 = a4 * -0.5;
        }
      }
      v23 = 3 * v9;
      SR_VEC_LANES(128, v16, f64)[0] = SR_VEC_LANES(128, v16, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[v23 + 177167568] = v22;
      *(float *)&dword_140404A6C[v23 + 177167569] = v20;
      dword_140404A6C[v23 + 177167567] = LODWORD(v19);
      v24 = ++dword_140404A6C[177167565];
      v25 = _mm_cvtps_pd(_mm_cvtpd_ps(v16));
      v27 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v25, f64)[0], v17, v19));
      HIDWORD(v28) = 0;
      *(float *)&v28 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v27, (__m128d)v27, 1), f64)[0] * v14;
      v29 = -(*(double *)SR_VEC_LANES(128, v27, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v30 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v30 = 0.375;
        }
        else
        {
          v30 = 0.5;
        }
      }
      else
      {
        v30 = -0.5;
      }
      v31 = v30 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v31 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v31 = a4 * 0.375;
          }
          else
          {
            v31 = a4 * 0.5;
          }
        }
        else
        {
          v31 = a4 * -0.5;
        }
      }
      v32 = 3 * v24;
      SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 1.047197551196667;
      dword_140404A6C[v32 + 177167567] = LODWORD(v28);
      *(float *)&dword_140404A6C[v32 + 177167568] = v31;
      *(float *)&dword_140404A6C[v32 + 177167569] = v29;
      v33 = ++dword_140404A6C[177167565];
      v34 = _mm_cvtps_pd(_mm_cvtpd_ps(v25));
      v35 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v34, f64)[0], v26, v28));
      HIDWORD(v7) = 0;
      *(float *)&v7 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v35, (__m128d)v35, 1), f64)[0] * v14;
      v36 = -(*(double *)SR_VEC_LANES(128, v35, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v37 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v37 = 0.375;
        }
        else
        {
          v37 = 0.5;
        }
      }
      else
      {
        v37 = -0.5;
      }
      v38 = v37 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v38 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v38 = a4 * 0.375;
          }
          else
          {
            v38 = a4 * 0.5;
          }
        }
        else
        {
          v38 = a4 * -0.5;
        }
      }
      v39 = (int)(3 * v33);
      SR_VEC_LANES(128, v34, f64)[0] = SR_VEC_LANES(128, v34, f64)[0] + 1.047197551196667;
      dword_140404A6C[v39 + 177167567] = LODWORD(v7);
      *(float *)&dword_140404A6C[v39 + 177167568] = v38;
      *(float *)&dword_140404A6C[v39 + 177167569] = v36;
      v9 = ++dword_140404A6C[177167565];
      v13 = _mm_cvtpd_ps(v34);
      --v15;
    }
    while ( v15 );
    v6 = a3;
    ++v10;
    *(_QWORD *)&v7 = v79;
  }
  while ( v10 < 4 );
  v40 = dword_140404A6C[177544400];
  v41 = 8;
  do
  {
    v42 = v41 - 2;
    dword_140404A6C[5 * v40 + 177544401] = 4;
    v43 = v41 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 - 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 6;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 5;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v41 - 6;
    v44 = v41 - 4;
    ++dword_140404A6C[177544400];
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 + 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 4;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 5;
    v45 = v41 - 3;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 + 2;
    v46 = v41 + 3;
    v41 += 6;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v46;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v45;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v46;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v42;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v43;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v45;
    v40 = ++dword_140404A6C[177544400];
  }
  while ( v41 < 26 );
  v47 = 6;
  dword_140404A6C[5 * v40 + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 5;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 0;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 2;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 3;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 18;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 23;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 21;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 20;
  v48 = dword_140404A6C[178519250];
  do
  {
    dword_140404A6C[2 * v48 + 178519251] = v47 - 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 5;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 4;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 3;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 3;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 4;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 1;
    v49 = v47 + 5;
    v47 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v49;
    v48 = ++dword_140404A6C[178519250];
  }
  while ( v47 < 24 );
  do
  {
    v50 = v8 - 2;
    dword_140404A6C[2 * v48 + 178519251] = v8 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 + 2;
    v51 = v8 + 3;
    v8 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v51;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v51;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v50;
    v48 = ++dword_140404A6C[178519250];
  }
  while ( v8 < 26 );
  v52 = 1268 * v11;
  v53 = 12 * dword_140404A6C[177167565];
  dword_140404A6C[1268 * v11 + 278522247] = 0;
  v54 = sr_path_malloc(v53);
  v55 = dword_140404A6C[177167565];
  v56 = 0;
  *(_QWORD *)&dword_140404A6C[1268 * v11 + 278522249] = v54;
  if ( v55 > 0 )
  {
    v57 = &dword_140404A6C[177167569];
    do
    {
      v57 += 3;
      ++v56;
      v58 = (int)(3 * dword_140404A6C[v52 + 278522247]);
      v59 = *(_QWORD *)&dword_140404A6C[v52 + 278522249];
      *(_DWORD *)(v59 + 4 * v58) = *(v57 - 5);
      *(_DWORD *)(v59 + 4 * v58 + 4) = *(v57 - 4);
      *(_DWORD *)(v59 + 4 * v58 + 8) = *(v57 - 3);
      ++dword_140404A6C[v52 + 278522247];
      v55 = dword_140404A6C[177167565];
    }
    while ( v56 < (int)dword_140404A6C[177167565] );
  }
  dword_140404A6C[v52 + 278522251] = 0;
  *(_QWORD *)&dword_140404A6C[v52 + 278522253] = 0;
  dword_140404A6C[v52 + 278522255] = 0;
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522256 + v52] = v55;
  v60 = sr_path_malloc(4 * v55);
  v61 = 0;
  v62 = (signed int)dword_140404A6C[177167565] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522257 + v52] = v60;
  if ( !v62 )
  {
    v63 = 0;
    do
    {
      v63 += 4;
      *(_DWORD *)(v63 + *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522257 + v52] - 4) = v61++;
    }
    while ( v61 < (int)dword_140404A6C[177167565] );
  }
  v64 = (int)dword_140404A6C[177544400];
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522259 + v52] = 0;
  v65 = sr_path_malloc(36 * v64);
  v66 = 0;
  v62 = (signed int)dword_140404A6C[177544400] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522261 + v52] = v65;
  if ( !v62 )
  {
    v67 = &dword_140404A6C[177544403];
    do
    {
      v67 += 5;
      ++v66;
      v68 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v68)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v68)
                + 8) = *(v67 - 6);
      v69 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v69)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v69)
                + 12) = *(v67 - 5);
      v70 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v70)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v70)
                + 16) = *(v67 - 4);
      v71 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v71)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v71)
                + 20) = *(v67 - 3);
      v72 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v72)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v72)
                + 4) = 4;
      v73 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v73);
    }
    while ( v66 < (int)dword_140404A6C[177544400] );
  }
  v74 = (int)dword_140404A6C[178519250];
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522263 + v52] = 0;
  result = sr_path_malloc(12 * v74);
  v62 = (signed int)dword_140404A6C[178519250] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522265 + v52] = result;
  if ( !v62 )
  {
    v76 = &dword_140404A6C[178519252];
    do
    {
      v76 += 2;
      ++v5;
      v77 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v77)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v77)) = *(v76 - 3);
      v78 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v78)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v78)
                + 4) = *(v76 - 2);
      result = (int)dword_140404A6C[v52 + 278522251];
      ++dword_140404A6C[14 * result + 278522263 + v52];
    }
    while ( v5 < (int)dword_140404A6C[178519250] );
  }
  ++dword_140404A6C[v52 + 278522251];
  return result;
}

//----- (00000001400555C0) ----------------------------------------------------
double            sub_1400555C0(int a1, __int64 a2, double a3, float a4, float a5)
{
  float v5;
  int v6;
  unsigned int v8;
  int v9;
  float v10;
  __m128 v11;
  double v12;
  __int64 v13;
  __m128d v14;
  __int64 v15;
  __m128 v16;
  float v17;
  double v18;
  float v19;
  float v20;
  int v21;
  unsigned int v22;
  __m128d v23;
  __int64 v24;
  __m128 v25;
  float v26;
  double v27;
  float v28;
  float v29;
  int v30;
  unsigned int v31;
  __m128d v32;
  __m128 v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  unsigned int *v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  unsigned int v53;

  v53 = LODWORD(a3);
  v5 = a4;
  v6 = a2;
  v8 = 0;
  v9 = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177544400] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  do
  {
    if ( (unsigned int)v9 >= 2 )
      v10 = v5;
    else
      v10 = *(float *)&a3;
    if ( v6 == 45 )
    {
      if ( !v9 || v9 == 3 )
        v10 = v5;
      else
        v10 = *(float *)&a3;
    }
    v11 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v12 = v10;
    v13 = 2;
    do
    {
      v14 = _mm_cvtps_pd(v11);
      v16 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v14, f64)[0], a2, a3));
      HIDWORD(v18) = 0;
      v17 = -(*(double *)SR_VEC_LANES(128, v16, u64) * v12);
      *(float *)&v18 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v16, (__m128d)v16, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v19 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v19 = 0.375;
        }
        else
        {
          v19 = 0.5;
        }
      }
      else
      {
        v19 = -0.5;
      }
      v20 = a5 * v19;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v20 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v20 = a5 * 0.375;
          }
          else
          {
            v20 = a5 * 0.5;
          }
        }
        else
        {
          v20 = a5 * -0.5;
        }
      }
      v21 = 3 * v8;
      SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[v21 + 177167568] = v20;
      dword_140404A6C[v21 + 177167567] = LODWORD(v18);
      *(float *)&dword_140404A6C[v21 + 177167569] = v17;
      v22 = ++dword_140404A6C[177167565];
      v23 = _mm_cvtps_pd(_mm_cvtpd_ps(v14));
      v25 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v23, f64)[0], v15, v18));
      HIDWORD(v27) = 0;
      v26 = -(*(double *)SR_VEC_LANES(128, v25, u64) * v12);
      *(float *)&v27 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v25, (__m128d)v25, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v28 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v28 = 0.375;
        }
        else
        {
          v28 = 0.5;
        }
      }
      else
      {
        v28 = -0.5;
      }
      v29 = a5 * v28;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v29 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v29 = a5 * 0.375;
          }
          else
          {
            v29 = a5 * 0.5;
          }
        }
        else
        {
          v29 = a5 * -0.5;
        }
      }
      v30 = 3 * v22;
      SR_VEC_LANES(128, v23, f64)[0] = SR_VEC_LANES(128, v23, f64)[0] + 1.047197551196667;
      dword_140404A6C[v30 + 177167567] = LODWORD(v27);
      *(float *)&dword_140404A6C[v30 + 177167568] = v29;
      *(float *)&dword_140404A6C[v30 + 177167569] = v26;
      v31 = ++dword_140404A6C[177167565];
      v32 = _mm_cvtps_pd(_mm_cvtpd_ps(v23));
      v33 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v32, f64)[0], v24, v27));
      HIDWORD(a3) = 0;
      v34 = -(*(double *)SR_VEC_LANES(128, v33, u64) * v12);
      *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v33, (__m128d)v33, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v35 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v35 = 0.375;
        }
        else
        {
          v35 = 0.5;
        }
      }
      else
      {
        v35 = -0.5;
      }
      v36 = a5 * v35;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v36 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v36 = a5 * 0.375;
          }
          else
          {
            v36 = a5 * 0.5;
          }
        }
        else
        {
          v36 = a5 * -0.5;
        }
      }
      v37 = (int)(3 * v31);
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 1.047197551196667;
      dword_140404A6C[v37 + 177167567] = LODWORD(a3);
      *(float *)&dword_140404A6C[v37 + 177167568] = v36;
      *(float *)&dword_140404A6C[v37 + 177167569] = v34;
      v8 = ++dword_140404A6C[177167565];
      v11 = _mm_cvtpd_ps(v32);
      --v13;
    }
    while ( v13 );
    v5 = a4;
    ++v9;
    *(_QWORD *)&a3 = v53;
  }
  while ( v9 < 4 );
  v38 = dword_140404A6C[177544400];
  v39 = 8;
  do
  {
    v40 = v39 - 2;
    dword_140404A6C[5 * v38 + 177544401] = 4;
    v41 = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 6;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 5;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v39 - 6;
    v42 = v39 - 4;
    ++dword_140404A6C[177544400];
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 4;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 5;
    v43 = v39 - 3;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 2;
    v44 = v39 + 3;
    v39 += 6;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v43;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v42;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v40;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v43;
    v38 = ++dword_140404A6C[177544400];
  }
  while ( v39 < 26 );
  v45 = 0;
  dword_140404A6C[5 * v38 + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 5;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 0;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 2;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 3;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 18;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 23;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 21;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 20;
  if ( (int)dword_140404A6C[177544400] > 0 )
  {
    v46 = dword_140404A6C[177495247];
    v47 = &dword_140404A6C[177544402];
    do
    {
      ++v45;
      v48 = (int)(3 * v46);
      v49 = *v47;
      v47 += 5;
      dword_140404A6C[v48 + 177495248] = v49;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(v47 - 4);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(v47 - 3);
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v50 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v50 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v50 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[v50 + 178011348] = 1065353216;
      dword_140404A6C[v50 + 178011350] = 1065353216;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *(v47 - 5);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(v47 - 3);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(v47 - 2);
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v51 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v51 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v51 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[v51 + 178011348] = 1065353216;
      dword_140404A6C[v51 + 178011350] = 1065353216;
      v46 = ++dword_140404A6C[177495247];
    }
    while ( v45 < (int)dword_140404A6C[177544400] );
  }
  return sub_1401449C0(a1, 0);
}

//----- (00000001400561C0) ----------------------------------------------------
void            sub_1400561C0(int a1)
{
  int v1;
  int v3;
  unsigned int *v4;
  unsigned int v5;
  int v6;
  unsigned int *v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int *v10;
  _DWORD sr_quad_position[3];
  _DWORD sr_quad_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400561C0[96];
#define v12 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 0)) /* [rsp+0h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 88)) /* [rsp+58h] */

  v1 = 0;
  sr_quad_position[2] = -1119879168;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  (*(__int64 *)sr_quad_position) = 0;
  sub_140003460((float *)&(*(__int64 *)sr_quad_position), 0.015625, 0.03125, 0.09375);
  v3 = 0;
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v4 = &dword_140404A6C[178388179];
    do
    {
      *(_QWORD *)(v4 - 1) = 1056964608;
      ++v3;
      *(_QWORD *)(v4 + 1) = 1056964608;
      *(_QWORD *)(v4 + 3) = 1056964608;
      *(_QWORD *)(v4 + 5) = 1056964608;
      v4 += 8;
    }
    while ( v3 < (int)dword_140404A6C[178322641] );
  }
  (*(__int128 *)sr_quad_matrix) = xmmword_140278D30;
  sr_quad_position[2] = 1015021568;
  (*(__int128 *)(sr_quad_matrix + 4)) = xmmword_140278D30;
  sr_quad_matrix[8] = 1065353216;
  sub_14007B2A0((__int64)sr_quad_matrix, (float *)sr_quad_matrix + 3, sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_quad_position), (float *)sr_quad_matrix, sr_export_float_lane_container(1023410176), 0.03125);
  v5 = dword_140404A6C[177495247];
  v6 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v7 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v7 - 1) = 0;
      ++v6;
      *(_QWORD *)(v7 + 1) = 0;
      *(_QWORD *)(v7 + 3) = 0;
      v7 += 6;
      v5 = dword_140404A6C[177495247];
    }
    while ( v6 < (int)dword_140404A6C[177495247] );
  }
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v8 = &dword_140404A6C[178322642];
    v9 = &dword_140404A6C[178388181];
    v10 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v5 + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v9 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v9;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v9[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      v8 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      v9 += 8;
      v10 += 8;
      ++v1;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v10 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v10 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v10 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v10 - 6);
      v5 = ++dword_140404A6C[177495247];
    }
    while ( v1 < (int)dword_140404A6C[178322641] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v12
#undef v17

//----- (0000000140056560) ----------------------------------------------------
void            sub_140056560()
{
  unsigned int v0;
  float *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v0 = dword_140404A6C[284024893];
  v1 = (float *)&dword_140404A6C[188872560];
  v2 = 0;
  v3 = 768;
  dword_140404A6C[188872557] = -981467136;
  dword_140404A6C[188872559] = -981467136;
  do
  {
    v4 = 0;
    v5 = 638;
    v6 = (float)v2 * 0.015625;
    v7 = (float)(v2 - 704 + 64) * (float)(v2 - 704 + 64);
    v19 = v6 * 0.5;
    do
    {
      v8 = v4 - 704;
      v9 = (float)v4 * 0.015625;
      v10 = fminf(
              fmaxf((float)(fsqrt((float)((float)(v8 + 64) * (float)(v8 + 64)) + v7) * 0.00390625) - 0.75, 0.0),
              3.0);
      v11 = v10 * v10;
      v12 = SR_VEC_READ_LANES(128, sub_1401305F0(v9, v6, -1), f32)[0] + v11;
      v13 = (float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0(v9 * 0.5, v19, -1), f32)[0] * 32.0) + (float)(v11 * 8.0)) * v11;
      v14 = fminf(
              fmaxf(
                (float)(fsqrt((float)((float)v8 * (float)v8) + (float)((float)(v2 - 704) * (float)(v2 - 704))) - 320.0)
              * 0.015625,
                0.0),
              1.0);
      *v1 = (float)((float)((float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0((float)v4 * 0.03125, (float)v2 * 0.03125, -1), f32)[0] * 8.0)
                                  + 23.75)
                          + (float)((float)(v12 * 16.0) + v13))
                  * v14)
          + (float)((float)(1.0 - v14) * 23.875);
      if ( v0 )
        goto LABEL_12;
      if ( v3 <= 130 )
      {
        if ( v3 <= 0 )
          goto LABEL_12;
      }
      else if ( (unsigned int)v4 <= 0x2FF )
      {
        v15 = fminf(
                fmaxf(
                  fmaxf(1.0 - fminf((float)(v3 - 130) * 0.25, 1.0), 1.0 - fminf((float)(v5 + 130) * 0.25, 1.0)),
                  0.0),
                1.0);
        *v1 = (float)((float)(36.0 - (float)(v15 * 24.0)) * (float)(v15 * v15)) + 11.75;
      }
      if ( (unsigned int)v4 <= 0x27D )
      {
        v16 = fminf((float)v3 * 0.25, 1.0);
        v17 = 1.0 - fminf((float)v5 * 0.25, 1.0);
        if ( v3 > 130 )
          v17 = 0.0;
        v18 = fminf(fmaxf(fmaxf(v17, 1.0 - v16), 0.0), 1.0);
        *v1 = (float)((float)(36.0 - (float)(v18 * 24.0)) * (float)(v18 * v18)) + 11.75;
      }
LABEL_12:
      v6 = (float)v2 * 0.015625;
      ++v4;
      v7 = (float)(v2 - 704 + 64) * (float)(v2 - 704 + 64);
      --v5;
      ++v1;
    }
    while ( v4 < 2049 );
    ++v2;
    --v3;
  }
  while ( v3 > -1281 );
}

//----- (00000001400589A0) ----------------------------------------------------
__int64            sub_1400589A0(unsigned int a1, int a2, __int64 a3)
{
  signed int v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  signed int v7;
  int v8;
  __m128i si128;
  __m128i v10;
  __int64 v11;
  unsigned int *v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  unsigned int *v19;
  __int64 v20;
  signed int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char *v29;
  unsigned int *v30;
  char v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned int *v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  int v43;
  bool v44;
  unsigned int v45;
       char *v46;
       __m128i *v47;
  int v48;
  char *v49;
  float v50;
  double v51;
  float v52;
  int v53;
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

  v3 = game_day_time + 630000;
  v59 = a3;
  v4 = a2;
  v5 = dword_140404A6C[487148678] + 19;
  v57 = a1;
  if ( (signed int)(game_day_time + 630000) > 3870000 )
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
    if ( !item_block_region_count || !dword_140404A6C[487149972] )
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
    crt_sprintf(v65, "SECRET%02d.TXT", dword_140404A6C[487148677]);
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
      crt_memset((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v39)), 0, 0x45Cu);
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
      *(float *)((char *)&dword_140404A6C[283831609] + v41) = (float)v43 * 0.000024999999;
      v47 = (     __m128i *)((char *)&dword_140404A6C[283831611] + v39);
      crt_sprintf(
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
      crt_sprintf(v66, "\nThis mission expires at %d:%d%d\n\n", v48, v33 % 60 / 10 % 6, v33 % 60 % 10);
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
      *(float *)&v51 = *(float *)&v51 - 1.5707964;
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

//----- (00000001400590B0) ----------------------------------------------------
void            sub_1400590B0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3;
  unsigned int *v4;
  int *v5;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  float v17;
  float v18;
  unsigned int v19;
  unsigned __int64 i;
  int v21;
  __int64 v22;
  unsigned int *v23;
  __int64 v24;
  __int64 v25;
  float v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
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
    v3 = game_day_time + 414000;
    v4 = a3;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
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
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * v21 + 283831588 + v24]), 0, 0x45Cu);
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
        *(float *)((char *)&dword_140404A6C[283831609] + v25) = (float)v27 * 0.000024999999;
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
      v26 = v26 * -0.0000125;
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
                             * (float)((float)v34 * -0.000024999999)))
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

//----- (0000000140059640) ----------------------------------------------------
void            sub_140059640(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  signed int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned int *v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __m128i v20;
  unsigned int v21;

  v4 = game_day_time + 306000;
  v5 = a2;
  v6 = a1;
  v7 = dword_140404A6C[487148678] + 19;
  if ( (signed int)(game_day_time + 306000) > 3870000 )
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
    if ( !item_block_region_count )
      return;
    v9 = 0;
    v10 = rand() % (signed int)item_block_region_count;
    do
    {
      if ( dword_140404A6C[14019 * v10 + 225641203] == 4 )
        break;
      ++v9;
      v10 = rand() % (signed int)item_block_region_count;
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
      *(float *)((char *)&dword_140404A6C[283831609] + v17) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v20), f32)[0] * 0.000024999999;
      sub_1400519F0(v13, v14);
      v6 = a1;
      ++v12;
    }
    while ( v12 < v11 );
  }
  ++dword_140404A6C[487148677];
}

//----- (0000000140059920) ----------------------------------------------------
__int64            sub_140059920(__int64 a1, int a2, char *a3)
{
  signed __int64 v3;
  unsigned int v5;
  unsigned int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int *v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned int v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  int v33;
  __int64 v34;
  float v35;
  unsigned int v36;
  unsigned __int64 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int *v41;
  __int64 v42;
  int v43;
  __int64 v44;
  unsigned int *v45;
  __int64 v46;
  __int64 v47;
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
    v5 = game_day_time + 414000;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
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

//----- (000000014005A0E0) ----------------------------------------------------
__int64            sub_14005A0E0(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned int v26;
  signed int v27;
  signed int v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned int v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  int i;
  float v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int *v47;
  int v48;
  __int64 v49;
  __int64 v50;
  unsigned int *v51;
  __int64 v52;
  __int64 v53;
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
  v6 = game_day_time + 414000;
  if ( (signed int)(game_day_time + 414000) > 3870000 )
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
        v31 = game_connected == 0;
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

//----- (000000014005A990) ----------------------------------------------------
__int64            sub_14005A990(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 i;
  __int64 v13;
  int v14;
  float v15;
  float v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int *v25;
  unsigned int *v26;
  __int64 v27;
  __int64 v28;
  __m128i v29;
  __int64 v30;
  float v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  float v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
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
    v5 = game_day_time + 414000;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
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
        crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * v22 + 283831588 + v24]), 0, 0x45Cu);
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
        *(float *)((char *)&dword_140404A6C[283831610] + v27) = v31 * -0.0000125;
        *(float *)((char *)&dword_140404A6C[283831609] + v27) = v31 * 0.000024999999;
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
          crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * v32 + 283831588 + v24]), 0, 0x45Cu);
          v34 = v43;
          v35 = (float)v43;
          v36 = 1116 * v33 + 23492 * v19;
          *(unsigned int *)((char *)&dword_140404A6C[283831590] + v36) = v42;
          v37 = dword_140404A6C[487148746];
          v38 = 1760LL * (int)dword_140404A6C[487148746];
          *(float *)((char *)&dword_140404A6C[283831609] + v36) = v35 * 0.000024999999;
          *(float *)((char *)&dword_140404A6C[283831610] + v36) = v35 * -0.0000125;
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

//----- (000000014005AF40) ----------------------------------------------------
void            sub_14005AF40(__int64 a1, int a2, char *a3)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
       char *v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _DWORD *v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  int v26;
  unsigned int v27;
  float v28;
  float v29;
  int v30;
  signed int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  int *v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int *v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  __int64 v49;
  _BYTE *v50;
  int v51;
       char *v52;
  int v53;
  __int64 v54;
  unsigned int *v55;
  int v56;
  char *v57;
  __int64 v59;
  float v60;
  unsigned int v61;
  unsigned int v62;
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
  v9 = game_day_time + 522000;
  if ( (signed int)(game_day_time + 522000) > 3870000 )
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
    crt_memset((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v46)), 0, 0x45Cu);
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
        crt_sprintf(
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
        crt_sprintf(
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
      crt_sprintf(
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
    crt_sprintf(v78, "\nThis mission expires at %d:%d%d\n\n", v56, (int)v64 % 60 / 10 % 6, (int)v64 % 60 % 10);
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
      v60 = (float)v51 * -0.0000125;
      *(float *)((char *)&dword_140404A6C[283831609] + v49) = (float)v51 * 0.000024999999;
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

//----- (000000014005B840) ----------------------------------------------------
double            sub_14005B840(int a1, int a2)
{
  __int64 v3;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int *v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int *v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  signed int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v3 = 2310LL * a2;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[178322641] = 0;
  v5 = 0;
  dword_140404A6C[178519250] = 0;
  v6 = 0;
  dword_140404A6C[177495247] = 0;
  v7 = (int)dword_140404A6C[v3 + 432531270];
  v8 = a2;
  v9 = 0;
  if ( v7 >= 4 )
  {
    v10 = &dword_140404A6C[v3 + 432531273];
    v11 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v9 = 4 * v11;
    do
    {
      v12 = (int)(3 * v6);
      v13 = *(v10 - 2);
      v10 += 12;
      dword_140404A6C[v12 + 177167567] = v13;
      dword_140404A6C[v12 + 177167568] = *(v10 - 13);
      dword_140404A6C[v12 + 177167569] = *(v10 - 12);
      ++dword_140404A6C[177167565];
      v14 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v14 + 177167567] = *(v10 - 11);
      dword_140404A6C[v14 + 177167568] = *(v10 - 10);
      dword_140404A6C[v14 + 177167569] = *(v10 - 9);
      ++dword_140404A6C[177167565];
      v15 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v15 + 177167567] = *(v10 - 8);
      dword_140404A6C[v15 + 177167568] = *(v10 - 7);
      dword_140404A6C[v15 + 177167569] = *(v10 - 6);
      ++dword_140404A6C[177167565];
      v16 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v16 + 177167567] = *(v10 - 5);
      dword_140404A6C[v16 + 177167568] = *(v10 - 4);
      dword_140404A6C[v16 + 177167569] = *(v10 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v11;
    }
    while ( v11 );
    v5 = dword_140404A6C[177495247];
  }
  if ( v9 < v7 )
  {
    v17 = v7 - v9;
    v18 = &dword_140404A6C[2310 * v8 + 432531273 + 3 * v9];
    do
    {
      v19 = (int)(3 * v6);
      v20 = *(v18 - 2);
      v18 += 3;
      dword_140404A6C[v19 + 177167567] = v20;
      dword_140404A6C[v19 + 177167568] = *(v18 - 4);
      dword_140404A6C[v19 + 177167569] = *(v18 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v17;
    }
    while ( v17 );
    v5 = dword_140404A6C[177495247];
  }
  v21 = dword_140404A6C[v3 + 432532039];
  if ( v21 > 0 )
  {
    v22 = (unsigned int)v21;
    v23 = &dword_140404A6C[v3 + 432532041];
    do
    {
      if ( *(v23 - 1) == 4 )
      {
        v24 = *v23;
        dword_140404A6C[3 * v5 + 177495248] = *v23;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v23[1];
        v25 = v23[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v25;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v26 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v26 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011349] = 0;
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v24;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v25;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v23[3];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v27 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v27 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v27 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[v27 + 178011349] = 0;
        v5 = ++dword_140404A6C[177495247];
      }
      v23 += 6;
      --v22;
    }
    while ( v22 );
  }
  if ( a2 == 1 || a2 == 4 )
  {
    v28 = v5 - 8;
    v29 = 6 * v28;
    dword_140404A6C[v29 + 178011345] = 0;
    v30 = 3LL * v28;
    dword_140404A6C[2 * v30 + 178011346] = 1065353216;
    dword_140404A6C[2 * v30 + 178011347] = 1065353216;
    dword_140404A6C[2 * v30 + 178011348] = 1065353216;
    dword_140404A6C[2 * v30 + 178011349] = 1065353216;
    dword_140404A6C[v29 + 178011350] = 0;
    v31 = (int32_t)(6u * (dword_140404A6C[177495247] - 7u));
    dword_140404A6C[v31 + 178011345] = 0;
    dword_140404A6C[v31 + 178011346] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v31 + 178011347] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v31 + 178011349] = 0;
    v32 = (int32_t)(6u * (dword_140404A6C[177495247] - 20u));
    v33 = (int32_t)(dword_140404A6C[177495247] - 20u);
    dword_140404A6C[v32 + 178011345] = 0;
    v34 = 3 * v33;
    dword_140404A6C[2 * v34 + 178011346] = 1065353216;
    dword_140404A6C[2 * v34 + 178011347] = 1065353216;
    dword_140404A6C[2 * v34 + 178011348] = 1065353216;
    dword_140404A6C[2 * v34 + 178011349] = 1065353216;
    dword_140404A6C[v32 + 178011350] = 0;
    v35 = (int32_t)(6u * (dword_140404A6C[177495247] - 19u));
    *(_QWORD *)&dword_140404A6C[v35 + 178011349] = 0;
    *(_QWORD *)&dword_140404A6C[v35 + 178011347] = 1065353216;
    dword_140404A6C[v35 + 178011346] = 1065353216;
    dword_140404A6C[v35 + 178011345] = 0;
  }
  return sub_1401449C0(a1, 1);
}

//----- (000000014005CCF0) ----------------------------------------------------
__int64 sub_14005CCF0()
{
  unsigned int v0;
  unsigned int *v1;
  __int64 v3;
  bool v4;
  unsigned int v5;

  v0 = 0;
  v1 = &dword_140404A6C[71856253];
  while ( *v1 )
  {
    ++v0;
    v1 += 3597;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[72777085] )
      return 0xFFFFFFFFLL;
  }
  if ( v0 == -1 )
    return 0xFFFFFFFFLL;
  v3 = 3597LL * (int)v0;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v3 + 71856254]), 0, 0x3830u);
  v4 = game_state == 1;
  dword_140404A6C[v3 + 71856268] = -1;
  dword_140404A6C[v3 + 71856253] = 1;
  dword_140404A6C[v3 + 71856286] = 17;
  dword_140404A6C[v3 + 71856292] = -1;
  dword_140404A6C[v3 + 71856272] = 50000;
  dword_140404A6C[v3 + 71857786] = 0;
  dword_140404A6C[v3 + 71857811] = 0;
  dword_140404A6C[v3 + 71857836] = 0;
  dword_140404A6C[v3 + 71857861] = 0;
  dword_140404A6C[v3 + 71857886] = 0;
  dword_140404A6C[v3 + 71857911] = 0;
  dword_140404A6C[v3 + 71857936] = 0;
  dword_140404A6C[v3 + 71857961] = 0;
  dword_140404A6C[v3 + 71856342] = 0;
  if ( v4 )
  {
    v5 = dword_140404A6C[v3 + 71856342];
    if ( game_type == 3 )
      v5 = 2;
    dword_140404A6C[v3 + 71856342] = v5;
  }
  dword_140404A6C[v3 + 71856333] = 1065353216;
  rand();
  dword_140404A6C[v3 + 71859768] = 1027604480;
  dword_140404A6C[v3 + 71859769] = 1027604480;
  dword_140404A6C[v3 + 71859770] = -1105618534;
  dword_140404A6C[v3 + 71859774] = -1119879168;
  dword_140404A6C[v3 + 71859775] = 1027604480;
  dword_140404A6C[v3 + 71859776] = -1105618534;
  dword_140404A6C[v3 + 71859771] = 1065353216;
  dword_140404A6C[v3 + 71859772] = 1065353216;
  dword_140404A6C[v3 + 71859773] = 1065353216;
  dword_140404A6C[v3 + 71859777] = 1065353216;
  dword_140404A6C[v3 + 71859778] = 1065353216;
  dword_140404A6C[v3 + 71859779] = 1065353216;
  dword_140404A6C[v3 + 71859825] = rand() % 5;
  dword_140404A6C[v3 + 71859817] = rand() % 6;
  if ( (rand() & 3) != 3 )
    dword_140404A6C[v3 + 71859817] = 2;
  dword_140404A6C[v3 + 71859818] = rand() % 6;
  dword_140404A6C[v3 + 71859819] = rand() % 9;
  dword_140404A6C[v3 + 71859820] = rand() % 8;
  dword_140404A6C[v3 + 71859663] = -1;
  return v0;
}

//----- (000000014005D1F0) ----------------------------------------------------
__int64            sub_14005D1F0(__int64 a1)
{
  float v1;
  float v2;
  int v3;
  signed int v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  signed int v8;
  signed int v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D1F0[64];
#define v17 (*(float (*))(void *)(sr_frame_14005D1F0 + 0)) /* [rsp+20h] */
#define v18 (*(float (*))(void *)(sr_frame_14005D1F0 + 4)) /* [rsp+24h] */
#define v19 (*(int (*))(void *)(sr_frame_14005D1F0 + 8)) /* [rsp+28h] */
#define v20 (*(_OWORD (*)[2])(void *)(sr_frame_14005D1F0 + 16)) /* [rsp+30h] */
#define v21 (*(int (*))(void *)(sr_frame_14005D1F0 + 48)) /* [rsp+50h] */

  v1 = *(float *)(a1 + 4);
  v2 = *(float *)a1 - 8.0;
  v20[0] = xmmword_140278D30;
  v20[1] = xmmword_140278D30;
  v21 = 1065353216;
  v3 = *(_DWORD *)(a1 + 8);
  v18 = v1;
  v19 = v3;
  v17 = v2;
  v4 = sr_CreateItem(36, &v17, nullptr, (float *)v20);
  v5 = 1760LL * v4;
  dword_140404A6C[273270150] = v4;
  v6 = 0;
  v7 = dword_140404A6C[v5 + 278845915];
  dword_140404A6C[v5 + 278845897] = 1;
  dword_140404A6C[v5 + 278846111] = v7;
  do
  {
    v1 = v1 + 0.5;
    v18 = v1;
    v8 = sr_CreateItem(36, &v17, nullptr, (float *)v20);
    v9 = v8;
    v10 = v8;
    if ( v6 == 15 )
      dword_140404A6C[47 * dword_140404A6C[1760 * v8 + 278845915] + 18215718] = 1015580809;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v12 = 61LL * (int)result;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[v12 + 486149254]), 0, 0xF0u);
    dword_140404A6C[v12 + 486149253] = 1;
    dword_140404A6C[v12 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
    dword_140404A6C[v12 + 486149293] = -1;
    v13 = dword_140404A6C[1760 * v4 + 278845915];
    dword_140404A6C[v12 + 486149291] = v13;
    v14 = dword_140404A6C[1760 * v10 + 278845915];
    dword_140404A6C[v12 + 486149292] = v14;
    dword_140404A6C[v12 + 486149281] = 1048576000;
    dword_140404A6C[v12 + 486149282] = 1052770304;
    dword_140404A6C[v12 + 486149267] = 0;
    *(_QWORD *)&dword_140404A6C[v12 + 486149268] = 1048576000;
    dword_140404A6C[v12 + 486149270] = 0;
    dword_140404A6C[v12 + 486149271] = -1098907648;
    dword_140404A6C[v12 + 486149272] = 0;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v15 = (int)result;
    v16 = 61LL * (int)result;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[v16 + 486149254]), 0, 0xF0u);
    dword_140404A6C[v16 + 486149253] = 1;
    dword_140404A6C[v16 + 486149254] = 8;
    result = 18 * v15;
    *(_QWORD *)&dword_140404A6C[v16 + 486149256] = 0x10000;
    dword_140404A6C[v16 + 486149291] = v13;
    ++v6;
    dword_140404A6C[v16 + 486149292] = v14;
    v4 = v9;
    dword_140404A6C[v16 + 486149293] = -1;
    *(_QWORD *)&dword_140404A6C[2 * result + 485543033] = 0;
    dword_140404A6C[2 * result + 485543035] = 0;
    dword_140404A6C[v16 + 486149281] = 0;
    dword_140404A6C[v16 + 486149282] = 998244352;
  }
  while ( v6 < 16 );
  return result;
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

//----- (000000014005D4C0) ----------------------------------------------------
double            sub_14005D4C0(int a1, float a2, float a3, float a4)
{
  int v5;
  unsigned int *v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D4C0[16];
#define v8 (*(__int64 (*))(void *)(sr_frame_14005D4C0 + 0)) /* [rsp+20h] */
#define v9 (*(float (*))(void *)(sr_frame_14005D4C0 + 8)) /* [rsp+28h] */

  v9 = -a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v8 = 0;
  sub_140002D00((float *)&v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v8
#undef v9

//----- (000000014005D550) ----------------------------------------------------
__int64            sub_14005D550(int a1)
{
  __int64 v1;
  int v2;
  signed int v3;
  int v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int *v12;
  float v13;
  double v14;
  float v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  signed int v20;
  signed int v21;
  signed int v22;
  signed int v23;
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
  v2 = crt_chdir("data");
  v3 = 0;
  v4 = crt_chdir("mission");
  v5 = 0;
  do
  {
    v6 = aTestSrm[v5];
    v31[v5++] = v6;
  }
  while ( v6 );
  v7 = crt_fopen(v31, "rb");
  v8 = v7;
  if ( v7 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v7));
    if ( Buffer != 1 )
    {
      crt_fclose(v8);
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
    crt_fclose(v8);
  }
  if ( !v4 )
    crt_chdir("..");
  if ( !v2 )
    crt_chdir("..");
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
      crt_sprintf(&dword_140404A6C[3597 * v16 + 71856254], Parameters);
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

//----- (000000014005E520) ----------------------------------------------------
__int64 sub_14005E520()
{
  signed int v0;
  unsigned int *v1;
  int v2;
  signed int v3;
  int v4;
  int v5;
  int v6;
  unsigned int *v7;
  __int64 v8;
  int v9;
  unsigned int *v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int *v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  signed int v21;
  unsigned int *v22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E520[80];
#define v24 (*(__int64 (*))(void *)(sr_frame_14005E520 + 0)) /* [rsp+0h] */
#define v25 (*(unsigned int (*)[8])(void *)(sr_frame_14005E520 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14005E520 + 64)) /* [rsp+40h] */

  v0 = game_day_time;
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
        crt_memcpy((__m128i *)v25, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
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

//----- (000000014005E860) ----------------------------------------------------
__int64 sub_14005E860()
{
  int v0;
  unsigned int *v1;
  int v2;
  signed int v3;
  int i;
  int v5;
  int v6;
  unsigned int *v7;
  __int64 v8;
  int v9;
  unsigned int *v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  signed int v26;
  unsigned int *v27;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E860[80];
#define v29 (*(__int64 (*))(void *)(sr_frame_14005E860 + 0)) /* [rsp+0h] */
#define v30 (*(__m128i (*)[2])(void *)(sr_frame_14005E860 + 32)) /* [rsp+20h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_14005E860 + 64)) /* [rsp+40h] */

  v0 = game_day_time;
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
  v12 = game_tick;
  v13 = game_connected;
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( !dword_140404A6C[283831506] )
  {
    if ( game_connected )
    {
      v14 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
      v15 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
      v16 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
      v17 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
      v18 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
      v19 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
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
        crt_memcpy(v30, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
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

//----- (000000014005ED40) ----------------------------------------------------
__int64            sub_14005ED40(int a1, float *a2, __int64 a3, float a4, float a5)
{
  __int64 v6;
  float v7;
  float v8;

  v6 = a1;
  v7 = 1.0;
  v8 = fminf(a4, 1.0);
  if ( fsqrt(
         (float)((float)((float)(*(float *)&dword_140404A6C[284024503] - a2[1])
                       * (float)(*(float *)&dword_140404A6C[284024503] - a2[1]))
               + (float)((float)(*(float *)&dword_140404A6C[284024502] - *a2)
                       * (float)(*(float *)&dword_140404A6C[284024502] - *a2)))
       + (float)((float)(*(float *)&dword_140404A6C[284024504] - a2[2])
               * (float)(*(float *)&dword_140404A6C[284024504] - a2[2]))) > 128.0
    || (unsigned int)sub_1400DC050(a2, (float *)&dword_140404A6C[284024502], 0) )
  {
    v7 = 0.5;
  }
  if ( dword_140404A6C[8 * v6 + 18165777] )
    sub_140069FA0(v6, (unsigned int *)a2, v8 * v7, a5, 0);
  return 0xFFFFFFFFLL;
}

//----- (000000014005EE40) ----------------------------------------------------
__int64            sub_14005EE40(unsigned int a1, unsigned int *a2, float *a3, float a4)
{
  /* Ported to src/engine/world_effects.c and compared with the original
     (tools/native-compare, suite effects). Returns the index zero-extended,
     or 0xFFFFFFFF when the table is full, as the original. */
  extern unsigned int world_add_effect(int, const float *, const float *, float);
  return world_add_effect((int)a1, (const float *)a2, (const float *)a3, a4);
}

//----- (000000014005F150) ----------------------------------------------------
__int64            sub_14005F150(unsigned int a1, unsigned int *a2, unsigned int *a3, float *a4)
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particles). */
  extern int world_spawn_particle(int type, const float *position, const float *velocity, const float *rotation);
  return (unsigned int)world_spawn_particle((int)a1, (const float *)a2, (const float *)a3, a4);
}

//----- (000000014005F370) ----------------------------------------------------
double            sub_14005F370(int a1, int a2)
{
  int v3;
  int v4;
  unsigned int *v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F370[16];
#define v7 (*(__int64 (*))(void *)(sr_frame_14005F370 + 0)) /* [rsp+20h] */
#define v8 (*(int (*))(void *)(sr_frame_14005F370 + 8)) /* [rsp+28h] */

  dword_140404A6C[177167565] = 0;
  v3 = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  if ( a2 == 1 )
  {
    v7 = 0;
    v8 = 0;
    sub_140002D00((float *)&v7, 0.02, 0.02, 0.02);
    v3 = dword_140404A6C[177495247];
  }
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v5 - 1) = 0;
      ++v4;
      *(_QWORD *)(v5 + 1) = 0;
      *(_QWORD *)(v5 + 3) = 0;
      v5 += 6;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v7
#undef v8

//----- (000000014005F400) ----------------------------------------------------
double            sub_14005F400(int a1)
{
  int v2;
  unsigned int *v3;
  float v5[6];

  v5[0] = -0.042187501;
  v5[1] = 0.0;
  v5[2] = -0.125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v5, 0.037500001, 0.03125, 0.001);
  *(float *)&dword_140404A6C[177167570] = *(float *)&dword_140404A6C[177167570] + -0.0093750004;
  *(float *)&dword_140404A6C[177167573] = *(float *)&dword_140404A6C[177167573] + -0.0093750004;
  *(float *)&dword_140404A6C[177167576] = *(float *)&dword_140404A6C[177167576] + 0.0046875002;
  *(float *)&dword_140404A6C[177167567] = *(float *)&dword_140404A6C[177167567] + 0.0046875002;
  v5[0] = 0.042187501;
  sub_140002D00(v5, 0.037500001, 0.03125, 0.001);
  v2 = 0;
  *(float *)&dword_140404A6C[177167591] = *(float *)&dword_140404A6C[177167591] + 0.0093750004;
  *(float *)&dword_140404A6C[177167600] = *(float *)&dword_140404A6C[177167600] + 0.0093750004;
  *(float *)&dword_140404A6C[177167594] = *(float *)&dword_140404A6C[177167594] + -0.0046875002;
  *(float *)&dword_140404A6C[177167597] = *(float *)&dword_140404A6C[177167597] + -0.0046875002;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v3 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v3 - 1) = 0;
      ++v2;
      *(_QWORD *)(v3 + 1) = 0;
      *(_QWORD *)(v3 + 3) = 0;
      v3 += 6;
    }
    while ( v2 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

//----- (000000014005F5A0) ----------------------------------------------------
double            sub_14005F5A0(int a1, float a2, float a3, float a4)
{
  int v5;
  float v6;
  float v7;
  int v8;
  unsigned int *v9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F5A0[16];
#define v11 (*(float (*))(void *)(sr_frame_14005F5A0 + 0)) /* [rsp+20h] */
#define v12 (*(float (*))(void *)(sr_frame_14005F5A0 + 4)) /* [rsp+24h] */
#define v13 (*(float (*))(void *)(sr_frame_14005F5A0 + 8)) /* [rsp+28h] */

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v12 = a3 - 0.0625;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v11 = 0.0;
  v13 = 0.0;
  sub_140002D00(&v11, a2, 0.0625, a4);
  v5 = 0;
  v12 = -0.0625;
  do
  {
    if ( !v5 || v5 == 3 )
      v6 = 0.0625 - a2;
    else
      v6 = a2 - 0.0625;
    v11 = v6;
    if ( (unsigned int)v5 >= 2 )
      v7 = a4 - 0.0625;
    else
      v7 = 0.0625 - a4;
    v13 = v7;
    sub_140002D00(&v11, 0.0625, a3, 0.0625);
    ++v5;
  }
  while ( v5 < 4 );
  v8 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v9 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v9 - 1) = 0;
      ++v8;
      *(_QWORD *)(v9 + 1) = 0;
      *(_QWORD *)(v9 + 3) = 0;
      v9 += 6;
    }
    while ( v8 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v11
#undef v12
#undef v13

