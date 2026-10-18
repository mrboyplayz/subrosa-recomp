#include "shared_client.h"

//----- (0000000140187180) ----------------------------------------------------
float            sub_140187180(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7;
  float v9;
  float v10;
  float v11;

  v7 = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(v7 * a3) + (float)(a2 * a6);
  v9 = a2 * a6;
  v10 = v7 * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * v7) + v9) * a2) + (float)(v10 * v7);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(v7 * v7) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * v7) + v9) * a2))
                 * a2)
         + (float)((float)(v10 * v7) * v7);
  return v11;
}

//----- (0000000140187270) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_140187270(float a1, float a2, float a3, double a4, float a5)
{
  __int128 v5;

  v5 = *(_OWORD *)&a4;
  *(float *)&v5 = (float)((float)((float)((float)((float)((float)(*(float *)&a4 * 3.0) * (float)(1.0 - a1))
                                                + (float)(a1 * a5))
                                        * a1)
                                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)(a3 * 3.0)))
                        * a1)
                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)((float)(1.0 - a1) * a2));
  return (__m128)v5;
}

// 140187270: inconsistent variable size for 'xmm3_8.8'

//----- (00000001401872F0) ----------------------------------------------------
float            sub_1401872F0(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7;
  float v8;

  if ( a1 == 1 )
    return a6 - a3;
  v7 = a2 + a2;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a3 - (float)(a4 + a4)) + a6) * v7) - (float)(a3 + a3)) + (float)(a4 + a4);
  if ( a1 == 3 )
    return (float)((float)((float)((float)((float)((float)((float)((float)(a4 * 3.0) - a3) - (float)(a5 * 3.0)) + a6)
                                         * a2)
                                 * (float)(a2 * 3.0))
                         + (float)((float)((float)((float)(a3 * 3.0) - (float)(a4 * 6.0)) + (float)(a5 * 3.0)) * v7))
                 - (float)(a3 * 3.0))
         + (float)(a4 * 3.0);
  return v8;
}

//----- (0000000140187410) ----------------------------------------------------
_BOOL8            sub_140187410(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  extern int collision_edge_side(const float *p0, const float *p1, const float *c, const float *e0, const float *e1);
  /* src/engine/collision_mesh.c */
  return collision_edge_side(a1, a2, a3, a4, a5);
}

//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sub_1401880C0(     __m128i *a1, unsigned int a2)
{
  __m128i *result;

  if ( a2 <= 0x400 )
  {
    g_1829F8BD4 = a2;
    result = crt_memcpy((__m128i *)&g_1829F8BD8, a1, a2);
    g_1829F8FD8 = 1;
  }
  return result;
}

//----- (0000000140188900) ----------------------------------------------------
__int64            sub_140188900(int *a1, float *a2, float *a3, int a4)
{
  /* Ported to src/engine/world_streets.c and compared with the original
     (tools/native-compare, suite streets). Callers discard the result. */
  extern void world_streets_triangles_in_box(void *, const float *, const float *, int);
  world_streets_triangles_in_box(a1, a2, a3, a4);
  return 0;
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

//----- (000000014018C250) ----------------------------------------------------
void            sub_14018C250(int a1)
{
  __int64 v1;
  __int64 v2;
  signed int v3;
  unsigned int *v4;
  __int64 v5;
  unsigned int v6;

  if ( a1 != -1 )
  {
    v1 = 396LL * a1;
    v2 = (int)dword_140404A6C[v1 + 225426186];
    if ( v2 > 0 )
    {
      v3 = g_15FD06200;
      v4 = &dword_140404A6C[v1 + 225426187];
      do
      {
        v5 = v3;
        v6 = *v4++;
        dword_140404A6C[v5 + 132384230] = v6;
        v3 = ++g_15FD06200;
        --v2;
      }
      while ( v2 );
    }
  }
}

//----- (000000014018C2B0) ----------------------------------------------------
void            sub_14018C2B0(_DWORD *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}

//----- (000000014018C340) ----------------------------------------------------
void            sub_14018C340(int a1)
{
  __m128 v2;
  __m128 v3;
  float v4;
  __m128 v5;
  __m128 v6;
  _DWORD sr_branch_position[3];
  float sr_branch_axis[3];
  _DWORD sr_branch_position2[3];
  _DWORD sr_branch_matrix[9];
  _DWORD sr_branch_matrix2[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018C340[192];
#define v8 (*(__int64 (*))(void *)(sr_frame_14018C340 + 0)) /* [rsp+8h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14018C340 + 176)) /* [rsp+B8h] */

  (*(__int128 *)sr_branch_matrix) = xmmword_140278D30;
  mesh_vertex_count = 0;
  (*(__int128 *)(sr_branch_matrix + 4)) = xmmword_140278D30;
  mesh_triangle_count = 0;
  sr_branch_matrix[8] = 1065353216;
  g_16AD03DB4 = 0;
  (*(unsigned __int64 *)sr_branch_position) = 0;
  (*(float *)&sr_branch_position[2]) = 0.0;
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1056964608), 0.375, 4.0);
  v2 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  v3 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v2, f32)[0] = *((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 4.0;
  sr_branch_axis[1] = 0.0;
  SR_VEC_LANES(128, v3, f32)[0] = *(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 4.0;
  v4 = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v2, v3), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(float *)&sr_branch_position[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(_DWORD *)&sr_branch_axis[2]) = 1064852291;
  sr_branch_axis[0] = 0.24253564;
  (*(float *)&sr_branch_position2[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1052770304), 0.25, 3.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1044381696), 0.125, 3.0);
  v5 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  SR_VEC_LANES(128, v5, f32)[0] = (float)(*((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 3.0) + SR_VEC_LANES(128, v2, f32)[0];
  v6 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v6, f32)[0] = (float)(*(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 3.0) + SR_VEC_LANES(128, v3, f32)[0];
  (*(float *)&sr_branch_position[2]) = (float)(*((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 3.0) + v4;
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v5, v6), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(_DWORD *)&sr_branch_axis[2]) = -1087044365;
  sr_branch_axis[0] = 0.70710677;
  (*(float *)&sr_branch_position2[2]) = (*(float *)&sr_branch_position[2]);
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1048576000), 0.1875, 2.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1040187392), 0.09375, 2.0);
  sub_1401449C0(a1, 1);
  return;
}
#undef v8
#undef v21

//----- (000000014018C6A0) ----------------------------------------------------
__int64            sub_14018C6A0(float *a1, float *a2, double a3, float a4, float a5)
{
  unsigned int v5;
  unsigned int v8;
  __m128 v9;
  __int64 v10;
  float v11;
  __m128d v13;
  __m128 v14;
  double v15;
  __int64 v16;
  double v17;
  float v18;
  float v19;
  float v20;
  double v21;
  float v22;
  float v23;
  unsigned int v24;
  float v25;
  float v26;
  unsigned int v27;
  float v28;
  float v29;
  float v30;
  float v31;
  unsigned int v32;
  float v33;
  float v34;
  unsigned int v35;
  __m128d v36;
  __int64 v37;
  __m128 v38;
  double v39;
  __int64 v40;
  double v41;
  float v42;
  float v43;
  float v44;
  float v45;
  unsigned int v46;
  float v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  int v55;
  unsigned int v56;
  int v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  float v62;
  float v63;
  __int64 v64;
  float v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  __int64 result;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;

  v5 = mesh_vertex_count;
  v8 = mesh_vertex_count;
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v10 = 3;
  v11 = *(float *)&a3;
  do
  {
    v13 = _mm_cvtps_pd(v9);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], (__int64)a2, a3));
    v15 = *(double *)SR_VEC_LANES(128, v14, u64);
    v16 = (int)(3 * v5);
    v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0];
    v18 = v11 * v17;
    v19 = -(v11 * *(double *)SR_VEC_LANES(128, v14, u64));
    v20 = v18;
    HIDWORD(v21) = 0;
    v22 = (float)(v18 * a2[1]) + a1[1];
    v23 = (float)(v18 * a2[2]) + a1[2];
    *(float *)&v24 = (float)((float)(v20 * *a2) + *a1) + (float)(v19 * a2[6]);
    SR_VEC_LANES(128, v14, f32)[0] = v19 * a2[7];
    v25 = v19 * a2[8];
    dword_140404A6C[v16 + 177167567] = v24;
    *(float *)&dword_140404A6C[v16 + 177167568] = v22 + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&dword_140404A6C[v16 + 177167569] = v23 + v25;
    v26 = a4 * v17;
    ++mesh_vertex_count;
    v27 = 3 * mesh_vertex_count;
    v28 = -(a4 * v15);
    v29 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v26 * *a2);
    SR_VEC_LANES(128, v14, f32)[0] = v26 * a2[1];
    v30 = v26 * a2[2];
    v31 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&v32 = v29 + (float)(v28 * a2[6]);
    v33 = v28 * a2[7];
    SR_VEC_LANES(128, v14, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v34 = v28 * a2[8];
    *(float *)&v21 = v31 + v33;
    dword_140404A6C[v27 + 177167567] = v32;
    dword_140404A6C[v27 + 177167568] = LODWORD(v21);
    *(float *)&dword_140404A6C[v27 + 177167569] = (float)(SR_VEC_LANES(128, v14, f32)[0] + v30) + v34;
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 1.047197551196598;
    v35 = ++mesh_vertex_count;
    v36 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    v38 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v36, f64)[0], v37, v21));
    v39 = *(double *)SR_VEC_LANES(128, v38, u64);
    v40 = (int)(3 * v35);
    v41 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v38, (__m128d)v38, 1), f64)[0];
    *(float *)&v21 = -(v11 * *(double *)SR_VEC_LANES(128, v38, u64));
    v42 = v11 * v41;
    v43 = (float)(v42 * *a2) + *a1;
    v44 = (float)(v42 * a2[1]) + a1[1];
    v45 = (float)(v42 * a2[2]) + a1[2];
    *(float *)&v46 = v43 + (float)(*(float *)&v21 * a2[6]);
    SR_VEC_LANES(128, v38, f32)[0] = *(float *)&v21 * a2[7];
    *(float *)&v21 = *(float *)&v21 * a2[8];
    dword_140404A6C[v40 + 177167567] = v46;
    *(float *)&dword_140404A6C[v40 + 177167568] = v44 + SR_VEC_LANES(128, v38, f32)[0];
    HIDWORD(a3) = 0;
    *(float *)&dword_140404A6C[v40 + 177167569] = v45 + *(float *)&v21;
    v47 = a4 * v41;
    ++mesh_vertex_count;
    v48 = 3 * mesh_vertex_count;
    v49 = -(a4 * v39);
    *(float *)&v41 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v47 * *a2);
    SR_VEC_LANES(128, v38, f32)[0] = v47 * a2[1];
    v50 = v47 * a2[2];
    *(float *)&a3 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v38, f32)[0];
    *(float *)&v41 = *(float *)&v41 + (float)(v49 * a2[6]);
    v51 = v49 * a2[7];
    SR_VEC_LANES(128, v38, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v52 = v49 * a2[8];
    dword_140404A6C[v48 + 177167567] = LODWORD(v41);
    *(float *)&a3 = *(float *)&a3 + v51;
    dword_140404A6C[v48 + 177167568] = LODWORD(a3);
    *(float *)&dword_140404A6C[v48 + 177167569] = (float)(SR_VEC_LANES(128, v38, f32)[0] + v50) + v52;
    v5 = mesh_vertex_count + 1;
    SR_VEC_LANES(128, v36, f64)[0] = SR_VEC_LANES(128, v36, f64)[0] + 1.047197551196598;
    ++mesh_vertex_count;
    v9 = _mm_cvtpd_ps(v36);
    --v10;
  }
  while ( v10 );
  v53 = -v11;
  v54 = a4 + a5;
  v55 = 3 * v5;
  v56 = v8 + 12;
  v57 = 2;
  v58 = 2;
  *(float *)&v59 = (float)(v53 * a2[3]) + *a1;
  *(float *)&v60 = (float)(v53 * a2[4]) + a1[1];
  *(float *)&v61 = (float)(v53 * a2[5]) + a1[2];
  dword_140404A6C[v55 + 177167567] = v59;
  dword_140404A6C[v55 + 177167568] = v60;
  dword_140404A6C[v55 + 177167569] = v61;
  ++mesh_vertex_count;
  v62 = v54 * a2[3];
  v63 = v54 * a2[4];
  v64 = 3 * mesh_vertex_count;
  v65 = v54 * a2[5];
  v66 = v8 + 2;
  *(float *)&v67 = v62 + *a1;
  *(float *)&v68 = v63 + a1[1];
  *(float *)&v69 = v65 + a1[2];
  v70 = v8 + 13;
  dword_140404A6C[v64 + 177167567] = v67;
  dword_140404A6C[v64 + 177167568] = v68;
  dword_140404A6C[v64 + 177167569] = v69;
  ++mesh_vertex_count;
  LODWORD(result) = mesh_triangle_count;
  do
  {
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v66 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66 - 1;
    v72 = v8 + 2 * ((v57 - 1) % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v72 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v73 = 6 * mesh_triangle_count;
    dword_140404A6C[v73 + 178011345] = 1052770304;
    dword_140404A6C[v73 + 178011346] = 1052770304;
    dword_140404A6C[v73 + 178011347] = 1052770304;
    dword_140404A6C[v73 + 178011348] = 1052770304;
    dword_140404A6C[v73 + 178011349] = 1052770304;
    dword_140404A6C[v73 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v72 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v72;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v74 = 6 * mesh_triangle_count;
    dword_140404A6C[v74 + 178011345] = 1052770304;
    dword_140404A6C[v74 + 178011346] = 1052770304;
    dword_140404A6C[v74 + 178011347] = 1052770304;
    dword_140404A6C[v74 + 178011348] = 1052770304;
    dword_140404A6C[v74 + 178011349] = 1052770304;
    dword_140404A6C[v74 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v72;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v56;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v75 = 6 * mesh_triangle_count;
    dword_140404A6C[v75 + 178011345] = 1052770304;
    dword_140404A6C[v75 + 178011346] = 1052770304;
    dword_140404A6C[v75 + 178011347] = 1052770304;
    dword_140404A6C[v75 + 178011348] = 1052770304;
    dword_140404A6C[v75 + 178011349] = 1052770304;
    dword_140404A6C[v75 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v72 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66 - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v70;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v76 = 6 * mesh_triangle_count;
    dword_140404A6C[v76 + 178011345] = 1052770304;
    dword_140404A6C[v76 + 178011346] = 1052770304;
    dword_140404A6C[v76 + 178011347] = 1052770304;
    dword_140404A6C[v76 + 178011348] = 1052770304;
    dword_140404A6C[v76 + 178011349] = 1052770304;
    dword_140404A6C[v76 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66 + 1;
    v77 = v8 + 2 * (v57 % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v77 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v78 = 6 * mesh_triangle_count;
    dword_140404A6C[v78 + 178011345] = 1052770304;
    dword_140404A6C[v78 + 178011346] = 1052770304;
    dword_140404A6C[v78 + 178011347] = 1052770304;
    dword_140404A6C[v78 + 178011348] = 1052770304;
    dword_140404A6C[v78 + 178011349] = 1052770304;
    dword_140404A6C[v78 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v77 + 1;
    v79 = v66 + 3;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v77;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v80 = 6 * mesh_triangle_count;
    dword_140404A6C[v80 + 178011345] = 1052770304;
    dword_140404A6C[v80 + 178011346] = 1052770304;
    dword_140404A6C[v80 + 178011347] = 1052770304;
    dword_140404A6C[v80 + 178011348] = 1052770304;
    dword_140404A6C[v80 + 178011349] = 1052770304;
    dword_140404A6C[v80 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v77;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v56;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v81 = 6 * mesh_triangle_count;
    dword_140404A6C[v81 + 178011345] = 1052770304;
    dword_140404A6C[v81 + 178011346] = 1052770304;
    dword_140404A6C[v81 + 178011347] = 1052770304;
    dword_140404A6C[v81 + 178011348] = 1052770304;
    dword_140404A6C[v81 + 178011349] = 1052770304;
    dword_140404A6C[v81 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v77 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v70;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v82 = 6 * mesh_triangle_count;
    dword_140404A6C[v82 + 178011345] = 1052770304;
    dword_140404A6C[v82 + 178011346] = 1052770304;
    dword_140404A6C[v82 + 178011347] = 1052770304;
    dword_140404A6C[v82 + 178011348] = 1052770304;
    dword_140404A6C[v82 + 178011349] = 1052770304;
    dword_140404A6C[v82 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66 + 3;
    v83 = v8 + 2 * ((v57 + 1) % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v83 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v84 = 6 * mesh_triangle_count;
    dword_140404A6C[v84 + 178011345] = 1052770304;
    dword_140404A6C[v84 + 178011346] = 1052770304;
    dword_140404A6C[v84 + 178011347] = 1052770304;
    dword_140404A6C[v84 + 178011348] = 1052770304;
    dword_140404A6C[v84 + 178011349] = 1052770304;
    dword_140404A6C[v84 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v83 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v83;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v85 = 6 * mesh_triangle_count;
    dword_140404A6C[v85 + 178011345] = 1052770304;
    dword_140404A6C[v85 + 178011346] = 1052770304;
    dword_140404A6C[v85 + 178011347] = 1052770304;
    dword_140404A6C[v85 + 178011348] = 1052770304;
    dword_140404A6C[v85 + 178011349] = 1052770304;
    dword_140404A6C[v85 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v66 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v83;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v56;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v86 = 6 * mesh_triangle_count;
    dword_140404A6C[v86 + 178011345] = 1052770304;
    dword_140404A6C[v86 + 178011346] = 1052770304;
    dword_140404A6C[v86 + 178011347] = 1052770304;
    dword_140404A6C[v86 + 178011348] = 1052770304;
    dword_140404A6C[v86 + 178011349] = 1052770304;
    dword_140404A6C[v86 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    v57 += 3;
    v66 += 6;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v83 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = v79;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v70;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    v87 = 6 * mesh_triangle_count;
    dword_140404A6C[v87 + 178011345] = 1052770304;
    dword_140404A6C[v87 + 178011346] = 1052770304;
    dword_140404A6C[v87 + 178011347] = 1052770304;
    dword_140404A6C[v87 + 178011348] = 1052770304;
    dword_140404A6C[v87 + 178011349] = 1052770304;
    dword_140404A6C[v87 + 178011350] = 1052770304;
    result = ++mesh_triangle_count;
    --v58;
  }
  while ( v58 );
  return result;
}

//----- (000000014018D440) ----------------------------------------------------
__int64            sub_14018D440(float *a1, int a2)
{
  char v3;
  signed int v4;
  __int64 result;
  float v6;
  int v7;

  v3 = a2;
  sub_140115AE0(&v7, a2);
  v4 = (unsigned int)(1 << v3) >> 1;
  result = v7 & (unsigned int)v4;
  v6 = (float)(v7 & (v4 - 1)) * (6.28318530718 / (float)v4);
  *a1 = v6;
  if ( (_DWORD)result == v4 )
    *a1 = -v6;
  return result;
}

//----- (000000014018D510) ----------------------------------------------------
__int64            sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int v6;
  __int64 result;
  unsigned int v8;
  unsigned int v9;

  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
    {
      return sub_140115AE0(a1, a3);
    }
    else
    {
      sub_140115AE0(&v9, 9);
      v8 = v9;
      if ( (v9 & 0x100) != 0 )
        v8 = v9 | 0xFFFFFE00;
      result = v8 + a2;
      *a1 = result;
    }
  }
  else
  {
    sub_140115AE0(&v9, 4);
    v6 = v9;
    if ( (v9 & 8) != 0 )
      v6 = v9 | 0xFFFFFFF0;
    result = v6 + a2;
    *a1 = result;
  }
  return result;
}

//----- (000000014018D5E0) ----------------------------------------------------
__int64            sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result;
  int v7;
  int v8;
  int v9;

  if ( g_16B2A224C )
  {
    result = sub_140115AE0(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
      return sub_140115D20(a1, a3);
    v7 = g_165D84964;
  }
  else
  {
    v7 = g_165D84960;
  }
  sub_140115AE0(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)v8 + 179992058];
    return (__int64)&g_16B165F60;
  }
  return result;
}

//----- (000000014018D6D0) ----------------------------------------------------
__int64            sub_14018D6D0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 result;
  unsigned int v11;

  v2 = a2;
  v3 = 1760LL * a2;
  v4 = a1;
  dword_140404A6C[v3 + 278846107] = dword_140404A6C[v3 + 278846102];
  dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278846103];
  dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278846104];
  dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278846105];
  dword_140404A6C[v3 + 278846102] = game_tick;
  sub_140115AE0(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF568 + v6),
    *(unsigned int *)((char *)&g_160FFF568 + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF56C + v6),
    *(unsigned int *)((char *)&g_160FFF56C + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF570 + v6),
    *(unsigned int *)((char *)&g_160FFF570 + v5),
    28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&g_160FFF568 + v6) * 0.00024414062) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&g_160FFF56C + v6) * 0.00024414062;
  *(float *)&v9 = (float)((float)*(int *)((char *)&g_160FFF570 + v6) * 0.00024414062) - 4096.0;
  dword_140404A6C[v3 + 278845916] = v7;
  dword_140404A6C[v3 + 278845917] = v8;
  dword_140404A6C[v3 + 278845918] = v9;
  dword_140404A6C[v3 + 278846103] = v7;
  dword_140404A6C[v3 + 278846104] = dword_140404A6C[v3 + 278845917];
  dword_140404A6C[v3 + 278846105] = dword_140404A6C[v3 + 278845918];
  if ( !dword_140404A6C[v3 + 278846106] )
  {
    dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278845916];
    dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278845917];
    dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278846107] = game_tick;
  }
  dword_140404A6C[v3 + 278846106] = 1;
  sub_140115AE0((unsigned int *)((char *)&g_160FFF574 + v6), 2);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF578 + v6),
    *(unsigned int *)((char *)&g_160FFF578 + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF57C + v6),
    *(unsigned int *)((char *)&g_160FFF57C + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF580 + v6),
    *(unsigned int *)((char *)&g_160FFF580 + v5),
    14);
  sub_140191F90((float *)&dword_140404A6C[v3 + 278845934], (int *)((char *)&g_160FFF574 + v6));
  result = dword_140404A6C[v3 + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846062], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846061], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846063], 30);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846112], 1);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_140115AE0(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[v3 + 278846113] = result;
  }
  return result;
}

//----- (000000014018DB20) ----------------------------------------------------
__int64            sub_14018DB20(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 result;
  unsigned int v5;

  v1 = 1760LL * a1;
  sub_140115AE0(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115AE0(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  dword_140404A6C[v1 + 278845903] = v2;
  sub_140115AE0(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  dword_140404A6C[v1 + 278845902] = v3;
  result = sub_140115AE0(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115AE0(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115AE0(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

//----- (000000014018DBF0) ----------------------------------------------------
__int64            sub_14018DBF0(int a1)
{
  __int64 v1;
  int *v2;
  __int64 result;
  int v4;
  _DWORD *v5;
  int v6;
  _DWORD *v7;
  int *v8;
  unsigned int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  unsigned int v14;
  signed int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  _DWORD *v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  int v29;
  char v30;
  int v31;
  unsigned int *v32;
  int v33;
  unsigned int v34;
  char v35;
  int v36;
  _DWORD *v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  char v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  signed int v76;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018DBF0[32];
#define v77 (*(unsigned int (*))(void *)(sr_frame_14018DBF0 + 0)) /* [rsp+70h] */
#define v78 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 8)) /* [rsp+78h] */
#define v79 (*(char * (*))(void *)(sr_frame_14018DBF0 + 16)) /* [rsp+80h] */
#define v80 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 24)) /* [rsp+88h] */

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&g_1873DE460 + v1);
  v79 = (char *)&g_1873DE460 + v1;
  result = sub_140115AE0((unsigned int *)((char *)&g_1873DE460 + v1), 6);
  if ( *(unsigned int *)((char *)&g_1873DE460 + v1) != 23 )
  {
    sub_140115AE0((unsigned int *)((char *)&g_1873DE464 + v1), 28);
    v4 = *v2;
    v5 = (unsigned int *)((char *)&g_1873DE480 + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_140115AE0((unsigned int *)((char *)&g_1873DE480 + v1), 4);
      sub_140115AE0((unsigned int *)((char *)&g_1873DE484 + v1), 10);
      sub_14007ADF0((__m128i *)((char *)&g_1873DE468 + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&g_1873DE474 + v1), 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_140115AE0((unsigned int *)((char *)&g_1873DE480 + v1), 4);
      v7 = (unsigned int *)((char *)&g_1873DE484 + v1);
      v78 = (unsigned int *)((char *)&g_1873DE484 + v1);
      sub_140115AE0((unsigned int *)((char *)&g_1873DE484 + v1), 6);
      sub_14007ADF0((__m128i *)((char *)&g_1873DE468 + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&g_1873DE474 + v1), 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (unsigned int *)((char *)&g_1873DE484 + v1);
      v78 = (unsigned int *)((char *)&g_1873DE484 + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&g_1873DE480 + v1);
      sub_140115AE0((unsigned int *)((char *)&g_1873DE480 + v1), 6);
      sub_140115AE0(v7, 4);
      sub_140115AE0(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(unsigned int *)((char *)&g_1873DE488 + v1) = v9;
      sub_140115AE0((unsigned int *)((char *)&g_1873DE48C + v1), 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = (char *)&g_1873DE4A0 + v1;
        do
        {
          sub_140115AE0(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      *((_BYTE *)&g_1873DE4A0 + v1 + v10) = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_140115AE0((unsigned int *)((char *)&g_1873DE480 + v1), 10);
      sub_140115AE0(v7, 8);
      sub_140115AE0(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(unsigned int *)((char *)&g_1873DE488 + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_140115AE0((unsigned int *)((char *)&g_1873DE480 + v1), 10);
      sub_140115AE0(v7, 4);
      sub_140115AE0((unsigned int *)((char *)&g_1873DE488 + v1), 10);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      v17 = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v15 = packet_in_byte + 1;
            v17 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)((char *)&packet_in_data + v18);
          LODWORD(v18) = *(unsigned int *)((char *)&g_1853AD42C + v18);
          *(_QWORD *)((char *)&g_1873DE468 + v1) = v19;
          *(unsigned int *)((char *)&g_1873DE470 + v1) = v18;
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)((char *)&packet_in_data + v20);
          LODWORD(v20) = *(unsigned int *)((char *)&g_1853AD42C + v20);
          *(_QWORD *)((char *)&g_1873DE474 + v1) = v21;
          *(unsigned int *)((char *)&g_1873DE47C + v1) = v20;
          packet_in_byte = v15;
        }
      }
    }
    else
    {
      v17 = packet_in_bit;
      v15 = packet_in_byte;
      v16 = packet_in_length;
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_140115AE0(v5, 20);
      sub_140115AE0(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(unsigned int *)((char *)&g_1873DE484 + v1) = v23;
      sub_140115AE0(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (unsigned int *)((char *)&g_1873DE48C + v1);
      *(unsigned int *)((char *)&g_1873DE488 + v1) = v24;
      sub_140115AE0((unsigned int *)((char *)&g_1873DE48C + v1), 4);
      v22 = *(unsigned int *)((char *)&g_1873DE460 + v1);
      v15 = packet_in_byte;
      v17 = packet_in_bit;
      v16 = packet_in_length;
    }
    else
    {
      v25 = (unsigned int *)((char *)&g_1873DE48C + v1);
    }
    if ( v22 == 6 )
    {
      sub_140115AE0(v5, 10);
      sub_140115AE0(v78, 3);
      sub_140115AE0((unsigned int *)((char *)&g_1873DE488 + v1), 16);
      sub_140115AE0(v25, 2);
      v22 = *(unsigned int *)((char *)&g_1873DE460 + v1);
      v15 = packet_in_byte;
      v17 = packet_in_bit;
      v16 = packet_in_length;
    }
    v80 = (unsigned int *)((char *)&g_1873DE480 + v1);
    if ( v22 == 7 )
    {
      sub_140115AE0(v5, 16);
      sub_140115AE0(&v77, 10);
      v26 = v77;
      v27 = packet_in_byte;
      if ( v77 == 1023 )
        v26 = -1;
      *(unsigned int *)((char *)&g_1873DE484 + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          ++v27;
          packet_in_bit = 0;
          packet_in_byte = v27;
        }
        *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v27);
        packet_in_byte = v27 + 4;
      }
      sub_140115AE0(v25, 24);
      v16 = packet_in_length;
      v17 = packet_in_bit;
      v28 = 0;
      v15 = packet_in_byte;
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29)
                  & (*((unsigned __int8 *)&packet_in_data + v15) >> SLOBYTE(packet_in_bit))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              packet_in_byte = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            packet_in_byte = v15;
            v30 += v31;
            packet_in_bit = 0;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          packet_in_bit = v17;
        }
LABEL_61:
        *((_BYTE *)&g_1873DE4A0 + v1 + v28++) = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      *((_BYTE *)&g_1873DE4BC + v1 + 3) = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 10);
      sub_140115AE0(v78, 1);
      v15 = packet_in_byte;
      v33 = 8;
      v16 = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        v34 = v77;
        v17 = packet_in_bit;
      }
      else
      {
        v17 = packet_in_bit;
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33)
                & (*((unsigned __int8 *)&packet_in_data + v15) >> SLOBYTE(packet_in_bit))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          packet_in_byte = v15;
          v35 += v36;
          packet_in_bit = 0;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        packet_in_bit = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(unsigned int *)((char *)&g_1873DE488 + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_140115AE0(v80, 8);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      v17 = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v15 = packet_in_byte + 1;
            v17 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          v38 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v38);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v39 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v39);
            packet_in_byte = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v40 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE48C + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v40);
            packet_in_byte = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_140115AE0(v37, 8);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      v17 = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v15 = packet_in_byte + 1;
            v17 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)((char *)&packet_in_data + v41);
          LODWORD(v41) = *(unsigned int *)((char *)&g_1853AD42C + v41);
          *(_QWORD *)((char *)&g_1873DE468 + v1) = v42;
          *(unsigned int *)((char *)&g_1873DE470 + v1) = v41;
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v43 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE490 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v43);
            packet_in_byte = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v44 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE494 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v44);
            packet_in_byte = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 16);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      v17 = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v15 = packet_in_byte + 1;
            v17 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          v45 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE490 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v45);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v46 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE494 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v46);
          packet_in_byte = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 1);
      v47 = *v32;
      v17 = packet_in_bit;
      v15 = packet_in_byte;
      v16 = packet_in_length;
    }
    else
    {
      v37 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v48 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE480 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v48);
        packet_in_byte = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v49 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v49);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v50 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v50);
            packet_in_byte = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v51 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE48C + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v51);
            packet_in_byte = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v52 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE480 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v52);
        packet_in_byte = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v53 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v53);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v54 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v54);
            packet_in_byte = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v55 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE48C + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v55);
            packet_in_byte = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 16);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 6);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 7);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000 )
      {
        v17 = packet_in_bit;
      }
      else
      {
        v56 = *(int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536);
        v17 = packet_in_bit;
        if ( (signed int)(packet_in_byte + v56) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v15 = packet_in_byte + 1;
            v17 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          crt_memcpy(
            (__m128i *)((char *)&g_1873DE4A0 + v1),
            (     __m128i *)((char *)&packet_in_data + v15),
            v56);
          v15 += v56;
          packet_in_byte = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_140115AE0(v37, 10);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 30);
      v15 = packet_in_byte;
      v16 = packet_in_length;
      v17 = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          v15 = packet_in_byte + 1;
          v17 = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)((char *)&packet_in_data + v57);
        LODWORD(v57) = *(unsigned int *)((char *)&g_1853AD42C + v57);
        *(_QWORD *)((char *)&g_1873DE468 + v1) = v58;
        *(unsigned int *)((char *)&g_1873DE470 + v1) = v57;
        packet_in_byte = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v59 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE480 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v59);
        packet_in_byte = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v60 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v60);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v61 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v61);
          packet_in_byte = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 20);
      result = *v32;
      v17 = packet_in_bit;
      v15 = packet_in_byte;
      v16 = packet_in_length;
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v62 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&g_1873DE480 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + v62);
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v63 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v63);
            packet_in_byte = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              packet_in_bit = 0;
              packet_in_byte = v15;
            }
            *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v15);
            packet_in_byte = v15 + 4;
          }
        }
      }
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 2);
      v17 = packet_in_bit;
      v15 = packet_in_byte;
      v16 = packet_in_length;
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v64 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE480 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v64);
        packet_in_byte = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v65 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE484 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v65);
        packet_in_byte = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v66 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&g_1873DE488 + v1) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + v66);
        packet_in_byte = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6)
                & (*((unsigned __int8 *)&packet_in_data + v15) >> SLOBYTE(packet_in_bit))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          packet_in_byte = v15;
          v68 += v69;
          packet_in_bit = 0;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        packet_in_bit = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(unsigned int *)((char *)&g_1873DE48C + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)((char *)&packet_in_data + v70);
          result = *(unsigned int *)((char *)&g_1853AD42C + v70);
          *(_QWORD *)((char *)&g_1873DE468 + v1) = v71;
          *(unsigned int *)((char *)&g_1873DE470 + v1) = result;
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              packet_in_byte = v15;
              packet_in_bit = 0;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)((char *)&packet_in_data + v72);
            result = *(unsigned int *)((char *)&g_1853AD42C + v72);
            *(_QWORD *)((char *)&g_1873DE474 + v1) = v73;
            *(unsigned int *)((char *)&g_1873DE47C + v1) = result;
            packet_in_byte = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          packet_in_byte = v15;
          packet_in_bit = 0;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)((char *)&packet_in_data + v74);
        *(unsigned int *)((char *)&g_1873DE480 + v1) = result;
        packet_in_byte = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            packet_in_byte = v15;
            packet_in_bit = 0;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)((char *)&packet_in_data + v75);
          *(unsigned int *)((char *)&g_1873DE484 + v1) = result;
          packet_in_byte = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              packet_in_bit = 0;
              packet_in_byte = v15;
            }
            result = *(unsigned int *)((char *)&packet_in_data + v15);
            *(unsigned int *)((char *)&g_1873DE488 + v1) = result;
            packet_in_byte = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 8);
      v76 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000 )
      {
        result = packet_in_byte + 12;
        if ( (int)result <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v76 = packet_in_byte + 1;
            packet_in_bit = 0;
            ++packet_in_byte;
          }
          result = *(unsigned int *)((char *)&g_1853AD42C + v76);
          *(_QWORD *)((char *)&g_1873DE468 + v1) = *(_QWORD *)((char *)&packet_in_data + v76);
          *(unsigned int *)((char *)&g_1873DE470 + v1) = result;
          packet_in_byte = v76 + 12;
        }
      }
    }
  }
  return result;
}
#undef v77
#undef v78
#undef v79
#undef v80

//----- (0000000140191F90) ----------------------------------------------------
__int64            sub_140191F90(float *a1, int *a2)
{
  __int64 v2;
  __int64 v4;
  __m128d v5;
  __m128d v6;
  double v7;
  __m128i v8;
  __m128i v9;
  double v10;
  float v11;
  __m128 v12;
  double v13;
  __int64 v14;
  double v15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191F90[64];
#define v17 (*(__int64 (*))(void *)(sr_frame_140191F90 + 0)) /* [rsp+0h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140191F90 + 32)) /* [rsp+20h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140191F90 + 48)) /* [rsp+30h] */

  v2 = *a2;
  v4 = 1;
  v5 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v6 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( dword_140301DD8 != (_DWORD)v2 )
  {
    v4 = 2;
    v7 = (double)a2[1];
    SR_VEC_LANES(128, v6, f64)[0] = 1.0 - v7 * v7 * 0.00000002980959967779399;
    *((float *)&v18 + dword_140301DD8) = v7 * 0.0001726545674976309;
  }
  if ( dword_140301DDC != (_DWORD)v2 )
  {
    v8 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v8, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v8), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v8, i64) * *(double *)SR_VEC_LANES(128, v8, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DDC) = *(double *)SR_VEC_LANES(128, v8, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE0 != (_DWORD)v2 )
  {
    v9 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v9, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v9), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v9, i64) * *(double *)SR_VEC_LANES(128, v9, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE0) = *(double *)SR_VEC_LANES(128, v9, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE4 != (_DWORD)v2 )
  {
    v10 = (double)a2[v4];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + v10 * v10 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE4) = v10 * 0.0001726545674976309;
  }
  if ( SR_VEC_LANES(128, v6, f64)[0] <= 0.0 )
    v11 = 0.0;
  else
    v11 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v6), f64)[0];
  *((float *)&v18 + v2) = v11;
  v12 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v18))));
  SR_VEC_LANES(128, v12, f32)[0] = (float)((float)(SR_VEC_LANES(128, v12, f32)[0] * SR_VEC_LANES(128, v12, f32)[0])
                          + (float)(*((float *)&v18 + 2) * *((float *)&v18 + 2)))
                  + (float)((float)(*(float *)&v18 * *(float *)&v18)
                          + (float)(*((float *)&v18 + 1) * *((float *)&v18 + 1)));
  v13 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v12)), f64)[0];
  if ( v13 == 0.0 )
  {
    v18 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v5, f64)[0] = 1.0 / v13;
    v14 = 0;
    v15 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v5, v5), f64)[0];
    do
    {
      *(double *)((char *)&v18 + 4 * v14) = COERCE_FLOAT(*(_QWORD *)((char *)&v18 + 4 * v14)) * v15;
      v14 += 2;
    }
    while ( v14 < 4 );
  }
  sub_14011C340(a1, (float *)&v18);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v17
#undef v18
#undef v19

//----- (0000000140192160) ----------------------------------------------------
__int64            sub_140192160(float *a1, int *a2, char a3)
{
  __m128d v3;
  char v5;
  __int64 v6;
  __m128d v7;
  int v8;
  __int64 v9;
  double v10;
  double v11;
  __m128i v12;
  __m128i v13;
  double v14;
  float v15;
  __m128 v16;
  double v17;
  __int64 v18;
  double v19;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192160[64];
#define v21 (*(__int64 (*))(void *)(sr_frame_140192160 + 0)) /* [rsp+0h] */
#define v22 (*(__int128 (*))(void *)(sr_frame_140192160 + 32)) /* [rsp+20h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140192160 + 48)) /* [rsp+30h] */

  v3 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v5 = a3 - 1;
  v6 = 1;
  v7 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140301DF8 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = 1.0 - v11 * v11 * 2.0;
    *((float *)&v22 + dword_140301DF8) = v11 * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v12, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v12), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v12, i64) * *(double *)SR_VEC_LANES(128, v12, i64) * -2.0;
    *((float *)&v22 + dword_140301DFC) = *(double *)SR_VEC_LANES(128, v12, i64) * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v13, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v13), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v13, i64) * *(double *)SR_VEC_LANES(128, v13, i64) * -2.0;
    *((float *)&v22 + dword_140301E00) = *(double *)SR_VEC_LANES(128, v13, i64) * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + v14 * v14 * -2.0;
    *((float *)&v22 + dword_140301E04) = v14 * 1.414213562373095;
  }
  if ( SR_VEC_LANES(128, v7, f64)[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v7), f64)[0];
  *((float *)&v22 + v9) = v15;
  v16 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v22))));
  SR_VEC_LANES(128, v16, f32)[0] = (float)((float)(SR_VEC_LANES(128, v16, f32)[0] * SR_VEC_LANES(128, v16, f32)[0])
                          + (float)(*((float *)&v22 + 2) * *((float *)&v22 + 2)))
                  + (float)((float)(*(float *)&v22 * *(float *)&v22)
                          + (float)(*((float *)&v22 + 1) * *((float *)&v22 + 1)));
  v17 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v16)), f64)[0];
  if ( v17 == 0.0 )
  {
    v22 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v3, f64)[0] = 1.0 / v17;
    v18 = 0;
    v19 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v3, v3), f64)[0];
    do
    {
      *(double *)((char *)&v22 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v22 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  sub_14011C340(a1, (float *)&v22);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v21
#undef v22
#undef v23

//----- (0000000140192470) ----------------------------------------------------
__int64            sub_140192470(float *a1, __int64 a2, float a3, int a4)
{
  float *v4;
  signed int v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  __int64 result;
  float v12;
  _DWORD v13[4];

  v4 = a1;
  v6 = (unsigned int)(1 << a4) >> 1;
  v7 = 3;
  v8 = a2 - (_QWORD)a1;
  v9 = (float)v6 / a3;
  do
  {
    sub_140115AE0(v13, a4);
    v10 = (float)(v13[0] & (v6 - 1));
    result = v13[0] & (unsigned int)v6;
    v12 = (float)(1.0 / v9) * v10;
    if ( (_DWORD)result == v6 )
      v12 = (float)(-1.0 / v9) * v10;
    *v4 = v12 + *(float *)((char *)v4 + v8);
    ++v4;
    --v7;
  }
  while ( v7 );
  return result;
}

//----- (0000000140192560) ----------------------------------------------------
__int64            sub_140192560(float *a1, float a2, int a3)
{
  char v4;
  signed int v5;
  __int64 result;
  float v7;
  int v8;

  v4 = a3;
  sub_140115AE0(&v8, a3);
  v5 = (unsigned int)(1 << v4) >> 1;
  result = v8 & (unsigned int)v5;
  v7 = (float)(v8 & (v5 - 1)) / (float)((float)v5 / a2);
  *a1 = v7;
  if ( (_DWORD)result == v5 )
    *a1 = -v7;
  return result;
}

//----- (00000001401925F0) ----------------------------------------------------
__int64            sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4;
  float v6;
  __int64 v8;
  __int64 result;
  int v10;
  double v11;
  double v12;
  double v13;
  double v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;

  v4 = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  a2[*a1 & 3] = v6;
  v8 = 1;
  result = (unsigned int)((1 << a3) - 1);
  v10 = (1 << a3) - 1;
  v11 = (double)v10;
  if ( v4 )
  {
    result = (unsigned int)v10 & (a1[1] >> 1);
    v12 = 1.0 / v11;
    if ( (a1[1] & 1) != 0 )
      v12 = -1.0 / v11;
    v8 = 2;
    *a2 = (double)(int)result * v12;
  }
  if ( (_DWORD)v4 != 1 )
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v13 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v13 = -1.0 / v11 * (double)(int)result;
    ++v8;
    a2[1] = v13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v15 = a2[2];
  }
  else
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v14 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v14 = -1.0 / v11 * (double)(int)result;
    v15 = v14;
  }
  v16 = a2[1];
  v17 = *a2;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v15 * v15));
  if ( v18 == 0.0 )
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v19 = v15 * (float)(1.0 / v18);
    v20 = v16 * (float)(1.0 / v18);
    v21 = v17 * (float)(1.0 / v18);
  }
  *a2 = v21;
  a2[1] = v20;
  a2[2] = v19;
  return result;
}

//----- (0000000140192790) ----------------------------------------------------
__int64            sub_140192790(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  char *v7;
  int *v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  signed int v20;
  int v21;
  signed int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  signed int v26;
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
  float v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  float v49;
  float *v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  __int64 v56;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192790[304];
#define v58 (*(__int64 (*))(void *)(sr_frame_140192790 + 8)) /* [rsp+0h] */
#define v59 (*(int (*))(void *)(sr_frame_140192790 + 40)) /* [rsp+20h] */
#define v60 (*(unsigned int (*))(void *)(sr_frame_140192790 + 44)) /* [rsp+24h] */
#define v61 (*(float (*))(void *)(sr_frame_140192790 + 48)) /* [rsp+28h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_140192790 + 52)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_140192790 + 56)) /* [rsp+30h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140192790 + 60)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_140192790 + 64)) /* [rsp+38h] */
#define v66 (*(int (*))(void *)(sr_frame_140192790 + 68)) /* [rsp+3Ch] */
#define v67 (*(int (*))(void *)(sr_frame_140192790 + 72)) /* [rsp+40h] */
#define v68 (*(__int128 (*))(void *)(sr_frame_140192790 + 80)) /* [rsp+48h] */
#define v69 (*(int (*))(void *)(sr_frame_140192790 + 96)) /* [rsp+58h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_140192790 + 104)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140192790 + 112)) /* [rsp+68h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140192790 + 120)) /* [rsp+70h] */
#define v73 (*(__int64 (*))(void *)(sr_frame_140192790 + 128)) /* [rsp+78h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_140192790 + 136)) /* [rsp+80h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_140192790 + 144)) /* [rsp+88h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_140192790 + 152)) /* [rsp+90h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_140192790 + 160)) /* [rsp+98h] */
#define v78 (*(__int64 (*))(void *)(sr_frame_140192790 + 168)) /* [rsp+A0h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_140192790 + 176)) /* [rsp+A8h] */
#define v80 (*(unsigned int (*))(void *)(sr_frame_140192790 + 184)) /* [rsp+B0h] */
#define v81 (*(float (*))(void *)(sr_frame_140192790 + 188)) /* [rsp+B4h] */
#define v82 (*(unsigned int (*))(void *)(sr_frame_140192790 + 192)) /* [rsp+B8h] */
#define v83 (*(unsigned int (*))(void *)(sr_frame_140192790 + 196)) /* [rsp+BCh] */
#define v84 (*(float (*))(void *)(sr_frame_140192790 + 200)) /* [rsp+C0h] */
#define v85 (*(unsigned int (*))(void *)(sr_frame_140192790 + 204)) /* [rsp+C4h] */
#define v86 (*(unsigned int (*))(void *)(sr_frame_140192790 + 208)) /* [rsp+C8h] */
#define v87 (*(float (*))(void *)(sr_frame_140192790 + 212)) /* [rsp+CCh] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_140192790 + 216)) /* [rsp+D0h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_140192790 + 220)) /* [rsp+D4h] */
#define v90 (*(float (*))(void *)(sr_frame_140192790 + 224)) /* [rsp+D8h] */
#define v91 (*(float (*))(void *)(sr_frame_140192790 + 228)) /* [rsp+DCh] */
#define v92 (*(float (*))(void *)(sr_frame_140192790 + 232)) /* [rsp+E0h] */
#define v93 (*(float (*))(void *)(sr_frame_140192790 + 236)) /* [rsp+E4h] */
#define v94 (*(float (*))(void *)(sr_frame_140192790 + 240)) /* [rsp+E8h] */
#define v95 (*(float (*))(void *)(sr_frame_140192790 + 244)) /* [rsp+ECh] */
#define v96 (*(_DWORD (*)[2])(void *)(sr_frame_140192790 + 248)) /* [rsp+F0h] */
#define v97 (*(char (*))(void *)(sr_frame_140192790 + 256)) /* [rsp+F8h] */
#define v98 (*(__int64 (*))(void *)(sr_frame_140192790 + 296)) /* [rsp+120h] */

  v2 = a1;
  v3 = 104LL * a2;
  v4 = 180288LL * a1;
  v73 = a1;
  v79 = a2;
  v78 = v3;
  v5 = v3 + v4;
  v6 = *(unsigned int *)((char *)&g_19029AC68 + v3 + v4);
  v77 = v3 + v4;
  v60 = v6;
  if ( v6 >= 3 )
  {
    v7 = &v97;
    v8 = (int *)((char *)&g_19029AC6C + v5);
    v9 = (unsigned int)v6;
    do
    {
      v7 += 12;
      v10 = 15024LL * a1 + *v8++;
      *((_DWORD *)v7 - 5) = dword_140404A6C[3 * v10 + 335170685];
      *((_DWORD *)v7 - 4) = dword_140404A6C[3 * v10 + 335170686];
      *((_DWORD *)v7 - 3) = dword_140404A6C[3 * v10 + 335170687];
      --v9;
    }
    while ( v9 );
    v11 = *(unsigned int *)((char *)&g_19028AC4C + v4);
    LODWORD(v4) = 0;
    v61 = 65536.0;
    v74 = 0;
    v68 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v11 > 0 )
    {
      v16 = 0;
      v17 = 1;
      v72 = 0;
      v59 = 1;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      do
      {
        v18 = v16 + 1;
        v69 = v17;
        *(_QWORD *)&v68 = v18;
        v19 = v17;
        v71 = v18;
        v20 = v17;
        if ( v17 < v11 )
        {
          v21 = v17 + 1;
          v67 = v17 + 1;
          do
          {
            ++v18;
            v22 = v21;
            v76 = v18;
            v23 = v18;
            v70 = v18;
            if ( v21 < v11 )
            {
              v24 = v21 + 1;
              v66 = v21 + 1;
              do
              {
                v25 = v23 + 1;
                v26 = v24;
                v75 = v23 + 1;
                if ( v24 < v11 )
                {
                  do
                  {
                    v27 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v72];
                    v28 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v72];
                    v29 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v72];
                    v80 = LODWORD(v27);
                    v81 = v28;
                    v82 = LODWORD(v29);
                    v30 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v71];
                    v31 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v71];
                    v85 = dword_140404A6C[45072 * v73 + 335157371 + 4 * v71];
                    v84 = v30;
                    v32 = v30 - v28;
                    v83 = LODWORD(v31);
                    v33 = v31 - v27;
                    v34 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v23];
                    v35 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v23];
                    v87 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v23];
                    v88 = LODWORD(v34);
                    v36 = v34 - v29;
                    v86 = LODWORD(v35);
                    v37 = v35 - v27;
                    v38 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v25];
                    v39 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v25];
                    v40 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v25];
                    v41 = (float)((float)(v87 - v28) * (float)(*(float *)&v85 - v29)) - (float)(v36 * v32);
                    v89 = LODWORD(v38);
                    v90 = v39;
                    v42 = (float)(v36 * v33) - (float)(v37 * (float)(*(float *)&v85 - v29));
                    v91 = v40;
                    v43 = (float)(v37 * v32) - (float)((float)(v87 - v28) * v33);
                    v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
                    if ( v44 == 0.0 )
                    {
                      v45 = 0.0;
                      v46 = 0.0;
                      v47 = 0.0;
                    }
                    else
                    {
                      v45 = v41 * (float)(1.0 / v44);
                      v46 = v42 * (float)(1.0 / v44);
                      v47 = v43 * (float)(1.0 / v44);
                    }
                    v48 = v60;
                    if ( (double)((float)((float)((float)((float)(v39 - v28) * v46) + (float)((float)(v38 - v27) * v45))
                                        + (float)((float)(v40 - v29) * v47)) < 0.25) == 0.0 )
                    {
                      v49 = 0.0;
                      v50 = (float *)v96;
                      do
                      {
                        sub_14002E730((__int64)&v92, 4, (__int64)&v80, v50);
                        if ( v49 < fabs(v92) )
                          v49 = fabs(v92);
                        if ( v49 < fabs(v93) )
                          v49 = fabs(v93);
                        if ( v49 < fabs(v94) )
                          v49 = fabs(v94);
                        if ( v49 < fabs(v95) )
                          v49 = fabs(v95);
                        v50 += 3;
                        --v48;
                      }
                      while ( v48 );
                      LODWORD(v4) = 0;
                      v17 = v59;
                      v23 = v70;
                      if ( v61 <= v49 )
                      {
                        v12 = v62;
                        v13 = v63;
                        v14 = v64;
                        v15 = v65;
                      }
                      else
                      {
                        v15 = v59 - 1;
                        v61 = v49;
                        v12 = v26;
                        v65 = v59 - 1;
                        v62 = v26;
                        v14 = v20;
                        v64 = v20;
                        v13 = v22;
                        v63 = v22;
                      }
                    }
                    else
                    {
                      v17 = v59;
                    }
                    ++v26;
                    ++v25;
                  }
                  while ( v26 < v11 );
                  v24 = v66;
                }
                v23 = v75;
                ++v24;
                ++v22;
                v66 = v24;
                v70 = v75;
              }
              while ( v22 < v11 );
              v21 = v67;
              v18 = v76;
            }
            ++v21;
            v71 = v18;
            ++v20;
            v67 = v21;
          }
          while ( v20 < v11 );
          v19 = v69;
        }
        v16 = v68;
        v59 = ++v17;
        v72 = v68;
      }
      while ( v19 < v11 );
      v2 = v73;
      v5 = v77;
      v3 = v78;
    }
    v51 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v15];
    v80 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v15];
    v82 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v15];
    v81 = *(float *)&v51;
    v52 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v14];
    v83 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v14];
    v85 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v14];
    v84 = *(float *)&v52;
    v53 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v13];
    v86 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v13];
    v88 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v13];
    v87 = *(float *)&v53;
    v54 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v12];
    v89 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v12];
    v55 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v12];
    v90 = *(float *)&v54;
    v91 = *(float *)&v55;
    v56 = 104 * v79 + 180288 * v2;
    *(unsigned int *)((char *)&g_19029AC7C + v56) = v15;
    *(unsigned int *)((char *)&g_19029AC80 + v56) = v14;
    *(unsigned int *)((char *)&g_19029AC84 + v56) = v13;
    *(unsigned int *)((char *)&g_19029AC88 + v56) = v12;
    if ( *(int *)((char *)&g_19029AC68 + v5) > 0 )
    {
      do
      {
        sub_14002E730(
          (__int64)&dword_140404A6C[45072 * v2 + 335173768 + 4 * (int)v4] + v3,
          4,
          (__int64)&v80,
          (float *)&v96[3 * (int)v4]);
        v4 = (unsigned int)(v74 + 1);
        v74 = v4;
      }
      while ( (int)v4 < *(int *)((char *)&g_19029AC68 + v5) );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98

//----- (0000000140194590) ----------------------------------------------------
__int64            sub_140194590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6;

  v6 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v6 | 1LL, a1, -1, a2, nullptr, a3);
}

//----- (00000001401948E0) ----------------------------------------------------
__int64            sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result;
  __int64 v4;
  __int64 v7;
  unsigned int *v8;
  __int64 v9;
  char *v10;
  unsigned int *v11;
  char v12;

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
        *(unsigned int *)((char *)&g_181FEFBE4 + result) = 0;
        ++dword_140404A6C[v9 + 275754072];
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

//----- (00000001401949C0) ----------------------------------------------------
__int64            sub_1401949C0(int a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64 result;
  int v6;
  _DWORD *v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int *v12;
  signed int v13;

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
  if ( !g_16B2AAF28 )
  {
    result = 2156LL * a1;
    v7 = (unsigned int *)((char *)&g_16B2AAF34 + result);
    if ( *(int *)((char *)&g_16B2AAF34 + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2AAF2C * v6) >> 32) >> 31;
      *v7 = g_16B2AAF2C + (signed int)(g_16B2AAF2C * v6) / 100;
    }
  }
  if ( !g_16B2CCC9C )
  {
    result = (__int64)&g_16B2CCCA8;
    v8 = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2CCCA0 * v6) >> 32) >> 31;
      *v8 = g_16B2CCCA0 + (signed int)(g_16B2CCCA0 * v6) / 100;
    }
  }
  if ( !g_16B2EEA10 )
  {
    result = (__int64)&g_16B2EEA1C;
    v9 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2EEA14 * v6) >> 32) >> 31;
      *v9 = g_16B2EEA14 + (signed int)(g_16B2EEA14 * v6) / 100;
    }
  }
  if ( !g_16B310784 )
  {
    result = (__int64)&g_16B310790;
    v10 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B310788 * v6) >> 32) >> 31;
      *v10 = g_16B310788 + (signed int)(g_16B310788 * v6) / 100;
    }
  }
  if ( !g_16B3324F8 )
  {
    result = (__int64)&g_16B332504;
    v11 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B3324FC * v6) >> 32) >> 31;
      *v11 = g_16B3324FC + (signed int)(g_16B3324FC * v6) / 100;
    }
  }
  if ( !g_16B35426C )
  {
    result = (__int64)&g_16B354278;
    v12 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B354270 * v6) >> 32) >> 31;
      *v12 = g_16B354270 + (signed int)(g_16B354270 * v6) / 100;
    }
  }
  if ( !g_16B375FE0 && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    v13 = g_16B375FE4 * v6;
    dword_140404A6C[539 * a1 + 180208992] = g_16B375FE4 + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

//----- (0000000140194C10) ----------------------------------------------------
__int64            sub_140194C10(int a1)
{
  __int64 v1;
  __int64 result;
  int v3;
  unsigned int *v4;
  int v5;
  int v6;
  int v7;
  unsigned int *v8;
  unsigned int v9;

  v1 = a1;
  result = (__int64)&g_151620CE4;
  v3 = 0;
  do
  {
    if ( *(_DWORD *)(result - 132) && *(_DWORD *)result == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 14256) && *(_DWORD *)(result + 14388) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 28644) && *(_DWORD *)(result + 28776) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 43032) && *(_DWORD *)(result + 43164) == (_DWORD)v1 )
      ++v3;
    result += 57552;
  }
  while ( result < (__int64)&g_1519A40E4 );
  if ( v3 )
  {
    v4 = &dword_140404A6C[5 * v1 + 188872237];
    v5 = 2 * ((int)*v4 / 10);
    if ( (int)*v4 / 10 >= 0 )
      v5 = (int)*v4 / 10;
    if ( v3 <= 1 )
    {
      v6 = v5;
    }
    else
    {
      v5 /= 2;
      v6 = v5 / (v3 - 1);
    }
    result = 23492 * v1;
    v7 = 0;
    v8 = &g_151620CB8;
    do
    {
      if ( *(v8 - 22) && v8[11] == (_DWORD)v1 )
      {
        v9 = *v8;
        if ( dword_140404A6C[5873 * v1 + 283831510] == v7 )
          result = v5 + v9;
        else
          result = v6 + v9;
        *v8 = result;
      }
      ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&g_1519A40B8 );
    *v4 = 0;
  }
  return result;
}

//----- (0000000140194D40) ----------------------------------------------------
__int64 sub_140194D40()
{
  int v0;
  unsigned int *v1;
  __int64 v2;
  int v3;
  int v4;
  signed int v5;
  __m128i si128;
  __m128i v7;
  __int64 v8;
  unsigned int *v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  unsigned int *v16;
  __int64 v17;
  signed int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  unsigned int *v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int i;
       char *v33;
       char **v34;
       char *v35;
  char v36;
  __int64 v37;
  __int64 v38;
  char *v39;
  unsigned int *v40;
  char v41;
  int v42;
  BOOL v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  unsigned int *v50;
  unsigned int *v51;
  char *v52;
  char v53;
  char *v54;
  char v55;
  char *v56;
  char v57;
  char *v58;
  char v59;
  unsigned int *v60;
  __int64 v61;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140194D40[848];
#define v63 (*(__int64 (*))(void *)(sr_frame_140194D40 + 0)) /* [rsp+0h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140194D40 + 48)) /* [rsp+30h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_140194D40 + 56)) /* [rsp+38h] */
#define v66 (*(char (*)[256])(void *)(sr_frame_140194D40 + 64)) /* [rsp+40h] */
#define v67 (*(_BYTE (*)[512])(void *)(sr_frame_140194D40 + 320)) /* [rsp+140h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_140194D40 + 832)) /* [rsp+340h] */

  v0 = 0;
  v1 = &g_16B2CCC94;
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
    if ( (__int64)v1 >= (__int64)&g_16D4A4094 )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 34653LL * v0;
    v65 = v0;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[v2 + 180001070]), 0, 0x21D70u);
    v3 = g_1B46590BC;
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
        v9 = &g_1B46598DC;
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
      v20 = rand() % (signed int)g_1B46590BC;
      do
      {
        if ( (int)dword_140404A6C[259 * v20 + 487149974] <= v5 )
          break;
        ++v19;
        v20 = rand() % (signed int)g_1B46590BC;
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 259LL * v20;
      v23 = (int)dword_140404A6C[v22 + 487149973];
      ++dword_140404A6C[v22 + 487149974];
      v24 = 14019 * v23;
      v25 = 0;
      v26 = &g_1816DEB80;
      v27 = (int)dword_140404A6C[v24 + 225641322];
      v64 = dword_140404A6C[v24 + 225641321];
      while ( *v26 )
      {
        ++v25;
        v26 += 290;
        if ( (__int64)v26 >= (__int64)&g_181FEEB80 )
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
        crt_sprintf(v66, "%s.DOC", v33);
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
        crt_sprintf(v66, "%s", *v34);
        v42 = rand();
        v43 = v42 == 5 * (v42 / 5);
        v44 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * v0 + 180001072] = v44;
        if ( v0 == g_16B2AAF18 )
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
        crt_sprintf(&dword_140404A6C[v2 + 180035590], "INTEL%02d.CDE", v0);
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
          *((_BYTE *)&g_16B2CCB90 + v2 * 4 - (_QWORD)v66 + (_QWORD)v52) = *v52;
          ++v52;
        }
        while ( v53 );
        v54 = (char *)&g_16B2CCBD0 + v2 * 4 - (_QWORD)v51;
        do
        {
          v55 = *(_BYTE *)v51;
          v54[(_QWORD)v51] = *(_BYTE *)v51;
          v51 = (unsigned int *)((char *)v51 + 1);
        }
        while ( v55 );
        v56 = (char *)&g_16B2CCC10 + v2 * 4 - (_QWORD)v50;
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
          *((_BYTE *)&g_16B2CCC50 + v2 * 4 - (_QWORD)v67 + (_QWORD)v58) = *v58;
          ++v58;
        }
        while ( v59 );
        dword_140404A6C[v2 + 180035721] = v43;
        v60 = &dword_140404A6C[v2 + 180001596];
        v61 = 6;
        do
        {
          crt_sprintf(v60, (     char *)&dword_140273614);
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

//----- (0000000140195970) ----------------------------------------------------
__int64 sub_140195970()
{
  signed int v0;
  unsigned int *v1;
  int v2;
  unsigned int *v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int *v14;
  _BYTE *v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int *v20;
  __int64 v21;
  char *v22;
  unsigned int *v23;
  char v24;
  signed int v25;
  signed int v26;
  int *v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned int *v32;
  __int64 v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195970[576];
#define v35 (*(__int64 (*))(void *)(sr_frame_140195970 + 0)) /* [rsp+0h] */
#define j (*(int (*))(void *)(sr_frame_140195970 + 32)) /* [rsp+20h] */
#define v37 (*(_BYTE (*)[512])(void *)(sr_frame_140195970 + 48)) /* [rsp+30h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140195970 + 560)) /* [rsp+230h] */

  v0 = g_1B46590BC;
  v1 = &g_1B46590C8;
  v2 = 0;
  j = 0;
  if ( (int)g_1B46590BC > 0 )
  {
    v3 = &g_1B46590C8;
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
        crt_sprintf(v37, "%s.DOC", off_1402B2000[v8]);
        v10 = 2570 * v7;
        v11 = 0;
        v12 = (int)dword_140404A6C[2570 * v7 + 275754072];
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = &g_1816DEB80;
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)&g_181FEEB80 )
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
      v0 = g_1B46590BC;
      v2 = j + 1;
      v3 += 259;
      j = v2;
    }
    while ( v2 < (int)g_1B46590BC );
    v1 = &g_1B46590C8;
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
              *(_OWORD *)v32 = *(_OWORD *)((char *)&g_181FEFBD0 + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&g_181FEFBE0 + v33);
              *(_OWORD *)((char *)&g_181FEFBD0 + v33) = *(_OWORD *)&dword_140404A6C[v28 + 275755609];
              *(_QWORD *)((char *)&g_181FEFBE0 + v33) = *(_QWORD *)&dword_140404A6C[v28 + 275755613];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (int)*v1 );
      v0 = g_1B46590BC;
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

//----- (0000000140195D20) ----------------------------------------------------
__int64            sub_140195D20(int a1,      char *a2)
{
  __int64 v3;
  char *v4;
  __int64 v5;
       char *v6;
  char *v7;
  float v9;
  float v10;
  float v11;
  int v12;
  __int64 v13;
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
  v5 = (unsigned int)((signed int)game_day_time / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = (signed int)game_day_time / 3600 % 60;
  if ( (int)game_day_time >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  crt_sprintf(v20, v6, v4, v5, v16);
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

//----- (0000000140195FB0) ----------------------------------------------------
__int64            sub_140195FB0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _BYTE *v7;
  int *v8;
  __int64 v9;
  unsigned int *v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned int *v16;
       char **v17;
  __int64 v18;
  int v19;
  signed int v20;
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
    *(unsigned int *)((char *)&g_16B2AAF30 + v5) = 1;
    if ( (int)dword_140404A6C[v2 + 180001071] < 2 )
    {
      v6 = *(unsigned int *)((char *)&g_16B2AAF34 + v5);
      v7 = (char *)&g_16B2AAF5C + v5;
      v8 = (int *)((char *)&g_16B2AAF58 + v5);
      if ( v6 <= 0 )
      {
        *v8 = 0;
        crt_sprintf(v7, "TRADE");
        ++*v8;
        crt_sprintf((_BYTE *)&g_16B2AB75C + v5, "Trade");
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
              crt_sprintf(
                &dword_140404A6C[64 * (__int64)v20 + 180001084 + v18 + v2],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[v3],
                v19);
              ++*v16;
              crt_sprintf(&dword_140404A6C[v2 + 180001596 + v18], "Trade");
              crt_sprintf(
                v25,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[v3],
                (     char *)&dword_140404A6C[v2 + 180035705]);
              sub_140195D20(v15, v25);
              crt_sprintf(
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
        crt_sprintf(v7, "MISSION SUCCESS");
        crt_sprintf(
          &dword_140404A6C[64 * (__int64)++*v8 + 180001084 + v2 + v4],
          "VALUE: $%d",
          *(unsigned int *)((char *)&g_16B2AAF34 + v5));
        ++*v8;
        crt_sprintf((_BYTE *)&g_16B2AB75C + v5, "Success");
        v9 = 0;
        v10 = &dword_140404A6C[v2 + 180001083];
        v11 = &dword_140404A6C[v2 + 180001596];
        v12 = 6;
        do
        {
          if ( v9 != v3 )
          {
            *v10 = 0;
            crt_sprintf((_BYTE *)v11 - 2048, "MISSION CLOSED");
            ++*v10;
            crt_sprintf(v11, "Closed");
          }
          v11 += 539;
          ++v9;
          v10 += 539;
          --v12;
        }
        while ( v12 );
        v13 = v23;
        dword_140404A6C[v2 + 180001071] = 2;
        if ( *(int *)((char *)&g_16D48232C + v13) > 0 )
          *(unsigned int *)((char *)&g_16D48232C + v13) = 1;
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

//----- (0000000140196320) ----------------------------------------------------
__int64            sub_140196320(int a1, char *a2, unsigned int a3, char *a4)
{
  __int64 result;
  __int64 v5;
  unsigned int *v8;
  char v9;
  __int64 v10;
  int v11;
  int i;
  __int64 v13;
  __int64 v14;
  unsigned int *v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  unsigned int v25;
  int v26;

  result = a1;
  v5 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v5 + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    v8 = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      v9 = *a2++;
      *(_BYTE *)v8 = v9;
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v9 );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[v5 + 293512634] + 293512636 + v5] = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        v10 = *(_QWORD *)&dword_140404A6C[v5 + 293512629];
        if ( v10 )
        {
          v26 = 1;
          crt_fread((__int64)&v26, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBA0, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBA4, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBA8, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBAC, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBB0, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBB4, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBB8, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBBC, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBC0, 4, 1, v10);
          crt_fread((__int64)&g_144FBFBC4, 4, 1, v10);
          v11 = 0;
          for ( i = 0; i < (int)g_144FBFBC4; ++i )
          {
            v13 = 87LL * i;
            crt_fread((__int64)&dword_140404A6C[v13 + 19852378], 4, 1, v10);
            crt_fread((__int64)&dword_140404A6C[v13 + 19852376], 4, 1, v10);
            crt_fread((__int64)&dword_140404A6C[v13 + 19852379], 4, 1, v10);
            crt_fread((__int64)&dword_140404A6C[v13 + 19852377], 4, 1, v10);
            crt_fread((__int64)&dword_140404A6C[v13 + 19852460], 4, 1, v10);
            crt_fread((__int64)&dword_140404A6C[v13 + 19852461], 4, 1, v10);
            v14 = 4;
            v15 = &dword_140404A6C[v13 + 19852428];
            v16 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v13 * 4 + 83622876;
            do
            {
              v17 = 4;
              do
              {
                crt_fread(v16, 4, 3, v10);
                crt_fread((__int64)v15, 4, 2, v10);
                v16 += 12;
                v15 += 2;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          crt_fread((__int64)&g_144FEB3C8, 4, 1, v10);
          if ( (int)g_144FEB3C8 > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801036;
              do
              {
                crt_fread(v20, 4, 3, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801132;
              do
              {
                crt_fread(v22, 4, 1, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              crt_fread(((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801156, 4, 1, v10);
              ++v11;
            }
            while ( v11 < (int)g_144FEB3C8 );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[v5 + 293512629], 1);
        break;
      case 0x585A0004u:
        sub_140197630(*(_DWORD *)a4, *(_QWORD *)&dword_140404A6C[v5 + 293512629], 1);
        break;
    }
    v23 = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    v24 = v5 * 4 + ((unsigned __int64)dword_140404A6C[v5 + 293512634] << 6);
    *(unsigned int *)((char *)&g_1863AE160 + v24) = v23
                                                                 - *(unsigned int *)((char *)&g_1863AE15C
                                                                                   + v24);
    v25 = dword_140404A6C[v5 + 293512634];
    dword_140404A6C[v5 + 293512633] += dword_140404A6C[16 * (unsigned __int64)v25 + 293512637 + v5];
    result = v25 + 1;
    dword_140404A6C[v5 + 293512634] = result;
  }
  return result;
}

//----- (00000001401967E0) ----------------------------------------------------
__int64            sub_1401967E0(__int64 a1, int a2)
{
  int v4;
  int v5;
  __int64 v6;
  unsigned int *v7;
  unsigned int *v8;
  __int64 v9;
  unsigned int *v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int *v15;
  __int64 v16;
  unsigned int *v17;
  unsigned int *v18;
  int Buffer;

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&g_144FBFBA0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBA4), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBA8), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBAC), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB4), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB8), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBBC), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBC0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBC4), 4, 1, (FILE *)(uintptr_t)(a1));
      goto LABEL_6;
    }
    return 0;
  }
  crt_fread((__int64)&Buffer, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA4, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA8, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBAC, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB4, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB8, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBBC, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBC0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBC4, 4, 1, a1);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( (int)g_144FBFBC4 > 0 )
  {
    do
    {
      v6 = 87LL * v5;
      v7 = &dword_140404A6C[v6 + 19852378];
      v8 = &dword_140404A6C[v6 + 19852349];
      if ( a2 )
      {
        crt_fread((__int64)v7, 4, 1, a1);
        crt_fread((__int64)(v8 + 27), 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(v8 + 27), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852379]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852377]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852460]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852461]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      v9 = 4;
      v10 = &dword_140404A6C[v6 + 19852428];
      v11 = &dword_140404A6C[v6 + 19852380];
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            crt_fread((__int64)v11, 4, 3, a1);
            crt_fread((__int64)v10, 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(v10), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          v11 += 3;
          v10 += 2;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < (int)g_144FBFBC4 );
    v4 = 0;
  }
  if ( a2 )
    crt_fread((__int64)&g_144FEB3C8, 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&g_144FEB3C8), 4, 1, (FILE *)(uintptr_t)(a1));
  if ( (int)g_144FEB3C8 > 0 )
  {
    do
    {
      v13 = 31LL * v4;
      v14 = 8;
      v15 = &dword_140404A6C[v13 + 19896920];
      do
      {
        if ( a2 )
          crt_fread((__int64)v15, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v15), 4, 3, (FILE *)(uintptr_t)(a1));
        v15 += 3;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = &dword_140404A6C[v13 + 19896944];
      do
      {
        if ( a2 )
          crt_fread((__int64)v17, 4, 1, a1);
        else
          fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(a1));
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = &dword_140404A6C[31 * v4 + 19896950];
      if ( a2 )
        crt_fread((__int64)v18, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v4;
    }
    while ( v4 < (int)g_144FEB3C8 );
  }
  return 1;
}

//----- (0000000140197630) ----------------------------------------------------
__int64            sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 v3;
  unsigned int *v5;
  __int64 v7;
  unsigned int *v8;
  unsigned int *v9;
  int Buffer;

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a2);
    crt_fread((__int64)&dword_140404A6C[46 * v3 + 421784763], 1, 64, a2);
    v5 = &dword_140404A6C[46 * v3 + 421784733];
    crt_fread((__int64)(v5 + 22), 4, 1, a2);
    crt_fread((__int64)(v5 + 26), 4, 1, a2);
    crt_fread(*((_QWORD *)v5 + 12), 1, (int)v5[22], a2);
    crt_fread(*((_QWORD *)v5 + 14), 1, (int)v5[26], a2);
    return 1;
  }
  fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( Buffer != 1 )
    return 0;
  v7 = 46 * v3;
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784763]), 1, 64, (FILE *)(uintptr_t)(a2));
  v8 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784755]), 4, 1, (FILE *)(uintptr_t)(a2));
  v9 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784759]), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( (int)dword_140404A6C[v7 + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784757] = sr_path_malloc((int)v8[22]);
  if ( (int)v9[26] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784761] = sr_path_malloc((int)v9[26]);
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784757]), 1, (int)v8[22], (FILE *)(uintptr_t)(a2));
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784761]), 1, (int)v9[26], (FILE *)(uintptr_t)(a2));
  return 1;
}

//----- (00000001401977E0) ----------------------------------------------------
void            sub_1401977E0(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int i;

  v1 = 265228LL * a1;
  v2 = *(_QWORD *)&dword_140404A6C[v1 + 293512629];
  if ( v2 )
  {
    if ( dword_140404A6C[v1 + 293512631] )
    {
      sub_14020C4A8(v2, 4, 0);
      crt_fread((__int64)&dword_140404A6C[v1 + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      crt_fread((__int64)&dword_140404A6C[v1 + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v1 + 293512629], dword_140404A6C[v1 + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[v1 + 293512634]; ++i )
        crt_fread(
          (__int64)&dword_140404A6C[16 * (__int64)(int)i + 293512635 + v1],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    }
    crt_fclose(*(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    *(_QWORD *)&dword_140404A6C[v1 + 293512629] = 0;
  }
}

//----- (00000001401978F0) ----------------------------------------------------
unsigned int *           sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result;
  __int64 v4;
  int v7;
  unsigned int v8;
  unsigned int *i;
  __int64 v10;
  int v11;
  int v12;

  result = (unsigned int *)a1;
  v4 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v4 + 293512629] )
  {
    if ( !dword_140404A6C[v4 + 293512631] )
    {
      v7 = 0;
      v8 = dword_140404A6C[v4 + 293512634];
      if ( v8 )
      {
        for ( i = &dword_140404A6C[v4 + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)v7 + 293512638 + v4];
            v10 = a2 - (_QWORD)result;
            do
            {
              v11 = *((unsigned __int8 *)result + v10);
              v12 = *(unsigned __int8 *)result - v11;
              if ( v12 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return result;
        }
        return (unsigned int *)sub_14020C4A8(
                                 *(_QWORD *)&dword_140404A6C[v4 + 293512629],
                                 dword_140404A6C[16 * (__int64)v7 + 293512636 + v4],
                                 0);
      }
    }
  }
  return result;
}

//----- (00000001401979D0) ----------------------------------------------------
void            sub_1401979D0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned int *v7;
  __int64 v8;
  unsigned int v9;
  unsigned int *v10;
  unsigned int *v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401979D0[560];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 0)) /* [rsp+0h] */
#define v14 (*(char (*)[512])(void *)(sr_frame_1401979D0 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 544)) /* [rsp+220h] */

  v2 = a1;
  v3 = 265228LL * a1;
  strcpy(v14, "test.csx");
  if ( a2 )
  {
    v4 = crt_fopen(v14, "wb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_1402B2314;
      dword_140404A6C[v3 + 293512631] = 1;
      v7 = &dword_140404A6C[v3 + 293512632];
      *(_QWORD *)&dword_140404A6C[v3 + 293512633] = 12;
      *v7 = v6;
      crt_fread((__int64)v7, 12, 1, v5);
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
    }
  }
  else
  {
    v8 = crt_fopen(v14, "rb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v8;
    if ( v8 )
    {
      v9 = 0;
      dword_140404A6C[v3 + 293512631] = 0;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v3 + 293512632]), 12, 1, (FILE *)(uintptr_t)(v8));
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
      v10 = &dword_140404A6C[v3 + 293512629];
      if ( dword_140404A6C[v3 + 293512632] == dword_1402B2314 )
      {
        sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v3 + 293512629], dword_140404A6C[v3 + 293512633], 0);
        if ( v10[5] )
        {
          v11 = &dword_140404A6C[v3 + 293512635];
          do
          {
            fread_sr(
              (void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)(int)v9 + 293512635 + v3]),
              64,
              1,
              (FILE *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v3 + 293512629]));
            if ( *v11 == 1482293250 )
              dword_140404A6C[265228 * v2 + 293775805 + (int)dword_140404A6C[v3 + 293775804]++] = v9;
            ++v9;
            v11 += 16;
          }
          while ( v9 < v10[5] );
        }
      }
      else
      {
        v10[5] = 0;
        sub_1401977E0(v2);
      }
    }
  }
  return;
}
#undef v13
#undef v14
#undef v15

//----- (0000000140197C00) ----------------------------------------------------
__int64            sub_140197C00(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 337);
  }
  return a1;
}

//----- (0000000140197C50) ----------------------------------------------------
__int64            sub_140197C50(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 513);
  }
  return a1;
}

//----- (0000000140197CA0) ----------------------------------------------------
__int64            sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

//----- (0000000140197DF0) ----------------------------------------------------
__int64            sub_140197DF0(__int64 a1)
{
  __int64 v2;

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  v2 = a1 + 40;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(v2 + 24) = (uintptr_t)sub_1401982A0;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  SteamAPI_RegisterCallback(v2, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 96) = (uintptr_t)sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 128) = (uintptr_t)sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

//----- (0000000140197EC0) ----------------------------------------------------
__int64 (           **           sub_140197EC0(_QWORD *a1))()
{
  __int64 v1;
  __int64 (           **result)();

  v1 = a1[2];
  result = &off_140279A58;
  *a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v1 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    a1[2] = 0;
  }
  return result;
}

//----- (0000000140197FB0) ----------------------------------------------------
__int64 (           **           sub_140197FB0(__int64 a1))()
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 (           **result)();

  v2 = a1 + 104;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279B18);
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback(v2);
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 72);
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 40);
  v4 = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v4 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
