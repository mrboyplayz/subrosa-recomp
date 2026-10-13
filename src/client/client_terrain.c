#include "shared_client.h"

//----- (00000001400D12E0) ----------------------------------------------------
unsigned int *sub_1400D12E0()
{
  unsigned int *v0;
  int v1;
  int i;
  int v3;
  float *v4;
  float v5;
  int v6;
  float v7;
  float v8;
  float v9;
  int j;
  int k;
  unsigned int *v12;
  unsigned int *v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int *v17;
  int v18;
  unsigned int *v19;
  int v20;
  unsigned int *v21;
  int v22;
  unsigned int *v23;
  int v24;
  unsigned int *v25;
  unsigned int *result;
  unsigned int *v27;

  v0 = &dword_140404A6C[188872561];
  v1 = 0;
  for ( i = 0; i < 0x4000; i += 8 )
  {
    v3 = 0;
    v4 = (float *)v0;
    do
    {
      v5 = *(v4 - 1);
      v6 = 0;
      v7 = v4[2048];
      v8 = *v4;
      v9 = v4[2049];
      do
      {
        for ( j = 0; j < 8; ++j )
          sub_1400D2DB0(
            v3 + j,
            i + v6,
            (float)((float)(1.0 - (float)((float)j * 0.125))
                  * (float)((float)((float)(1.0 - (float)((float)v6 * 0.125)) * v5)
                          + (float)(v7 * (float)((float)v6 * 0.125))))
          + (float)((float)((float)((float)(1.0 - (float)((float)v6 * 0.125)) * v8)
                          + (float)(v9 * (float)((float)v6 * 0.125)))
                  * (float)((float)j * 0.125)));
        ++v6;
      }
      while ( v6 < 8 );
      v3 += 8;
      ++v4;
    }
    while ( v3 < 0x4000 );
    v0 += 2049;
  }
  if ( !dword_140404A6C[284024893] )
  {
    sub_1400D3340(2);
    sub_1400D3340(40);
    sub_1400D3340(32);
    sub_1400D3340(46);
    sub_1400D3340(45);
    sub_1400D3340(47);
    sub_1400D3340(28);
    sub_1400D3340(10);
    sub_1400D3340(33);
    sub_1400D3340(42);
    sub_1400D3340(35);
    sub_1400D3340(13);
    sub_1400D3340(59);
    sub_1400D3340(31);
    sub_1400D3340(52);
    sub_1400D3340(48);
    sub_1400D3340(50);
    sub_1400D3340(19);
    sub_1400D3340(22);
    sub_1400D3340(58);
    sub_1400D3340(62);
    sub_1400D3340(61);
    sub_1400D3340(41);
    sub_1400D3340(36);
    sub_1400D3340(43);
    sub_1400D3340(44);
    sub_1400D3340(38);
    sub_1400D3340(39);
  }
  for ( k = 0; k < 64; ++k )
    sub_1400D00F0(k);
  v12 = &dword_140404A6C[272034691];
  do
  {
    v13 = v12;
    v14 = 16;
    do
    {
      v15 = 16;
      do
      {
        *(_QWORD *)(v13 - 1) = -1;
        *(_QWORD *)(v13 + 1) = -1;
        *(_QWORD *)(v13 + 3) = -1;
        v13[5] = -1;
        v13 += 13;
        --v15;
      }
      while ( v15 );
      --v14;
    }
    while ( v14 );
    v12 += 3336;
  }
  while ( (__int64)v12 < (__int64)&dword_140404A6C[272248195] );
  v16 = 0;
  dword_140404A6C[271838026] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v17 = &dword_140404A6C[271838027];
    do
    {
      *v17 = -1;
      v17 += 3;
      ++v16;
    }
    while ( v16 < (int)dword_140404A6C[271838023] );
  }
  v18 = 0;
  dword_140404A6C[271862608] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v19 = &dword_140404A6C[271862609];
    do
    {
      *v19 = -1;
      v19 += 3;
      ++v18;
    }
    while ( v18 < (int)dword_140404A6C[271862605] );
  }
  v20 = 0;
  dword_140404A6C[271887190] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v21 = &dword_140404A6C[271887191];
    do
    {
      *v21 = -1;
      v21 += 3;
      ++v20;
    }
    while ( v20 < (int)dword_140404A6C[271887187] );
  }
  v22 = 0;
  dword_140404A6C[271911772] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v23 = &dword_140404A6C[271911773];
    do
    {
      *v23 = -1;
      v23 += 3;
      ++v22;
    }
    while ( v22 < (int)dword_140404A6C[271911769] );
  }
  v24 = 0;
  dword_140404A6C[271936354] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v25 = &dword_140404A6C[271936355];
    do
    {
      *v25 = -1;
      v25 += 3;
      ++v24;
    }
    while ( v24 < (int)dword_140404A6C[271936351] );
  }
  result = nullptr;
  dword_140404A6C[271960936] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v27 = &dword_140404A6C[271960937];
    do
    {
      *v27 = -1;
      v27 += 3;
      result = (unsigned int *)(unsigned int)((_DWORD)result + 1);
    }
    while ( (int)result < (int)dword_140404A6C[271960933] );
  }
  dword_140404A6C[271985518] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    result = &dword_140404A6C[271985519];
    do
    {
      *result = -1;
      result += 3;
      ++v1;
    }
    while ( v1 < (int)dword_140404A6C[271985515] );
  }
  return result;
}

//----- (00000001400D1830) ----------------------------------------------------
int                sub_1400D1830(unsigned __int64 a1, float *a2, float *a3)
{
  union { float *saved; float coordinates[4]; } sr_triangle_c;
  _Alignas(8) __int64 sr_triangle_b[2];
  _Alignas(8) unsigned __int64 sr_normal[2];
  float sr_triangle_a[3];
  float sr_walk_b[3];
  float sr_walk_a[3];
  float sr_weight[3];
  int sr_end[3];
  int sr_start[3];
  int sr_direction[3];
  float *v3;
  signed __int64 v5;
  int v6;
  signed __int64 v7;
  signed __int64 v8;
  signed __int64 v9;
  signed __int64 v10;
  signed __int64 v11;
  signed __int64 v12;
  signed __int64 v13;
  signed __int64 v14;
  signed __int64 v15;
  float v16;
  float v17;
  bool v18;
  int v19;
  float v20;
  float v21;
  signed __int64 v22;
  float v23;
  float v24;
  float v25;
  float v26;
  int v27;
  float v28;
  signed __int64 v29;
  float v30;
  signed __int64 v31;
  signed __int64 v32;
  float v33;
  float v34;
  float v35;
  signed __int64 v36;
  int v37;
  float v38;
  float *v39;
  unsigned __int64 v40;
  __m128d v41;
  double v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __m128d v47;
  float v48;
  double v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __m128d v56;
  double v57;
  int v58;
  float v59;
  int v60;
  int v61;
  float v62;
  int v63;
  int v64;
  signed int v65;
  float v66;
  int v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  __int64 v76;
  float v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  float v84;
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
  int v95;
  float v96;
  float v97;
  float v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  BOOL v116;
  int v117;
  float v118;
  _BOOL8 v119;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D1830[304];
#define v121 (*(__int64 (*))(void *)(sr_frame_1400D1830 + 8)) /* [rsp+8h] */
#define v122 (*(__int64 (*))(void *)(sr_frame_1400D1830 + 72)) /* [rsp+48h] */
#define v125 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 96)) /* [rsp+60h] */
#define v133 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 152)) /* [rsp+98h] */
#define v134 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 160)) /* [rsp+A0h] */
#define v135 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 168)) /* [rsp+A8h] */
#define v136 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 176)) /* [rsp+B0h] */
#define v137 (*(float (*))(void *)(sr_frame_1400D1830 + 184)) /* [rsp+B8h] */
#define v138 (*(float * (*))(void *)(sr_frame_1400D1830 + 192)) /* [rsp+C0h] */
#define v157 (*(__int128 (*))(void *)(sr_frame_1400D1830 + 288)) /* [rsp+120h] */

  v3 = a2 + 1;
  sr_triangle_c.saved = a2;
  v138 = a3;
  sr_normal[0] = a1;
  v136 = (char *)&sr_walk_a[2] - (char *)a2;
  v5 = (char *)&sr_walk_a[1] - (char *)a2;
  LODWORD(v122) = -1;
  v6 = 0;
  v135 = (char *)&sr_walk_b[0] - (char *)a2;
  v7 = (char *)&sr_walk_b[1] - (char *)a2;
  v133 = (char *)&dword_140404A6C[272248182] - (char *)a2;
  v8 = (char *)&sr_start[0] - (char *)a2;
  v125 = (char *)&sr_start[1] - (char *)a2;
  sr_triangle_b[0] = ((_BYTE *)&sr_end[1]) - (_BYTE *)a2;
  v9 = (char *)a3 - (char *)a2;
  v10 = (char *)&dword_140404A6C[272248181] - (char *)a2;
  v11 = (char *)&sr_end[0] - (char *)a2;
  v134 = (char *)&sr_weight[1] - (char *)a2;
  v12 = (char *)&sr_direction[0] - (char *)a2;
  v13 = (char *)&sr_walk_a[0] - (char *)a2;
  v14 = (char *)&sr_weight[0] - (char *)a2;
  v15 = (char *)&sr_direction[1] - (char *)a2;
  do
  {
    v16 = *(float *)((char *)v3 + v9 - 4);
    v17 = v16 - *(v3 - 1);
    *(_DWORD *)((char *)v3 + v8 - 4) = (int)(float)(*(v3 - 1) - *(float *)((char *)v3 + v10 - 4));
    *(_DWORD *)((char *)v3 + v11 - 4) = (int)(float)(v16 - *(float *)((char *)v3 + v10 - 4));
    if ( v6 == 1 )
      v17 = 0.0;
    v18 = v17 <= 0.0;
    v19 = 1;
    v20 = fabs(v17);
    if ( v18 )
      v19 = v122;
    *(_DWORD *)((char *)v3 + v12 - 4) = v19;
    v21 = *v3;
    v22 = v136;
    v23 = *v3;
    *(float *)((char *)v3 + v13 - 4) = v20;
    *(float *)((char *)v3 + v14 - 4) = v20;
    v24 = v23 - *(float *)((char *)v3 + v10);
    *(float *)((char *)v3 + v22) = v20;
    LODWORD(v22) = (int)v24;
    v25 = *(float *)((char *)v3 + v9);
    v26 = v25 - v21;
    *(_DWORD *)((char *)v3 + v8) = v22;
    *(_DWORD *)((char *)v3 + v11) = (int)(float)(v25 - *(float *)((char *)v3 + v10));
    if ( !v6 )
      v26 = 0.0;
    v18 = v26 <= 0.0;
    v27 = 1;
    v28 = fabs(v26);
    if ( v18 )
      v27 = -1;
    *(_DWORD *)((char *)v3 + v12) = v27;
    v29 = v135;
    v30 = v3[1];
    v31 = v125;
    *(float *)((char *)v3 + v13) = v28;
    *(float *)((char *)v3 + v29) = v28;
    v32 = v133;
    *(float *)((char *)v3 + v14) = v28;
    v33 = *(float *)((char *)v3 + v32);
    v34 = *(float *)((char *)v3 + v9 + 4);
    v35 = v34 - v30;
    *(_DWORD *)((char *)v3 + v31) = (int)(float)(v30 - v33);
    *(_DWORD *)((char *)v3 + sr_triangle_b[0]) = (int)(float)(v34 - v33);
    v36 = v134;
    if ( v6 == -1 )
      v35 = 0.0;
    v18 = v35 <= 0.0;
    v37 = 1;
    v38 = fabs(v35);
    if ( v18 )
      v37 = v122;
    v6 += 3;
    *(_DWORD *)((char *)v3 + v15) = v37;
    *(float *)((char *)v3 + v5) = v38;
    *(float *)((char *)v3 + v7) = v38;
    *(float *)((char *)v3 + v36) = v38;
    v3 += 3;
  }
  while ( v6 < 3 );
  v39 = sr_triangle_c.saved;
  v40 = sr_normal[0];
  v41 = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)sr_triangle_c.saved))));
  v42 = SR_VEC_LANES(128, v41, f64)[0];
  if ( (double)(int)SR_VEC_LANES(128, v41, f64)[0] != SR_VEC_LANES(128, v41, f64)[0] )
    v42 = (double)((int)SR_VEC_LANES(128, v41, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
  v43 = SR_VEC_LANES(128, v41, f64)[0] - (v42 + 0.5);
  if ( sr_direction[0] > 0 )
    v43 = -v43;
  v44 = sr_weight[1];
  v45 = v43 + v43;
  v46 = sr_weight[2];
  v47 = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)sr_triangle_c.saved + 1)))));
  sr_walk_a[0] = (float)(sr_weight[1] * v45) - sr_walk_a[0];
  v48 = sr_weight[2] * v45;
  v49 = SR_VEC_LANES(128, v47, f64)[0];
  sr_walk_b[0] = v48 - sr_walk_b[0];
  if ( (double)(int)SR_VEC_LANES(128, v47, f64)[0] != SR_VEC_LANES(128, v47, f64)[0] )
    v49 = (double)((int)SR_VEC_LANES(128, v47, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v47, v47)) & 1));
  v50 = sr_direction[1];
  v51 = SR_VEC_LANES(128, v47, f64)[0] - (v49 + 0.5);
  if ( sr_direction[1] > 0 )
    v51 = -v51;
  v52 = sr_weight[0];
  v53 = v51 + v51;
  v54 = sr_weight[2] * v53;
  v55 = (float)(sr_weight[0] * v53) - sr_walk_a[1];
  v56 = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)sr_triangle_c.saved + 2)))));
  sr_walk_a[1] = v55;
  sr_walk_b[1] = v54 - sr_walk_b[1];
  v57 = SR_VEC_LANES(128, v56, f64)[0];
  if ( (double)(int)SR_VEC_LANES(128, v56, f64)[0] != SR_VEC_LANES(128, v56, f64)[0] )
    v57 = (double)((int)SR_VEC_LANES(128, v56, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v56, v56)) & 1));
  v58 = sr_direction[2];
  v59 = SR_VEC_LANES(128, v56, f64)[0] - (v57 + 0.5);
  if ( sr_direction[2] > 0 )
    v59 = -v59;
  v60 = sr_end[0];
  v61 = sr_start[0];
  v62 = v59 + v59;
  v63 = sr_end[2];
  v64 = sr_start[2];
  *(_DWORD *)(sr_normal[0] + 24) = 1065353216;
  sr_walk_a[2] = (float)(v52 * v62) - sr_walk_a[2];
  sr_walk_b[2] = (float)(v44 * v62) - sr_walk_b[2];
  v65 = abs32(v63 - v64) + abs32(v60 - v61);
  LODWORD(v133) = 0x4000;
  if ( v65 > 0x4000 || (LODWORD(v133) = v65, v65 >= 0) )
  {
    v66 = sr_walk_a[0];
    v67 = 0;
    v68 = sr_walk_b[2];
    v69 = sr_walk_b[1];
    v70 = sr_walk_b[0];
    v71 = sr_walk_a[2];
    v72 = sr_walk_a[1];
    *(float *)&v125 = sr_walk_a[0];
    while ( 1 )
    {
      v73 = v64 >> 11;
      if ( (unsigned int)(v61 >> 11) <= 7 && v73 <= 7 )
      {
        v74 = v64 >> 2;
        if ( (unsigned int)(v61 >> 2) <= 0xFFF && v74 <= 0xFFF )
        {
          v75 = *(unsigned __int16 *)(*(_QWORD *)&dword_140404A6C[272248185] + 2LL * ((v61 >> 4) + (v64 >> 4 << 10)));
          if ( _bittest(&v75, (unsigned __int8)(((v61 >> 2) & 3) + 4 * (v74 & 3))) )
          {
            v76 = 3336LL * (int)((v61 >> 11) + 8 * v73);
            *(float *)&v135 = (float)(v61 & 0x7FF);
            v77 = *(float *)&dword_140404A6C[v76 + 272034677];
            v78 = *(_QWORD *)&dword_140404A6C[v76 + 272034683];
            v79 = *(float *)&v135 + v77;
            v80 = *(float *)&dword_140404A6C[v76 + 272034678];
            v81 = *(float *)&dword_140404A6C[v76 + 272034679];
            v82 = (v61 & 0x7FF) + 2049 * (v64 & 0x7FFu);
            v83 = v80 + *(float *)(v78 + 4 * v82);
            v137 = (float)((v61 & 0x7FF) + 1);
            *(float *)&v136 = (float)(v64 & 0x7FF);
            v84 = v80 + *(float *)(v78 + 4 * v82 + 4);
            v85 = v80 + *(float *)(v78 + 4 * v82 + 8200);
            *((float *)&sr_triangle_b[0] + 1) = v84;
            v86 = v84 - v83;
            *(float *)&v134 = (float)((v64 & 0x7FF) + 1);
            *(float *)&sr_triangle_b[0] = v77 + v137;
            *(float *)&sr_triangle_c.saved = v77 + v137;
            v87 = (float)(v77 + v137) - (float)(*(float *)&v135 + v77);
            *((float *)&sr_triangle_c.saved + 1) = v85;
            sr_triangle_a[2] = v81 + *(float *)&v136;
            *(float *)&sr_triangle_b[1] = v81 + *(float *)&v136;
            sr_triangle_a[0] = v79;
            sr_triangle_c.coordinates[2] = v81 + *(float *)&v134;
            sr_triangle_a[1] = v83;
            v88 = (float)(v87 * v86) - (float)((float)(v85 - v83) * v87);
            v89 = -(float)(v86 * (float)((float)(v81 + *(float *)&v134) - (float)(v81 + *(float *)&v136)));
            v90 = v87 * (float)((float)(v81 + *(float *)&v134) - (float)(v81 + *(float *)&v136));
            v91 = fsqrt((float)((float)(v90 * v90) + (float)(v89 * v89)) + (float)(v88 * v88));
            if ( v91 == 0.0 )
            {
              sr_normal[0] = 0;
              v92 = 0.0;
              v93 = 0.0;
              LODWORD(sr_normal[1]) = 0;
              v94 = 0.0;
            }
            else
            {
              v92 = v89 * (float)(1.0 / v91);
              v93 = v90 * (float)(1.0 / v91);
              v94 = v88 * (float)(1.0 / v91);
              sr_normal[0] = __PAIR64__(LODWORD(v93), LODWORD(v92));
              *(float *)&sr_normal[1] = v94;
            }
            if ( sub_140077FA0(&sr_walk_a[0], (float *)&sr_normal[0], (float *)&v122, v39, v138, &sr_triangle_a[0], (float *)&sr_triangle_b[0], (float *)&sr_triangle_c.saved) )
            {
              v95 = v122;
              if ( *(float *)&v122 < *(float *)(v40 + 24) )
              {
                v96 = sr_walk_a[1];
                *(float *)v40 = sr_walk_a[0];
                *(float *)(v40 + 8) = sr_walk_a[2];
                *(float *)(v40 + 4) = v96;
                *(float *)(v40 + 12) = v92;
                *(float *)(v40 + 16) = v93;
                *(float *)(v40 + 20) = v94;
                *(_DWORD *)(v40 + 24) = v95;
              }
            }
            v97 = *(float *)&dword_140404A6C[v76 + 272034678];
            v98 = *(float *)&dword_140404A6C[v76 + 272034677];
            v99 = *(_QWORD *)&dword_140404A6C[v76 + 272034683];
            v100 = *(float *)&dword_140404A6C[v76 + 272034679];
            v101 = v97 + *(float *)(v99 + 4 * v82);
            v102 = v97 + *(float *)(v99 + 4 * v82 + 8196);
            v103 = *(float *)&dword_140404A6C[v76 + 272034678] + *(float *)(v99 + 4 * v82 + 8200);
            v104 = v100 + *(float *)&v134;
            v105 = v100 + *(float *)&v136;
            sr_triangle_a[1] = v101;
            *((float *)&sr_triangle_c.saved + 1) = v102;
            v106 = v102 - v101;
            *((float *)&sr_triangle_b[0] + 1) = v103;
            *(float *)&sr_triangle_b[1] = v104;
            sr_triangle_c.coordinates[2] = v104;
            v107 = v104 - v105;
            *(float *)&sr_triangle_b[0] = v98 + v137;
            sr_triangle_a[2] = v105;
            sr_triangle_a[0] = *(float *)&v135 + v98;
            *(float *)&sr_triangle_c.saved = *(float *)&v135 + v98;
            v108 = (float)(v98 + v137) - (float)(*(float *)&v135 + v98);
            v109 = (float)(v106 * v107) - (float)((float)(v103 - v101) * v107);
            v110 = -(float)(v106 * v108);
            v111 = v108 * v107;
            v112 = fsqrt((float)((float)(v111 * v111) + (float)(v109 * v109)) + (float)(v110 * v110));
            if ( v112 == 0.0 )
            {
              sr_normal[0] = 0;
              v113 = 0.0;
              v114 = 0.0;
              LODWORD(sr_normal[1]) = 0;
              v115 = 0.0;
            }
            else
            {
              v113 = v109 * (float)(1.0 / v112);
              v114 = v111 * (float)(1.0 / v112);
              v115 = v110 * (float)(1.0 / v112);
              sr_normal[0] = __PAIR64__(LODWORD(v114), LODWORD(v113));
              *(float *)&sr_normal[1] = v115;
            }
            v116 = sub_140077FA0(
                     &sr_walk_a[0],
                     (float *)&sr_normal[0],
                     (float *)&v122,
                     v39,
                     v138,
                     &sr_triangle_a[0],
                     (float *)&sr_triangle_b[0],
                     (float *)&sr_triangle_c.saved);
            v52 = sr_weight[0];
            v44 = sr_weight[1];
            v60 = sr_end[0];
            v63 = sr_end[2];
            if ( v116 )
            {
              v117 = v122;
              v58 = sr_direction[2];
              v50 = sr_direction[1];
              if ( *(float *)&v122 < *(float *)(v40 + 24) )
              {
                v118 = sr_walk_a[1];
                *(float *)v40 = sr_walk_a[0];
                *(float *)(v40 + 8) = sr_walk_a[2];
                *(float *)(v40 + 4) = v118;
                *(float *)(v40 + 12) = v113;
                *(float *)(v40 + 16) = v114;
                *(float *)(v40 + 20) = v115;
                *(_DWORD *)(v40 + 24) = v117;
              }
              v66 = *(float *)&v125;
              v46 = sr_weight[2];
              goto LABEL_50;
            }
            v66 = *(float *)&v125;
            v46 = sr_weight[2];
          }
        }
        v50 = sr_direction[1];
        v58 = sr_direction[2];
      }
LABEL_50:
      if ( *(float *)(v40 + 24) >= 1.0 && (v61 != v60 || v64 != v63) )
      {
        v119 = v66 >= v72;
        if ( v71 <= v70 || v119 )
        {
          if ( v69 > v68 )
          {
            v64 += v58;
            v71 = v71 + v52;
            sr_start[2] = v64;
            v70 = v70 - v52;
            v69 = v69 - v44;
            v68 = v68 + v44;
          }
          else
          {
            sr_start[1] += v50;
            v66 = v66 - v52;
            v72 = v72 + v52;
            v69 = v69 + v46;
            v68 = v68 - v46;
            *(float *)&v125 = v66;
          }
        }
        else
        {
          *(&sr_start[0] + v119) += *(&sr_direction[0] + v119);
          v64 = sr_start[2];
          v61 = sr_start[0];
          v66 = v66 + v44;
          v72 = v72 - v44;
          v71 = v71 - v46;
          v70 = v70 + v46;
          *(float *)&v125 = v66;
        }
        if ( ++v67 <= (int)v133 )
          continue;
      }
      return *(float *)(v40 + 24) < 1.0f;
    }
  }
  return 0;
}
#undef v121
#undef v122
#undef v125
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v157

// 1400D1AB0: conditional instruction was optimized away because rcx.8<100000000u
// 1400D1B49: conditional instruction was optimized away because rcx.8<100000000u
// 1400D1BCF: conditional instruction was optimized away because rcx.8<100000000u
// 1400D21F1: conditional instruction was optimized away because rcx.8==0

//----- (00000001400D22E0) ----------------------------------------------------
double            sub_1400D22E0(int a1)
{
  __int64 v1;
  int v2;
  unsigned int *v3;
  __int64 v4;
  unsigned int *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D22E0[32];
#define v14 (*(int (*))(void *)(sr_frame_1400D22E0 + 0)) /* [rsp+88h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1400D22E0 + 8)) /* [rsp+90h] */
#define v16 (*(unsigned int * (*))(void *)(sr_frame_1400D22E0 + 16)) /* [rsp+98h] */

  if ( !a1 )
  {
    qword_1404042E0(dword_140404A6C[71738165]);
    qword_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    qword_140404338(dword_140404A6C[71738171], 1, &dword_140404A6C[284545205]);
    qword_140404338(dword_140404A6C[71738172], 1, &dword_140404A6C[284545209]);
    qword_140404338(dword_140404A6C[71738173], 1, &dword_140404A6C[284024502]);
    qword_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    /* DIAG: native sets 1. The mask writer only clears bits into a 0xFFFF-prefilled
       buffer, so wrong bit math keeps MORE, not less; not the black-frame cause. */
    qword_140404308(dword_140404A6C[71738205], 1);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944]);
    unk_140404098(33985);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830716] + 284024944]);
    unk_140404098(33988);
    qword_140404050(3553, dword_140404A6C[44 * shading_texture + 284024944]);
  }
  unk_140404098(33987);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
  unk_140404098(33984);
  qword_140404238(0);
  qword_140404238(1);
  v2 = 0;
  v3 = &dword_140404A6C[271166190];
  v4 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &dword_140404A6C[271166190];
  do
  {
    if ( *(v3 - 1) )
    {
      v5 = v3;
      v6 = v4;
      v7 = 16;
      do
      {
        v8 = 16;
        do
        {
          v9 = (int)*v5;
          v10 = (int)dword_140404A6C[v9 + 272034690 + v6];
          if ( (_DWORD)v10 != -1 )
          {
            qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v9 + 283791480] + 283793814], v1);
            qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v9 + 283791752] + 283793813], v11);
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v9+271838021]),(const void *)(intptr_t)(0));
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v9+271838021]),(const void *)(intptr_t)(12));
            ((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)(4,(int32_t)(3u*dword_140404A6C[24582*v9+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*v9+271838024]*(uint32_t)v10));
            dword_140404A6C[24582 * v9 + 271838029 + 3 * v10] = 4;
          }
          v6 += 13;
          ++v5;
          --v8;
        }
        while ( v8 );
        --v7;
      }
      while ( v7 );
      v3 = v16;
    }
    else
    {
      sub_1400D2B90(v2);
    }
    v3 += 257;
    v2 = v14 + 1;
    v4 = v15 + 3336;
    v14 = v2;
    v15 += 3336;
    v16 = v3;
  }
  while ( v2 < 64 );
  if ( a1 )
  {
    qword_140404230(0);
    return qword_140404230(1);
  }
  else
  {
    qword_140404308(dword_140404A6C[71738205], 0);
    qword_140404230(0);
    qword_140404230(1);
    return qword_1404042E0(0);
  }
}
#undef v14
#undef v15
#undef v16

//----- (00000001400D2C90) ----------------------------------------------------
__int64            sub_1400D2C90(int a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v3 = a1;
  if ( a1 != -1 )
  {
    v4 = a2;
    qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a2 + 283791480] + 283793814], a3);
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v4 + 283791752] + 283793813], v5);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v4+271838021]),(const void *)(intptr_t)(0));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v4+271838021]),(const void *)(intptr_t)(12));
    ((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)(4,(int32_t)(3u*dword_140404A6C[24582*v4+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*v4+271838024]*(uint32_t)v3));
    v6 = v3 + 8194 * v4;
    dword_140404A6C[3 * v6 + 271838029] = 4;
    return 3 * v6;
  }
  return result;
}

//----- (00000001400D2DB0) ----------------------------------------------------
void            sub_1400D2DB0(int a1, int a2, float a3)
{
  int v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v3 = a1 >> 11;
  v4 = a2 >> 11;
  if ( (unsigned int)(a1 >> 11) <= 7 && (unsigned int)v4 <= 7 )
  {
    v5 = v3 + 8 * v4;
    v6 = a2 & 0x7FF;
    v7 = (unsigned int)(2049 * v6);
    v8 = a1 & 0x7FF;
    *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272034683] + 4LL * (unsigned int)(v7 + v8)) = a3;
    if ( (a1 & 0x7FF) == 0 )
    {
      if ( v6 )
      {
        if ( v3 <= 0 )
          return;
      }
      else
      {
        if ( v3 <= 0 )
        {
LABEL_11:
          if ( v4 > 0 )
            *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272007995] + 4 * v8 + 16785408) = a3;
          return;
        }
        if ( v4 > 0 )
          *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272004659] + 16793600LL) = a3;
      }
      *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272031347] + 4 * v7 + 0x2000) = a3;
    }
    if ( v6 )
      return;
    goto LABEL_11;
  }
}
