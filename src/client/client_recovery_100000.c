#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (0000000140101220) ----------------------------------------------------
void            sub_140101220(int a1, float *a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  int *v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140101220[48];
#define v24 (*(_DWORD (*)[8])(void *)(sr_frame_140101220 + 0)) /* [rsp+0h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140101220 + 32)) /* [rsp+20h] */

  v3 = 2LL * a1;
  v24[0] = dword_140404A6C[4 * a1 + 178322642];
  v24[1] = dword_140404A6C[4 * a1 + 178322643];
  v24[2] = dword_140404A6C[4 * a1 + 178322644];
  v24[3] = dword_140404A6C[4 * a1 + 178322645];
  v4 = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  v5 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v5 + 177167567] = *(float *)&dword_140404A6C[v4 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v5 + 177167568] = *(float *)&dword_140404A6C[v4 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v5 + 177167569] = *(float *)&dword_140404A6C[v4 + 177167569] + a2[2];
  v6 = mesh_vertex_count;
  v24[4] = mesh_vertex_count++;
  v7 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v8 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v8 + 177167567] = *(float *)&dword_140404A6C[v7 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v8 + 177167568] = *(float *)&dword_140404A6C[v7 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v8 + 177167569] = *(float *)&dword_140404A6C[v7 + 177167569] + a2[2];
  v9 = mesh_vertex_count;
  v24[5] = mesh_vertex_count++;
  v10 = (int)(3 * dword_140404A6C[2 * v3 + 178322644]);
  v11 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v11 + 177167567] = *(float *)&dword_140404A6C[v10 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v11 + 177167568] = *(float *)&dword_140404A6C[v10 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v11 + 177167569] = *(float *)&dword_140404A6C[v10 + 177167569] + a2[2];
  v12 = mesh_vertex_count;
  v24[6] = mesh_vertex_count++;
  v13 = (int)(3 * dword_140404A6C[2 * v3 + 178322645]);
  v14 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v14 + 177167567] = *(float *)&dword_140404A6C[v13 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v14 + 177167568] = *(float *)&dword_140404A6C[v13 + 177167568] + a2[1];
  v15 = *(float *)&dword_140404A6C[v13 + 177167569];
  v16 = &dword_1402B3674;
  *(float *)&dword_140404A6C[v14 + 177167569] = v15 + a2[2];
  LODWORD(v14) = mesh_vertex_count;
  v24[7] = mesh_vertex_count++;
  dword_140404A6C[2 * v3 + 178322644] = v12;
  dword_140404A6C[2 * v3 + 178322642] = v6;
  dword_140404A6C[2 * v3 + 178322643] = v9;
  dword_140404A6C[2 * v3 + 178322645] = v14;
  v17 = g_16AC43DB0;
  do
  {
    v18 = *v16;
    dword_140404A6C[4 * v17 + 178322642] = v24[*(v16 - 1)];
    v19 = v24[v18];
    v20 = v16[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v19;
    v21 = v24[v20];
    v22 = v16[2];
    v16 += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v21;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v24[v22];
    v17 = ++g_16AC43DB0;
  }
  while ( (__int64)v16 < (__int64)&dword_1402B36B4 );
  return;
}
#undef v24
#undef v25

//----- (00000001401014E0) ----------------------------------------------------
__int64            sub_1401014E0(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  float v24;
  unsigned int v25;
  float v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  unsigned int v35;
  float v36;
  unsigned int v37;
  float v38;
  float v39;
  float v40;
  unsigned int v41;
  float v42;
  float v43;
  float v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  int *v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401014E0[64];
#define v58 (*(float (*))(void *)(sr_frame_1401014E0 + 0)) /* [rsp+0h] */
#define v59 (*(float (*))(void *)(sr_frame_1401014E0 + 4)) /* [rsp+4h] */
#define v60 (*(float (*))(void *)(sr_frame_1401014E0 + 8)) /* [rsp+8h] */
#define v61 (*(float (*))(void *)(sr_frame_1401014E0 + 12)) /* [rsp+Ch] */
#define v62 (*(float (*))(void *)(sr_frame_1401014E0 + 16)) /* [rsp+10h] */
#define v63 (*(float (*))(void *)(sr_frame_1401014E0 + 20)) /* [rsp+14h] */
#define v64 (*(_DWORD (*)[8])(void *)(sr_frame_1401014E0 + 24)) /* [rsp+18h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_1401014E0 + 56)) /* [rsp+38h] */

  v1 = 2LL * a1;
  v64[0] = dword_140404A6C[4 * a1 + 178322642];
  v64[1] = dword_140404A6C[4 * a1 + 178322643];
  v64[2] = dword_140404A6C[4 * a1 + 178322644];
  v64[3] = dword_140404A6C[4 * a1 + 178322645];
  v2 = 4 * a1;
  v3 = (int)(3 * dword_140404A6C[v2 + 178322642]);
  v4 = *(float *)&dword_140404A6C[v3 + 177167567];
  v5 = *(float *)&dword_140404A6C[v3 + 177167568];
  v6 = (int)(3 * dword_140404A6C[v2 + 178322643]);
  v63 = *(float *)&dword_140404A6C[v3 + 177167569];
  v62 = v5;
  v61 = v4;
  v7 = *(float *)&dword_140404A6C[v6 + 177167567];
  v8 = *(float *)&dword_140404A6C[v6 + 177167568];
  v9 = *(float *)&dword_140404A6C[v6 + 177167569];
  LODWORD(v6) = dword_140404A6C[v2 + 178322645];
  v59 = v9;
  v58 = v7;
  v60 = v8;
  v10 = 3 * v6;
  v11 = (float)(v7 - v4) * 0.125;
  v12 = (float)(v9 - v63) * 0.125;
  v13 = v4 + v11;
  v14 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167567];
  v15 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167568];
  v16 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167569];
  v17 = v14 - v4;
  v18 = (int)(3 * dword_140404A6C[v2 + 178322644]);
  v19 = (float)(v8 - v5) * 0.125;
  v20 = *(float *)&dword_140404A6C[v18 + 177167569];
  v21 = (float)(v15 - v5) * 0.25;
  *(float *)&v22 = (float)(v17 * 0.25) + v13;
  v23 = v5;
  v24 = *(float *)&dword_140404A6C[v18 + 177167568];
  *(float *)&v25 = v21 + (float)(v23 + v19);
  v26 = *(float *)&dword_140404A6C[v18 + 177167567];
  *(float *)&v27 = (float)((float)(v16 - v63) * 0.25) + (float)(v63 + v12);
  *(float *)&v28 = (float)((float)(v26 - v7) * 0.25) + (float)(v7 - v11);
  *(float *)&v29 = (float)((float)(v24 - v8) * 0.25) + (float)(v8 - v19);
  v30 = v59 - v12;
  v31 = *(float *)&dword_140404A6C[v10 + 177167568];
  v32 = (float)(*(float *)&dword_140404A6C[v10 + 177167569] - v20) * 0.125;
  v33 = 3 * mesh_vertex_count;
  v34 = (float)(*(float *)&dword_140404A6C[v10 + 177167567] - v26) * 0.125;
  *(float *)&v35 = (float)((float)(v20 - v59) * 0.25) + v30;
  v36 = (float)(v31 - v24) * 0.125;
  v58 = (float)((float)(v58 - v26) * 0.25) + (float)(v26 + v34);
  *(float *)&v37 = (float)((float)(v59 - v20) * 0.25) + (float)(v20 + v32);
  v38 = v61 - v14;
  v39 = v14 - v34;
  v40 = v63;
  *(float *)&v41 = (float)((float)(v60 - v24) * 0.25) + (float)(v24 + v36);
  v42 = v62 - v31;
  v43 = v31 - v36;
  v44 = *(float *)&dword_140404A6C[v10 + 177167569];
  dword_140404A6C[v33 + 177167567] = v22;
  dword_140404A6C[v33 + 177167568] = v25;
  dword_140404A6C[v33 + 177167569] = v27;
  v45 = mesh_vertex_count;
  v64[4] = mesh_vertex_count++;
  v46 = 3 * mesh_vertex_count;
  dword_140404A6C[v46 + 177167567] = v28;
  dword_140404A6C[v46 + 177167568] = v29;
  v47 = LODWORD(v58);
  dword_140404A6C[v46 + 177167569] = v35;
  LODWORD(v2) = mesh_vertex_count;
  v64[5] = mesh_vertex_count++;
  v48 = 3 * mesh_vertex_count;
  dword_140404A6C[v48 + 177167567] = v47;
  dword_140404A6C[v48 + 177167568] = v41;
  dword_140404A6C[v48 + 177167569] = v37;
  LODWORD(v3) = mesh_vertex_count;
  v64[6] = mesh_vertex_count++;
  v49 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v49 + 177167567] = (float)(v38 * 0.25) + v39;
  *(float *)&dword_140404A6C[v49 + 177167568] = (float)(v42 * 0.25) + v43;
  *(float *)&dword_140404A6C[v49 + 177167569] = (float)((float)(v40 - v44) * 0.25) + (float)(v44 - v32);
  LODWORD(v49) = mesh_vertex_count;
  v64[7] = mesh_vertex_count++;
  dword_140404A6C[2 * v1 + 178322642] = v45;
  dword_140404A6C[2 * v1 + 178322643] = v2;
  v50 = &dword_1402B3674;
  dword_140404A6C[2 * v1 + 178322644] = v3;
  dword_140404A6C[2 * v1 + 178322645] = v49;
  v51 = g_16AC43DB0;
  do
  {
    v52 = *v50;
    dword_140404A6C[4 * v51 + 178322642] = v64[*(v50 - 1)];
    v53 = v64[v52];
    v54 = v50[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v53;
    v55 = v64[v54];
    v56 = v50[2];
    v50 += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v55;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v64[v56];
    v51 = ++g_16AC43DB0;
  }
  while ( (__int64)v50 < (__int64)&dword_1402B36B4 );
  return 0; /* the function has no caller */
}
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65

//----- (00000001401019A0) ----------------------------------------------------
__int64            sub_1401019A0(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  unsigned int v13;
  float v14;
  float v15;
  unsigned int v16;
  __int64 v17;
  _DWORD *v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  float v25;
  float v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  int v34;
  float v35;
  float v36;
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  signed int v81;
  unsigned int *v82;
  _DWORD sr_extrude_position[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401019A0[144];
#define v84 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 0)) /* [rsp+8h] */
#define v85 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 32)) /* [rsp+28h] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 64)) /* [rsp+48h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 68)) /* [rsp+4Ch] */
#define v90 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 72)) /* [rsp+50h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 76)) /* [rsp+54h] */
#define v92 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 80)) /* [rsp+58h] */
#define v93 (*(_DWORD (*)[8])(void *)(sr_frame_1401019A0 + 84)) /* [rsp+5Ch] */
#define v94 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 116)) /* [rsp+7Ch] */
#define v95 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 120)) /* [rsp+80h] */
#define v96 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 124)) /* [rsp+84h] */
#define v97 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 128)) /* [rsp+88h] */

  LODWORD(v85) = a1;
  v1 = 2LL * a1;
  v2 = dword_140404A6C[4 * a1 + 178322642];
  v3 = dword_140404A6C[4 * a1 + 178322644];
  v4 = dword_140404A6C[2 * v1 + 178322645];
  v89 = dword_140404A6C[2 * v1 + 178322643];
  v88 = v2;
  v90 = v3;
  v91 = v4;
  v5 = (int)(3 * v89);
  v6 = (int)(3 * v2);
  v7 = (int)(3 * v3);
  v8 = (int)(3 * v4);
  v9 = 0;
  v10 = (float)(*(float *)&dword_140404A6C[v6 + 177167568] + *(float *)&dword_140404A6C[v5 + 177167568])
      + *(float *)&dword_140404A6C[v7 + 177167568];
  v11 = (float)(*(float *)&dword_140404A6C[v6 + 177167569] + *(float *)&dword_140404A6C[v5 + 177167569])
      + *(float *)&dword_140404A6C[v7 + 177167569];
  v12 = (float)((float)(*(float *)&dword_140404A6C[v6 + 177167567] + *(float *)&dword_140404A6C[v5 + 177167567])
              + *(float *)&dword_140404A6C[v7 + 177167567])
      + *(float *)&dword_140404A6C[v8 + 177167567];
  v13 = mesh_vertex_count;
  v14 = v12 * 0.25;
  v15 = (float)(v10 + *(float *)&dword_140404A6C[v8 + 177167568]) * 0.25;
  *(float *)&v16 = (float)(v11 + *(float *)&dword_140404A6C[v8 + 177167569]) * 0.25;
  do
  {
    v17 = 0;
    v18 = &v93[4 * v9];
    v19 = 1;
    do
    {
      v20 = 0.0;
      if ( (unsigned __int64)v9 >= 2 )
      {
        v21 = -0.03125;
        v22 = 0.015625;
      }
      else
      {
        if ( v9 )
          v20 = -0.0625;
        else
          v20 = 0.0625;
        v21 = 0.03125;
        v22 = 0.03125;
      }
      if ( v17 && v17 != 3 )
        v22 = -v22;
      if ( v17 >= 2 )
        v23 = -0.015625;
      else
        v23 = 0.015625;
      if ( v9 == 2 && v17 < 2 )
        v23 = v23 + 0.015625;
      v24 = 3 * v13;
      v25 = v20 + v22;
      v26 = v21 + v23;
      dword_140404A6C[v24 + 177167569] = v16;
      *(float *)&dword_140404A6C[v24 + 177167567] = v25 + v14;
      *(float *)&dword_140404A6C[v24 + 177167568] = v26 + v15;
      v27 = mesh_vertex_count;
      v28 = 7LL * (int)mesh_vertex_count;
      *(v18 - 1) = mesh_vertex_count;
      v29 = v27 + 1;
      mesh_vertex_count = v29;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          *(float *)&dword_140404A6C[v28 + 160235602] = v25;
          *(float *)&dword_140404A6C[v28 + 160235603] = v26;
          dword_140404A6C[v28 + 160235598] = 3;
          dword_140404A6C[v28 + 160235604] = -1105618534;
          v30 = 1015021568;
          v31 = 0.0;
          v32 = -0.03125;
          goto LABEL_27;
        }
        *(float *)&dword_140404A6C[v28 + 160235602] = v22;
        *(float *)&dword_140404A6C[v28 + 160235603] = v23;
        dword_140404A6C[v28 + 160235598] = 17;
        dword_140404A6C[v28 + 160235599] = 3;
        dword_140404A6C[v28 + 160235604] = 0;
      }
      else
      {
        *(float *)&dword_140404A6C[v28 + 160235602] = v22;
        *(float *)&dword_140404A6C[v28 + 160235603] = v23;
        dword_140404A6C[v28 + 160235598] = 16;
        dword_140404A6C[v28 + 160235599] = 3;
        dword_140404A6C[v28 + 160235604] = 0;
      }
      if ( v9 )
        v31 = -0.0625;
      else
        v31 = 0.0625;
      v32 = 0.03125;
      v30 = 1023410176;
LABEL_27:
      if ( v19 && v19 != 3 )
        v30 ^= 0x80000000uLL;
      if ( v19 >= 2 )
        v33 = -0.015625;
      else
        v33 = 0.015625;
      if ( v9 == 2 && v19 < 2 )
        v33 = v33 + 0.015625;
      v34 = 3 * v29;
      v35 = v31 + *(float *)&v30;
      v36 = v32 + v33;
      *(float *)&dword_140404A6C[v34 + 177167567] = v35 + v14;
      *(float *)&dword_140404A6C[v34 + 177167568] = v36 + v15;
      dword_140404A6C[v34 + 177167569] = v16;
      v37 = mesh_vertex_count;
      v38 = 7LL * (int)mesh_vertex_count;
      *v18 = mesh_vertex_count;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          dword_140404A6C[v38 + 160235598] = 17;
          dword_140404A6C[v38 + 160235599] = 3;
          dword_140404A6C[v38 + 160235602] = v30;
          *(float *)&dword_140404A6C[v38 + 160235603] = v33;
          dword_140404A6C[v38 + 160235604] = 0;
        }
        else
        {
          dword_140404A6C[v38 + 160235598] = 3;
          *(float *)&dword_140404A6C[v38 + 160235602] = v35;
          *(float *)&dword_140404A6C[v38 + 160235603] = v36;
          dword_140404A6C[v38 + 160235604] = -1105618534;
        }
      }
      else
      {
        dword_140404A6C[v38 + 160235598] = 16;
        dword_140404A6C[v38 + 160235599] = 3;
        dword_140404A6C[v38 + 160235602] = v30;
        *(float *)&dword_140404A6C[v38 + 160235603] = v33;
        dword_140404A6C[v38 + 160235604] = 0;
      }
      v13 = v37 + 1;
      v19 += 2;
      v17 += 2;
      mesh_vertex_count = v13;
      v18 += 2;
    }
    while ( v17 < 4 );
    ++v9;
  }
  while ( v9 < 3 );
  v39 = v93[0];
  v40 = v88;
  v41 = v92;
  v42 = v93[2];
  v43 = v91;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v88;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v39;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v41;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v44 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v44 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v44 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v44 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v40;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v41;
  v45 = v89;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v42;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v46 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v46 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v46 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v46 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v40;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v42;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v43;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v47 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v47 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v47 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v47 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v45;
  v48 = v90;
  v49 = v93[5];
  v50 = v93[4];
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v90;
  v51 = v93[3];
  v52 = v95;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v49;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v53 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v53 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v53 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v53 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v45;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v49;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v50;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v54 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v54 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v45;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v50;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v51;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v55 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v55 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v48;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v52;
  v56 = v94;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v94;
  v57 = v93[6];
  v58 = v93[1];
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v59 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v59 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v59 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v59 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v48;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v56;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v57;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v60 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v60 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v48;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v57;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v49;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v61 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v61 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v43;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v42;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v58;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v62 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v62 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011349] = 1065353216;
  v63 = v93[7];
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v43;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v58;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v63;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v64 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v64 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v43;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v63;
  v65 = v96;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v96;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v66 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v66 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v66 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v66 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v65;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v52;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v48;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v43;
  v67 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[v67 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  v68 = v93[0];
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v58;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v57;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v56;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v63;
  v69 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[v69 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v68;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v51;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v57;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v58;
  v70 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[v70 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v92;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v68;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v58;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v42;
  v71 = 8LL * (int)g_16AC43DB0;
  *(_OWORD *)&dword_140404A6C[v71 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v71 + 178388182] = 0;
  g_16677CBA4 = g_16AC43DB0++;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v51;
  (*(__int64 *)sr_extrude_position) = 0;
  sr_extrude_position[2] = -1124073472;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v50;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v49;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v57;
  v72 = 8LL * (int)g_16AC43DB0;
  *(_OWORD *)&dword_140404A6C[v72 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v72 + 178388182] = 0;
  g_16677CBA8 = g_16AC43DB0++;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = v63;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v56;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v52;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v65;
  v73 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[v73 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388184] = 1065353216;
  LODWORD(v73) = g_16AC43DB0;
  g_16677CBAC = g_16AC43DB0++;
  v74 = 4 * (int)v85;
  dword_140404A6C[v74 + 178322642] = v88;
  dword_140404A6C[v74 + 178322643] = v89;
  dword_140404A6C[v74 + 178322644] = v51;
  dword_140404A6C[v74 + 178322645] = v68;
  sub_140101220(v73, (float *)&(*(__int64 *)sr_extrude_position));
  v75 = (int)mesh_vertex_count;
  v76 = 7 * ((int)mesh_vertex_count - 4LL);
  v77 = (int)mesh_vertex_count - 3LL;
  dword_140404A6C[v76 + 160235598] = 3;
  dword_140404A6C[v76 + 160235602] = 1010827264;
  dword_140404A6C[v76 + 160235603] = -1132462080;
  dword_140404A6C[v76 + 160235604] = -1103521382;
  v78 = 7 * v77;
  dword_140404A6C[v78 + 160235598] = 3;
  dword_140404A6C[v78 + 160235602] = -1136656384;
  dword_140404A6C[v78 + 160235603] = -1132462080;
  dword_140404A6C[v78 + 160235604] = -1103521382;
  v79 = 7 * (v75 - 2);
  v80 = 7 * v75;
  dword_140404A6C[v79 + 160235598] = 3;
  dword_140404A6C[v79 + 160235602] = -1132462080;
  dword_140404A6C[v79 + 160235603] = -1119879168;
  dword_140404A6C[v79 + 160235604] = -1103521382;
  dword_140404A6C[v80 + 160235591] = 3;
  dword_140404A6C[v80 + 160235595] = 1015021568;
  dword_140404A6C[v80 + 160235596] = -1119879168;
  dword_140404A6C[v80 + 160235597] = -1103521382;
  v81 = g_16AC43DB0 - 4;
  if ( (signed int)(g_16AC43DB0 - 4) < (int)g_16AC43DB0 )
  {
    v82 = &dword_140404A6C[8 * v81 + 178388179];
    do
    {
      *(_QWORD *)(v82 - 1) = 1065353216;
      ++v81;
      *(_QWORD *)(v82 + 1) = 1065353216;
      *(_QWORD *)(v82 + 3) = 1065353216;
      *(_QWORD *)(v82 + 5) = 1065353216;
      v82 += 8;
    }
    while ( v81 < (int)g_16AC43DB0 );
  }
  sub_1400FFCE0(g_16677CBA4, 0, *(double *)&v30);
  return sub_1400FFCE0(g_16677CBA8, 1, *(double *)&v30); /* 0x140102A36: the result of this call is still in rax at the exit */
}
#undef v84
#undef v85
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

// 140101B8E: conditional instruction was optimized away because r8.8==1
// 140101CBA: conditional instruction was optimized away because r8.8 is in (==2|<0)
// 140101CD4: conditional instruction was optimized away because r8.8==1

//----- (0000000140102AA0) ----------------------------------------------------
__int64            sub_140102AA0(int a1, float *a2, float a3, float a4, float a5)
{
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  unsigned int v38;
  int *v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102AA0[48];
#define v46 (*(_DWORD (*)[8])(void *)(sr_frame_140102AA0 + 0)) /* [rsp+0h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140102AA0 + 32)) /* [rsp+20h] */

  v8 = 2LL * a1;
  v46[0] = dword_140404A6C[4 * a1 + 178322642];
  v46[1] = dword_140404A6C[4 * a1 + 178322643];
  v46[2] = dword_140404A6C[4 * a1 + 178322644];
  v46[3] = dword_140404A6C[4 * a1 + 178322645];
  v9 = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  v10 = *(float *)&dword_140404A6C[v9 + 177167567];
  v11 = *(float *)&dword_140404A6C[v9 + 177167568];
  v12 = *(float *)&dword_140404A6C[v9 + 177167569];
  v13 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v14 = (int)(3 * dword_140404A6C[4 * a1 + 178322644]);
  v15 = (int)(3 * dword_140404A6C[4 * a1 + 178322645]);
  v16 = *(float *)&dword_140404A6C[v15 + 177167568];
  v17 = *(float *)&dword_140404A6C[v15 + 177167569];
  v18 = (float)(*(float *)&dword_140404A6C[v14 + 177167567] + *(float *)&dword_140404A6C[v15 + 177167567])
      + (float)(v10 + *(float *)&dword_140404A6C[v13 + 177167567]);
  v19 = 3 * mesh_vertex_count;
  v20 = v18 * 0.25;
  v21 = (float)((float)(v16 + *(float *)&dword_140404A6C[v14 + 177167568])
              + (float)(v11 + *(float *)&dword_140404A6C[v13 + 177167568]))
      * 0.25;
  v22 = (float)((float)(v17 + *(float *)&dword_140404A6C[v14 + 177167569])
              + (float)(v12 + *(float *)&dword_140404A6C[v13 + 177167569]))
      * 0.25;
  *(float *)&dword_140404A6C[v19 + 177167567] = (float)((float)((float)(v10 - v20) * a3) + v20) + *a2;
  *(float *)&dword_140404A6C[v19 + 177167568] = (float)((float)((float)(v11 - v21) * a4) + v21) + a2[1];
  *(float *)&dword_140404A6C[v19 + 177167569] = (float)((float)((float)(v12 - v22) * a5) + v22) + a2[2];
  v23 = mesh_vertex_count;
  v46[4] = mesh_vertex_count++;
  v24 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v25 = 3 * mesh_vertex_count;
  v26 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167568] - v21) * a4) + v21;
  v27 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v25 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v24 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v25 + 177167568] = v26 + a2[1];
  *(float *)&dword_140404A6C[v25 + 177167569] = v27 + a2[2];
  v28 = mesh_vertex_count;
  v46[5] = mesh_vertex_count++;
  v29 = (int)(3 * dword_140404A6C[2 * v8 + 178322644]);
  v30 = 3 * mesh_vertex_count;
  v31 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167568] - v21) * a4) + v21;
  v32 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v30 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v29 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v30 + 177167568] = v31 + a2[1];
  *(float *)&dword_140404A6C[v30 + 177167569] = v32 + a2[2];
  v33 = mesh_vertex_count;
  v46[6] = mesh_vertex_count++;
  v34 = (int)(3 * dword_140404A6C[2 * v8 + 178322645]);
  v35 = 3 * mesh_vertex_count;
  v36 = *(float *)&dword_140404A6C[v34 + 177167568];
  v37 = *(float *)&dword_140404A6C[v34 + 177167569];
  *(float *)&dword_140404A6C[v35 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v34 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v35 + 177167568] = (float)((float)((float)(v36 - v21) * a4) + v21) + a2[1];
  *(float *)&dword_140404A6C[v35 + 177167569] = (float)((float)((float)(v37 - v22) * a5) + v22) + a2[2];
  LODWORD(v35) = mesh_vertex_count;
  v46[7] = mesh_vertex_count++;
  dword_140404A6C[2 * v8 + 178322642] = v23;
  dword_140404A6C[2 * v8 + 178322643] = v28;
  dword_140404A6C[2 * v8 + 178322644] = v33;
  dword_140404A6C[2 * v8 + 178322645] = v35;
  v38 = g_16AC43DB0;
  v39 = &dword_1402B3674;
  do
  {
    v40 = *v39;
    dword_140404A6C[4 * v38 + 178322642] = v46[*(v39 - 1)];
    v41 = v46[v40];
    v42 = v39[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = v41;
    v43 = v46[v42];
    v44 = v39[2];
    v39 += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = v43;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = v46[v44];
    v38 = ++g_16AC43DB0;
  }
  while ( (__int64)v39 < (__int64)&dword_1402B36B4 );
  return 0; /* the function has no caller */
}
#undef v46
#undef v47

//----- (0000000140102ED0) ----------------------------------------------------
double            sub_140102ED0(int a1, int a2, char *a3)
{
  double result;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int *v12;
  signed int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int *v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  bool v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102ED0[112];
#define v24 (*(__int64 (*))(void *)(sr_frame_140102ED0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_140102ED0 + 104)) /* [rsp+88h] */

  v4 = a2;
  v5 = a1;
  v6 = crt_fopen(a3, "rb");
  v7 = v6;
  if ( v6 )
  {
    Buffer = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v6));
    v8 = 0;
    if ( Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(v7));
      fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(v7));
      v9 = 0;
      if ( (int)g_16684E3D0 > 0 )
      {
        v10 = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v7));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v7));
          v10 += 3;
        }
        while ( v9 < (int)g_16684E3D0 );
      }
      fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(v7));
      v11 = 0;
      if ( (int)g_16688E3D4 > 0 )
      {
        v12 = &g_16688E3D8;
        do
        {
          v24 = 56LL * v11;
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 + 646505432), 4, 1, (FILE *)(uintptr_t)(v7));
          v13 = 0;
          if ( (int)*v12 > 0 )
          {
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v11 + 160573020 + v13]), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v11 + 160573024 + 2 * v13++]), 4, 2, (FILE *)(uintptr_t)(v7));
            }
            while ( v13 < (int)*v12 );
            v8 = 0;
          }
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 + 646505484), 4, 1, (FILE *)(uintptr_t)(v7));
          ++v11;
          v12 += 14;
        }
        while ( v11 < (int)g_16688E3D4 );
        v4 = a2;
      }
      v5 = a1;
    }
    crt_fclose(v7);
    mesh_vertex_count = g_16684E3D0;
    if ( (int)g_16684E3D0 > 0 )
    {
      v14 = 0;
      v15 = g_16684E3D0;
      do
      {
        v16 = dword_140404A6C[v14 + 160507483];
        v17 = dword_140404A6C[v14 + 160507484];
        v18 = dword_140404A6C[v14 + 160507482];
        dword_140404A6C[v14 + 177167568] = v16;
        dword_140404A6C[v14 + 177167569] = v17;
        dword_140404A6C[v14 + 177167567] = v18;
        if ( v5 != 8 )
        {
          *(float *)&dword_140404A6C[v14 + 177167568] = *(float *)&v16 + 0.625;
          *(float *)&dword_140404A6C[v14 + 177167569] = *(float *)&v17 + 0.625;
        }
        v14 += 3;
        --v15;
      }
      while ( v15 );
    }
    mesh_triangle_count = 0;
    if ( (int)g_16688E3D4 > 0 )
    {
      v19 = &g_16688E3E0;
      v20 = g_16688E3D4;
      do
      {
        v21 = *(v19 - 1);
        dword_140404A6C[3 * v8 + 177495248] = v21;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *v19;
        v22 = v19[1];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v22;
        v8 = mesh_triangle_count + 1;
        v23 = *(v19 - 2) == 4;
        ++mesh_triangle_count;
        if ( v23 )
        {
          dword_140404A6C[3 * v8 + 177495248] = v21;
          dword_140404A6C[3 * mesh_triangle_count + 177495249] = v22;
          dword_140404A6C[3 * mesh_triangle_count + 177495250] = v19[2];
          v8 = ++mesh_triangle_count;
        }
        v19 += 14;
        --v20;
      }
      while ( v20 );
    }
    return sub_1401449C0(v4, 1);
  }
  return result;
}
#undef v24
#undef Buffer

//----- (0000000140103270) ----------------------------------------------------
double            sub_140103270(int a1, char *a2)
{
  double result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int *v9;
  __int64 v10;
  signed int v11;
  int v12;
  int v13;
  unsigned int *v14;
  __int64 v15;
  signed int i;
  unsigned __int64 v17;
  int v18;
  float *v19;
  __int64 v20;
  float v21;
  int v22;
  int v23;
  unsigned int *v24;
  unsigned int *v25;
  unsigned int *v26;
  unsigned int *v27;
  unsigned int *v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned int *v40;
  unsigned __int64 v41;
  char *v42;
  unsigned int v43;
  char *v44;
  char *v45;
  char *v46;
  char *v47;
  __int64 v48;
  unsigned int *v49;
  char *v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned int *v64;
  signed int j;
  int v66;
  unsigned int *v67;
  __int64 v68;
  __int64 v69;
  unsigned int *v70;
  unsigned int *v71;
  unsigned int *v72;
  unsigned int v73;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140103270[112];
#define v74 (*(__int64 (*))(void *)(sr_frame_140103270 + 0)) /* [rsp+20h] */
#define Buffer (*(__int64 (*))(void *)(sr_frame_140103270 + 96)) /* [rsp+80h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_140103270 + 104)) /* [rsp+88h] */

  v3 = a1;
  v4 = crt_fopen(a2, "rb");
  v74 = v4;
  v5 = v4;
  if ( v4 )
  {
    LODWORD(Buffer) = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v4));
    if ( (_DWORD)Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(v5));
      fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(v5));
      v6 = 0;
      if ( (int)g_16684E3D0 > 0 )
      {
        v7 = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
          v7 += 3;
        }
        while ( v6 < (int)g_16684E3D0 );
      }
      fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(v5));
      v8 = 0;
      if ( (int)g_16688E3D4 > 0 )
      {
        v9 = &g_16688E3D8;
        do
        {
          v10 = 56LL * v8;
          v77 = v10;
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v10 + 646505432), 4, 1, (FILE *)(uintptr_t)(v5));
          v11 = 0;
          if ( (int)*v9 > 0 )
          {
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v8 + 160573020 + v11]), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v8 + 160573024 + 2 * v11++]), 4, 2, (FILE *)(uintptr_t)(v5));
            }
            while ( v11 < (int)*v9 );
            v10 = v77;
          }
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v10 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
          ++v8;
          v9 += 14;
        }
        while ( v8 < (int)g_16688E3D4 );
        v3 = a1;
      }
    }
    LODWORD(Buffer) = 1;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v5));
    if ( (_DWORD)Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&g_1669A3CB8), 4, 1, (FILE *)(uintptr_t)(v5));
      v12 = g_1669A3CB8;
      v13 = 0;
      if ( (int)g_1669A3CB8 > 0 )
      {
        v14 = &g_1669A3CBC;
        do
        {
          v15 = 13LL * v13;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v15 + 160857236]), 4, 1, (FILE *)(uintptr_t)(v5));
          for ( i = 0; i < (int)*v14; ++i )
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * i + 160857237 + v15]), 4, 3, (FILE *)(uintptr_t)(v5));
          v12 = g_1669A3CB8;
          ++v13;
          v14 += 13;
        }
        while ( v13 < (int)g_1669A3CB8 );
        v3 = a1;
      }
    }
    else
    {
      v12 = g_1669A3CB8;
    }
    v17 = 180288LL * v3;
    v77 = v3;
    v18 = g_16684E3D0;
    dword_140404A6C[v17 / 4 + 335170684] = g_16684E3D0;
    if ( v18 > 0 )
    {
      v19 = (float *)&dword_140404A6C[v17 / 4 + 335170687];
      v20 = (unsigned int)v18;
      do
      {
        *(_QWORD *)&result = *(unsigned int *)((uintptr_t)v19
                                             + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                             - (uintptr_t)&g_190297C68);
        v21 = *(float *)((uintptr_t)v19
                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                       - (uintptr_t)&g_190297C68);
        v22 = *(_DWORD *)((uintptr_t)v19
                        + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                        - (uintptr_t)&g_190297C68);
        *(v19 - 1) = *(float *)&result;
        *v19 = v21;
        *((_DWORD *)v19 - 2) = v22;
        if ( v3 != 8 )
        {
          *(float *)&result = *(float *)&result + 0.625;
          *(v19 - 1) = *(float *)&result;
          *v19 = v21 + 0.625;
        }
        v19 += 3;
        --v20;
      }
      while ( v20 );
    }
    v23 = g_16688E3D4;
    v24 = &g_16688E3E0;
    dword_140404A6C[v17 / 4 + 335173757] = g_16688E3D4;
    if ( v23 > 0 )
    {
      v25 = &g_16688E3D8;
      v26 = &dword_140404A6C[v17 / 4 + 335173759];
      v27 = &g_16688E3E0;
      v28 = &dword_140404A6C[v17 / 4 + 335173761];
      v29 = (unsigned int)v23;
      do
      {
        v28 += 26;
        *v26 = *v25;
        v25 += 14;
        v26 += 26;
        *(v28 - 27) = *(v27 - 1);
        v30 = *v27;
        v27 += 14;
        *(v28 - 26) = v30;
        *(v28 - 25) = *(v27 - 13);
        *(v28 - 24) = *(v27 - 12);
        --v29;
      }
      while ( v29 );
    }
    v31 = 0;
    dword_140404A6C[v17 / 4 + 335200382] = 0;
    if ( v12 > 0 )
    {
      v32 = a1;
      v33 = v77;
      v34 = (unsigned int)v12;
      v35 = 0;
      Buffer = (unsigned int)v12;
      v36 = v17 - (_QWORD)&g_1669A3CC8;
      do
      {
        v37 = (int)dword_140404A6C[v35 + 160857236];
        v38 = 0;
        dword_140404A6C[13 * (int)v31 + 335200383 + v17 / 4] = 4;
        v39 = v17 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
        *(unsigned int *)((char *)&g_1902B4C90 + v39) = dword_140404A6C[v35 + 160857243];
        *(unsigned int *)((char *)&g_1902B4C94 + v39) = dword_140404A6C[v35 + 160857244];
        *(unsigned int *)((char *)&g_1902B4C98 + v39) = dword_140404A6C[v35 + 160857245];
        if ( v37 >= 4 )
        {
          v40 = &dword_140404A6C[v35 + 160857239];
          v41 = ((unsigned __int64)(v37 - 4) >> 2) + 1;
          v38 = 4 * v41;
          do
          {
            v42 = (char *)v40 + v36;
            v43 = *(v40 - 2);
            v40 += 12;
            v44 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C6C + (_QWORD)v44) = v43;
            *(unsigned int *)((char *)&g_1902B4C70 + (_QWORD)v44) = *(v40 - 13);
            *(unsigned int *)((char *)&g_1902B4C74 + (_QWORD)v44) = *(v40 - 12);
            v45 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C78 + (_QWORD)v45) = *(v40 - 11);
            *(unsigned int *)((char *)&g_1902B4C7C + (_QWORD)v45) = *(v40 - 10);
            *(unsigned int *)((char *)&g_1902B4C80 + (_QWORD)v45) = *(v40 - 9);
            v46 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C84 + (_QWORD)v46) = *(v40 - 8);
            *(unsigned int *)((char *)&g_1902B4C88 + (_QWORD)v46) = *(v40 - 7);
            *(unsigned int *)((char *)&g_1902B4C8C + (_QWORD)v46) = *(v40 - 6);
            v47 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C90 + (_QWORD)v47) = *(v40 - 5);
            *(unsigned int *)((char *)&g_1902B4C94 + (_QWORD)v47) = *(v40 - 4);
            *(unsigned int *)((char *)&g_1902B4C98 + (_QWORD)v47) = *(v40 - 3);
            --v41;
          }
          while ( v41 );
          v32 = a1;
          v34 = Buffer;
          v33 = a1;
        }
        if ( v38 < v37 )
        {
          v48 = v37 - v38;
          v49 = &dword_140404A6C[3 * v38 + 160857239 + v35];
          do
          {
            v50 = (char *)&v49[13 * dword_140404A6C[v17 / 4 + 335200382]] + v36;
            *(unsigned int *)((char *)&g_1902B4C6C + (_QWORD)v50) = *(v49 - 2);
            *(unsigned int *)((char *)&g_1902B4C70 + (_QWORD)v50) = *(v49 - 1);
            v51 = *v49;
            v49 += 3;
            *(unsigned int *)((char *)&g_1902B4C74 + (_QWORD)v50) = v51;
            --v48;
          }
          while ( v48 );
        }
        if ( v32 != 8 )
        {
          v52 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C70 + v52) = *(float *)((char *)&g_1902B4C70 + v52)
                                                                + 0.625;
          v53 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C74 + v53) = *(float *)((char *)&g_1902B4C74 + v53)
                                                                + 0.625;
          v54 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C7C + v54) = *(float *)((char *)&g_1902B4C7C + v54)
                                                                + 0.625;
          v55 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C80 + v55) = *(float *)((char *)&g_1902B4C80 + v55)
                                                                + 0.625;
          v56 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C88 + v56) = *(float *)((char *)&g_1902B4C88 + v56)
                                                                + 0.625;
          v57 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C8C + v57) = *(float *)((char *)&g_1902B4C8C + v57)
                                                                + 0.625;
          v58 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C94 + v58) = *(float *)((char *)&g_1902B4C94 + v58)
                                                                + 0.625;
          v59 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(_QWORD *)&result = *(unsigned int *)((char *)&g_1902B4C98 + v59);
          *(float *)&result = *(float *)&result + 0.625;
          *(unsigned int *)((char *)&g_1902B4C98 + v59) = LODWORD(result);
        }
        v35 += 13;
        v31 = dword_140404A6C[v17 / 4 + 335200382] + 1;
        v36 -= 52LL;
        --v34;
        dword_140404A6C[v17 / 4 + 335200382] = v31;
        Buffer = v34;
      }
      while ( v34 );
      v5 = v74;
      v24 = &g_16688E3E0;
    }
    if ( a1 == 8 )
    {
      LODWORD(Buffer) = 2;
      fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( (_DWORD)Buffer == 2 )
      {
        fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(v5));
        v60 = 0;
        if ( (int)g_16684E3D0 > 0 )
        {
          v61 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v61 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v60++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
            v61 += 3;
          }
          while ( v60 < (int)g_16684E3D0 );
        }
        fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(v5));
        v62 = g_16688E3D4;
        LODWORD(v77) = 0;
        if ( (int)g_16688E3D4 > 0 )
        {
          v63 = v77;
          v64 = &g_16688E3D8;
          do
          {
            v77 = 56LL * v63;
            fread_sr((void *)(uintptr_t)((char *)&g_16688E3D8 + v77), 4, 1, (FILE *)(uintptr_t)(v5));
            for ( j = 0; j < (int)*v64; ++j )
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v63 + 160573020 + j]), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v63 + 160573024 + 2 * j]), 4, 2, (FILE *)(uintptr_t)(v5));
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v77 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
            v62 = g_16688E3D4;
            ++v63;
            v64 += 14;
          }
          while ( v63 < (int)g_16688E3D4 );
          v24 = &g_16688E3E0;
        }
      }
      else
      {
        v62 = g_16688E3D4;
      }
      v66 = g_16684E3D0;
      dword_140404A6C[v17 / 4 + 335161466] = g_16684E3D0;
      if ( v66 > 0 )
      {
        v67 = &dword_140404A6C[v17 / 4 + 335161469];
        v68 = (unsigned int)v66;
        do
        {
          *(v67 - 2) = *(unsigned int *)((uintptr_t)v67
                                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                       - (uintptr_t)&g_19028EC60);
          *(v67 - 1) = *(unsigned int *)((uintptr_t)v67
                                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                       - (uintptr_t)&g_19028EC60);
          *v67 = *(unsigned int *)((uintptr_t)v67
                                 + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                                 - (uintptr_t)&g_19028EC60);
          v67 += 3;
          --v68;
        }
        while ( v68 );
      }
      dword_140404A6C[v17 / 4 + 335164539] = v62;
      if ( v62 > 0 )
      {
        v69 = (unsigned int)v62;
        v70 = &g_1903F1E60;
        v71 = &g_16688E3D8;
        v72 = &g_1903F1E68;
        do
        {
          v72 += 6;
          *v70 = *v71;
          v70 += 6;
          v71 += 14;
          *(v72 - 7) = *(v24 - 1);
          v73 = *v24;
          v24 += 14;
          *(v72 - 6) = v73;
          *(v72 - 5) = *(v24 - 13);
          *(v72 - 4) = *(v24 - 12);
          --v69;
        }
        while ( v69 );
      }
    }
    crt_fclose(v5);
  }
  return result;
}
#undef v74
#undef Buffer
#undef v77

//----- (00000001401048E0) ----------------------------------------------------
double            sub_1401048E0(double result, int a2, char *a3)
{
  FILE *v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int *v9;
  signed int v10;
  unsigned int *v11;
  unsigned int *v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  signed int v20;
  float *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  float v25;

  v4 = (FILE *)crt_fopen(a3, "rb");
  v5 = (__int64)v4;
  if ( v4 )
  {
    sub_140091310(v4, 0);
    crt_fclose(v5);
    mesh_vertex_count = g_16677E3C4;
    if ( (int)g_16677E3C4 > 0 )
    {
      v6 = 0;
      v7 = g_16677E3C4;
      do
      {
        dword_140404A6C[v6 + 177167567] = dword_140404A6C[v6 + 160294487];
        dword_140404A6C[v6 + 177167568] = dword_140404A6C[v6 + 160294488];
        dword_140404A6C[v6 + 177167569] = dword_140404A6C[v6 + 160294489];
        v6 += 3;
        --v7;
      }
      while ( v7 );
    }
    v8 = 0;
    mesh_triangle_count = 0;
    if ( (int)g_1667AE3C8 > 0 )
    {
      v9 = &g_1667EE3D0;
      v10 = g_1665C4B40;
      v11 = &g_1667DE3CC;
      v12 = &g_1667AE3D0;
      v13 = g_1667AE3C8;
      do
      {
        dword_140404A6C[3 * v8 + 177495248] = *(v12 - 1);
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *v12;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v12[1];
        v14 = (int)*v11;
        if ( (unsigned int)v14 > 0xFF )
        {
          *(float *)&v23 = (float)(*(float *)v9 * 0.75) + 0.25;
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(v9 - 1);
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = v23;
          *(float *)&v24 = (float)(*((float *)v9 + 2) * 0.75) + 0.25;
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = v9[1];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = v24;
          v25 = *((float *)v9 + 4);
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = v9[3];
          *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(v25 * 0.75) + 0.25;
        }
        else
        {
          v15 = dword_140404A6C[6 * v14 + 160292955];
          v16 = dword_140404A6C[6 * v14 + 160292954];
          v17 = dword_140404A6C[6 * v14 + 160292952];
          v18 = dword_140404A6C[6 * v14 + 160292951];
          v19 = dword_140404A6C[6 * v14 + 160292950];
          v20 = 0;
          if ( v10 <= 0 )
          {
LABEL_16:
            if ( v10 <= 0x10000 )
            {
              dword_140404A6C[6 * v10 + 159842358] = v19;
              dword_140404A6C[6 * g_1665C4B40 + 159842359] = v18;
              dword_140404A6C[6 * g_1665C4B40 + 159842360] = v17;
              dword_140404A6C[6 * g_1665C4B40 + 159842362] = v16;
              dword_140404A6C[6 * g_1665C4B40 + 159842363] = v15;
              v10 = g_1665C4B40 + 1;
              g_1665C4B40 = v10;
              LOBYTE(v20) = v10 - 1;
            }
            else
            {
              LOBYTE(v20) = 0;
            }
          }
          else
          {
            v21 = (float *)&g_1665C4B48;
            while ( *(float *)&v19 != *(v21 - 1)
                 || *(float *)&v18 != *v21
                 || *(float *)&v17 != v21[1]
                 || *(float *)&v16 != v21[3]
                 || *(float *)&v15 != v21[4] )
            {
              ++v20;
              v21 += 6;
              if ( v20 >= v10 )
                goto LABEL_16;
            }
          }
          *(float *)&v22 = (float)((float)(v20 & 0xF) * 0.03125) + 0.015625;
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = v22;
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = v22;
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = v22;
          dword_140404A6C[6 * mesh_triangle_count + 178011350] = 1065353216;
        }
        v12 += 3;
        v8 = mesh_triangle_count + 1;
        ++v11;
        v9 += 6;
        ++mesh_triangle_count;
        --v13;
      }
      while ( v13 );
    }
    return sub_1401449C0(a2, 1);
  }
  return result;
}

//----- (0000000140104EA0) ----------------------------------------------------
__int64            sub_140104EA0(int a1, __int64 a2, double a3)
{
  float v3;
  __int64 v4;
  double v5;
  __int64 v6;
  __m128 v7;
  unsigned int v8;
  __int64 v9;
  __m128 v10;
  __int64 v11;
  __m128 v12;
  unsigned int v13;
  __int64 v14;
  __m128 v15;
  unsigned int v16;
  __int64 result;
  float v18;
  float v19;
  float v20;
  float v21;

  v3 = 0.25;
  if ( BYTE1(g_183F7CA40) )
    v3 = 1.0;
  if ( LOBYTE(g_183F7CA40) )
  {
    if ( BYTE1(g_183F7CA40) )
      v3 = v3 * 16.0;
    else
      v3 = v3 * 0.125;
  }
  v4 = a1;
  v5 = v3;
  if ( BYTE2(g_183F7C978) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(g_183F7C974) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v19 = 1.0 - v18;
  if ( g_183F7C754 )
  {
    *(float *)&dword_140404A6C[result + 284024384] = (float)((float)(g_183F7C6C8 * v19)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024384];
    *(float *)&dword_140404A6C[result + 284024385] = (float)((float)(g_183F7C6CC * v19)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024385];
  }
  v20 = 0.0;
  v21 = (float)((float)(int)g_160FC481C * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( v21 >= 0.0 )
  {
    v20 = (float)((float)(int)g_160FC481C * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
    if ( v21 > 0.875 )
      v20 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v20;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v20 - v18) * 0.0625) + v18;
  return result * 4;
}

//----- (0000000140105180) ----------------------------------------------------
__int64            sub_140105180(int a1, __int64 a2, double a3)
{
  float v3;
  __int64 v4;
  double v5;
  __int64 v6;
  __m128 v7;
  unsigned int v8;
  __int64 v9;
  __m128 v10;
  __int64 v11;
  __m128 v12;
  unsigned int v13;
  __int64 v14;
  __m128 v15;
  unsigned int v16;
  __int64 result;
  bool v18;
  float v19;
  float v20;
  float v21;
  float v22;

  v3 = 0.25;
  if ( BYTE1(g_183F7CA40) )
    v3 = 1.0;
  if ( LOBYTE(g_183F7CA40) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(g_183F7C978) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(g_183F7C974) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = g_151E46198 == 0;
  v19 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)(g_183F7C6C8 * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v20 = (float)(g_183F7C6CC * 0.003125) + v19;
  else
    v20 = v19 - (float)(g_183F7C6CC * 0.003125);
  *(float *)&dword_140404A6C[result + 284024385] = v20;
  if ( v20 >= -1.570796326795 )
  {
    if ( v20 > 1.570796326795 )
      dword_140404A6C[result + 284024385] = 1070141403;
  }
  else
  {
    dword_140404A6C[result + 284024385] = -1077342245;
  }
  v21 = 2.0;
  v22 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)g_160FC481C;
  if ( v22 >= 2.0 )
  {
    v21 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)g_160FC481C;
    if ( v22 > 32.0 )
      v21 = 32.0;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v21;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v21 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

//----- (0000000140105470) ----------------------------------------------------
__int64            sub_140105470(int a1, __int64 a2, double a3)
{
  float v3;
  __int64 v4;
  double v5;
  __int64 v6;
  __m128 v7;
  unsigned int v8;
  __int64 v9;
  __m128 v10;
  __int64 v11;
  __m128 v12;
  unsigned int v13;
  __int64 v14;
  __m128 v15;
  unsigned int v16;
  __int64 result;
  bool v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;

  v3 = 0.25;
  if ( BYTE1(g_183F7CA40) )
    v3 = 1.0;
  if ( LOBYTE(g_183F7CA40) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(g_183F7C978) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(g_183F7C974) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = g_151E46198 == 0;
  v19 = 1.0 - *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v20 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)((float)(g_183F7C6C8 * v19)
                                                         * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v21 = (float)((float)(g_183F7C6CC * v19) * 0.003125) + v20;
  else
    v21 = v20 - (float)((float)(g_183F7C6CC * v19) * 0.003125);
  v22 = (float)(int)g_160FC481C;
  *(float *)&dword_140404A6C[result + 284024385] = v21;
  v23 = 0.0;
  v24 = (float)(v22 * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( v24 >= 0.0 )
  {
    v23 = v24;
    if ( v24 > 0.875 )
      v23 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v23;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v23 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

//----- (0000000140105770) ----------------------------------------------------
__int64            sub_140105770(__int64 a1, __int64 a2, __int64 a3)
{
  float *v4;
  __int64 v5;
  __int64 v6;
  float *v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140105770[48];
#define v14 (*(_OWORD (*)[2])(void *)(sr_frame_140105770 + 0)) /* [rsp+0h] */
#define v15 (*(int (*))(void *)(sr_frame_140105770 + 32)) /* [rsp+20h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140105770 + 40)) /* [rsp+28h] */

  v4 = (float *)v14;
  v5 = 3;
  v6 = a3 - (_QWORD)v14;
  v7 = (float *)(a2 + 8);
  v8 = v6 + 24;
  do
  {
    v9 = *(v7 - 2);
    v10 = 3;
    v11 = *(v7 - 1);
    v12 = *v7;
    do
    {
      *v4 = (float)((float)(v9 * *(float *)((char *)v4 + v6)) + (float)(v11 * *(float *)((char *)v4 + v6 + 12)))
          + (float)(v12 * *(float *)((char *)v4 + v8));
      ++v4;
      --v10;
    }
    while ( v10 );
    v7 += 3;
    v8 -= 12;
    v6 -= 12;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a1 = v14[0];
  *(_OWORD *)(a1 + 16) = v14[1];
  *(_DWORD *)(a1 + 32) = v15;
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16

//----- (0000000140105840) ----------------------------------------------------
__int64            sub_140105840(_OWORD *a1, __int64 a2, __int64 a3)
{
  float *v4;
  char *v5;
  __int64 v6;
  float *v7;
  float v8;
  float *v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140105840[80];
#define v15 (*(_OWORD (*)[4])(void *)(sr_frame_140105840 + 0)) /* [rsp+0h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140105840 + 64)) /* [rsp+40h] */

  v4 = (float *)(a3 + 32);
  v5 = (char *)&v15[-2] - a3;
  v6 = 4;
  v7 = (float *)(a2 + 8);
  do
  {
    v8 = *(v7 - 2);
    v9 = v4;
    v10 = *(v7 - 1);
    v11 = 4;
    v12 = *v7;
    v13 = v7[1];
    do
    {
      *(float *)&v5[(_QWORD)v9] = (float)((float)((float)(v8 * *(v9 - 8)) + (float)(v10 * *(v9 - 4)))
                                        + (float)(v12 * *v9))
                                + (float)(v13 * v9[4]);
      ++v9;
      --v11;
    }
    while ( v11 );
    v5 += 16;
    v7 += 4;
    --v6;
  }
  while ( v6 );
  *a1 = v15[0];
  a1[1] = v15[1];
  a1[2] = v15[2];
  a1[3] = v15[3];
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16

//----- (0000000140105930) ----------------------------------------------------
_UNKNOWN **           sub_140105930(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). No caller uses the result. */
  extern void math_quat_multiply(float out[4], const float a[4], const float b[4]);
  math_quat_multiply(a1, a2, a3);
  return (_UNKNOWN **)a1;
}

//----- (0000000140105AB0) ----------------------------------------------------
unsigned int *           sub_140105AB0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int *result;
  unsigned int v8;
  __int64 v9;

  v4 = a1;
  v5 = 47224LL * a1;
  result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
  if ( (_DWORD)result != dword_140404A6C[v5 + 438924125] )
  {
    v8 = 0;
    v9 = 0;
    result = &dword_140404A6C[v5 + 438920027];
    while ( *result )
    {
      ++v8;
      ++v9;
      result += 4;
      if ( v9 >= 1024 )
        return result;
    }
    dword_140404A6C[47224 * v4 + 438920027 + 4 * v8] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924126 + v5] = 0;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924127 + v5] = v8;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924128 + v5] = a2;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924129 + v5] = a3;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924130 + v5] = a4;
    result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
    dword_140404A6C[v5 + 438924123] = (unsigned int)result;
  }
  return result;
}

//----- (0000000140105BD0) ----------------------------------------------------
__int64            sub_140105BD0(float a1)
{
  float v1;

  v1 = pow(a1, 1.75);
  return (unsigned int)(int)(float)((float)(1.0 - (float)(v1 * 0.00390625)) * 256.0);
}

//----- (0000000140105C20) ----------------------------------------------------
__int64            sub_140105C20(int a1, float *a2)
{
  __int64 v3;
  signed int v4;
  unsigned int *v5;
  unsigned int *v6;
  __int64 v8;
  __int64 v9;
  signed int v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  signed int v18;
  float *v19;
  unsigned __int64 v20;
  _DWORD *v21;
  int v22;
  __int64 v23;
  __int64 result;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v3 = 47224LL * a1;
  g_144CBA9A0 = 0;
  g_144CBA9B0 = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v3 + 438920028];
  v6 = &g_18329E308;
  v8 = a1;
  do
  {
    if ( *(v5 - 1) )
    {
      if ( !*v5 )
      {
        v9 = (int)v5[1];
        dword_140404A6C[(v9 >> 5) + 19060685] |= 1 << (v5[1] & 0x1F);
        if ( !dword_140404A6C[7166 * v9 + 280651303] )
          sub_1401060F0(a1, v4);
      }
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 1024 );
  v10 = 0;
  v11 = 0;
  v12 = 1;
  do
  {
    if ( *v6 && (v12 & dword_140404A6C[(v11 >> 5) + 19060685]) == 0 )
      sub_140105AB0(a1, 0, 0, v10);
    ++v10;
    v12 = __ROL4__(v12, 1);
    ++v11;
    v6 += 7166;
  }
  while ( v10 < 256 );
  v13 = 0;
  g_144CBA9A0 = 0;
  v14 = 0;
  g_144CBA9B0 = 0;
  g_144CBA9C0 = 0;
  g_144CBA9D0 = 0;
  g_144CBA9E0 = 0;
  g_144CBA9F0 = 0;
  g_144CBAA00 = 0;
  g_144CBAA10 = 0;
  do
  {
    if ( dword_140404A6C[47224 * v8 + 438920027 + 4 * v14] )
    {
      if ( dword_140404A6C[47224 * v8 + 438920028 + 4 * v14] == 1 )
      {
        v15 = (int)dword_140404A6C[47224 * v8 + 438920029 + 4 * v14];
        dword_140404A6C[(v15 >> 5) + 19060685] |= 1 << (v15 & 0x1F);
        if ( !dword_140404A6C[1760 * v15 + 278845893]
          || dword_140404A6C[1760 * v15 + 278845905]
          || a1 != 255
          && (float)((float)((float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1])
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1]))
                           + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)))
                   + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2])
                           * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2]))) > 69696.0 )
        {
          v16 = 47224 * v8;
          v17 = (int)dword_140404A6C[47224 * v8 + 438924123];
          if ( (((_WORD)v17 + 1) & 0x7FF) != dword_140404A6C[47224 * v8 + 438924125] )
          {
            dword_140404A6C[5 * v17 + 438924126 + v16] = 1;
            dword_140404A6C[5 * (int)dword_140404A6C[v16 + 438924123] + 438924127 + v16] = v13;
            dword_140404A6C[v16 + 438924123] = ((unsigned __int16)dword_140404A6C[v16 + 438924123] + 1) & 0x7FF;
          }
        }
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 1024 );
  v18 = 0;
  v19 = (float *)&g_182BBB1E4;
  v20 = 0;
  v21 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1759770560);
  v22 = 1;
  do
  {
    if ( *((_DWORD *)v19 - 25)
      && (v22 & dword_140404A6C[(v20 >> 5) + 19060685]) == 0
      && !*((_DWORD *)v19 - 13)
      && (a1 == 255
       || (float)((float)((float)((float)(*(v19 - 1) - a2[1]) * (float)(*(v19 - 1) - a2[1]))
                        + (float)((float)(*(v19 - 2) - *a2) * (float)(*(v19 - 2) - *a2)))
                + (float)((float)(*v19 - a2[2]) * (float)(*v19 - a2[2]))) < 65536.0) )
    {
      sub_140105AB0(a1, 1u, *((_DWORD *)v19 - 20), v18);
      *v21 = -1;
    }
    ++v18;
    v22 = __ROL4__(v22, 1);
    ++v20;
    v19 += 1760;
    v21 += 5;
  }
  while ( v18 < 1024 );
  v23 = 47224 * v8;
  result = dword_140404A6C[47224 * v8 + 438924124];
  if ( (_DWORD)result != dword_140404A6C[47224 * v8 + 438924123] )
  {
    v25 = dword_140404A6C[47224 * v8 + 438924124];
    do
    {
      v26 = v23 * 4 + 20LL * (int)result;
      v27 = *(int *)((char *)&g_1A8E617E8 + v26);
      if ( !*(unsigned int *)((char *)&g_1A8E617E4 + v26) )
      {
        v28 = 2 * (v27 + 11806 * v8);
        dword_140404A6C[2 * v28 + 438920027] = 1;
        dword_140404A6C[2 * v28 + 438920028] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924128
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920029] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924130
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920030] = 0x10000;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      if ( dword_140404A6C[5 * v25 + 438924126 + v23] == 1 )
      {
        dword_140404A6C[47224 * v8 + 438920027 + 4 * v27] = 0;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      result = ((_WORD)v25 + 1) & 0x7FF;
      dword_140404A6C[v23 + 438924124] = result;
      v25 = ((_WORD)v25 + 1) & 0x7FF;
    }
    while ( (_DWORD)result != dword_140404A6C[v23 + 438924123] );
  }
  return result;
}

//----- (00000001401060F0) ----------------------------------------------------
__int64            sub_1401060F0(int a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = 47224LL * a1;
  v3 = (int)dword_140404A6C[v2 + 438924123];
  result = ((_WORD)v3 + 1) & 0x7FF;
  if ( (_DWORD)result != dword_140404A6C[v2 + 438924125] )
  {
    dword_140404A6C[5 * v3 + 438924126 + v2] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v2 + 438924123] + 438924127 + v2] = a2;
    result = ((unsigned __int16)dword_140404A6C[v2 + 438924123] + 1) & 0x7FF;
    dword_140404A6C[v2 + 438924123] = result;
  }
  return result;
}

//----- (0000000140106160) ----------------------------------------------------
__int64            sub_140106160(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int *v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int *v25;

  v1 = a1;
  v2 = 47224LL * a1;
  v3 = dword_140404A6C[v2 + 438887426];
  result = g_1AD04B20C - v3;
  if ( (int)result < 192 )
  {
    v5 = 0;
    v6 = 1;
    v7 = (unsigned __int8)v3;
    v8 = 1;
    v9 = 0;
    v10 = 0;
    v11 = 256;
    v12 = 88LL * (unsigned __int8)v3 + 47224 * v1;
    v13 = &dword_140404A6C[v2 + 438888533];
    do
    {
      if ( (v8 & dword_140404A6C[v12 + 438897493 + (v10 >> 5)]) != 0 )
      {
        v13[2] = dword_140404A6C[v2 + 438887426];
        *v13 = dword_140404A6C[79616 * v7 + 137297854 + v9];
      }
      ++v10;
      v8 = __ROL4__(v8, 1);
      v9 += 121;
      v13 += 3;
      --v11;
    }
    while ( v11 );
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v17 = 512;
    do
    {
      if ( (v15 & dword_140404A6C[v12 + 438897501 + (v16 >> 5)]) != 0 )
        dword_140404A6C[47224 * v1 + 438887510 + 2 * v14] = dword_140404A6C[v2 + 438887426];
      ++v16;
      v15 = __ROL4__(v15, 1);
      ++v14;
      --v17;
    }
    while ( v17 );
    v18 = 1024;
    v19 = &dword_140404A6C[v2 + 438889301];
    v20 = 1024;
    v21 = 1;
    v22 = 0;
    v23 = 0;
    do
    {
      if ( (v21 & dword_140404A6C[v12 + 438897517 + (v23 >> 5)]) != 0 )
      {
        v19[2] = dword_140404A6C[v2 + 438887426];
        *v19 = dword_140404A6C[79616 * v7 + 137358014 + v22];
      }
      ++v23;
      v21 = __ROL4__(v21, 1);
      v22 += 9;
      v19 += 5;
      --v20;
    }
    while ( v20 );
    v24 = 0;
    v25 = &dword_140404A6C[v2 + 438894421];
    do
    {
      result = v12 + (v24 >> 5);
      if ( (v6 & dword_140404A6C[result + 438897549]) != 0 )
      {
        v25[2] = dword_140404A6C[v2 + 438887426];
        result = dword_140404A6C[79616 * v7 + 137367230 + v5];
        *v25 = result;
      }
      ++v24;
      v6 = __ROL4__(v6, 1);
      v5 += 10;
      v25 += 3;
      --v18;
    }
    while ( v18 );
  }
  return result;
}

//----- (00000001401063E0) ----------------------------------------------------
unsigned int *sub_1401063E0()
{
  signed int v0;
  signed int v1;
  signed int v2;
  unsigned int *v3;
  __int64 v4;
  char v5;
  char v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __m128i si128;
  __int64 v12;
  unsigned int *v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  unsigned int *v24;
  unsigned int *v25;
  __int64 v26;
  int v27;
  int v28;
  unsigned int *result;
  unsigned int *v30;
  char *v31;
  bool v32;
  unsigned int *v33;
  unsigned int *v34;
  char v35;
  int v36;
  int v37;
  __int64 v38;
       char *v39;
  char *v40;

  sub_1400ED940("readme.txt");
  v0 = g_1862AE024;
  v1 = g_1862AE020;
  v2 = 0;
  g_183E53120 = 0;
  do
  {
    if ( v1 >= v0 )
      break;
    v3 = &dword_140404A6C[64 * (__int64)v2 + 283720110];
    v4 = 0;
    do
    {
      if ( v4 >= 123 )
        break;
      v5 = *((_BYTE *)&g_1862AE028 + v1);
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        break;
      ++v1;
      *((_BYTE *)v3 + v4++) = v5;
      g_1862AE020 = v1;
    }
    while ( v1 < v0 );
    for ( *((_BYTE *)v3 + v4) = 0; v1 < v0; g_1862AE020 = ++v1 )
    {
      v6 = *((_BYTE *)&g_1862AE028 + v1);
      if ( v6 != 13 && v6 != 10 )
        break;
    }
    v2 = g_183E53120 + 1;
    g_183E53120 = v2;
  }
  while ( v2 < 1022 );
  v7 = g_160361344;
  v8 = 0;
  renderer_sort_count = g_160361344;
  LOBYTE(dword_140404A6C[64 * (__int64)v2 + 283720110]) = 0;
  v9 = (__int64)(int)++g_183E53120 << 8;
  *(_QWORD *)((char *)&g_183E53124 + v9) = 0x6C20303120706F54LL;
  *(unsigned int *)((char *)&g_183E5312C + v9) = 7631721;
  v10 = ++g_183E53120;
  if ( v7 >= 8 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
    v12 = 0;
    v13 = &g_160361464;
    do
    {
      v14 = _mm_cvtsi32_si128(v13[28]);
      v8 += 8;
      v15 = _mm_cvtsi32_si128(*(v13 - 28));
      v16 = _mm_cvtsi32_si128(*v13);
      v17 = _mm_cvtsi32_si128(*(v13 - 56));
      v13 += 224;
      v18 = _mm_unpacklo_epi32(v16, v14);
      v19 = _mm_cvtsi32_si128(*(v13 - 84));
      v20 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v15), v18);
      v21 = _mm_cvtsi32_si128(*(v13 - 112));
      v22 = _mm_sub_epi32(si128, v20);
      v23 = _mm_cvtsi32_si128(*(v13 - 168));
      *(__m128i_u *)&dword_140404A6C[v12 + 437192782] = v22;
      *(__m128i_u *)&dword_140404A6C[v12 + 437192786] = _mm_sub_epi32(
                                                        si128,
                                                        _mm_unpacklo_epi64(
                                                          _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(*(v13 - 140))),
                                                          _mm_unpacklo_epi32(v21, v19)));
      v12 += 8;
    }
    while ( v12 < v7 - (v7 & 7) );
  }
  if ( v8 < v7 )
  {
    v24 = &dword_140404A6C[v8 + 437192782];
    v25 = &dword_140404A6C[28 * v8 + 134050374];
    v26 = (unsigned int)(v7 - v8);
    do
    {
      ++v24;
      v27 = -1879048193 - *v25;
      v25 += 28;
      *(v24 - 1) = v27;
      --v26;
    }
    while ( v26 );
  }
  sub_14007D710();
  v28 = 0;
  result = &g_1A85C6BCC;
  v30 = &g_1A85C6BA4;
  do
  {
    if ( v28 < v7 )
    {
      crt_sprintf(
        &g_144AFA5A0,
        "%d. %s   $",
        v28 + 1,
        (     char *)&dword_140404A6C[28 * *v30 + 134050365]);
      format_with_thousands(&g_144AFA7A0, dword_140404A6C[28 * *v30 + 134050374]);
      v31 = (char *)&g_144AFA59C + 3;
      do
        v32 = *++v31 == 0;
      while ( !v32 );
      strcpy(v31, (     char *)&g_144AFA7A0);
      v33 = &g_144AFA5A0;
      v34 = &dword_140404A6C[64 * (__int64)(int)g_183E53120 + 283720110];
      do
      {
        v35 = *(_BYTE *)v33;
        v33 = (unsigned int *)((char *)v33 + 1);
        *(_BYTE *)v34 = v35;
        v34 = (unsigned int *)((char *)v34 + 1);
      }
      while ( v35 );
      result = &g_1A85C6BCC;
      v7 = g_160361344;
      v10 = ++g_183E53120;
    }
    ++v28;
    ++v30;
  }
  while ( (__int64)v30 < (__int64)&g_1A85C6BCC );
  v36 = 0;
  LOBYTE(g_183E93124) = 0;
  v37 = 0;
  if ( v10 > 0 )
  {
    result = nullptr;
    do
    {
      v38 = -1;
      v39 = (     char *)&dword_140404A6C[64 * (__int64)v37 + 283720110];
      do
        ++v38;
      while ( v39[v38] );
      if ( (unsigned __int64)(v36 + v38) < 0x3FE )
      {
        v40 = (char *)&g_183E93120 + 3;
        do
          v32 = *++v40 == 0;
        while ( !v32 );
        strcpy(v40, v39);
        for ( ; (__int64)result < 1022; result = (unsigned int *)((char *)result + 1) )
        {
          if ( !*((_BYTE *)&g_183E93124 + (_QWORD)result) )
            break;
          ++v36;
        }
        *((_BYTE *)&g_183E93124 + (_QWORD)result) = 10;
        ++v36;
        result = (unsigned int *)((char *)result + 1);
        *((_BYTE *)&g_183E93124 + (_QWORD)result) = 0;
        v10 = g_183E53120;
      }
      ++v37;
    }
    while ( v37 < v10 );
  }
  return result;
}

// 14010653D: conditional instruction was optimized away because esi.4>=8
// 140106537: mask 0x80000007 is shortened because esi.4 <= 0x7FFFFFFF

//----- (00000001401069C0) ----------------------------------------------------
__int64 sub_1401069C0()
{
  extern void world_update_vehicle_bounds(void);
  /* src/engine/world_vehicles.c; the original's return value is a leftover, no caller reads it. */
  world_update_vehicle_bounds();
  return 0;
}

//----- (000000014010BE50) ----------------------------------------------------
void sub_14010BE50()
{
  extern void world_expire_vehicles(void);
  /* src/engine/world_vehicles.c */
  world_expire_vehicles();
}

//----- (000000014010C110) ----------------------------------------------------
__int64            sub_14010C110(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  char *v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  int v20;
  int v21;
  float v22;
  int v23;
  float v24;
  int v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int *v38;
  __int64 v39;
  __int64 v40;
  float *v41;
  float *v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  unsigned int v53;
  unsigned int v54;
  bool v55;
  _DWORD v57[16];
  float sr_train_track_hit[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010C110[49568];
#define v58 (*(__int64 (*))(void *)(sr_frame_14010C110 + 0)) /* [rsp+20h] */
#define v59 (*(unsigned __int64 (*))(void *)(sr_frame_14010C110 + 8)) /* [rsp+28h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_14010C110 + 16)) /* [rsp+30h] */
#define v61 (*(int (*))(void *)(sr_frame_14010C110 + 24)) /* [rsp+38h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_14010C110 + 32)) /* [rsp+40h] */
#define v63 (*(char * (*))(void *)(sr_frame_14010C110 + 40)) /* [rsp+48h] */
#define v64 (*(float (*)[4])(void *)(sr_frame_14010C110 + 48)) /* [rsp+50h] */
#define v65 (*(unsigned int (*)[4])(void *)(sr_frame_14010C110 + 64)) /* [rsp+60h] */
#define v68 (*(int (*)[12356])(void *)(sr_frame_14010C110 + 128)) /* [rsp+A0h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_14010C110 + 49552)) /* [rsp+C1B0h] */

  v1 = 20840LL * a1;
  v2 = *(unsigned int *)((char *)&g_15F2D9250 + v1);
  v3 = *(unsigned int *)((char *)&g_15F2D9254 + v1);
  v4 = *(unsigned int *)((char *)&g_15F2D9258 + v1);
  v62 = v1;
  v5 = (char *)&g_15F2DE1BC + v1;
  v63 = (char *)&g_15F2DE1BC + v1;
  v6 = 47LL * *(int *)((char *)&g_15F2D9228 + v1);
  v7 = *(float *)&dword_140404A6C[v6 + 18215729];
  v8 = *(float *)&dword_140404A6C[v6 + 18215728];
  v9 = *(float *)&dword_140404A6C[v6 + 18215727];
  v10 = 47LL * *(int *)((char *)&g_15F2DE1BC + v1);
  v11 = *(float *)&dword_140404A6C[v10 + 18215728];
  v12 = *(float *)&dword_140404A6C[v10 + 18215729];
  v13 = *(float *)&dword_140404A6C[v10 + 18215727];
  v14 = *(int *)((char *)&g_15F2DE1C8 + v1);
  v15 = 18LL * *(int *)((char *)&g_15F2DE1C4 + v1);
  *(float *)&dword_140404A6C[2 * v15 + 485543033] = (float)((float)(v11 * v7) - (float)(v12 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543034] = (float)((float)(v9 * v12) - (float)(v13 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543035] = (float)((float)(v13 * v8) - (float)(v9 * v11)) * 0.0625;
  dword_140404A6C[2 * v15 + 485543052] = 1;
  dword_140404A6C[2 * v15 + 485543053] = v2;
  dword_140404A6C[2 * v15 + 485543054] = v3;
  dword_140404A6C[2 * v15 + 485543055] = v4;
  v16 = *(float *)&dword_140404A6C[47 * v14 + 18215728];
  v17 = *(float *)&dword_140404A6C[47 * v14 + 18215729];
  v18 = 18LL * *(int *)((char *)&g_15F2DE1D0 + v1);
  v19 = *(float *)&dword_140404A6C[47 * v14 + 18215727];
  *(float *)&dword_140404A6C[2 * v18 + 485543033] = (float)((float)(v16 * v7) - (float)(v17 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543034] = (float)((float)(v9 * v17) - (float)(v19 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543035] = (float)((float)(v19 * v8) - (float)(v9 * v16)) * 0.0625;
  dword_140404A6C[2 * v18 + 485543052] = 1;
  dword_140404A6C[2 * v18 + 485543053] = v2;
  dword_140404A6C[2 * v18 + 485543054] = v3;
  dword_140404A6C[2 * v18 + 485543055] = v4;
  v20 = 0;
  v21 = (int)(float)(*(float *)((char *)&g_15F2D92B0 + v1) * 0.015625);
  v22 = *(float *)((char *)&g_15F2D92BC + v1) * 0.015625;
  v61 = v21;
  v23 = (int)v22;
  v24 = *(float *)((char *)&g_15F2D92B8 + v1) * 0.015625;
  LODWORD(v60) = v23;
  v25 = (int)v24;
  v26 = (int)(float)(*(float *)((char *)&g_15F2D92C4 + v1) * 0.015625);
  if ( (int)v24 <= v26 )
  {
    v27 = v25;
    v58 = v25;
    v28 = 0;
    v29 = (__int64)v25 << 6;
    v30 = (unsigned int)(v26 - v25 + 1);
    v59 = (unsigned int)v30;
    do
    {
      if ( v27 <= 0x3F && v21 <= v23 )
      {
        v31 = v21;
        v32 = (unsigned int)(v23 - v21 + 1);
        do
        {
          if ( v31 <= 0x3F )
          {
            v33 = (int)dword_140404A6C[9 * v31 + 254352099 + 9 * v29];
            if ( (int)v33 > 0 )
            {
              crt_memcpy(
                (__m128i *)&v68[v28 + 12292],
                (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36 * (v31 + v29) + 1021621756),
                4 * v33);
              v20 += v33;
              v28 += v33;
            }
          }
          ++v31;
          --v32;
        }
        while ( v32 );
        v27 = v58;
        v21 = v61;
        v30 = v59;
        v23 = v60;
      }
      ++v27;
      v29 += 64;
      --v30;
      v58 = v27;
      v59 = v30;
    }
    while ( v30 );
    v1 = v62;
    v5 = v63;
  }
  v34 = v20;
  v62 = v20;
  if ( v20 > 0 )
  {
    v35 = 0;
    v60 = 0;
    do
    {
      v36 = v68[v35 + 12292];
      v37 = 15432 * v36;
      if ( !dword_140404A6C[15432 * v36 + 358297501]
        && *(float *)&dword_140404A6C[v37 + 358312926] <= *(float *)((char *)&g_15F2D92BC + v1)
        && *(float *)&dword_140404A6C[v37 + 358312928] <= *(float *)((char *)&g_15F2D92C4 + v1)
        && *(float *)&dword_140404A6C[v37 + 358312929] >= *(float *)((char *)&g_15F2D92B0 + v1)
        && *(float *)&dword_140404A6C[v37 + 358312931] >= *(float *)((char *)&g_15F2D92B8 + v1) )
      {
        v68[0] = 0;
        v68[12289] = 0;
        sub_1401885C0(v68, v36, 0);
        sub_1401885C0(v68, v36, 1);
        v38 = (int *)v5;
        v59 = (unsigned __int64)v5;
        v58 = 2;
        do
        {
          v39 = *v38;
          v40 = 47 * v39;
          v41 = (float *)&dword_140404A6C[47 * v39 + 18215715];
          v42 = (float *)dword_1402B34F8;
          do
          {
            v43 = (float)(*(v42 - 2) - 0.5) * 1.4349999;
            v44 = (float)((float)(*v42 - 0.5) + *v42) - 0.5;
            v45 = (float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215725]) + v41[1])
                + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215731]);
            v46 = (float)((float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215724]) + *v41)
                        + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215730]))
                - (float)(*(float *)&dword_140404A6C[v40 + 18215727] * 0.5);
            v47 = *(float *)&dword_140404A6C[v40 + 18215729] * 0.5;
            v48 = (float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215726]) + v41[2])
                + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215732]);
            v49 = *(float *)&dword_140404A6C[v40 + 18215728] * 0.5;
            v64[0] = v46;
            v50 = v48 - v47;
            v51 = v45 - v49;
            v64[2] = v50;
            v64[1] = v51;
            if ( sub_1400DA300((__int64)sr_train_track_hit, v68, (float *)&dword_140404A6C[47 * v39 + 18215715], v64) )
            {
              v57[12] = 1040187392;
              v57[10] = 1040187392;
              v52 = v46 - *v41;
              v57[8] = 0;
              *(float *)&v53 = v51 - v41[1];
              *(float *)v65 = v52;
              *(float *)&v54 = v50 - v41[2];
              v65[1] = v53;
              v65[2] = v54;
              sub_140005160(
                v39,
                v65,
                ((unsigned *)(void *)(sr_train_track_hit+3)),
                (float)((float)((float)(sr_train_track_hit[0] - v46) * *(float *)((unsigned *)(void *)(sr_train_track_hit+3)))
                      + (float)((float)(sr_train_track_hit[1] - v51) * *(float *)&((unsigned *)(void *)(sr_train_track_hit+3))[1]))
              + (float)((float)(sr_train_track_hit[2] - v50) * *(float *)&((unsigned *)(void *)(sr_train_track_hit+3))[2]),
                0,
                0.125,
                0x3E000000u);
              *(unsigned int *)((char *)&g_15F2DE1B0 + v1) = v36;
            }
            v42 += 3;
            g_16B2A2EA0 = 0;
          }
          while ( (__int64)v42 < (__int64)&dword_1402B3528 );
          v38 = (int *)(v59 + 12);
          v55 = v58-- == 1;
          v59 += 12LL;
        }
        while ( !v55 );
        v35 = v60;
        v34 = v62;
      }
      v5 = v63;
      v60 = ++v35;
    }
    while ( v35 < v34 );
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
#undef v68
#undef v69

//----- (000000014010CD40) ----------------------------------------------------
__int64            sub_14010CD40(__m128 *a1, float *a2, float *a3)
{
  __int64 result;
  float *v4;
  float *v5;
  float v8;
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
  float v20;
  __int64 v21;
  __int64 v22;
  float *v23;
  float *v24;
  float v25;
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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010CD40[32];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14010CD40 + 0)) /* [rsp+A8h] */
#define v42 (*(float (*))(void *)(sr_frame_14010CD40 + 8)) /* [rsp+B0h] */
#define v43 (*(float (*))(void *)(sr_frame_14010CD40 + 24)) /* [rsp+C0h] */

  result = (__int64)&retaddr;
  v4 = a3 + 1;
  v5 = a3 + 2;
  SR_VEC_PTR_LANES(128, a1, u64)[0] = 0;
  SR_VEC_PTR_LANES(128, a1, u64)[1] = 0;
  v8 = a3[6] - *a3;
  v9 = a3[7] - a3[1];
  v10 = a3[8] - a3[2];
  v11 = a3[3] - *a3;
  v12 = a3[4] - a3[1];
  v13 = a3[5] - a3[2];
  v14 = (float)(v9 * v13) - (float)(v10 * v12);
  v15 = (float)(v10 * v11) - (float)(v8 * v13);
  v16 = (float)(v8 * v12) - (float)(v9 * v11);
  v17 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
  if ( v17 == 0.0 )
  {
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v18 = (float)(1.0 / v17) * v14;
    v19 = (float)(1.0 / v17) * v15;
    v20 = (float)(1.0 / v17) * v16;
  }
  v21 = 0;
  v43 = v19;
  v42 = v18;
  do
  {
    v22 = 0;
    v23 = v4;
    do
    {
      if ( v22 != v21 )
      {
        result = v22 + 1;
        if ( v22 + 1 < 4 )
        {
          v24 = v23 + 4;
          do
          {
            if ( result != v21 )
            {
              v25 = *v23;
              v26 = v23[1];
              v27 = *(v24 - 1) - *v23;
              v28 = *(v23 - 1);
              v29 = *v24 - v26;
              v30 = *(v24 - 2) - v28;
              v31 = (float)(v27 * v20) - (float)(v29 * v19);
              v32 = (float)(v29 * v18) - (float)(v30 * v20);
              v33 = (float)(v30 * v19) - (float)(v27 * v18);
              v34 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
              if ( v34 == 0.0 )
              {
                v35 = 0.0;
                v36 = 0.0;
                v37 = 0.0;
              }
              else
              {
                v35 = (float)(1.0 / v34) * v31;
                v36 = (float)(1.0 / v34) * v32;
                v37 = (float)(1.0 / v34) * v33;
              }
              v38 = *(v5 - 2) - v28;
              v39 = *(v5 - 1) - v25;
              v40 = *v5 - v26;
              if ( (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)) < 0.0 )
              {
                v35 = -v35;
                v36 = -v36;
                v37 = -v37;
              }
              SR_VEC_PTR_LANES(128, a1, f32)[v21] = (float)((float)((float)((float)((float)(a2[1] - v25) * v36)
                                                        + (float)((float)(*a2 - v28) * v35))
                                                + (float)((float)(a2[2] - v26) * v37))
                                        / (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)))
                                + SR_VEC_PTR_LANES(128, a1, f32)[v21];
            }
            v18 = v42;
            ++result;
            v19 = v43;
            v24 += 3;
          }
          while ( result < 4 );
        }
      }
      v18 = v42;
      ++v22;
      v19 = v43;
      v23 += 3;
    }
    while ( v22 < 4 );
    ++v21;
    v5 += 3;
  }
  while ( v21 < 4 );
  *a1 = _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_140279310)), *a1);
  return result;
}
#undef retaddr
#undef v42
#undef v43

//----- (000000014010E030) ----------------------------------------------------
__int64 sub_14010E030()
{
  __int64 result;

  result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  g_144980D88 = result;
  if ( result )
  {
    g_144980D90 = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                              result,
                                              "wglGetProcAddress");
    return g_144980D90 != 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

//----- (000000014010E080) ----------------------------------------------------
__int64            sub_14010E080(_DWORD *a1, char *a2, __int64 a3, int a4)
{
  __int64 result;

  if ( a4 )
    return sub_1400920F0(a3, "%s%d\r\n", a2, *a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    result = sub_1400A3D70();
    *a1 = result;
  }
  g_1862AE020 = 0;
  return result;
}

//----- (000000014010E0D0) ----------------------------------------------------
__int64            sub_14010E0D0(char *a1, char *a2, int a3, __int64 a4, int a5)
{
  __int64 result;
  signed int v8;
  int v9;
  char *v10;
  char v11;

  if ( a5 )
    return sub_1400920F0(a4, "%s%s\r\n", a2, a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    v8 = g_1862AE020;
    v9 = 0;
    if ( (int)g_1862AE020 < (int)g_1862AE024 )
    {
      v10 = a1;
      do
      {
        if ( v9 >= a3 - 1 )
          break;
        v11 = *((_BYTE *)&g_1862AE028 + v8);
        if ( v11 == 13 )
          break;
        if ( v11 == 10 )
          break;
        *v10 = v11;
        ++v9;
        ++v10;
        v8 = ++g_1862AE020;
      }
      while ( (int)g_1862AE020 < (int)g_1862AE024 );
    }
    result = v9;
    a1[v9] = 0;
  }
  g_1862AE020 = 0;
  return result;
}

//----- (000000014010E190) ----------------------------------------------------
_WORD *           sub_14010E190(int a1, _WORD *a2, int a3, int a4)
{
  __int64 v5;
  int v6;
  int *v7;

  v5 = a3;
  v6 = dword_140404A6C[96401 * a3 + 308337813 + a4];
  v7 = *(int **)&dword_140404A6C[2 * a1 + 299853565];
  if ( v6 > 0 )
    return (_WORD *)sub_1401E25C0(
                      v7,
                      (char *)&dword_140404A6C[96401 * v5 + 308337941 + 512 * (__int64)a4],
                      v6,
                      (__int64)a2,
                      2048,
                      0);
  sub_1401E25C0(v7, nullptr, 0, (__int64)a2, 2048, 0);
  return crt_memset((void *)(uintptr_t)(a2), 0, 0x780u);
}

//----- (000000014010E230) ----------------------------------------------------
__int64            sub_14010E230(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  v4 = a4;
  v5 = a3;
  result = sub_1401E0CC0(
             *(int **)&dword_140404A6C[2 * a1 + 299853437],
             a2,
             960,
             (__m128i *)&dword_140404A6C[32901 * a3 + 299853826 + 512 * (__int64)a4],
             2048);
  dword_140404A6C[32901 * v5 + 299853762 + v4] = result;
  return result;
}

//----- (000000014010E2B0) ----------------------------------------------------
int *sub_14010E2B0()
{
  unsigned int *v0;
  int *result;
  int v2;

  g_187BDE460 = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, &v2));
  sub_1401E0F40(*(int **)&g_187BDE460, 4002, 16000);
  v0 = &g_187BDE660;
  do
  {
    result = sub_1401E22F0(48000, 1, &v2);
    *(_QWORD *)v0 = (uint64)(uintptr_t)(result);
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&g_187BDE6A0 );
  return result;
}

//----- (000000014010E330) ----------------------------------------------------
void sub_14010E330()
{
  void **v0;

  sub_1401E0F20(*(void **)&g_187BDE460);
  v0 = (void **)&g_187BDE660;
  do
    sub_1401E2C30(*v0++);
  while ( (__int64)v0 < (__int64)&g_187BDE6A0 );
}

//----- (000000014010E370) ----------------------------------------------------
void            sub_14010E370(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_quat_from_mat3(float *, const float *);
  math_quat_from_mat3(a1, a2);
}

//----- (000000014010E610) ----------------------------------------------------
__int64            sub_14010E610(float *a1, int a2)
{
  return net_write_angle(a1, a2);
}

//----- (000000014010E6C0) ----------------------------------------------------
__int64            sub_14010E6C0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6;
  __int64 result;
  char v8;
  signed int v9;
  unsigned int v10;
  unsigned int v11;
  signed int v12;
  unsigned int v13;
  unsigned int v14;
  signed int v15;
  char v16;
  unsigned int v17;
  unsigned int v18;
  int v19;

  if ( !a3 )
    goto LABEL_27;
  v6 = *a1 - a2;
  if ( (unsigned int)(v6 + 8) <= 0xF )
  {
    result = packet_out_byte;
    v8 = packet_out_bit;
    v9 = 1;
    if ( (int)packet_out_byte < 0x10000 )
    {
      v10 = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << v9) - 1) << v8);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v10 << SLOBYTE(packet_out_bit);
        v11 = 8 - packet_out_bit;
        result = packet_out_byte;
        if ( v9 < 8 - packet_out_bit )
          break;
        v8 = 0;
        packet_out_bit = 0;
        if ( v9 == v11 )
        {
          result = ++packet_out_byte;
          goto LABEL_11;
        }
        result = packet_out_byte + 1;
        v10 >>= v11;
        v9 -= v11;
        ++packet_out_byte;
        if ( v9 <= 0 )
          goto LABEL_11;
      }
      v8 = v9 + LOBYTE(packet_out_bit);
      packet_out_bit += v9;
    }
LABEL_11:
    v12 = 4;
    if ( (int)result < 0x10000 )
    {
      v13 = v6 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << v12) - 1) << v8);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v13 << SLOBYTE(packet_out_bit);
        result = packet_out_bit;
        v14 = 8 - packet_out_bit;
        if ( v12 < 8 - packet_out_bit )
          break;
        packet_out_bit = 0;
        if ( v12 == v14 )
          goto LABEL_25;
        v12 -= v14;
        result = packet_out_byte + 1;
        v13 >>= v14;
        ++packet_out_byte;
        v8 = 0;
        if ( v12 <= 0 )
          return result;
      }
      result = v12 + packet_out_bit;
      packet_out_bit += v12;
    }
    return result;
  }
  if ( (unsigned int)(v6 + 256) > 0x1FF )
  {
LABEL_27:
    v19 = 1;
    sub_140115D90(&v19, 1);
    sub_140115D90(&v19, 1);
    return sub_140115D90(a1, a4);
  }
  v19 = 1;
  sub_140115D90(&v19, 1);
  v19 = 0;
  sub_140115D90(&v19, 1);
  result = packet_out_byte;
  v15 = 9;
  if ( (int)packet_out_byte < 0x10000 )
  {
    v16 = packet_out_bit;
    v17 = v6 & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << v15) - 1) << v16);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v17 << SLOBYTE(packet_out_bit);
      result = packet_out_bit;
      v18 = 8 - packet_out_bit;
      if ( v15 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( v15 == v18 )
      {
LABEL_25:
        ++packet_out_byte;
        return result;
      }
      v15 -= v18;
      result = packet_out_byte + 1;
      v17 >>= v18;
      ++packet_out_byte;
      v16 = 0;
      if ( v15 <= 0 )
        return result;
    }
    result = v15 + packet_out_bit;
    packet_out_bit += v15;
  }
  return result;
}

//----- (000000014010E9B0) ----------------------------------------------------
__int64            sub_14010E9B0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6;
  int v8;
  signed int v9;
  unsigned int v10;
  signed int v11;
  unsigned int v12;
  unsigned int v13;
  signed int v14;
  unsigned int v15;
  unsigned int v16;
  signed int v17;
  _DWORD *v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010E9B0[64];
#define v19 (*(_DWORD (*)[6])(void *)(sr_frame_14010E9B0 + 0)) /* [rsp+20h] */
#define v20 (*(int (*))(void *)(sr_frame_14010E9B0 + 48)) /* [rsp+50h] */

  if ( a3 )
  {
    v6 = *a1 - a2;
    v19[0] = v6;
    if ( g_16B2A224C && !v6 )
    {
      v20 = 0;
      return sub_140115D90(&v20, 1);
    }
    if ( v6 >= (signed int)-g_165D84970 && v6 < (int)g_165D84970 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    if ( v6 >= (signed int)-g_165D84974 )
    {
      v8 = 1;
      if ( v6 < (int)g_165D84974 )
        goto LABEL_11;
    }
  }
  v8 = 2;
LABEL_11:
  v9 = packet_out_byte;
  LOBYTE(v10) = packet_out_bit;
  if ( g_16B2A224C )
  {
    v11 = 1;
    if ( (int)packet_out_byte < 0x10000 )
    {
      v12 = 1;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + v9) &= ~(((1 << v11) - 1) << v10);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v12 << SLOBYTE(packet_out_bit);
        v13 = 8 - packet_out_bit;
        v9 = packet_out_byte;
        if ( v11 < 8 - packet_out_bit )
          break;
        if ( v11 == v13 )
        {
          v9 = ++packet_out_byte;
          v10 = 0;
          goto LABEL_20;
        }
        v9 = packet_out_byte + 1;
        v12 >>= v13;
        LOBYTE(v10) = 0;
        ++packet_out_byte;
        v11 -= v13;
        packet_out_bit = 0;
        if ( v11 <= 0 )
          goto LABEL_21;
      }
      v10 = v11 + packet_out_bit;
LABEL_20:
      packet_out_bit = v10;
    }
  }
LABEL_21:
  if ( v8 )
  {
    v20 = 1;
    if ( v8 == 1 )
    {
      sub_140115D90(&v20, 1);
      v20 = 0;
      sub_140115D90(&v20, 1);
      v17 = g_165D84964;
      v18 = v19;
    }
    else
    {
      sub_140115D90(&v20, 1);
      sub_140115D90(&v20, 1);
      v17 = a4;
      v18 = a1;
    }
  }
  else
  {
    v14 = 1;
    if ( v9 < 0x10000 )
    {
      v15 = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + v9) &= ~(((1 << v14) - 1) << v10);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v15 << SLOBYTE(packet_out_bit);
        v16 = 8 - packet_out_bit;
        if ( v14 < 8 - packet_out_bit )
          break;
        if ( v14 == v16 )
        {
          ++packet_out_byte;
          v18 = v19;
          v17 = g_165D84960;
          packet_out_bit = 0;
          return sub_140115D90(v18, v17);
        }
        LOBYTE(v10) = 0;
        v9 = packet_out_byte + 1;
        v15 >>= v16;
        v14 -= v16;
        ++packet_out_byte;
        packet_out_bit = 0;
        if ( v14 <= 0 )
        {
          v17 = g_165D84960;
          v18 = v19;
          return sub_140115D90(v18, v17);
        }
      }
      packet_out_bit += v14;
    }
    v17 = g_165D84960;
    v18 = v19;
  }
  return sub_140115D90(v18, v17);
}
#undef v19
#undef v20

//----- (000000014010EF40) ----------------------------------------------------
__int64            sub_14010EF40(int a1)
{
  __int64 v1;
  __int64 result;

  v1 = 1760LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115D90(&dword_140404A6C[v1 + 278845903], 10);
  sub_140115D90(&dword_140404A6C[v1 + 278845902], 10);
  result = sub_140115D90(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115D90(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

//----- (000000014010EFF0) ----------------------------------------------------
__int64            sub_14010EFF0(int a1, int a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  signed int v14;
  signed int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int *v25;
  __int64 v26;
  unsigned int v27;
  char v28;
  __int64 v29;
  signed int v30;
  unsigned int *v31;
  signed int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  unsigned int *v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  int v43;
  float v44;
  int v45;
  unsigned int v46;
  __int64 i;
  signed int v48;
  unsigned int v49;
  unsigned int v50;
  char *v51;
  unsigned int *v52;
  _DWORD *v53;
  unsigned int *v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  int v61;
  _DWORD *v62;
  _DWORD *v63;
  signed int v64;
  unsigned int *v65;
  unsigned int *v66;
  _DWORD *v67;
  _DWORD *v68;
  __int64 j;
  signed int v70;
  unsigned int v71;
  unsigned int v72;
  _DWORD *v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  int v81;
  _DWORD *v82;
  _DWORD *v83;
  _DWORD *v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  signed int v89;
  __int64 v90;
  signed int v91;
  signed int v92;
  signed int v93;
  __int64 v94;
  unsigned int v95;
  signed int v96;
  __int64 v97;
  __int64 v98;
  unsigned int v99;
  signed int v100;
  signed int v101;
  signed int v102;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010EFF0[144];
#define v104 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 0)) /* [rsp+0h] */
#define v105 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 32)) /* [rsp+20h] */
#define v106 (*(int (*))(void *)(sr_frame_14010EFF0 + 40)) /* [rsp+28h] */
#define v107 (*(char * (*))(void *)(sr_frame_14010EFF0 + 48)) /* [rsp+30h] */
#define v108 (*(char * (*))(void *)(sr_frame_14010EFF0 + 56)) /* [rsp+38h] */
#define v109 (*(int (*))(void *)(sr_frame_14010EFF0 + 64)) /* [rsp+40h] */
#define v110 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 72)) /* [rsp+48h] */
#define v111 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 80)) /* [rsp+50h] */
#define v112 (*(char * (*))(void *)(sr_frame_14010EFF0 + 88)) /* [rsp+58h] */
#define v113 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 96)) /* [rsp+60h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 104)) /* [rsp+68h] */
#define v115 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 112)) /* [rsp+70h] */
#define v116 (*(unsigned __int64 (*))(void *)(sr_frame_14010EFF0 + 120)) /* [rsp+78h] */
#define v117 (*(float (*))(void *)(sr_frame_14010EFF0 + 128)) /* [rsp+80h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 136)) /* [rsp+88h] */

  v2 = a2;
  v3 = a1;
  v106 = a1;
  if ( a2 == 255 )
    goto LABEL_19;
  v4 = (__int64)a1 << 7;
  if ( game_tick - *(unsigned int *)((char *)&g_1873DE464 + v4) > 0x258 )
  {
    v5 = *(unsigned int *)((char *)&g_1873DE460 + v4);
    if ( v5 == 2 )
    {
      if ( ((*(unsigned int *)((char *)&g_1873DE484 + v4) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( v5 == 9 || v5 == 19 )
    {
      goto LABEL_70;
    }
  }
  v6 = *(unsigned int *)((char *)&g_1873DE460 + v4);
  if ( v6 == 2 )
  {
    v7 = *(unsigned int *)((char *)&g_1873DE484 + v4);
    if ( v7 == 4 )
    {
      if ( dword_140404A6C[47224 * v2 + 438887410] )
        goto LABEL_11;
LABEL_70:
      v106 = 23;
      sub_140115D90(&v106, 6);
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( v7 == 6
      && dword_140404A6C[47224 * v2 + 438887411] != *(unsigned int *)((char *)&g_1873DE488 + v4) )
    {
      goto LABEL_70;
    }
  }
  else if ( v6 == 21 )
  {
    if ( *(unsigned int *)((char *)&g_1873DE480 + v4) == dword_140404A6C[47224 * v2 + 438887411] )
      goto LABEL_19;
    goto LABEL_70;
  }
LABEL_11:
  switch ( v6 )
  {
    case 12:
      v8 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v8 == -1 )
        break;
      v9 = 3597 * v8;
      v10 = *(int *)((char *)&g_1873DE480 + v4) >> 4;
LABEL_31:
      if ( dword_140404A6C[v9 + 71856286] != (v10 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      v20 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v20 == -1 )
        break;
      v10 = *(unsigned int *)((char *)&g_1873DE480 + v4);
      v9 = 3597 * v20;
      goto LABEL_31;
    case 2:
      v21 = 47224 * v2;
      v22 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v22 == -1 || !dword_140404A6C[3597 * v22 + 71856277] )
      {
        v23 = *(unsigned int *)((char *)&g_1873DE484 + v4);
        if ( (unsigned int)(v23 - 1) <= 1 )
        {
          v24 = *(int *)((char *)&g_1873DE488 + v4);
          if ( (_DWORD)v24 != -1 )
          {
            if ( v23 == 1 )
            {
              if ( (_DWORD)v22 != -1 )
              {
                v25 = &dword_140404A6C[3597 * v22 + 71859827];
                if ( *(_BYTE *)v25 )
                {
                  if ( dword_140404A6C[3597 * v22 + 71856292] == (_DWORD)v24 )
                  {
                    sub_140115D90((unsigned int *)((char *)&g_1873DE460 + v4), 6);
                    sub_140115D90((unsigned int *)((char *)&g_1873DE464 + v4), 28);
                    v26 = -1;
                    do
                      ++v26;
                    while ( *((_BYTE *)v25 + v26) );
                    v106 = v26;
                    sub_140115D90(&v106, 6);
                    sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v4), 4);
                    sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v4), 10);
                    sub_140115D90((unsigned int *)((char *)&g_1873DE48C + v4), 4);
                    v27 = v26 & 0x3F;
                    if ( v27 )
                    {
                      v28 = packet_out_bit;
                      v29 = 0;
                      v30 = packet_out_byte;
                      v31 = &dword_140404A6C[3597 * dword_140404A6C[47224 * v2 + 438887411] + 71859827];
                      do
                      {
                        v32 = 7;
                        v33 = *((_BYTE *)v31 + v29) & 0x7F;
                        if ( v30 < 0x10000 )
                        {
                          while ( 1 )
                          {
                            *((_BYTE *)&packet_out_data + v30) &= ~(((1 << v32) - 1) << v28);
                            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v33 << SLOBYTE(packet_out_bit);
                            v34 = 8 - packet_out_bit;
                            v30 = packet_out_byte;
                            if ( v32 < 8 - packet_out_bit )
                              break;
                            v28 = 0;
                            packet_out_bit = 0;
                            if ( v32 == v34 )
                            {
                              v30 = ++packet_out_byte;
                              goto LABEL_53;
                            }
                            v30 = packet_out_byte + 1;
                            v33 >>= v34;
                            v32 -= v34;
                            ++packet_out_byte;
                            if ( v32 <= 0 )
                              goto LABEL_53;
                          }
                          v28 = v32 + LOBYTE(packet_out_bit);
                          packet_out_bit += v32;
                        }
LABEL_53:
                        ++v29;
                      }
                      while ( v29 < v27 );
                    }
                    return 0; /* compatibility result discarded by all reviewed callers */
                  }
                }
              }
              v35 = 7166 * v24;
              v36 = &g_18329E8D4;
            }
            else
            {
              v35 = 1760 * v24;
              v36 = &g_182BBB1DC;
            }
            LODWORD(v37) = v36[v35];
            LODWORD(v38) = v36[v35 + 1];
            v39 = *(float *)&v36[v35 + 2];
            v116 = __PAIR64__(LODWORD(v38), LODWORD(v37));
            v117 = v39;
            v40 = (float)((float)((float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38))
                        + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)))
                + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39)
                        * (float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39));
            v41 = fsqrt(v40);
            if ( v40 <= 16384.0 )
            {
              v42 = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&v116, (float *)&dword_140404A6C[v21 + 438920024], 0) )
                v42 = 0.5;
              v3 = v106;
            }
            else
            {
              v42 = 0.5;
            }
            v43 = *(unsigned int *)((char *)&g_1873DE48C + v4);
            v44 = 64.0;
            if ( v43 )
            {
              if ( v43 == 2 )
                v44 = 128.0;
            }
            else
            {
              v44 = 8.0;
            }
            if ( *(unsigned int *)((char *)&g_1873DE484 + v4) == 2 )
              v44 = 2.0;
            if ( v41 > (float)(v44 * v42) )
              goto LABEL_70;
          }
        }
      }
      break;
  }
LABEL_19:
  v11 = v3;
  v114 = v3;
  v12 = (__int64)v3 << 7;
  sub_140115D90((unsigned int *)((char *)&g_1873DE460 + v12), 6);
  sub_140115D90((unsigned int *)((char *)&g_1873DE464 + v12), 28);
  v13 = *(unsigned int *)((char *)&g_1873DE460 + v12);
  v109 = v13;
  if ( !v13 )
  {
    sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 4);
    v14 = 10;
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 4);
    v14 = 6;
LABEL_21:
    sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), v14);
    v15 = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        v15 = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      v16 = v15;
      v17 = *(unsigned int *)((char *)&g_1873DE470 + v12);
      *(_QWORD *)((char *)&packet_out_data + v16) = *(_QWORD *)((char *)&g_1873DE468 + v12);
      *(unsigned int *)((char *)&g_18539D40C + v16) = v17;
      v15 = packet_out_byte + 12;
      packet_out_byte = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        v18 = v15;
        v19 = *(unsigned int *)((char *)&g_1873DE47C + v12);
        *(_QWORD *)((char *)&packet_out_data + v18) = *(_QWORD *)((char *)&g_1873DE474 + v12);
        *(unsigned int *)((char *)&g_18539D40C + v18) = v19;
        v15 = packet_out_byte + 12;
        packet_out_byte += 12;
      }
    }
LABEL_88:
    v45 = packet_out_bit;
    goto LABEL_89;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
      sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 10);
      v108 = (char *)&g_1873DE484 + v12;
      sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), 8);
      sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v12), 4);
      v45 = packet_out_bit;
      v51 = (char *)&g_1873DE480 + v12;
      v15 = packet_out_byte;
      v52 = (unsigned int *)((char *)&g_1873DE484 + v12);
      v112 = (char *)&g_1873DE484 + v12;
      v53 = (unsigned int *)((char *)&g_1873DE480 + v12);
      v107 = (char *)&g_1873DE480 + v12;
      v54 = (unsigned int *)((char *)&g_1873DE480 + v12);
      v113 = (unsigned int *)((char *)&g_1873DE480 + v12);
      goto LABEL_106;
    }
    v15 = packet_out_byte;
    goto LABEL_88;
  }
  sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 6);
  sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), 4);
  sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v12), 10);
  sub_140115D90((unsigned int *)((char *)&g_1873DE48C + v12), 4);
  v45 = packet_out_bit;
  v15 = packet_out_byte;
  v46 = *(unsigned int *)((char *)&g_1873DE480 + v12) & 0x3F;
  if ( v46 )
  {
    for ( i = 0; i < v46; ++i )
    {
      v48 = 7;
      v49 = *((_BYTE *)&g_1873DE4A0 + v12 + i) & 0x7F;
      if ( v15 < 0x10000 )
      {
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v15) &= ~(((1 << v48) - 1) << v45);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v49 << SLOBYTE(packet_out_bit);
          v50 = 8 - packet_out_bit;
          v15 = packet_out_byte;
          if ( v48 < 8 - packet_out_bit )
            break;
          v45 = 0;
          packet_out_bit = 0;
          if ( v48 == v50 )
          {
            v15 = ++packet_out_byte;
            goto LABEL_83;
          }
          v15 = packet_out_byte + 1;
          v49 >>= v50;
          v48 -= v50;
          ++packet_out_byte;
          if ( v48 <= 0 )
            goto LABEL_83;
        }
        v45 = v48 + packet_out_bit;
        packet_out_bit += v48;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  v51 = (char *)&g_1873DE480 + v12;
  v107 = (char *)&g_1873DE480 + v12;
  v108 = (char *)&g_1873DE484 + v12;
  v112 = (char *)&g_1873DE484 + v12;
  v113 = (unsigned int *)((char *)&g_1873DE480 + v12);
  v52 = (unsigned int *)((char *)&g_1873DE484 + v12);
  v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
  v53 = (unsigned int *)((char *)&g_1873DE480 + v12);
  v54 = (unsigned int *)((char *)&g_1873DE480 + v12);
  if ( v109 == 4 )
  {
    sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 10);
    sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), 4);
    sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v12), 10);
    v15 = packet_out_byte;
    v51 = (char *)&g_1873DE480 + v12;
    v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        v15 = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      v55 = v15;
      v56 = *(unsigned int *)((char *)&g_1873DE470 + v12);
      v57 = *(_QWORD *)((char *)&g_1873DE468 + v12);
      v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
      *(_QWORD *)((char *)&packet_out_data + v55) = v57;
      *(unsigned int *)((char *)&g_18539D40C + v55) = v56;
      v15 = packet_out_byte + 12;
      packet_out_byte = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        v58 = *(_QWORD *)((char *)&g_1873DE474 + v12);
        v59 = v15;
        v60 = *(unsigned int *)((char *)&g_1873DE47C + v12);
        v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
        *(_QWORD *)((char *)&packet_out_data + v59) = v58;
        *(unsigned int *)((char *)&g_18539D40C + v59) = v60;
        v15 = packet_out_byte + 12;
        packet_out_byte += 12;
      }
    }
    v45 = packet_out_bit;
  }
  else
  {
    if ( v109 == 5 )
    {
      sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 20);
      sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), 10);
      sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v12), 10);
      v105 = (unsigned int *)((char *)&g_1873DE48C + v12);
      sub_140115D90((unsigned int *)((char *)&g_1873DE48C + v12), 4);
      v45 = packet_out_bit;
      v61 = 5;
      v111 = (unsigned int *)((char *)&g_1873DE488 + v12);
      v15 = packet_out_byte;
      v51 = (char *)&g_1873DE480 + v12;
      v110 = (unsigned int *)((char *)&g_1873DE480 + v12);
      goto LABEL_100;
    }
    v54 = (unsigned int *)((char *)&g_1873DE480 + v12);
  }
LABEL_106:
  v61 = v109;
  v65 = (unsigned int *)((char *)&g_1873DE488 + v12);
  v105 = (unsigned int *)((char *)&g_1873DE48C + v12);
  v111 = (unsigned int *)((char *)&g_1873DE488 + v12);
  if ( v109 != 6 )
  {
LABEL_100:
    v62 = v51;
    v63 = v112;
    v115 = v105;
    v116 = (unsigned __int64)v108;
    if ( v61 == 7 )
    {
      sub_140115D90(v53, 16);
      sub_140115D90(v52, 10);
      v64 = packet_out_byte;
      if ( (int)packet_out_byte >= 0x10000 )
      {
        v65 = v111;
      }
      else
      {
        if ( (int)packet_out_bit > 0 )
        {
          v64 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v65 = v111;
        *(unsigned int *)((char *)&packet_out_data + v64) = *v111;
        packet_out_byte += 4;
      }
      sub_140115D90(v105, 24);
      v45 = packet_out_bit;
      v15 = packet_out_byte;
      for ( j = 0; j < 31; ++j )
      {
        v70 = 7;
        v71 = *((_BYTE *)&g_1873DE4A0 + v12 + j) & 0x7F;
        if ( v15 < 0x10000 )
        {
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + v15) &= ~(((1 << v70) - 1) << v45);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v71 << SLOBYTE(packet_out_bit);
            v72 = 8 - packet_out_bit;
            v15 = packet_out_byte;
            if ( v70 < 8 - packet_out_bit )
              break;
            v45 = 0;
            packet_out_bit = 0;
            if ( v70 == v72 )
            {
              v15 = ++packet_out_byte;
              goto LABEL_117;
            }
            v15 = packet_out_byte + 1;
            v71 >>= v72;
            v70 -= v72;
            ++packet_out_byte;
            if ( v70 <= 0 )
              goto LABEL_117;
          }
          v45 = v70 + packet_out_bit;
          packet_out_bit += v70;
        }
LABEL_117:
        ;
      }
      v66 = v110;
      v67 = v107;
      v68 = v113;
LABEL_156:
      v11 = v114;
      goto LABEL_157;
    }
    v67 = v51;
    v68 = v113;
    v107 = v51;
    switch ( v109 )
    {
      case 17:
        sub_140115D90(v53, 10);
        sub_140115D90(v52, 1);
        sub_140115D90(v111, 8);
        v67 = v62;
        v66 = v110;
        v68 = v113;
        v73 = (_DWORD *)v116;
        v45 = packet_out_bit;
        v11 = v114;
        v65 = v111;
        v105 = v115;
        v15 = packet_out_byte;
        goto LABEL_158;
      case 8:
        v11 = v114;
        v74 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = packet_out_byte;
        v66 = v54;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          v15 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *v52;
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *v111;
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&g_1873DE48C + v74);
        break;
      case 9:
        v11 = v114;
        v77 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = packet_out_byte;
        v66 = v54;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          v15 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v78 = v15;
        v79 = *(unsigned int *)((char *)&g_1873DE470 + v77);
        *(_QWORD *)((char *)&packet_out_data + v78) = *(_QWORD *)((char *)&g_1873DE468 + v77);
        *(unsigned int *)((char *)&g_18539D40C + v78) = v79;
        v15 = packet_out_byte + 12;
        packet_out_byte = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE490
                                                                                       + v77);
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&g_1873DE494 + v77);
        break;
      default:
        v66 = v54;
        if ( v109 != 19 )
        {
          if ( v109 == 10 )
          {
            sub_140115D90(v113, 8);
            sub_140115D90(v52, 1);
            return 0; /* compatibility result discarded by all reviewed callers */
          }
          v65 = v111;
          goto LABEL_156;
        }
        v11 = v114;
        v80 = v114 << 7;
        sub_140115D90(v113, 8);
        sub_140115D90(v52, 16);
        v15 = packet_out_byte;
        v66 = v54;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          v15 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = dword_140404A6C[32 * v114 + 297756297];
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 >= 0x10000 )
        {
LABEL_133:
          v45 = packet_out_bit;
          v65 = v111;
          v67 = v107;
          v68 = v113;
          goto LABEL_157;
        }
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&g_1873DE494 + v80);
        break;
    }
    *(unsigned int *)((char *)&packet_out_data + v75) = v76;
    v15 = packet_out_byte + 4;
    packet_out_byte += 4;
    goto LABEL_133;
  }
  sub_140115D90(v53, 10);
  sub_140115D90(v52, 3);
  sub_140115D90((unsigned int *)((char *)&g_1873DE488 + v12), 16);
  sub_140115D90(v105, 2);
  v45 = packet_out_bit;
  v15 = packet_out_byte;
  v66 = v110;
  v67 = v107;
  v68 = v113;
  v63 = v112;
LABEL_157:
  v73 = v108;
LABEL_158:
  v81 = v109;
  v82 = v105;
  if ( v109 == 11 )
  {
    if ( v15 < 0x10000 )
    {
      if ( v45 > 0 )
      {
        ++v15;
        packet_out_bit = 0;
        packet_out_byte = v15;
      }
      *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE480
                                                                                     + v12);
      v15 = packet_out_byte + 4;
      packet_out_byte = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE484
                                                                                       + v12);
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v15;
            packet_out_bit = 0;
            packet_out_byte = v15;
          }
          *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + v12);
          v15 = packet_out_byte + 4;
          packet_out_byte = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              packet_out_bit = 0;
              packet_out_byte = v15 + 1;
              *(unsigned int *)((char *)&packet_out_data + v15 + 1) = *(unsigned int *)((char *)&g_1873DE48C
                                                                                                 + v12);
              packet_out_byte += 4;
              return 0; /* compatibility result discarded by all reviewed callers */
            }
LABEL_184:
            *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE48C
                                                                                           + v12);
            packet_out_byte += 4;
            return 0; /* compatibility result discarded by all reviewed callers */
          }
        }
      }
      v84 = v82;
LABEL_210:
      v45 = packet_out_bit;
      goto LABEL_228;
    }
    goto LABEL_227;
  }
  v83 = v105;
  switch ( v109 )
  {
    case 12:
      v84 = v105;
      if ( v15 >= 0x10000 )
        goto LABEL_228;
      if ( v45 > 0 )
      {
        ++v15;
        packet_out_bit = 0;
        packet_out_byte = v15;
      }
      *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE480
                                                                                     + v12);
      v15 = packet_out_byte + 4;
      packet_out_byte = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE484
                                                                                       + v12);
        v15 = packet_out_byte + 4;
        packet_out_byte = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v15;
            packet_out_bit = 0;
            packet_out_byte = v15;
          }
          *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + v12);
          v15 = packet_out_byte + 4;
          packet_out_byte = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v15;
              packet_out_bit = 0;
              packet_out_byte = v15;
            }
            goto LABEL_184;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sub_140115D90(v68, 16);
      sub_140115D90(v63, 6);
      sub_140115D90(v65, 7);
      v15 = packet_out_byte;
      v85 = *(int *)((char *)&g_1873DE488 + v12);
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v15 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        crt_memcpy(
          (__m128i *)((char *)&packet_out_data + v15),
          (     __m128i *)((char *)&g_1873DE4A0 + v12),
          v85);
        packet_out_byte += v85;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      v84 = v105;
      v45 = packet_out_bit;
      goto LABEL_228;
    case 21:
      sub_140115D90(v67, 10);
      sub_140115D90(v73, 4);
      sub_140115D90(v65, 4);
      sub_140115D90(v105, 30);
      v15 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v15 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v86 = v15;
        v87 = *(unsigned int *)((char *)&g_1873DE470 + v12);
        *(_QWORD *)((char *)&packet_out_data + v86) = *(_QWORD *)((char *)&g_1873DE468 + v12);
        *(unsigned int *)((char *)&g_18539D40C + v86) = v87;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + v12);
        v45 = packet_out_bit;
        v15 = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      v88 = v106;
      if ( v15 >= 0x10000 )
      {
        v84 = v83;
        goto LABEL_228;
      }
      if ( v45 > 0 )
      {
        ++v15;
        packet_out_bit = 0;
        packet_out_byte = v15;
      }
      *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE484
                                                                                     + v12);
      v15 = packet_out_byte + 4;
      packet_out_byte = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = dword_140404A6C[32 * v88 + 297756295];
        packet_out_byte += 4;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
LABEL_207:
      v45 = packet_out_bit;
      v84 = v83;
      goto LABEL_228;
    case 14:
      sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v12), 8);
      sub_140115D90((unsigned int *)((char *)&g_1873DE484 + v12), 8);
      sub_140115D90(v65, 8);
      sub_140115D90((unsigned int *)((char *)&g_1873DE48C + v12), 20);
      return 0; /* compatibility result discarded by all reviewed callers */
    case 15:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *v66;
        v45 = packet_out_bit;
        v15 = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = dword_140404A6C[32 * v11 + 297756294];
        v89 = packet_out_byte + 4;
        packet_out_byte = v89;
        if ( v89 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v89;
            packet_out_bit = 0;
            packet_out_byte = v89;
          }
          *(unsigned int *)((char *)&packet_out_data + v89) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + v12);
          packet_out_byte += 4;
        }
      }
      sub_140115D90(v83, 2);
      return 0; /* compatibility result discarded by all reviewed callers */
  }
LABEL_227:
  v84 = v105;
LABEL_228:
  v90 = v11 << 7;
  switch ( v81 )
  {
    case 16:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + v90);
        v91 = packet_out_byte + 4;
        packet_out_byte = v91;
        if ( v91 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v91;
            packet_out_bit = 0;
            packet_out_byte = v91;
          }
          *(unsigned int *)((char *)&packet_out_data + v91) = *(unsigned int *)((char *)&g_1873DE484
                                                                                         + v90);
          v92 = packet_out_byte + 4;
          packet_out_byte = v92;
          if ( v92 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v92;
              packet_out_bit = 0;
              packet_out_byte = v92;
            }
            *(unsigned int *)((char *)&packet_out_data + v92) = *(unsigned int *)((char *)&g_1873DE488
                                                                                           + v90);
            packet_out_byte += 4;
          }
        }
      }
      sub_140115D90(v84, 10);
      v93 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v93 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v94 = v93;
        v95 = *(unsigned int *)((char *)&g_1873DE470 + v90);
        *(_QWORD *)((char *)&packet_out_data + v94) = *(_QWORD *)((char *)&g_1873DE468 + v90);
        *(unsigned int *)((char *)&g_18539D40C + v94) = v95;
        v96 = packet_out_byte + 12;
        packet_out_byte = v96;
        if ( v96 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v96;
            packet_out_bit = 0;
            packet_out_byte = v96;
          }
          v97 = *(_QWORD *)((char *)&g_1873DE474 + v90);
          v98 = v96;
          v99 = *(unsigned int *)((char *)&g_1873DE47C + v90);
LABEL_262:
          *(_QWORD *)((char *)&packet_out_data + v98) = v97;
          *(unsigned int *)((char *)&g_18539D40C + v98) = v99;
LABEL_263:
          packet_out_byte += 12;
        }
      }
      break;
    case 18:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          packet_out_bit = 0;
          packet_out_byte = v15;
        }
        *(unsigned int *)((char *)&packet_out_data + v15) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + v90);
        v100 = packet_out_byte + 4;
        packet_out_byte = v100;
        if ( v100 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v100;
            packet_out_bit = 0;
            packet_out_byte = v100;
          }
          *(unsigned int *)((char *)&packet_out_data + v100) = *(unsigned int *)((char *)&g_1873DE484
                                                                                          + v90);
          v101 = packet_out_byte + 4;
          packet_out_byte = v101;
          if ( v101 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v101;
              packet_out_bit = 0;
              packet_out_byte = v101;
            }
            *(unsigned int *)((char *)&packet_out_data + v101) = *(unsigned int *)((char *)&g_1873DE488
                                                                                            + v90);
            packet_out_byte += 4;
          }
        }
      }
      break;
    case 20:
      sub_140115D90((unsigned int *)((char *)&g_1873DE480 + v90), 8);
      v102 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v102 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v97 = *(_QWORD *)((char *)&g_1873DE468 + v90);
        v98 = v102;
        v99 = *(unsigned int *)((char *)&g_1873DE470 + v90);
        goto LABEL_262;
      }
      break;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v104
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

// 14010F501: conditional instruction was optimized away because edx.4==2

//----- (0000000140110D00) ----------------------------------------------------
void            sub_140110D00(int a1, int a2)
{
  __int64 v2;
  char v3;
  __int64 v4;
  int v5;
  char v6;
  signed int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  signed int v16;
  int v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int *v25;
  unsigned int *v26;
  __int64 v27;
  float v28;
  int v29;
  __int64 v30;
  float v31;
  int v32;
  __int64 v33;
  float v34;
  int v35;
  __int64 v36;
  float v37;
  int v38;
  __int64 v39;
  float v40;
  int v41;
  __int64 v42;
  float v43;
  int v44;
  __int64 v45;
  float v46;
  int v47;
  __int64 v48;
  float v49;
  int v50;
  __int64 v51;
  int v52;
  unsigned int v53;
  int v54;
  unsigned int *v55;
  unsigned int v56;
  signed int v57;
  __int64 v58;
  signed int v59;
  __int64 v60;
  unsigned int *v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int *v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int v96;
  unsigned int *v97;
  unsigned int v98;
  int v99;
  __int64 v100;
  unsigned int v101;
  signed int v102;
  __int64 v103;
  signed int v104;
  __int64 v105;
  unsigned int *v106;
  __int64 v107;
  float v108;
  float v109;
  float v110;
  int v111;
  float v112;
  float v113;
  float v114;
  int v115;
  unsigned int *v116;
  unsigned int v117;
  __int64 v118;
  unsigned int v119;
  unsigned int v120;
  int v121;
  signed int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  unsigned int v127;
  unsigned int v128;
  __int64 v129;
  unsigned int *v130;
  signed int v131;
  __int64 v132;
  signed int v133;
  signed int v134;
  char v135;
  unsigned int v136;
  unsigned int v137;
  signed int v138;
  int v139;
  signed int v140;
  char v141;
  unsigned int v142;
  unsigned int v143;
  signed int v144;
  unsigned int *v145;
  __int64 v146;
  __int64 v147;
  unsigned int *v148;
  unsigned int *v149;
  __int64 v150;
  __int64 v151;
  unsigned int v152;
  __int64 v153;
  signed int v154;
  unsigned int v155;
  signed int v156;
  int v157;
  char v158;
  unsigned int v159;
  unsigned int v160;
  __int64 v161;
  signed int v162;
  __int64 v163;
  unsigned int v164;
  signed int v165;
  int v166;
  char v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  __int64 v171;
  char v172;
  __int64 v173;
  char v174;
  signed int v175;
  unsigned int v176;
  unsigned int v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int *v182;
  __int64 v183;
  signed int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  signed int v188;
  unsigned int v189;
  unsigned int v190;
  unsigned int v191;
  __int64 v192;
  BOOL v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  int *v197;
  _DWORD *v198;
  __int64 v199;
  bool v200;
  signed int v201;
  signed int v202;
  unsigned int v203;
  unsigned int v204;
  __int64 v205;
  int v206;
  float *v207;
  _DWORD *v208;
  unsigned int v209;
  __int64 v210;
  __int64 v211;
  float v212;
  float v213;
  float v214;
  int v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  int v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float v226;
  int v227;
  float v228;
  float v229;
  float v230;
  float v231;
  int v232;
  _DWORD *v233;
  float *v234;
  __int64 v235;
  float v236;
  float v237;
  int v238;
  signed int v239;
  int v240;
  unsigned int *v241;
  __int64 v242;
  unsigned int v243;
  int v244;
  int v245;
  signed int v246;
  __int64 v247;
  int v248;
  signed int v249;
  __int64 v250;
  signed int v251;
  int v252;
  unsigned int v253;
  unsigned int v254;
  signed int v255;
  unsigned int v256;
  unsigned int v257;
  unsigned int *v258;
  __int64 v259;
  __int64 v260;
  int v261;
  __int64 v262;
  __int64 v263;
  unsigned int *v264;
  unsigned int *v265;
  __int64 v266;
  __int64 v267;
  unsigned int *v268;
  unsigned int *v269;
  __int64 v270;
  __int64 v271;
  signed int v272;
  unsigned int v273;
  unsigned int v274;
  signed int v275;
  unsigned int v276;
  unsigned int v277;
  int v278;
  signed int v279;
  unsigned int v280;
  unsigned int v281;
  __int64 v282;
  char v283;
  signed int v284;
  int v285;
  bool v286;
  unsigned int v287;
  signed int v288;
  unsigned int v289;
  unsigned int v290;
  signed int v291;
  int v292;
  unsigned int v293;
  unsigned int v294;
  unsigned int v295;
  unsigned int v296;
  __int64 v297;
  __int64 v298;
  signed int v299;
  unsigned int v300;
  unsigned int v301;
  signed int v302;
  signed int v303;
  unsigned int v304;
  unsigned int v305;
  unsigned int *v306;
  int v307;
  unsigned int v308;
  unsigned int v309;
  __int64 v310;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140110D00[112];
#define v311 (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v312 (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v313 (*(__int64 (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v314 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 8)) /* [rsp+58h] */
#define v315 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v316 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v317 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v318 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define v319 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define v320 (*(__int64 (*))(void *)(sr_frame_140110D00 + 24)) /* [rsp+68h] */
#define v321 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 32)) /* [rsp+70h] */
#define v322 (*(__int64 (*))(void *)(sr_frame_140110D00 + 40)) /* [rsp+78h] */
#define v323 (*(__int64 (*))(void *)(sr_frame_140110D00 + 48)) /* [rsp+80h] */
#define v324 (*(__int64 (*))(void *)(sr_frame_140110D00 + 56)) /* [rsp+88h] */
#define v325 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 64)) /* [rsp+90h] */
#define v326 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 72)) /* [rsp+98h] */
#define v327 (*(__int64 (*))(void *)(sr_frame_140110D00 + 80)) /* [rsp+A0h] */
#define v328 (*(__int64 (*))(void *)(sr_frame_140110D00 + 88)) /* [rsp+A8h] */
#define v329 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 96)) /* [rsp+B0h] */
#define v330 (*(__int64 (*))(void *)(sr_frame_140110D00 + 104)) /* [rsp+B8h] */

  v2 = a1;
  v3 = g_165D84960;
  v4 = a2;
  LODWORD(v322) = v2;
  g_16B2A2248 = 0;
  if ( !g_165D84960 )
  {
    v3 = 4;
    g_165D84960 = 4;
  }
  v5 = 1 << (v3 - 1);
  v6 = g_165D84964;
  g_165D84970 = v5;
  if ( !g_165D84964 )
  {
    v6 = 8;
    g_165D84964 = 8;
  }
  g_165D84974 = 1 << (v6 - 1);
  sub_140115D90(&g_165D84960, 4);
  sub_140115D90(&g_165D84964, 4);
  sub_140115D90(&g_16B2A2248, 1);
  sub_140115D90(&g_16B2A224C, 1);
  v7 = packet_out_byte;
  v314 = LOBYTE(g_1AD04B20C);
  if ( (int)packet_out_byte < 0x10000 )
  {
    if ( (int)packet_out_bit > 0 )
    {
      v7 = packet_out_byte + 1;
      packet_out_bit = 0;
      ++packet_out_byte;
    }
    *(unsigned int *)((char *)&packet_out_data + v7) = g_1AD04B20C;
    v7 = packet_out_byte + 4;
    packet_out_byte += 4;
  }
  v8 = -1;
  v311 = -1;
  if ( (_DWORD)v4 != -1 )
  {
    v9 = (int)dword_140404A6C[3597 * v4 + 71856292];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      if ( (int)dword_140404A6C[7166 * v9 + 280651318] > 0 )
      {
        v11 = dword_140404A6C[v10 + 280651335];
        v8 = dword_140404A6C[3597 * v4 + 71856292];
        v12 = dword_140404A6C[v10 + 280651336];
        v13 = v2;
        v14 = dword_140404A6C[v10 + 280651337];
        v311 = v8;
        v324 = v2;
LABEL_16:
        v321 = v14;
        v320 = __PAIR64__(v12, v11);
        goto LABEL_17;
      }
    }
  }
  v13 = v2;
  v324 = v2;
  v11 = dword_140404A6C[47224 * v2 + 438920021];
  v12 = dword_140404A6C[47224 * v2 + 438920022];
  v14 = dword_140404A6C[47224 * v2 + 438920023];
  v320 = __PAIR64__(v12, v11);
  v321 = v14;
  if ( game_type == 4 )
  {
    v324 = v2;
    if ( !dword_140404A6C[3597 * v4 + 71856266] )
    {
      v11 = *(unsigned int *)&g_16B2A2EC8;
      v12 = *(unsigned int *)&g_16B2A2ECC;
      v14 = g_16B2A2ED0;
      v324 = v2;
      goto LABEL_16;
    }
  }
LABEL_17:
  sub_140105C20(v2, (float *)&v320);
  v15 = 47224 * v13;
  v16 = 11;
  v327 = 188896 * v13;
  v17 = dword_140404A6C[47224 * v13 + 438924125];
  v18 = dword_140404A6C[47224 * v13 + 438924123] - v17;
  if ( (int)dword_140404A6C[47224 * v13 + 438924123] < v17 )
    v18 = (unsigned int)(v18 + 2048);
  if ( (int)v18 > 2047 )
    v18 = 2047;
  if ( v7 < 0x10000 )
  {
    v19 = packet_out_bit;
    v20 = v18 & 0x7FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v7) &= ~(((1 << v16) - 1) << v19);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v20 << SLOBYTE(packet_out_bit);
      v21 = 8 - packet_out_bit;
      if ( v16 < 8 - packet_out_bit )
        break;
      if ( v16 == v21 )
      {
        ++packet_out_byte;
        v22 = 0;
        goto LABEL_29;
      }
      v7 = packet_out_byte + 1;
      v20 >>= v21;
      v16 -= v21;
      ++packet_out_byte;
      packet_out_bit = 0;
      v19 = 0;
      if ( v16 <= 0 )
        goto LABEL_30;
    }
    v22 = v16 + packet_out_bit;
LABEL_29:
    packet_out_bit = v22;
  }
LABEL_30:
  sub_140115D90(&dword_140404A6C[47224 * v13 + 438924125], 11);
  LODWORD(v325) = 16;
  if ( (int)v18 > 0 )
  {
    do
    {
      v23 = v15 * 4 + 20LL * v17;
      sub_140115D90((unsigned int *)((char *)&g_1A8E617E8 + v23), 10);
      sub_140115D90((unsigned int *)((char *)&g_1A8E617E4 + v23), 2);
      sub_140115D90((unsigned int *)((char *)&g_1A8E617EC + v23), 3);
      sub_140115D90((unsigned int *)((char *)&g_1A8E617F0 + v23), 10);
      sub_140115D90((unsigned int *)((char *)&g_1A8E617F4 + v23), 16);
      v17 = ((_WORD)v17 + 1) & 0x7FF;
      --v18;
    }
    while ( v18 );
    v8 = v311;
  }
  v318 = &g_160FB67B0;
  crt_memset((void *)(uintptr_t)(&g_160FB67B0), 0, 0x1000u);
  v24 = 128;
  v25 = &dword_140404A6C[v15 + 438920028];
  v326 = &dword_140404A6C[v15 + 438920028];
  v26 = &dword_140404A6C[v15 + 438920028];
  do
  {
    if ( *(v26 - 1) && !*v26 )
    {
      v27 = (int)v26[1];
      v28 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v27 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v27 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v27 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v27 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v27 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v27 + 280651337])));
      if ( dword_140404A6C[7166 * v27 + 280651313] != -1 )
        v28 = v28 + v28;
      v29 = (int)(float)(256.0 - v28);
      if ( v29 < 16 )
        v29 = 16;
      if ( (_DWORD)v27 == v8 )
        v29 = 0x10000;
      if ( v13 == 255 )
        v29 = 1;
      v26[2] += v29;
    }
    if ( v26[3] && !v26[4] )
    {
      v30 = (int)v26[5];
      v31 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v30 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v30 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v30 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v30 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v30 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v30 + 280651337])));
      if ( dword_140404A6C[7166 * v30 + 280651313] != -1 )
        v31 = v31 + v31;
      v32 = (int)(float)(256.0 - v31);
      if ( v32 < 16 )
        v32 = 16;
      if ( (_DWORD)v30 == v8 )
        v32 = 0x10000;
      if ( v13 == 255 )
        v32 = 1;
      v26[6] += v32;
    }
    if ( v26[7] && !v26[8] )
    {
      v33 = (int)v26[9];
      v34 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v33 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v33 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v33 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v33 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v33 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v33 + 280651337])));
      if ( dword_140404A6C[7166 * v33 + 280651313] != -1 )
        v34 = v34 + v34;
      v35 = (int)(float)(256.0 - v34);
      if ( v35 < 16 )
        v35 = 16;
      if ( (_DWORD)v33 == v8 )
        v35 = 0x10000;
      if ( v13 == 255 )
        v35 = 1;
      v26[10] += v35;
    }
    if ( v26[11] && !v26[12] )
    {
      v36 = (int)v26[13];
      v37 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v36 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v36 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v36 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v36 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v36 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v36 + 280651337])));
      if ( dword_140404A6C[7166 * v36 + 280651313] != -1 )
        v37 = v37 + v37;
      v38 = (int)(float)(256.0 - v37);
      if ( v38 < 16 )
        v38 = 16;
      if ( (_DWORD)v36 == v8 )
        v38 = 0x10000;
      if ( v13 == 255 )
        v38 = 1;
      v26[14] += v38;
    }
    if ( v26[15] && !v26[16] )
    {
      v39 = (int)v26[17];
      v40 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v39 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v39 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v39 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v39 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v39 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v39 + 280651337])));
      if ( dword_140404A6C[7166 * v39 + 280651313] != -1 )
        v40 = v40 + v40;
      v41 = (int)(float)(256.0 - v40);
      if ( v41 < 16 )
        v41 = 16;
      if ( (_DWORD)v39 == v8 )
        v41 = 0x10000;
      if ( v13 == 255 )
        v41 = 1;
      v26[18] += v41;
    }
    if ( v26[19] && !v26[20] )
    {
      v42 = (int)v26[21];
      v43 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v42 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v42 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v42 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v42 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v42 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v42 + 280651337])));
      if ( dword_140404A6C[7166 * v42 + 280651313] != -1 )
        v43 = v43 + v43;
      v44 = (int)(float)(256.0 - v43);
      if ( v44 < 16 )
        v44 = 16;
      if ( (_DWORD)v42 == v8 )
        v44 = 0x10000;
      if ( v13 == 255 )
        v44 = 1;
      v26[22] += v44;
    }
    if ( v26[23] && !v26[24] )
    {
      v45 = (int)v26[25];
      v46 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v45 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v45 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v45 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v45 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v45 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v45 + 280651337])));
      if ( dword_140404A6C[7166 * v45 + 280651313] != -1 )
        v46 = v46 + v46;
      v47 = (int)(float)(256.0 - v46);
      if ( v47 < 16 )
        v47 = 16;
      if ( (_DWORD)v45 == v8 )
        v47 = 0x10000;
      if ( v13 == 255 )
        v47 = 1;
      v26[26] += v47;
    }
    if ( v26[27] && !v26[28] )
    {
      v48 = (int)v26[29];
      v49 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v48 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v48 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v48 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v48 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v48 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v48 + 280651337])));
      if ( dword_140404A6C[7166 * v48 + 280651313] != -1 )
        v49 = v49 + v49;
      v50 = (int)(float)(256.0 - v49);
      if ( v50 < 16 )
        v50 = 16;
      if ( (_DWORD)v48 == v8 )
        v50 = 0x10000;
      if ( v13 == 255 )
        v50 = 1;
      v26[30] += v50;
    }
    v26 += 32;
    --v24;
  }
  while ( v24 );
  v51 = v327;
  v52 = v322;
  v53 = 0;
  renderer_sort_count = 0;
  v54 = 0;
  v323 = 1024;
  v55 = v25;
  do
  {
    if ( *(v55 - 1) && !*v55 )
    {
      dword_140404A6C[v53 + 437192782] = v55[2];
      dword_140404A6C[renderer_sort_count + 437454926] = v54;
      v53 = ++renderer_sort_count;
    }
    ++v54;
    v55 += 4;
  }
  while ( v54 < 1024 );
  sub_14007D710();
  v56 = 10;
  if ( v52 == 255 )
    v56 = renderer_sort_count;
  v57 = renderer_sort_count - 1;
  v58 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    v59 = renderer_sort_count - v56;
    do
    {
      if ( v57 >= v59 )
      {
        v60 = (int)dword_140404A6C[dword_140404A6C[v58 + 436668494] + 437454926];
        dword_140404A6C[v60 + 137283409] = 1;
        dword_140404A6C[47224 * v13 + 438920030 + 4 * v60] = 0;
      }
      --v57;
      --v58;
    }
    while ( v58 >= 0 );
    v51 = v327;
  }
  v61 = v25;
  v329 = v25;
  v62 = 1024;
  v328 = 1024;
  do
  {
    if ( *(v61 - 1) && *v61 == 1 )
    {
      v63 = (int)v61[1];
      v64 = 7040 * v63;
      v320 = 7040 * v63;
      v65 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[1760 * v63 + 278845917])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[1760 * v63 + 278845917]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[1760 * v63 + 278845916])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[1760 * v63 + 278845916])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[1760 * v63 + 278845918])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[1760 * v63 + 278845918])));
      if ( v65 < 4.0 || v52 == 255 )
      {
        v66 = 1;
        v67 = 1760 * v63;
        v68 = 2;
        v69 = 8;
        v70 = &dword_140404A6C[1760 * v63 + 278845988];
        do
        {
          v71 = (v68 - 2) >> 5;
          if ( (v66 & dword_140404A6C[v67 + 278845985 + v71]) != 0 )
          {
            v72 = 47224 * v13 + v63 + v71 + 4 * v63;
            if ( (v66 & dword_140404A6C[v72 + 438889304]) == 0 )
            {
              dword_140404A6C[47224 * v13 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = *(v70 - 1);
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[v72 + 438889304] |= v66;
            }
          }
          v73 = (v68 - 1) >> 5;
          v74 = __ROL4__(v66, 1);
          if ( (v74 & dword_140404A6C[v67 + 278845985 + v73]) != 0 )
          {
            v75 = 47224 * v13;
            if ( (v74 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v73]) == 0 )
            {
              dword_140404A6C[v75 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = *v70;
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v75 + v73] |= v74;
            }
          }
          v76 = v68 >> 5;
          v77 = __ROL4__(v66, 2);
          if ( (v77 & dword_140404A6C[v67 + 278845985 + (v68 >> 5)]) != 0 )
          {
            v78 = 47224 * v13;
            if ( (v77 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v76]) == 0 )
            {
              dword_140404A6C[v78 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[1];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v76 + v78] |= v77;
            }
          }
          v79 = (v68 + 1) >> 5;
          v80 = __ROL4__(v66, 3);
          if ( (v80 & dword_140404A6C[v67 + 278845985 + v79]) != 0 )
          {
            v81 = 47224 * v13;
            if ( (v80 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v79]) == 0 )
            {
              dword_140404A6C[v81 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[2];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v81 + v79] |= v80;
            }
          }
          v82 = (v68 + 2) >> 5;
          v83 = __ROL4__(v66, 4);
          if ( (v83 & dword_140404A6C[v67 + 278845985 + v82]) != 0 )
          {
            v84 = 47224 * v13;
            if ( (v83 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v82]) == 0 )
            {
              dword_140404A6C[v84 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[3];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v84 + v82] |= v83;
            }
          }
          v85 = (v68 + 3) >> 5;
          v86 = __ROL4__(v66, 5);
          if ( (v86 & dword_140404A6C[v67 + 278845985 + v85]) != 0 )
          {
            v87 = 47224 * v13;
            if ( (v86 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v85]) == 0 )
            {
              dword_140404A6C[v87 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[4];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v87 + v85] |= v86;
            }
          }
          v88 = (v68 + 4) >> 5;
          v89 = __ROL4__(v66, 6);
          if ( (v89 & dword_140404A6C[v67 + 278845985 + v88]) != 0 )
          {
            v90 = 47224 * v13;
            if ( (v89 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v88]) == 0 )
            {
              dword_140404A6C[v90 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[5];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v90 + v88] |= v89;
            }
          }
          v91 = (v68 + 5) >> 5;
          v92 = __ROL4__(v66, 7);
          if ( (v92 & dword_140404A6C[v67 + 278845985 + v91]) != 0 )
          {
            v93 = 47224 * v13;
            if ( (v92 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v91]) == 0 )
            {
              dword_140404A6C[v93 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + v51)] = v70[6];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + v51) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v93 + v91] |= v92;
            }
          }
          v68 += 8;
          v66 = __ROL4__(v66, 8);
          v70 += 8;
          --v69;
        }
        while ( v69 );
        v8 = v311;
        v61 = v329;
        v64 = v320;
        v62 = v328;
        v52 = v322;
      }
      v94 = *(unsigned int *)((char *)&g_182BBB1A4 + v64);
      v95 = (int)(float)(256.0 - v65);
      if ( v95 < 16 )
        v95 = 16;
      if ( *(unsigned int *)((char *)&g_182BBB188 + v64) )
        v95 = 16;
      if ( v94 != -1 )
      {
        if ( v94 == v8 )
          v95 = 0x10000;
        if ( *(int *)((char *)&g_182BBB1AC + v64) > 2 )
          v95 = 16;
      }
      v96 = v95 + 256;
      if ( *(unsigned int *)((char *)&dword_140404A6C[5 * v63 + 438889301] + v51) == dword_140404A6C[v63 + 280648157] )
        v96 = v95;
      if ( v52 == 255 )
        v96 = 1;
      v61[2] += v96;
    }
    v61 += 4;
    --v62;
    v329 = v61;
    v328 = v62;
  }
  while ( v62 );
  v97 = v326;
  v98 = 0;
  renderer_sort_count = 0;
  v99 = 0;
  v100 = 1024;
  do
  {
    if ( *(v97 - 1) && *v97 == 1 )
    {
      dword_140404A6C[v98 + 437192782] = v97[2];
      dword_140404A6C[renderer_sort_count + 437454926] = v99;
      v98 = ++renderer_sort_count;
    }
    ++v99;
    v97 += 4;
  }
  while ( v99 < 1024 );
  sub_14007D710();
  v101 = 32;
  if ( v52 == 255 )
    v101 = renderer_sort_count;
  v102 = renderer_sort_count - 1;
  v103 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    v104 = renderer_sort_count - v101;
    do
    {
      if ( v102 >= v104 )
      {
        v105 = (int)dword_140404A6C[dword_140404A6C[v103 + 436668494] + 437454926];
        dword_140404A6C[v105 + 137283409] = 1;
        dword_140404A6C[47224 * v13 + 438920030 + 4 * v105] = 0;
      }
      --v102;
      --v103;
    }
    while ( v103 >= 0 );
  }
  v106 = &g_15F2D9234;
  v107 = 0;
  do
  {
    if ( *(v106 - 13) && *(v106 - 11) != 3 )
    {
      v108 = (float)((float)((float)(*(float *)&v12 - *((float *)v106 - 1))
                           * (float)(*(float *)&v12 - *((float *)v106 - 1)))
                   + (float)((float)(*(float *)&v11 - *((float *)v106 - 2))
                           * (float)(*(float *)&v11 - *((float *)v106 - 2))))
           + (float)((float)(*(float *)&v14 - *(float *)v106) * (float)(*(float *)&v14 - *(float *)v106));
      v109 = fsqrt(v108) / (float)((float)(fabs(*((float *)v106 + 3444)) * 4.0) + 1.0);
      v110 = fsqrt(
               (float)((float)(*((float *)v106 + 22) * *((float *)v106 + 22))
                     + (float)(*((float *)v106 + 23) * *((float *)v106 + 23)))
             + (float)(*((float *)v106 + 24) * *((float *)v106 + 24)));
      if ( v110 >= 0.016666668 )
        v110 = 0.016666668;
      v111 = (int)(float)(256.0 - (float)(v109 / (float)((float)(v110 * 240.0) + 1.0)));
      if ( v111 < 32 )
        v111 = 32;
      if ( v108 < 16.0 )
        v111 = 1024;
      if ( *(v106 - 12) == 13 && v108 < 144.0 )
        v111 = 1024;
      if ( v13 == 255 )
        v111 = 1;
      dword_140404A6C[47224 * v13 + 438887509 + 2 * v107] += v111;
    }
    if ( v106[5197] && v106[5199] != 3 )
    {
      v112 = (float)((float)((float)(*(float *)&v12 - *((float *)v106 + 5209))
                           * (float)(*(float *)&v12 - *((float *)v106 + 5209)))
                   + (float)((float)(*(float *)&v11 - *((float *)v106 + 5208))
                           * (float)(*(float *)&v11 - *((float *)v106 + 5208))))
           + (float)((float)(*(float *)&v14 - *((float *)v106 + 5210))
                   * (float)(*(float *)&v14 - *((float *)v106 + 5210)));
      v113 = fsqrt(v112) / (float)((float)(fabs(*((float *)v106 + 8654)) * 4.0) + 1.0);
      v114 = fsqrt(
               (float)((float)(*((float *)v106 + 5232) * *((float *)v106 + 5232))
                     + (float)(*((float *)v106 + 5233) * *((float *)v106 + 5233)))
             + (float)(*((float *)v106 + 5234) * *((float *)v106 + 5234)));
      if ( v114 >= 0.016666668 )
        v114 = 0.016666668;
      v115 = (int)(float)(256.0 - (float)(v113 / (float)((float)(v114 * 240.0) + 1.0)));
      if ( v115 < 32 )
        v115 = 32;
      if ( v112 < 16.0 )
        v115 = 1024;
      if ( v106[5198] == 13 && v112 < 144.0 )
        v115 = 1024;
      if ( v13 == 255 )
        v115 = 1;
      dword_140404A6C[47224 * v13 + 438887511 + 2 * v107] += v115;
    }
    v107 += 2;
    v106 += 10420;
  }
  while ( (__int64)v106 < (__int64)&g_15F564634 );
  v116 = &g_15F2D9208;
  v117 = 0;
  renderer_sort_count = 0;
  v118 = 0;
  v119 = 2;
  do
  {
    if ( *(v116 - 2) && *v116 != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887509 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 - 2;
      v117 = ++renderer_sort_count;
    }
    if ( v116[5208] && v116[5210] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887511 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 - 1;
      v117 = ++renderer_sort_count;
    }
    if ( v116[10418] && v116[10420] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887513 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119;
      v117 = ++renderer_sort_count;
    }
    if ( v116[15628] && v116[15630] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887515 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 + 1;
      v117 = ++renderer_sort_count;
    }
    if ( v116[20838] && v116[20840] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887517 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 + 2;
      v117 = ++renderer_sort_count;
    }
    if ( v116[26048] && v116[26050] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887519 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 + 3;
      v117 = ++renderer_sort_count;
    }
    if ( v116[31258] && v116[31260] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887521 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 + 4;
      v117 = ++renderer_sort_count;
    }
    if ( v116[36468] && v116[36470] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887523 + 2 * v118];
      dword_140404A6C[renderer_sort_count + 437454926] = v119 + 5;
      v117 = ++renderer_sort_count;
    }
    v119 += 8;
    v118 += 8;
    v116 += 41680;
  }
  while ( (int)(v119 - 2) < 128 );
  sub_14007D710();
  v120 = renderer_sort_count;
  v121 = 0;
  v312 = 0;
  g_160FB5DA4 = 0;
  v122 = renderer_sort_count - 1;
  v123 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    while ( 1 )
    {
      v124 = (int)dword_140404A6C[dword_140404A6C[v123 + 436668494] + 437454926];
      if ( v13 == 255 )
        break;
      if ( v122 >= (int)(v120 - 2) )
      {
        dword_140404A6C[47224 * v13 + 438887509 + 2 * v124] = 0;
        goto LABEL_254;
      }
      if ( v122 >= (int)(v120 - 8) )
      {
        dword_140404A6C[2 * v121 + 137282767] = v124;
        v125 = (int)g_160FB5DA4;
        dword_140404A6C[47224 * v13 + 438887509 + 2 * v124] = 0;
        dword_140404A6C[2 * v125 + 137282768] = 1;
        goto LABEL_261;
      }
      if ( v122 >= (int)(v120 - 16) )
      {
        dword_140404A6C[2 * v121 + 137282767] = v124;
        dword_140404A6C[2 * g_160FB5DA4 + 137282768] = 2;
        goto LABEL_261;
      }
LABEL_262:
      --v122;
      if ( --v123 < 0 )
      {
        v51 = v327;
        v312 = v121;
        goto LABEL_264;
      }
    }
    dword_140404A6C[2 * v124 + 450929629] = 0;
LABEL_254:
    dword_140404A6C[2 * v121 + 137282767] = v124;
    dword_140404A6C[2 * g_160FB5DA4 + 137282768] = 0;
LABEL_261:
    v121 = ++g_160FB5DA4;
    goto LABEL_262;
  }
LABEL_264:
  g_160FB61A8 = 0;
  if ( v52 != 255 )
  {
    v126 = dword_140404A6C[47224 * v52 + 438887424];
    if ( (int)world_event_count < v126 )
    {
      if ( (signed int)(world_event_count - v126 + 0x10000) > 22 )
      {
        v128 = g_160FB59A0;
        if ( (int)g_160FB59A0 > 2 )
          v128 = 2;
        g_160FB59A0 = v128;
        if ( v121 > 2 )
          v121 = 2;
        v312 = v121;
        g_160FB5DA4 = v121;
      }
    }
    else if ( (signed int)(world_event_count - v126) > 22 )
    {
      v127 = g_160FB59A0;
      if ( (int)g_160FB59A0 > 2 )
        v127 = 2;
      g_160FB59A0 = v127;
      if ( v121 > 2 )
      {
        v312 = 2;
        g_160FB5DA4 = 2;
      }
    }
  }
  v129 = 47224LL * v52;
  v130 = &dword_140404A6C[v129 + 438934368];
  v329 = (unsigned int *)(v129 * 4);
  v131 = dword_140404A6C[v129 + 438934368];
  v132 = dword_140404A6C[v129 + 438934366] - v131;
  if ( (int)dword_140404A6C[v129 + 438934366] < v131 )
    v132 = (unsigned int)(v132 + 256);
  v133 = packet_out_byte;
  if ( (int)v132 > 255 )
    v132 = 255;
  v134 = 8;
  if ( (int)packet_out_byte < 0x10000 )
  {
    v135 = packet_out_bit;
    v136 = (unsigned __int8)v132;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v133) &= ~(((1 << v134) - 1) << v135);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v136 << SLOBYTE(packet_out_bit);
      v137 = 8 - packet_out_bit;
      if ( v134 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( v134 == v137 )
      {
        ++packet_out_byte;
        goto LABEL_289;
      }
      v134 -= v137;
      v133 = packet_out_byte + 1;
      v136 >>= v137;
      ++packet_out_byte;
      v135 = 0;
      if ( v134 <= 0 )
        goto LABEL_289;
    }
    packet_out_bit += v134;
  }
LABEL_289:
  sub_140115D90(v130, 8);
  if ( (int)v132 > 0 )
  {
    do
    {
      v138 = 16;
      v139 = dword_140404A6C[47224 * v13 + 438934369 + v131];
      v140 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        v141 = packet_out_bit;
        v142 = (unsigned __int16)v139;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v140) &= ~(((1 << v138) - 1) << v141);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v142 << SLOBYTE(packet_out_bit);
          v143 = 8 - packet_out_bit;
          if ( v138 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( v138 == v143 )
          {
            ++packet_out_byte;
            goto LABEL_298;
          }
          v138 -= v143;
          v140 = packet_out_byte + 1;
          v142 >>= v143;
          ++packet_out_byte;
          v141 = 0;
          if ( v138 <= 0 )
            goto LABEL_298;
        }
        packet_out_bit += v138;
      }
LABEL_298:
      sub_14008ED50(v139);
      v131 = (unsigned __int8)(v131 + 1);
      --v132;
    }
    while ( v132 );
    v51 = v327;
    v100 = 1024;
  }
  v144 = packet_out_byte;
  v145 = &g_160FB67B0;
  v146 = 88LL * v314;
  v147 = 47224 * v13;
  v315 = packet_out_byte;
  v148 = &g_160FB67B0;
  v149 = v326;
  v330 = v146;
  v328 = v147;
  v150 = v146 + v147;
  v151 = v328;
  v320 = v150;
  *(_QWORD *)&dword_140404A6C[v150 + 438897493] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897495] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897497] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897499] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897517] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897519] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897521] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897523] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897525] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897527] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897529] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897531] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897533] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897535] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897537] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897539] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897541] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897543] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897545] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897547] = 0;
  do
  {
    if ( *(v149 - 1) )
    {
      sub_140115D90(v148, 1);
      if ( (*(_BYTE *)v145 & 1) == 0 )
        goto LABEL_328;
      v152 = *v149;
      if ( !*v149 )
      {
        v153 = (int)v149[1];
        v154 = 1;
        v155 = dword_140404A6C[v153 + 282485789];
        v156 = packet_out_byte;
        v157 = *(unsigned int *)((char *)&dword_140404A6C[3 * v153 + 438888533] + v51);
        if ( (int)packet_out_byte < 0x10000 )
        {
          v158 = packet_out_bit;
          v159 = v157 != v155;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + v156) &= ~(((1 << v154) - 1) << v158);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v159 << SLOBYTE(packet_out_bit);
            v160 = 8 - packet_out_bit;
            if ( v154 < 8 - packet_out_bit )
              break;
            if ( v154 == v160 )
            {
              ++packet_out_byte;
              packet_out_bit = 0;
              goto LABEL_309;
            }
            v158 = 0;
            v156 = packet_out_byte + 1;
            v159 >>= v160;
            v154 -= v160;
            ++packet_out_byte;
            packet_out_bit = 0;
            if ( v154 <= 0 )
              goto LABEL_309;
          }
          packet_out_bit += v154;
        }
LABEL_309:
        if ( v157 != v155 )
        {
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280651305], 8);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658439], 1);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658440], 5);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658441], 3);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658443], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658444], 3);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658442], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658445], 5);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658446], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658447], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658449], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658450], 2);
        }
        sub_1401107F0(v322, v314, v153);
        dword_140404A6C[v146 + 438897493 + v151 + (v153 >> 5)] |= 1 << (v153 & 0x1F);
        v152 = *v149;
        v145 = v318;
      }
      if ( v152 == 1 )
      {
        v161 = (int)v149[1];
        v162 = 1;
        v163 = v161;
        v164 = dword_140404A6C[v161 + 280648157];
        v165 = packet_out_byte;
        v166 = *(unsigned int *)((char *)&dword_140404A6C[5 * v161 + 438889301] + v51);
        if ( (int)packet_out_byte < 0x10000 )
        {
          v167 = packet_out_bit;
          v168 = v166 != v164;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + v165) &= ~(((1 << v162) - 1) << v167);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v168 << SLOBYTE(packet_out_bit);
            v169 = 8 - packet_out_bit;
            if ( v162 < 8 - packet_out_bit )
              break;
            if ( v162 == v169 )
            {
              ++packet_out_byte;
              v170 = 0;
              goto LABEL_323;
            }
            v167 = 0;
            v165 = packet_out_byte + 1;
            v168 >>= v169;
            v162 -= v169;
            ++packet_out_byte;
            packet_out_bit = 0;
            if ( v162 <= 0 )
              goto LABEL_324;
          }
          v170 = v162 + packet_out_bit;
LABEL_323:
          packet_out_bit = v170;
        }
LABEL_324:
        if ( v166 != v164 )
        {
          v171 = 1760 * v161;
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845898], 8);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845903], 10);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845902], 10);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845904], 4);
          if ( dword_140404A6C[1760 * v161 + 278845898] == 39 )
          {
            sub_140115D90(&dword_140404A6C[v171 + 278846111], 5);
            sub_140115D90(&dword_140404A6C[v171 + 278846112], 5);
          }
        }
        sub_14010EC30(v322, v314, v161);
        v144 = packet_out_byte;
        v100 = v323;
        v172 = v161 & 0x1F;
        v146 = v330;
        dword_140404A6C[v330 + 438897517 + v151 + (v163 >> 5)] |= 1 << v172;
        v145 = v318;
      }
      else
      {
LABEL_328:
        v144 = packet_out_byte;
        v100 = v323;
      }
    }
    ++v145;
    ++v148;
    v149 += 4;
    v318 = v145;
    v323 = --v100;
  }
  while ( v100 );
  v173 = v320;
  g_16B2A223C += v144 - v315;
  v174 = packet_out_bit;
  v175 = 8;
  v316 = v144;
  *(_QWORD *)&dword_140404A6C[v320 + 438897501] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897503] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897505] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897507] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897509] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897511] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897513] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897515] = 0;
  if ( v144 < 0x10000 )
  {
    v176 = (unsigned __int8)v312;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v175) - 1) << v174);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v176 << SLOBYTE(packet_out_bit);
      v177 = 8 - packet_out_bit;
      v144 = packet_out_byte;
      if ( v175 < 8 - packet_out_bit )
        break;
      v174 = 0;
      packet_out_bit = 0;
      if ( v175 == v177 )
      {
        v144 = ++packet_out_byte;
        goto LABEL_338;
      }
      v144 = packet_out_byte + 1;
      v176 >>= v177;
      v175 -= v177;
      ++packet_out_byte;
      if ( v175 <= 0 )
        goto LABEL_338;
    }
    v174 = v175 + LOBYTE(packet_out_bit);
    packet_out_bit += v175;
  }
LABEL_338:
  v178 = v324;
  if ( v312 > 0 )
  {
    v179 = 23612LL * (int)v322;
    v180 = 23612 * v324;
    v181 = 79616LL * v314;
    v182 = &g_160FB5DAC;
    v323 = (unsigned int)v312;
    v326 = &g_160FB5DAC;
    while ( 1 )
    {
      v183 = (int)*(v182 - 1);
      v184 = 10;
      v185 = *v182;
      if ( v144 < 0x10000 )
      {
        v186 = *(v182 - 1) & 0x3FF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v184) - 1) << v174);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v186 << SLOBYTE(packet_out_bit);
          v187 = 8 - packet_out_bit;
          v144 = packet_out_byte;
          if ( v184 < 8 - packet_out_bit )
            break;
          if ( v184 == v187 )
          {
            v144 = ++packet_out_byte;
            v174 = 0;
            packet_out_bit = 0;
            goto LABEL_348;
          }
          v186 >>= v187;
          v144 = packet_out_byte + 1;
          packet_out_bit = 0;
          v184 -= v187;
          ++packet_out_byte;
          v174 = 0;
          if ( v184 <= 0 )
            goto LABEL_348;
        }
        v174 = v184 + LOBYTE(packet_out_bit);
        packet_out_bit += v184;
      }
LABEL_348:
      v188 = 2;
      if ( v144 < 0x10000 )
      {
        v189 = v185 & 3;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v188) - 1) << v174);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v189 << SLOBYTE(packet_out_bit);
          v190 = 8 - packet_out_bit;
          if ( v188 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( v188 == v190 )
          {
            ++packet_out_byte;
            goto LABEL_356;
          }
          v188 -= v190;
          v144 = packet_out_byte + 1;
          v189 >>= v190;
          ++packet_out_byte;
          v174 = 0;
          if ( v188 <= 0 )
            goto LABEL_356;
        }
        packet_out_bit += v188;
      }
LABEL_356:
      sub_140115D90(&dword_140404A6C[5210 * v183 + 129720183], 10);
      sub_140115D90(&dword_140404A6C[2 * v179 + 438887510 + 2 * v183], 8);
      v191 = dword_140404A6C[2 * v180 + 438887510 + 2 * v183];
      v192 = (unsigned __int8)v191;
      v193 = (int)(g_1AD04B20C - v191) < 192;
      v194 = 228 * v183;
      if ( (int)(g_1AD04B20C - v191) >= 192 )
        v192 = 0;
      v195 = v181 * 4 + v194;
      v196 = v194 + 318464 * v192;
      sub_14010E6C0(
        &dword_140404A6C[v181 + 137328830 + v194 / 4],
        *(unsigned int *)((char *)&g_160FE2D64 + v196),
        (int)(g_1AD04B20C - v191) < 192,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_160FE2D68 + v195),
        *(unsigned int *)((char *)&g_160FE2D68 + v196),
        v193,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_160FE2D6C + v195),
        *(unsigned int *)((char *)&g_160FE2D6C + v196),
        v193,
        28);
      sub_140115D90((unsigned int *)((char *)&g_160FE2D70 + v195), 2);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D74 + v195),
        *(unsigned int *)((char *)&g_160FE2D74 + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D78 + v195),
        *(unsigned int *)((char *)&g_160FE2D78 + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D7C + v195),
        *(unsigned int *)((char *)&g_160FE2D7C + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D80 + v195),
        *(unsigned int *)((char *)&g_160FE2D80 + v196),
        v193,
        9);
      v197 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v196 + 553528712);
      v198 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v195 + 553528712);
      v199 = 4;
      do
      {
        sub_14010E6C0(v198 - 1, *(v197 - 1), v193, 8);
        sub_14010E9B0(v198, *v197, v193, 9);
        sub_14010E6C0(v198 + 1, v197[1], v193, 8);
        v198 += 3;
        v197 += 3;
        --v199;
      }
      while ( v199 );
      sub_140115D90(&dword_140404A6C[5210 * v183 + 129720369], 13);
      v174 = packet_out_bit;
      v144 = packet_out_byte;
      dword_140404A6C[v330 + 438897501 + v328 + (v183 >> 5)] |= 1 << (v183 & 0x1F);
      v182 = v326 + 2;
      v200 = v323-- == 1;
      v326 += 2;
      if ( v200 )
        break;
      v181 = 79616LL * v314;
    }
    v51 = v327;
    v178 = v324;
    v173 = v320;
  }
  v201 = v144;
  v202 = 8;
  g_16B2A2240 += v144 - v316;
  if ( v144 < 0x10000 )
  {
    v203 = 0;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v202) - 1) << v174);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v203 << SLOBYTE(packet_out_bit);
      v204 = 8 - packet_out_bit;
      v144 = packet_out_byte;
      if ( v202 < 8 - packet_out_bit )
        break;
      v174 = 0;
      packet_out_bit = 0;
      if ( v202 == v204 )
      {
        v144 = ++packet_out_byte;
        goto LABEL_371;
      }
      v144 = packet_out_byte + 1;
      v203 >>= v204;
      v202 -= v204;
      ++packet_out_byte;
      if ( v202 <= 0 )
        goto LABEL_371;
    }
    v174 = v202 + LOBYTE(packet_out_bit);
    packet_out_bit += v202;
  }
LABEL_371:
  v205 = world_unknown_15fd16260_count;
  g_16B2A2244 += v144 - v201;
  v206 = 0;
  if ( (int)world_unknown_15fd16260_count < 4 )
  {
    if ( (int)world_unknown_15fd16260_count <= 0 )
      goto LABEL_410;
    v211 = 0;
    goto LABEL_402;
  }
  v207 = (float *)&g_15FD16278;
  v208 = (unsigned int *)((char *)&g_1A8E447D0 + v51);
  v209 = ((world_unknown_15fd16260_count - 4) >> 2) + 1;
  v210 = v209;
  v206 = 4 * v209;
  v211 = 4LL * v209;
  do
  {
    v212 = fsqrt(
             (float)((float)((float)(*(float *)&v12 - *(v207 - 1)) * (float)(*(float *)&v12 - *(v207 - 1)))
                   + (float)((float)(*(float *)&v11 - *(v207 - 2)) * (float)(*(float *)&v11 - *(v207 - 2))))
           + (float)((float)(*(float *)&v14 - *v207) * (float)(*(float *)&v14 - *v207)))
         / (float)((float)(fabs(v207[14]) * 4.0) + 1.0);
    v213 = fsqrt((float)((float)(v207[1] * v207[1]) + (float)(v207[2] * v207[2])) + (float)(v207[3] * v207[3]));
    if ( v213 >= 0.016666668 )
      v213 = 0.016666668;
    v214 = (float)((float)(*(float *)&v12 - v207[382]) * (float)(*(float *)&v12 - v207[382]))
         + (float)((float)(*(float *)&v11 - v207[381]) * (float)(*(float *)&v11 - v207[381]));
    v215 = (int)(float)(256.0 - (float)((float)(v212 / (float)((float)(v213 * 240.0) + 1.0)) * 0.5));
    v216 = v207[385] * v207[385];
    v217 = *(float *)&v14 - v207[383];
    if ( v215 < 16 )
      v215 = (int)v325;
    if ( v178 == 255 )
      v215 = 1;
    *(v208 - 3) += v215;
    v218 = fsqrt(v214 + (float)(v217 * v217)) / (float)((float)(fabs(v207[397]) * 4.0) + 1.0);
    v219 = fsqrt((float)((float)(v207[384] * v207[384]) + v216) + (float)(v207[386] * v207[386]));
    if ( v219 >= 0.016666668 )
      v219 = 0.016666668;
    v220 = (float)((float)(*(float *)&v12 - v207[765]) * (float)(*(float *)&v12 - v207[765]))
         + (float)((float)(*(float *)&v11 - v207[764]) * (float)(*(float *)&v11 - v207[764]));
    v221 = (int)(float)(256.0 - (float)((float)(v218 / (float)((float)(v219 * 240.0) + 1.0)) * 0.5));
    v222 = v207[768] * v207[768];
    v223 = *(float *)&v14 - v207[766];
    if ( v221 < 16 )
      v221 = (int)v325;
    if ( v178 == 255 )
      v221 = 1;
    *v208 += v221;
    v224 = fsqrt(v220 + (float)(v223 * v223)) / (float)((float)(fabs(v207[780]) * 4.0) + 1.0);
    v225 = fsqrt((float)((float)(v207[767] * v207[767]) + v222) + (float)(v207[769] * v207[769]));
    if ( v225 >= 0.016666668 )
      v225 = 0.016666668;
    v226 = (float)((float)(*(float *)&v12 - v207[1148]) * (float)(*(float *)&v12 - v207[1148]))
         + (float)((float)(*(float *)&v11 - v207[1147]) * (float)(*(float *)&v11 - v207[1147]));
    v227 = (int)(float)(256.0 - (float)((float)(v224 / (float)((float)(v225 * 240.0) + 1.0)) * 0.5));
    v228 = v207[1151] * v207[1151];
    v229 = *(float *)&v14 - v207[1149];
    if ( v227 < 16 )
      v227 = (int)v325;
    if ( v178 == 255 )
      v227 = 1;
    v208[3] += v227;
    v230 = fsqrt(v226 + (float)(v229 * v229)) / (float)((float)(fabs(v207[1163]) * 4.0) + 1.0);
    v231 = fsqrt((float)((float)(v207[1150] * v207[1150]) + v228) + (float)(v207[1152] * v207[1152]));
    if ( v231 >= 0.016666668 )
      v231 = 0.016666668;
    v232 = (int)(float)(256.0 - (float)((float)(v230 / (float)((float)(v231 * 240.0) + 1.0)) * 0.5));
    if ( v232 < 16 )
      v232 = (int)v325;
    if ( v178 == 255 )
      v232 = 1;
    v207 += 1532;
    v208[6] += v232;
    v208 += 12;
    --v210;
  }
  while ( v210 );
  if ( v206 < (int)v205 )
  {
LABEL_402:
    v233 = (unsigned int *)((char *)&dword_140404A6C[3 * v211 + 438894422] + v51);
    v234 = (float *)&dword_140404A6C[383 * v211 + 132400643];
    v235 = (unsigned int)(v205 - v206);
    do
    {
      v236 = fsqrt(
               (float)((float)((float)(*(float *)&v12 - *(v234 - 1)) * (float)(*(float *)&v12 - *(v234 - 1)))
                     + (float)((float)(*(float *)&v11 - *(v234 - 2)) * (float)(*(float *)&v11 - *(v234 - 2))))
             + (float)((float)(*(float *)&v14 - *v234) * (float)(*(float *)&v14 - *v234)))
           / (float)((float)(fabs(v234[14]) * 4.0) + 1.0);
      v237 = fsqrt((float)((float)(v234[1] * v234[1]) + (float)(v234[2] * v234[2])) + (float)(v234[3] * v234[3]));
      if ( v237 >= 0.016666668 )
        v237 = 0.016666668;
      v238 = (int)(float)(256.0 - (float)((float)(v236 / (float)((float)(v237 * 240.0) + 1.0)) * 0.5));
      if ( v238 < 16 )
        v238 = 16;
      if ( v178 == 255 )
        v238 = 1;
      v234 += 383;
      *v233 += v238;
      v233 += 3;
      --v235;
    }
    while ( v235 );
  }
LABEL_410:
  v239 = 0;
  v240 = 0;
  renderer_sort_count = 0;
  if ( (int)v205 > 0 )
  {
    v241 = (unsigned int *)((char *)&g_1A8E447C4 + v51);
    do
    {
      v242 = v239;
      v243 = *v241;
      v241 += 3;
      dword_140404A6C[v242 + 437192782] = v243;
      dword_140404A6C[renderer_sort_count + 437454926] = v240++;
      v239 = ++renderer_sort_count;
    }
    while ( v240 < (int)v205 );
  }
  sub_14007D710();
  v244 = v322;
  g_160FC37B4 = 0;
  v245 = 32;
  v246 = renderer_sort_count - 1;
  if ( (_DWORD)v322 != 255 )
    v245 = 16;
  v247 = v246;
  v248 = 0;
  if ( v246 >= 0 )
  {
    v249 = renderer_sort_count - v245;
    do
    {
      v250 = (int)dword_140404A6C[dword_140404A6C[v247 + 436668494] + 437454926];
      if ( v246 >= v249 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[3 * v250 + 438894422] + v51) = 0;
        dword_140404A6C[v248 + 137296723] = v250;
        v248 = ++g_160FC37B4;
      }
      --v246;
      --v247;
    }
    while ( v247 >= 0 );
  }
  v251 = 10;
  *(_QWORD *)&dword_140404A6C[v173 + 438897549] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897551] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897553] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897555] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897557] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897559] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897561] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897563] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897565] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897567] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897569] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897571] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897573] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897575] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897577] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897579] = 0;
  v252 = 1;
  v317 = v144;
  if ( v144 < 0x10000 )
  {
    v253 = v205 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v251) - 1) << v174);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v253 << SLOBYTE(packet_out_bit);
      v254 = 8 - packet_out_bit;
      v144 = packet_out_byte;
      if ( v251 < 8 - packet_out_bit )
        break;
      v174 = 0;
      packet_out_bit = 0;
      if ( v251 == v254 )
      {
        v144 = ++packet_out_byte;
        goto LABEL_428;
      }
      v144 = packet_out_byte + 1;
      v253 >>= v254;
      v251 -= v254;
      ++packet_out_byte;
      if ( v251 <= 0 )
        goto LABEL_428;
    }
    v174 = v251 + LOBYTE(packet_out_bit);
    packet_out_bit += v251;
  }
LABEL_428:
  v255 = 8;
  if ( v144 < 0x10000 )
  {
    v256 = (unsigned __int8)v248;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v255) - 1) << v174);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v256 << SLOBYTE(packet_out_bit);
      v257 = 8 - packet_out_bit;
      v144 = packet_out_byte;
      if ( v255 < 8 - packet_out_bit )
        break;
      v174 = 0;
      packet_out_bit = 0;
      if ( v255 == v257 )
      {
        v144 = ++packet_out_byte;
        goto LABEL_436;
      }
      v144 = packet_out_byte + 1;
      v256 >>= v257;
      v255 -= v257;
      ++packet_out_byte;
      if ( v255 <= 0 )
        goto LABEL_436;
    }
    v174 = v255 + LOBYTE(packet_out_bit);
    packet_out_bit += v255;
  }
LABEL_436:
  *(_OWORD *)&g_160FC4840 = 0;
  *(_OWORD *)&g_160FC4850 = 0;
  g_160FC4860 = 0;
  g_160FC4870 = 0;
  g_160FC4880 = 0;
  g_160FC4890 = 0;
  g_160FC48A0 = 0;
  g_160FC48B0 = 0;
  if ( v248 > 0 )
  {
    v258 = &g_160FC37B8;
    v259 = (unsigned int)v248;
    do
    {
      v260 = (int)*v258++;
      dword_140404A6C[(v260 >> 5) + 137297781] |= 1 << (v260 & 0x1F);
      --v259;
    }
    while ( v259 );
  }
  if ( LOBYTE(g_183F7C960) && v244 == 255 )
  {
    crt_sprintf(
      &g_16B2A1DC8,
      "%08x %08x %08x %08x %08x %08x %08x %08x\n",
      g_160FC4840,
      g_160FC4844,
      g_160FC4848,
      g_160FC484C,
      g_160FC4850,
      g_160FC4854,
      g_160FC4858,
      g_160FC485C);
    v174 = packet_out_bit;
    v144 = packet_out_byte;
    v205 = world_unknown_15fd16260_count;
  }
  v261 = 0;
  if ( (int)v205 <= 0 )
    goto LABEL_511;
  v262 = 0;
  v322 = 0;
  v263 = 0;
  v323 = 0;
  v264 = &g_15FE95280;
  v326 = nullptr;
  v265 = &g_15FD16268;
  v324 = 0;
  v266 = 0;
  v320 = 0;
  v267 = 0;
  v325 = &g_15FE95280;
  v268 = nullptr;
  v319 = &g_15FD16268;
  v269 = &g_15FD16838;
  v313 = v205;
  do
  {
    v270 = v263 >> 5;
    v271 = v327;
    if ( (v252 & dword_140404A6C[(v263 >> 5) + 137297781]) != 0 )
    {
      if ( v261 > 0 )
      {
        v272 = 1;
        if ( v144 < 0x10000 )
        {
          v273 = 0;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v272) - 1) << v174);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v273 << SLOBYTE(packet_out_bit);
            v274 = 8 - packet_out_bit;
            v144 = packet_out_byte;
            if ( v272 < 8 - packet_out_bit )
              break;
            v174 = 0;
            packet_out_bit = 0;
            if ( v272 == v274 )
            {
              v144 = ++packet_out_byte;
              goto LABEL_454;
            }
            v144 = packet_out_byte + 1;
            v273 >>= v274;
            v272 -= v274;
            ++packet_out_byte;
            if ( v272 <= 0 )
              goto LABEL_454;
          }
          v174 = v272 + LOBYTE(packet_out_bit);
          packet_out_bit += v272;
        }
LABEL_454:
        v275 = 10;
        if ( v144 < 0x10000 )
        {
          v276 = v261 & 0x3FF;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v275) - 1) << v174);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v276 << SLOBYTE(packet_out_bit);
            v277 = 8 - packet_out_bit;
            v144 = packet_out_byte;
            if ( v275 < 8 - packet_out_bit )
              break;
            v174 = 0;
            packet_out_bit = 0;
            if ( v275 == v277 )
            {
              v144 = ++packet_out_byte;
              goto LABEL_462;
            }
            v144 = packet_out_byte + 1;
            v276 >>= v277;
            v275 -= v277;
            ++packet_out_byte;
            if ( v275 <= 0 )
              goto LABEL_462;
          }
          v174 = v275 + LOBYTE(packet_out_bit);
          packet_out_bit += v275;
        }
      }
LABEL_462:
      v278 = 0;
      v261 = 0;
      v279 = 1;
      if ( v144 < 0x10000 )
      {
        v280 = 1;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v279) - 1) << v174);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v280 << SLOBYTE(packet_out_bit);
          v281 = 8 - packet_out_bit;
          if ( v279 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( v279 == v281 )
          {
            ++packet_out_byte;
            goto LABEL_470;
          }
          v279 -= v281;
          v144 = packet_out_byte + 1;
          v280 >>= v281;
          ++packet_out_byte;
          v174 = 0;
          if ( v279 <= 0 )
            goto LABEL_470;
        }
        packet_out_bit += v279;
      }
LABEL_470:
      sub_140115D90((unsigned int *)((char *)&g_1A8E447C8 + (unsigned __int64)v329 + (_QWORD)v268), 8);
      v282 = v271 + v324;
      v283 = packet_out_bit;
      v284 = 1;
      v285 = *(unsigned int *)((char *)&g_1A8E447C8 + v271 + v324);
      v286 = (signed int)(g_1AD04B20C - v285) < 192;
      v287 = (unsigned __int8)v285;
      v288 = packet_out_byte;
      LOBYTE(v278) = v286;
      if ( !v286 )
        v287 = 0;
      if ( (int)packet_out_byte < 0x10000 )
      {
        v289 = *v319 != -1;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v288) &= ~(((1 << v284) - 1) << v283);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v289 << SLOBYTE(packet_out_bit);
          v290 = 8 - packet_out_bit;
          v288 = packet_out_byte;
          if ( v284 < 8 - packet_out_bit )
            break;
          if ( v284 == v290 )
          {
            v288 = ++packet_out_byte;
            v283 = 0;
            packet_out_bit = 0;
            goto LABEL_480;
          }
          v289 >>= v290;
          v288 = packet_out_byte + 1;
          packet_out_bit = 0;
          v284 -= v290;
          ++packet_out_byte;
          v283 = 0;
          if ( v284 <= 0 )
            goto LABEL_480;
        }
        v283 = v284 + LOBYTE(packet_out_bit);
        packet_out_bit += v284;
      }
LABEL_480:
      v291 = 1;
      v292 = *(unsigned int *)((char *)&g_1A8E447C0 + v282);
      v293 = *v325;
      if ( v288 < 0x10000 )
      {
        v294 = v292 != v293;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v288) &= ~(((1 << v291) - 1) << v283);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v294 << SLOBYTE(packet_out_bit);
          v295 = 8 - packet_out_bit;
          if ( v291 < 8 - packet_out_bit )
            break;
          if ( v291 == v295 )
          {
            ++packet_out_byte;
            v296 = 0;
            goto LABEL_488;
          }
          v288 = packet_out_byte + 1;
          v294 >>= v295;
          v291 -= v295;
          ++packet_out_byte;
          packet_out_bit = 0;
          v283 = 0;
          if ( v291 <= 0 )
            goto LABEL_489;
        }
        v296 = v291 + packet_out_bit;
LABEL_488:
        packet_out_bit = v296;
      }
LABEL_489:
      if ( v292 != v293 )
      {
        sub_140115D90(v269 - 374, 6);
        sub_140115D90(v269, 4);
      }
      v297 = v322 + 318464LL * v287;
      v298 = v323 + 318464LL * v314;
      sub_14010E6C0(
        (unsigned int *)((char *)&g_161008568 + v298),
        *(unsigned int *)((char *)&g_161008568 + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_16100856C + v298),
        *(unsigned int *)((char *)&g_16100856C + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_161008570 + v298),
        *(unsigned int *)((char *)&g_161008570 + v297),
        v278,
        28);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_161008584 + v298),
        *(unsigned int *)((char *)&g_161008584 + v297),
        v278,
        9);
      v174 = packet_out_bit;
      v144 = packet_out_byte;
      v264 = v325;
      v262 = v324;
      dword_140404A6C[v328 + 438897549 + v270 + v330] |= v252;
      v263 = v320;
      v265 = v319;
      v268 = v326;
      v266 = v322;
      v267 = v323;
      v205 = v313;
    }
    else
    {
      ++v261;
    }
    ++v263;
    v252 = __ROL4__(v252, 1);
    v268 += 3;
    v320 = v263;
    v267 += 40;
    v326 = v268;
    v265 += 383;
    v323 = v267;
    v262 += 12;
    v319 = v265;
    ++v264;
    v324 = v262;
    v266 += 40;
    v325 = v264;
    v269 += 383;
    v322 = v266;
    v313 = --v205;
  }
  while ( v205 );
  if ( v261 <= 0 )
  {
LABEL_511:
    v302 = 10;
  }
  else
  {
    v299 = 1;
    if ( v144 < 0x10000 )
    {
      v300 = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v299) - 1) << v174);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v300 << SLOBYTE(packet_out_bit);
        v301 = 8 - packet_out_bit;
        v144 = packet_out_byte;
        if ( v299 < 8 - packet_out_bit )
          break;
        v174 = 0;
        packet_out_bit = 0;
        if ( v299 == v301 )
        {
          v144 = ++packet_out_byte;
          goto LABEL_503;
        }
        v144 = packet_out_byte + 1;
        v300 >>= v301;
        v299 -= v301;
        ++packet_out_byte;
        if ( v299 <= 0 )
          goto LABEL_503;
      }
      v174 = v299 + LOBYTE(packet_out_bit);
      packet_out_bit += v299;
    }
LABEL_503:
    v302 = 10;
    v303 = 10;
    if ( v144 < 0x10000 )
    {
      v304 = v261 & 0x3FF;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v303) - 1) << v174);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v304 << SLOBYTE(packet_out_bit);
        v305 = 8 - packet_out_bit;
        v144 = packet_out_byte;
        if ( v303 < 8 - packet_out_bit )
          break;
        v174 = 0;
        packet_out_bit = 0;
        if ( v303 == v305 )
        {
          v144 = ++packet_out_byte;
          goto LABEL_512;
        }
        v144 = packet_out_byte + 1;
        v304 >>= v305;
        v303 -= v305;
        ++packet_out_byte;
        if ( v303 <= 0 )
          goto LABEL_512;
      }
      v174 = v303 + LOBYTE(packet_out_bit);
      packet_out_bit += v303;
    }
  }
LABEL_512:
  g_16B2A2238 += v144 - v317;
  v306 = v329;
  if ( (int)g_175FD145C <= 0 )
    v307 = 0;
  else
    v307 = *(signed int *)((char *)&g_1A8E3DA74 + (_QWORD)v329) % (signed int)g_175FD145C;
  if ( v144 < 0x10000 )
  {
    v308 = v307 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v144) &= ~(((1 << v302) - 1) << v174);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v308 << SLOBYTE(packet_out_bit);
      v309 = 8 - packet_out_bit;
      if ( v302 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( v302 == v309 )
      {
        ++packet_out_byte;
        goto LABEL_523;
      }
      v302 -= v309;
      v144 = packet_out_byte + 1;
      v308 >>= v309;
      ++packet_out_byte;
      v174 = 0;
      if ( v302 <= 0 )
        goto LABEL_523;
    }
    packet_out_bit += v302;
  }
LABEL_523:
  v310 = 34LL * v307;
  sub_140115D90(&dword_140404A6C[v310 + 225391250], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391251], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391252], 2);
  sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v310 * 4 + 905778368), 2);
  ++*(unsigned int *)((char *)&g_1A8E3DA74 + (_QWORD)v306);
}
#undef v311
#undef v312
#undef v313
#undef v314
#undef v315
#undef v316
#undef v317
#undef v318
#undef v319
#undef v320
#undef v321
#undef v322
#undef v323
#undef v324
#undef v325
#undef v326
#undef v327
#undef v328
#undef v329
#undef v330

//----- (0000000140114D40) ----------------------------------------------------
__int64            sub_140114D40(_DWORD *a1, float *a2)
{
  double v3;
  double v4;
  double v5;
  bool v6;
  bool v7;
  double v8;
  double v9;
  __int64 v10;
  bool v11;
  double v12;
  __int64 v13;
  __int64 v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114D40[64];
#define v16 (*(__int64 (*))(void *)(sr_frame_140114D40 + 0)) /* [rsp+0h] */
#define v17 (*(__m128 (*))(void *)(sr_frame_140114D40 + 32)) /* [rsp+20h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140114D40 + 56)) /* [rsp+38h] */

  sub_14010E370(SR_VEC_LANES(128, v17, f32), a2);
  v3 = fabs(SR_VEC_LANES(128, v17, f32)[1]);
  v4 = fabs(SR_VEC_LANES(128, v17, f32)[2]);
  v5 = fabs(SR_VEC_LANES(128, v17, f32)[0]);
  v6 = v3 < v5;
  v7 = v3 == v5;
  v8 = fmax(v3, v5);
  v9 = fabs(SR_VEC_LANES(128, v17, f32)[3]);
  v10 = !v6 && !v7;
  v11 = v4 <= v8;
  v12 = fmax(v4, v8);
  if ( !v11 )
    v10 = 2;
  if ( v9 > v12 )
    v10 = 3;
  if ( SR_VEC_LANES(128, v17, f32)[v10] < 0.0 )
    v17 = _mm_xor_ps(v17, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  v13 = dword_140301DC8;
  v14 = 1;
  *a1 = v10;
  if ( (_DWORD)v13 != (_DWORD)v10 )
  {
    v14 = 2;
    a1[1] = (int)(SR_VEC_LANES(128, v17, f32)[v13] * 5791.911644699011);
  }
  if ( dword_140301DCC != (_DWORD)v10 )
    a1[v14++] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DCC] * 5791.911644699011);
  if ( dword_140301DD0 != (_DWORD)v10 )
    a1[v14++] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DD0] * 5791.911644699011);
  if ( dword_140301DD4 != (_DWORD)v10 )
    a1[v14] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DD4] * 5791.911644699011);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v16
#undef v17
#undef v18

//----- (0000000140114E90) ----------------------------------------------------
__int64            sub_140114E90(_DWORD *a1, float *a2, char a3)
{
  __int64 v4;
  double v5;
  double v6;
  double v7;
  double v8;
  bool v9;
  bool v10;
  double v11;
  double v12;
  __int64 v13;
  bool v14;
  double v15;
  __int64 v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114E90[64];
#define v18 (*(__int64 (*))(void *)(sr_frame_140114E90 + 0)) /* [rsp+0h] */
#define v19 (*(__m128 (*))(void *)(sr_frame_140114E90 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140114E90 + 56)) /* [rsp+38h] */

  v4 = 1;
  v5 = (double)(1 << (a3 - 1)) - 1.0;
  sub_14010E370(SR_VEC_LANES(128, v19, f32), a2);
  v6 = fabs(SR_VEC_LANES(128, v19, f32)[1]);
  v7 = fabs(SR_VEC_LANES(128, v19, f32)[2]);
  v8 = fabs(SR_VEC_LANES(128, v19, f32)[0]);
  v9 = v6 < v8;
  v10 = v6 == v8;
  v11 = fmax(v6, v8);
  v12 = fabs(SR_VEC_LANES(128, v19, f32)[3]);
  v13 = !v9 && !v10;
  v14 = v7 <= v11;
  v15 = fmax(v7, v11);
  if ( !v14 )
    v13 = 2;
  if ( v12 > v15 )
    v13 = 3;
  if ( SR_VEC_LANES(128, v19, f32)[v13] < 0.0 )
    v19 = _mm_xor_ps(v19, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  v16 = dword_140301DE8;
  *a1 = v13;
  if ( (_DWORD)v16 != (_DWORD)v13 )
  {
    v4 = 2;
    a1[1] = (int)(SR_VEC_LANES(128, v19, f32)[v16] * 0.7071067811865476 * v5);
  }
  if ( dword_140301DEC != (_DWORD)v13 )
    a1[v4++] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DEC] * 0.7071067811865476 * v5);
  if ( dword_140301DF0 != (_DWORD)v13 )
    a1[v4++] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DF0] * 0.7071067811865476 * v5);
  if ( dword_140301DF4 != (_DWORD)v13 )
    a1[v4] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DF4] * 0.7071067811865476 * v5);
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20

//----- (00000001401150E0) ----------------------------------------------------
void            sub_1401150E0(__int64 a1, float *a2, float a3, signed int a4)
{
  net_write_vector_delta((const float *)a1, a2, a3, a4);
}

//----- (00000001401151C0) ----------------------------------------------------
double            sub_1401151C0(float *a1, float a2, int a3)
{
  return net_write_magnitude(a1, a2, a3);
}

//----- (0000000140115230) ----------------------------------------------------
__int64            sub_140115230(_DWORD *a1, float *a2, int a3)
{
  return net_encode_direction(a1, a2, a3);
}

//----- (0000000140115360) ----------------------------------------------------
__int64 sub_140115360()
{
  int i;
  char v1;
  int v2;
  __int64 v3;
  char v4;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    v1 = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)g_1862AE024 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + v3) = v4;
      ++v2;
      ++v3;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + v2) = 0;
  return sub_1400A5400((__int64)&g_1863AE028);
}

//----- (0000000140115410) ----------------------------------------------------
__int64 sub_140115410()
{
  int i;
  char v1;
  int v2;
  __int64 v3;
  char v4;
  __int64 v6;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    v1 = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)g_1862AE024 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + v3) = v4;
      ++v2;
      ++v3;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + v2) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%I64u", &v6);
  return v6;
}

//----- (00000001401154D0) ----------------------------------------------------
__int64 sub_1401154D0()
{
  extern void physics_integrate_points(void);
  /* src/engine/physics_points.c; the original returns a leftover value, its one caller (the physics tick) does not
     read it. */
  physics_integrate_points();
  return 0;
}

//----- (0000000140115830) ----------------------------------------------------
void sub_140115830()
{
  extern void physics_expire_points(void);
  /* src/engine/physics_points.c */
  physics_expire_points();
}

//----- (0000000140115AE0) ----------------------------------------------------
__int64            sub_140115AE0(_DWORD *a1, int a2)
{
  return net_read_bits(a1, a2);
}

//----- (0000000140115BD0) ----------------------------------------------------
__int64            sub_140115BD0(int *a1, int a2)
{
  char v3;
  int v4;
  int v6;

  v3 = a2;
  sub_140115AE0(&v6, a2);
  v4 = v6;
  if ( v6 == (1 << v3) - 1 )
    v4 = -1;
  *a1 = v4;
  return 1;
}

//----- (0000000140115C20) ----------------------------------------------------
__int64            sub_140115C20(_DWORD *a1, int a2, int a3)
{
  return net_read_bits_scaled(a1, a2, (unsigned int)a3);
}

//----- (0000000140115D20) ----------------------------------------------------
__int64            sub_140115D20(int *a1, int a2)
{
  char v3;
  __int64 result;
  int v5;

  v3 = a2;
  sub_140115AE0(&v5, a2);
  result = 1;
  if ( (v5 & (1 << (v3 - 1))) == 1 << (v3 - 1) )
    *a1 = v5 | (-1 << v3);
  else
    *a1 = v5;
  return result;
}

//----- (0000000140115D90) ----------------------------------------------------
__int64            sub_140115D90(_DWORD *a1, signed int a2)
{
  return net_write_bits(a1, a2);
}

//----- (0000000140115E60) ----------------------------------------------------
__int64            sub_140115E60(_DWORD *a1, signed int a2)
{
  return net_write_bits_e60(a1, a2);
}

//----- (0000000140115E80) ----------------------------------------------------
__int64            sub_140115E80(_DWORD *a1, int a2, unsigned int a3)
{
  return net_write_bits_scaled(a1, a2, a3);
}

//----- (0000000140115F70) ----------------------------------------------------
__int64            sub_140115F70(_DWORD *a1, signed int a2)
{
  return net_write_bits_f70(a1, a2);
}

//----- (0000000140116210) ----------------------------------------------------
void sub_140116210()
{
  extern void physics_tick(void);
  /* src/engine/physics_tick.c; the debug console's tick markers stay here. */
  SR_DEBUG_TICK_BEGIN();
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "before physics tick");
  physics_tick();
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "after physics tick");
  SR_DEBUG_TICK_END();
}

//----- (00000001401164B0) ----------------------------------------------------
__int64            sub_1401164B0(int a1, int a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int *v7;
       __m128i *v8;
  __int64 result;
  __int64 v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int *v16;
  __int64 v17;

  v2 = a1;
  if ( game_state == 3 )
    return sub_140051480(
             0,
             (     __m128i *)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v3 = 14388LL * a1;
  v4 = (int)dword_140404A6C[v3 / 4 + 71856292];
  if ( (_DWORD)v4 == -1 )
    return sub_140051480(
             0,
             (     __m128i *)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v5 = 7166 * v4;
  if ( (int)dword_140404A6C[7166 * v4 + 280651318] <= 0 )
    return sub_140051480(
             0,
             (     __m128i *)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v6 = 84LL * a2;
  v17 = v6;
  v7 = (unsigned int *)((char *)&g_151620E30 + v6 + v3);
  v8 = (     __m128i *)((char *)&g_151620E3C + v6 + v3);
  result = sub_140051480(1u, v8, v4, *v7);
  v10 = 0;
  v11 = &dword_140404A6C[v5 + 280658140];
  do
  {
    if ( (int)*(v11 - 1) > 0 )
    {
      v12 = (int)*v11;
      if ( !v10 && dword_140404A6C[1760 * v12 + 278845898] == 25 )
      {
        v13 = (int)dword_140404A6C[1760 * v12 + 278845980];
        if ( (_DWORD)v13 != -1 && dword_140404A6C[1760 * v13 + 278845980] == (_DWORD)v12 )
          result = sub_140051480(2u, v8, v13, *(unsigned int *)((char *)&g_151620E30 + v6 + v3));
      }
      if ( dword_140404A6C[1760 * v12 + 278845898] == 26 )
      {
        v14 = 257LL * (int)dword_140404A6C[1760 * v12 + 278846111];
        result = dword_140404A6C[v14 + 273270157];
        if ( (int)result > 0 )
        {
          v15 = (unsigned int)result;
          v16 = &dword_140404A6C[v14 + 273270158];
          do
          {
            if ( (_DWORD)v12 != *v16 )
              result = sub_140051480(2u, v8, *v16, *v7);
            ++v16;
            --v15;
          }
          while ( v15 );
          v6 = v17;
        }
      }
    }
    ++v10;
    v11 += 10;
  }
  while ( v10 < 2 );
  return result;
}

//----- (00000001401166B0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401166B0(int a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  double v7;
  float v8;
  float v9;
  signed int v10;
  __int64 v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401166B0[112];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401166B0 + 0)) /* [rsp+8h] */
#define v14 (*(float (*))(void *)(sr_frame_1401166B0 + 32)) /* [rsp+28h] */
#define v15 (*(float (*))(void *)(sr_frame_1401166B0 + 36)) /* [rsp+2Ch] */
#define v16 (*(float (*))(void *)(sr_frame_1401166B0 + 40)) /* [rsp+30h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1401166B0 + 48)) /* [rsp+38h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_1401166B0 + 64)) /* [rsp+48h] */
#define v19 (*(float (*))(void *)(sr_frame_1401166B0 + 80)) /* [rsp+58h] */
#define v20 (*(sr_frame_i128 (*))(void *)(sr_frame_1401166B0 + 88)) /* [rsp+60h] */

  v2 = 3597LL * a1;
  if ( (int)dword_140404A6C[v2 + 71856276] < (int)g_183F7A5E0 )
  {
    v3 = (int)dword_140404A6C[v2 + 71856286];
    if ( (unsigned int)v3 > 5 )
    {
      v8 = g_16B2A2EC8;
      v9 = *(float *)&g_16B2A2ED0;
      v15 = g_16B2A2ECC;
      v14 = v8
          + (float)((float)((float)(*(float *)&g_16B2A2ED4 - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      v16 = v9
          + (float)((float)((float)(*(float *)&g_16B2A2EDC - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      *(_QWORD *)&v7 = 3217625051LL;
    }
    else
    {
      v17 = xmmword_140278D30;
      v18 = xmmword_140278D30;
      v19 = 1.0;
      v4 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
      v5 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
      v6 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
      v7 = *(float *)&dword_140404A6C[5873 * v3 + 283831497] + 1.570796326795;
      sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v7))) /* the original converts to float (cvtsd2ss) before this call */);
      v14 = (float)(v4 - (float)(*((float *)&v18 + 2) * 4.0)) + (float)(*(float *)&v17 * 18.0);
      v15 = (float)((float)(v5 - 0.5) - (float)(*((float *)&v18 + 3) * 4.0)) + (float)(*((float *)&v17 + 1) * 18.0);
      v16 = (float)(v6 - (float)(v19 * 4.0)) + (float)(*((float *)&v17 + 2) * 18.0);
    }
    v19 = 1.0;
    v17 = xmmword_140278D30;
    v18 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v7))) /* the original converts to float (cvtsd2ss) before this call */);
    v10 = sub_140053840(&v14, (float *)&v17, a1);
    dword_140404A6C[v2 + 71856292] = v10;
    if ( v10 != -1 )
    {
      v11 = 7166LL * v10;
      dword_140404A6C[v11 + 280651306] = dword_140404A6C[v2 + 71856268];
      dword_140404A6C[v11 + 280651341] = LODWORD(v7);
      sub_140051DC0(a1);
      sub_140051F50(a1);
      dword_140404A6C[v2 + 71856342] = 0;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (0000000140116A40) ----------------------------------------------------
__int64            sub_140116A40(int a1,      __m128i *a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = -1;
  do
    ++v2;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[v2] );
  v3 = v2 & 0x3F;
  v4 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856367 + v4] = 1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856368 + v4] = v3;
  crt_memcpy((__m128i *)&dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856372 + v4], a2, v3);
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856369 + v4] = g_183E93544;
  result = ((unsigned __int8)dword_140404A6C[v4 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v4 + 71856362] = result;
  return result;
}

//----- (0000000140116B00) ----------------------------------------------------
__int64            sub_140116B00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4;
  __int64 result;

  v4 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856367 + v4] = 3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856368 + v4] = a2;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856369 + v4] = a3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856370 + v4] = a4;
  result = ((unsigned __int8)dword_140404A6C[v4 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v4 + 71856362] = result;
  return result;
}

//----- (0000000140116CA0) ----------------------------------------------------
unsigned int *           sub_140116CA0(int a1)
{
  unsigned int *result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = (unsigned int *)a1;
  v2 = 3597LL * a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v3 != -1 )
  {
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    result = &g_1832A4DDC;
    v4 = 7;
    v5 = &dword_140404A6C[7166 * v3 + 280658140];
    do
    {
      v6 = (int)*(v5 - 1);
      if ( v6 > 0 )
      {
        result = v5;
        do
        {
          v7 = (int)*result;
          if ( dword_140404A6C[1760 * v7 + 278845898] == 27 )
          {
            v8 = (int)dword_140404A6C[1760 * v7 + 278846053];
            if ( (unsigned int)v8 <= 0x1FF )
            {
              v9 = 5210 * v8;
              if ( dword_140404A6C[5210 * v8 + 129716709] )
              {
                if ( (int)dword_140404A6C[v9 + 129716712] > 0 )
                  dword_140404A6C[v2 + 71856272] += dword_140404A6C[24944 * dword_140404A6C[v9 + 129716710] + 346707730];
              }
            }
          }
          ++result;
          --v6;
        }
        while ( v6 );
      }
      v5 += 10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

//----- (0000000140117020) ----------------------------------------------------
__int64            sub_140117020(int a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  unsigned int *v6;
  float v7;
  signed int v8;
  int *v9;
  unsigned int *v10;
  __int64 v11;
  __int64 v12;
  signed int v13;
  unsigned int v14;
  signed int v15;
  signed int v16;
  __int64 v17;
  int v18;
  unsigned int *v19;
  __int64 v20;
  signed int v21;
  __int64 v22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140117020[128];
#define v23 (*(float (*)[4])(void *)(sr_frame_140117020 + 0)) /* [rsp+20h] */
#define v24 (*(_OWORD (*)[2])(void *)(sr_frame_140117020 + 16)) /* [rsp+30h] */
#define v25 (*(int (*))(void *)(sr_frame_140117020 + 48)) /* [rsp+50h] */
#define v26 (*(unsigned int (*))(void *)(sr_frame_140117020 + 112)) /* [rsp+90h] */

  result = a1;
  v2 = 3597LL * a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  v4 = dword_140404A6C[v2 + 71856286];
  v26 = v4;
  if ( (_DWORD)v3 != -1 )
  {
    result = (__int64)&g_18329E52C;
    v5 = 0;
    v6 = &dword_140404A6C[v2 + 71857786];
    v7 = *(float *)&dword_140404A6C[7166 * v3 + 280651441];
    LODWORD(v23[0]) = dword_140404A6C[7166 * v3 + 280651440];
    LODWORD(v23[2]) = dword_140404A6C[7166 * v3 + 280651442];
    v23[1] = v7;
    v25 = 1065353216;
    v24[0] = xmmword_140278D30;
    v24[1] = xmmword_140278D30;
    do
    {
      v8 = 0;
      if ( (int)*v6 > 0 )
      {
        v9 = (int *)(v6 + 2);
        v10 = v6 + 2;
        do
        {
          result = *(v10 - 1);
          if ( (int)result > 14 )
          {
            if ( (_DWORD)result == 27 )
            {
              if ( game_type == 4 )
              {
                v16 = sr_CreateItem(27, v23, nullptr, (float *)v24);
                v17 = v16;
                sub_1400E35D0(v16, -1, v3, v5);
                result = g_16B2A2EE0;
                if ( (int)g_16B2A2EE0 > 0 )
                {
                  v18 = *v9;
                  v19 = &g_16B2A2EEC;
                  v20 = g_16B2A2EE0;
                  do
                  {
                    if ( v19[1] == v18 )
                    {
                      result = *v19;
                      dword_140404A6C[1760 * v17 + 278846053] = result;
                    }
                    v19 += 16;
                    --v20;
                  }
                  while ( v20 );
                  v4 = v26;
                }
              }
              else if ( v4 <= 2 )
              {
                result = sub_1400F00D0(*v10, v4, v10[1]);
                v14 = result;
                if ( (_DWORD)result != -1 )
                {
                  v15 = sr_CreateItem(27, v23, nullptr, (float *)v24);
                  dword_140404A6C[1760 * v15 + 278846053] = v14;
                  result = sub_1400E35D0(v15, -1, v3, v5);
                }
              }
            }
            else if ( (_DWORD)result == 18 )
            {
              v21 = sr_CreateItem(18, v23, nullptr, (float *)v24);
              v22 = 1760LL * v21;
              dword_140404A6C[v22 + 278846062] = *v10;
              dword_140404A6C[v22 + 278846063] = v10[1];
              result = sub_1400E35D0(v21, -1, v3, v5);
            }
          }
          else
          {
            v11 = (int)sr_CreateItem(result, v23, nullptr, (float *)v24);
            v12 = (int)*(v10 - 1);
            if ( dword_140404A6C[1268 * v12 + 278521289] )
            {
              if ( (int)*v10 > 0 )
              {
                v13 = sr_CreateItem((int)v12 + 1, v23, nullptr, (float *)v24);
                dword_140404A6C[1760 * v13 + 278845974] = v10[1];
                sub_1400E35D0(v11, v13, -1, 0);
              }
            }
            else
            {
              dword_140404A6C[1760 * v11 + 278845974] = v10[1];
            }
            result = sub_1400E35D0(v11, -1, v3, v5);
          }
          ++v8;
          v9 += 3;
          v10 += 3;
        }
        while ( v8 < (int)*v6 );
      }
      ++v5;
      v6 += 25;
    }
    while ( v5 < 7 );
  }
  return result;
}
#undef v23
#undef v24
#undef v25
#undef v26

//----- (0000000140117820) ----------------------------------------------------
void            sub_140117820(unsigned int a1)
{
  __int64 v1;
  bool v2;
  int v3;
  unsigned int *v4;
  signed int v5;
  signed int v6;
  unsigned int v7;
  unsigned int *v8;

  if ( a1 <= 0xFF )
  {
    v1 = (int)a1;
    v2 = dword_140404A6C[a1 + 284023074] == 1;
    dword_140404A6C[a1 + 284023074] ^= 1u;
    if ( v2 )
    {
      v5 = g_183F7B2F4;
      v6 = 0;
      if ( (int)g_183F7B2F4 > 0 )
      {
        v7 = dword_140404A6C[3597 * v1 + 71856265];
        v8 = &g_183F7B2F8;
        do
        {
          if ( *v8 == v7 )
          {
            g_183F7B2F4 = v5 - 1;
            *v8 = dword_140404A6C[v5 + 284023330];
            v5 = g_183F7B2F4;
          }
          else
          {
            ++v6;
            ++v8;
          }
        }
        while ( v6 < v5 );
      }
    }
    else
    {
      v3 = 0;
      if ( (int)g_183F7B2F4 <= 0 )
      {
LABEL_7:
        if ( (int)g_183F7B2F4 < 1024 )
        {
          dword_140404A6C[g_183F7B2F4 + 284023331] = dword_140404A6C[3597 * a1 + 71856265];
          ++g_183F7B2F4;
        }
      }
      else
      {
        v4 = &g_183F7B2F8;
        while ( *v4 != dword_140404A6C[3597 * a1 + 71856265] )
        {
          ++v3;
          ++v4;
          if ( v3 >= (int)g_183F7B2F4 )
            goto LABEL_7;
        }
      }
    }
  }
}

//----- (00000001401189F0) ----------------------------------------------------
__int64            sub_1401189F0(int a1, int a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  float v7;
  float v8;

  result = a1;
  v3 = 3597LL * a1;
  v4 = (int)dword_140404A6C[v3 + 71856286];
  if ( (_DWORD)v4 != -1 )
  {
    v5 = dword_140404A6C[v3 + 71856288];
    if ( v5 < 10000 )
    {
      result = (unsigned int)(v5 + a2);
      if ( (int)result >= 10000 )
        a2 = 10000 - v5;
    }
    else
    {
      a2 = 0;
    }
    v6 = 3 * v4;
    v7 = (float)(int)dword_140404A6C[v3 + 71856272];
    v8 = (float)a2 * *(float *)&dword_140404A6C[2 * v6 + 335047062];
    if ( v7 > v8 )
    {
      dword_140404A6C[2 * v6 + 335047061] += a2;
      dword_140404A6C[v3 + 71856272] = (int)(float)(v7 - v8);
      result = (unsigned int)(v5 + a2);
      dword_140404A6C[v3 + 71856288] = result;
    }
  }
  return result;
}

//----- (000000014011AF80) ----------------------------------------------------
__int64            sub_14011AF80(int a1, int a2)
{
  __int64 v2;
  __int64 result;
  signed int v5;
  __int64 v6;
  __int64 v7;
  float v8;
  unsigned int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  signed int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  float v40;
  __m128i v41;

  v2 = 3597LL * a1;
  result = (int)dword_140404A6C[v2 + 71856286];
  if ( (unsigned int)result <= 5 )
  {
    v5 = dword_140404A6C[v2 + 71856288];
    if ( v5 >= a2 )
    {
      v6 = 3 * result;
      v7 = 2;
      v8 = *(float *)&dword_140404A6C[6 * result + 335047062];
      v9 = &dword_140404A6C[5873 * result + 283831886];
      do
      {
        if ( *(v9 - 298) )
        {
          v10 = *(v9 - 279);
          if ( v10 > 0 )
          {
            v11 = v10 - dword_140404A6C[2 * v6 + 335047066];
            v12 = dword_140404A6C[2 * v6 + 335047061];
            if ( v12 > 0 )
            {
              v13 = 0;
              if ( v11 >= 0 )
                v13 = v11;
              v8 = v8 - (float)((float)v13 / (float)v12);
            }
          }
        }
        if ( *(v9 - 19) )
        {
          if ( (int)*v9 > 0 )
          {
            v14 = dword_140404A6C[2 * v6 + 335047061];
            if ( v14 > 0 )
            {
              v15 = 0;
              if ( (int)(*v9 - dword_140404A6C[2 * v6 + 335047066]) >= 0 )
                v15 = *v9 - dword_140404A6C[2 * v6 + 335047066];
              v8 = v8 - (float)((float)v15 / (float)v14);
            }
          }
        }
        if ( v9[260] )
        {
          v16 = v9[279];
          if ( v16 > 0 )
          {
            v17 = v16 - dword_140404A6C[2 * v6 + 335047066];
            v18 = dword_140404A6C[2 * v6 + 335047061];
            if ( v18 > 0 )
            {
              v19 = 0;
              if ( v17 >= 0 )
                v19 = v17;
              v8 = v8 - (float)((float)v19 / (float)v18);
            }
          }
        }
        if ( v9[539] )
        {
          v20 = v9[558];
          if ( v20 > 0 )
          {
            v21 = v20 - dword_140404A6C[2 * v6 + 335047066];
            v22 = dword_140404A6C[2 * v6 + 335047061];
            if ( v22 > 0 )
            {
              v23 = 0;
              if ( v21 >= 0 )
                v23 = v21;
              v8 = v8 - (float)((float)v23 / (float)v22);
            }
          }
        }
        if ( v9[818] )
        {
          v24 = v9[837];
          if ( v24 > 0 )
          {
            v25 = v24 - dword_140404A6C[2 * v6 + 335047066];
            v26 = dword_140404A6C[2 * v6 + 335047061];
            if ( v26 > 0 )
            {
              v27 = 0;
              if ( v25 >= 0 )
                v27 = v25;
              v8 = v8 - (float)((float)v27 / (float)v26);
            }
          }
        }
        if ( v9[1097] )
        {
          v28 = v9[1116];
          if ( v28 > 0 )
          {
            v29 = v28 - dword_140404A6C[2 * v6 + 335047066];
            v30 = dword_140404A6C[2 * v6 + 335047061];
            if ( v30 > 0 )
            {
              v31 = 0;
              if ( v29 >= 0 )
                v31 = v29;
              v8 = v8 - (float)((float)v31 / (float)v30);
            }
          }
        }
        if ( v9[1376] )
        {
          v32 = v9[1395];
          if ( v32 > 0 )
          {
            v33 = v32 - dword_140404A6C[2 * v6 + 335047066];
            v34 = dword_140404A6C[2 * v6 + 335047061];
            if ( v34 > 0 )
            {
              v35 = 0;
              if ( v33 >= 0 )
                v35 = v33;
              v8 = v8 - (float)((float)v35 / (float)v34);
            }
          }
        }
        if ( v9[1655] )
        {
          v36 = v9[1674];
          if ( v36 > 0 )
          {
            v37 = v36 - dword_140404A6C[2 * v6 + 335047066];
            v38 = dword_140404A6C[2 * v6 + 335047061];
            if ( v38 > 0 )
            {
              v39 = 0;
              if ( v37 >= 0 )
                v39 = v37;
              v8 = v8 - (float)((float)v39 / (float)v38);
            }
          }
        }
        v9 += 2232;
        --v7;
      }
      while ( v7 );
      v40 = 0.94999999;
      if ( game_type == 3 )
        v40 = 0.98000002;
      v41 = _mm_cvtsi32_si128(dword_140404A6C[v2 + 71856272]);
      dword_140404A6C[2 * v6 + 335047061] -= a2;
      dword_140404A6C[v2 + 71856288] = v5 - a2;
      result = (unsigned int)(int)(float)((float)((float)(v40 * v8) * (float)a2) + SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v41), f32)[0]);
      dword_140404A6C[v2 + 71856272] = result;
    }
  }
  return result;
}

//----- (000000014011B7F0) ----------------------------------------------------
__int64            sub_14011B7F0(int a1, int a2)
{
  __int64 v4;
  int v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B7F0[576];
#define v7 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[512])(void *)(sr_frame_14011B7F0 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 560)) /* [rsp+230h] */

  if ( (unsigned int)a1 <= 0xFF )
  {
    v4 = 3597LL * a1;
    if ( !dword_140404A6C[v4 + 71856277] && a2 > 0 && game_type - 4 > 1 )
    {
      crt_sprintf(
        v8,
        "%s(%d) team damage: %d",
        (     char *)&dword_140404A6C[v4 + 71856254],
        dword_140404A6C[v4 + 71856265],
        a2);
      v5 = dword_140404A6C[v4 + 71856292];
      if ( v5 != -1 )
        sub_1400A9760(v5, 3u, 0, (signed int)(a2 * g_183EBFCE8) / 100);
      sub_140051DC0(a1);
      sub_140051F50(a1);
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v7
#undef v8
#undef v9

//----- (000000014011B8F0) ----------------------------------------------------
_BOOL8            sub_14011B8F0(float *a1, int a2, float a3)
{
  return corporation_contains_point(a1, a2, a3);
}

//----- (000000014011B960) ----------------------------------------------------
_BOOL8            sub_14011B960(float *a1, int a2, float a3)
{
  return corporation_vault_contains_point(a1, a2, a3);
}

//----- (000000014011B9F0) ----------------------------------------------------
_BOOL8            sub_14011B9F0(int a1, float *a2, float a3)
{
  return world_region_contains_point(a1, a2, a3);
}

//----- (000000014011BAD0) ----------------------------------------------------
_BOOL8            sub_14011BAD0(float *a1)
{
  return area_view_contains_point(a1);
}

//----- (000000014011BD10) ----------------------------------------------------
__int64 sub_14011BD10(     char *a1, ...)
{
  char *v2;
  __int64 *v3;
  va_list va;

  va_start(va, a1);
  v2 = sub_14020B528(1u);
  v3 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v3, (__int64)v2, (__int64)a1, 0, (__int64)va);
}

//----- (000000014011BD70) ----------------------------------------------------
__int64            sub_14011BD70(signed int a1)
{
  int v2;
  char v3;
  int v4;
  signed int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  signed int v9;
  unsigned int v10;

  crt_memcpy((__m128i *)&g_185A2D7F0, (     __m128i *)&packet_in_data, a1);
  v2 = BYTE2(g_185A2D7F4);
  v3 = HIBYTE(g_185A2D7F4);
  g_185A2D7EC = 1;
  *(_QWORD *)&g_185A2D7E0 = 8;
  g_185A2D7E8 = a1;
  if ( BYTE2(g_185A2D7F4) >= 0x10u || HIBYTE(g_185A2D7F4) > 0x10u )
    return 0;
  v4 = g_1853BD428;
  v5 = -1;
  while ( v4 != g_1853BD42C )
  {
    if ( dword_140404A6C[16387 * v4 + 289333873] == LOWORD(g_185A2D7F4) )
      v5 = v4;
    else
      v4 = ((_BYTE)v4 + 1) & 0x3F;
    if ( v5 != -1 )
      goto LABEL_12;
  }
  v6 = 16387LL * (int)g_1853BD42C;
  v5 = g_1853BD42C;
  dword_140404A6C[v6 + 289333873] = LOWORD(g_185A2D7F4);
  *(_QWORD *)&dword_140404A6C[v6 + 289333874] = 0;
  g_1853BD42C = (LOBYTE(g_1853BD42C) + 1) & 0x3F;
  if ( g_1853BD428 == g_1853BD42C )
    g_1853BD428 = (LOBYTE(g_1853BD428) + 1) & 0x3F;
LABEL_12:
  v7 = 16387LL * v5;
  v8 = a1 - 8;
  crt_memcpy(
    (__m128i *)((char *)&dword_140404A6C[v7 + 289333876] + (unsigned int)(v2 << 10)),
    (     __m128i *)&g_185A2D7F8,
    v8);
  v9 = v8 + (v2 << 10);
  if ( (int)dword_140404A6C[v7 + 289333875] < v9 )
    dword_140404A6C[v7 + 289333875] = v9;
  v10 = dword_140404A6C[v7 + 289333874] | (1 << v2);
  dword_140404A6C[v7 + 289333874] = v10;
  if ( (((1 << v3) - 1) & v10) != (1 << v3) - 1 )
    return 0;
  *(_QWORD *)&packet_in_byte = 4;
  crt_memcpy(
    (__m128i *)&packet_in_data,
    (     __m128i *)&dword_140404A6C[v7 + 289333876],
    (int)dword_140404A6C[v7 + 289333875]);
  return dword_140404A6C[v7 + 289333875];
}

//----- (000000014011BF40) ----------------------------------------------------
__int64 sub_14011BF40(__int64 out, __int64 mesh, float *position, float *rotation)
{
  extern uintptr_t collision_place_mesh(float (*)[3], const void *, const float *, const float *);
  return (__int64)collision_place_mesh((float (*)[3])(uintptr_t)out, (const void *)(uintptr_t)mesh,
                                      position, rotation);
}

//----- (000000014011C080) ----------------------------------------------------
_UNKNOWN **           sub_14011C080(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_multiply_transposed(float *, const float *, const float *);
  math_mat3_multiply_transposed(a1, a2, a3);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C300) ----------------------------------------------------
float            sub_14011C300(__int64 a1, float *a2)
{
  double v3;

  sub_14007A240(a1, a2);
  v3 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  return v3 + v3;
}

//----- (000000014011C340) ----------------------------------------------------
_UNKNOWN **           sub_14011C340(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_from_quat(float *, const float *);
  math_mat3_from_quat(a1, a2);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C490) ----------------------------------------------------
void            sub_14011C490(float *a1, float *a2)
{
  double v4;
  float v5;
  float v6;
  float v7;

  sub_14007A240((__int64)a1, a2);
  v4 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  v5 = v4 + v4;
  *(float *)&v4 = v5 * *a1;
  v6 = v5 * a1[1];
  v7 = v5 * a1[2];
  *a1 = *(float *)&v4;
  a1[1] = v6;
  a1[2] = v7;
}

//----- (000000014011C640) ----------------------------------------------------
float            sub_14011C640(float *a1, float *a2, float a3)
{
  return physics_sphere_exit_distance(a1, a2, a3);
}

//----- (000000014011C6B0) ----------------------------------------------------
__m128            sub_14011C6B0(__int64 a1, float *a2, float a3)
{
  return physics_sphere_entry_distance((const float *)a1, a2, a3);
}

//----- (000000014011C730) ----------------------------------------------------
__int64            sub_14011C730(__int64 a1, __int64 a2, __int64 a3)
{
  if ( g_183EBFD5C )
    sub_140198F0B(1, a2, a3);
  sub_14013D1B0();
  return render_cache_camera_uniforms_candidate();
}

//----- (000000014011C950) ----------------------------------------------------
double sub_14011C950()
{
  __int64 v0;
  __int64 v1;
  unsigned int *v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  double result;

  if ( !g_18B7D2FBC && !g_18DCF901C )
  {
    g_1A724E600 = xmmword_140278D30;
    g_1A724E610 = xmmword_140278D80;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    sub_14007A0E0(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sub_14007A0E0(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glUseProgram(shadow_program);
    glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
    glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
    glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
    glUniform3fv(shadow_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
    glBindBuffer(34963, dword_140404A6C[2 * g_183E98C14 + 283793813]);
    glEnableVertexAttribArray(0);
    v2 = &g_154161244;
    for ( i = 0; i < 98304; i += 24 )
    {
      if ( *(v2 - 1) )
      {
        /* sr_item_shadow_uniform: original MAXSS/DIVSS/CVTDQ2PS/MULSS order. */
        __m128 sr_shadow_denom=_mm_max_ss(_mm_set_ss(g_18417DE7C),_mm_set_ss(0.125f));
        __m128 sr_shadow_recip=_mm_div_ss(_mm_set_ss(8.0f),sr_shadow_denom);
        int32_t sr_shadow_age=(int32_t)(v2[6150]+1u);
        __m128 sr_shadow_value=_mm_cvtepi32_ps(_mm_setr_epi32(sr_shadow_age,0,0,0));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,_mm_set_ss(*(float *)&dword_140404A6C[111579653+263004*(int64_t)(int32_t)*v2]));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,sr_shadow_recip);
        glUniform1f((int)shadow_u_shadowlength,_mm_cvtss_f32(sr_shadow_value));
        /* sr_item_shadow_uniform_end */
        glVertexAttribPointer(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[312324436+3074*((int64_t)(int32_t)dword_140404A6C[i/4+315472211])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+315472211)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+315472211])*g_18AB70FAC)));
        (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*v2[6154]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[322062700+3074*((int64_t)(int32_t)dword_140404A6C[i/4+325210475])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+325210475)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+325210475])*g_18D09700C)));
      }
      v2 += 6930;
    }
    glDisableVertexAttribArray(0);
    glBindBuffer(34963, 0);
    return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, v5);
  }
  return result;
}

//----- (000000014011CC30) ----------------------------------------------------
__int64            sub_14011CC30(int a1)
{
  unsigned int v1;
  float v2;
  float v3;
  unsigned int *v4;
  float v5;
  __int64 v6;
  float v7;
  unsigned int *v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  unsigned int *v19;
  signed int i;
  signed int v21;
  _BYTE *v22;
  char *v23;
  float v24;
  unsigned int *v25;
  float v26;
  float v27;
  int v28;
  float v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  float v35;
  float v36;
  float v37;
  int *v38;
  int *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  float v45;
  float v46;
  int v47;
  _DWORD *v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int *v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  unsigned int *v60;
  float *v61;
  __int64 v62;
  float v63;
  __int64 v64;
  __int64 v65;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011CC30[128];
#define v67 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 8)) /* [rsp+8h] */
#define v68 (*(float (*))(void *)(sr_frame_14011CC30 + 40)) /* [rsp+28h] */
#define v69 (*(float (*))(void *)(sr_frame_14011CC30 + 44)) /* [rsp+2Ch] */
#define v70 (*(float (*))(void *)(sr_frame_14011CC30 + 48)) /* [rsp+30h] */
#define v71 (*(int (*))(void *)(sr_frame_14011CC30 + 56)) /* [rsp+38h] */
#define v72 (*(float (*))(void *)(sr_frame_14011CC30 + 64)) /* [rsp+40h] */
#define v73 (*(float (*))(void *)(sr_frame_14011CC30 + 68)) /* [rsp+44h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 72)) /* [rsp+48h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 80)) /* [rsp+50h] */
#define v76 (*(unsigned int * (*))(void *)(sr_frame_14011CC30 + 88)) /* [rsp+58h] */
#define v77 (*(_BYTE (*)[16])(void *)(sr_frame_14011CC30 + 96)) /* [rsp+60h] */
#define v78 (*(__int128 (*))(void *)(sr_frame_14011CC30 + 112)) /* [rsp+70h] */

  v71 = a1;
  crt_memset((void *)(uintptr_t)(&g_149F54C20), 0, 0x400u);
  g_150F55020 = 0;
  g_150F61024 = 0;
  v1 = sub_140198F9B();
  v2 = g_15ADA9280;
  v3 = g_183F7C54C;
  v4 = &g_154167E7C;
  v5 = g_183F7C548;
  v6 = 4096;
  v7 = g_183F7C544;
  v8 = &g_154167258;
  v9 = g_183F7CB60;
  v10 = 4096;
  v76 = &g_154167258;
  g_150F61028 = v1;
  do
  {
    if ( *(v8 - 6150) )
    {
      v8[775] = 0;
      *(_QWORD *)(v4 - 1) = 0;
      *(_QWORD *)(v4 + 1) = 0;
      v11 = v8[1];
      v12 = v8[2];
      v13 = *v8 + 1;
      v14 = (float)(int)*v8 * 8.0;
      v15 = (float)v11 * 8.0;
      v69 = (float)(v15 * v2) - 8.0;
      v16 = (float)v12 * 8.0;
      v70 = (float)(v16 * v2) - 8.0;
      v17 = (float)((float)((float)(v5 - (float)((float)(v15 + 4.0) * v2))
                          * (float)(v5 - (float)((float)(v15 + 4.0) * v2)))
                  + (float)((float)(v7 - (float)((float)(v14 + 4.0) * v2))
                          * (float)(v7 - (float)((float)(v14 + 4.0) * v2))))
          + (float)((float)(v3 - (float)((float)(v16 + 4.0) * v2)) * (float)(v3 - (float)((float)(v16 + 4.0) * v2)));
      v68 = (float)(v2 * v14) - 8.0;
      v72 = (float)((float)((float)v13 * 8.0) * v2) + 8.0;
      v73 = (float)((float)((float)(v11 + 1) * 8.0) * v2) + 8.0;
      *(float *)&v74 = (float)((float)((float)(v12 + 1) * 8.0) * v2) + 8.0;
      if ( v9 )
      {
        if ( v17 <= 4096.0 )
          goto LABEL_7;
      }
      if ( (unsigned int)sub_14001FD20(&v68, &v72) )
      {
LABEL_7:
        if ( v17 < 1024.0 || v17 < 36864.0 )
        {
          v8[775] = 1;
          *(v4 - 1) = 1;
          *v4 = 1;
          v4[1] = 1;
          v4[2] = 1;
        }
      }
    }
    v8 += 6930;
    v4 += 6930;
    --v10;
  }
  while ( v10 );
  v18 = 27704LL - (_QWORD)v77;
  v19 = &g_154161240;
  v75 = 27704LL - (_QWORD)v77;
  for ( i = 0; i < 4096; ++i )
  {
    if ( *v19 && v19[6925] )
    {
      v21 = 0;
      v22 = v77;
      v23 = (char *)v19 + v18;
      do
      {
        if ( *(_DWORD *)&v23[(_QWORD)v22] )
          sub_140013120(i, v21);
        ++v21;
        v22 += 4;
      }
      while ( v21 < 4 );
      v18 = v75;
      v6 = 4096;
    }
    v19 += 6930;
  }
  v24 = g_15ADA9280;
  v25 = &g_154167248;
  v26 = g_183F7C54C;
  v27 = g_183F7C548;
  v28 = 0;
  v29 = g_183F7C544;
  v30 = g_150F55020;
  do
  {
    if ( *(v25 - 6146) && v25[779] )
    {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      if ( v25[1] != -1 )
      {
        LOBYTE(v31) = *v25 != -1;
        v32 = v31;
      }
      v34 = 0;
      if ( v25[2] != -1 )
        v33 = v32;
      if ( v25[3] != -1 )
        v34 = v33;
      if ( v34 )
      {
        v35 = (float)(int)v25[4];
        dword_140404A6C[2 * v30 + 70078830] = v28;
        v36 = (float)((float)(int)v25[6] * 8.0) + 4.0;
        v37 = (float)((float)((float)(int)v25[5] * 8.0) + 4.0) * v24;
        v68 = (float)((float)(v35 * 8.0) + 4.0) * v24;
        v69 = v37;
        v70 = v36 * v24;
        *(float *)&dword_140404A6C[2 * g_150F55020 + 70078831] = fsqrt(
                                                                                 (float)((float)((float)(v27 - v37)
                                                                                               * (float)(v27 - v37))
                                                                                       + (float)((float)(v29 - v68)
                                                                                               * (float)(v29 - v68)))
                                                                               + (float)((float)(v26 - (float)(v36 * v24))
                                                                                       * (float)(v26 - (float)(v36 * v24))));
        v30 = ++g_150F55020;
      }
      else
      {
        v25[779] = 0;
      }
    }
    ++v28;
    v25 += 6930;
  }
  while ( v28 < 4096 );
  v38 = (int *)v76;
  v39 = (int *)&g_18B772FB8;
  v40 = v71;
  do
  {
    if ( *(v38 - 6150) )
    {
      if ( !v40 )
        goto LABEL_37;
      v41 = v38[1];
      v42 = v38[2];
      v43 = *v38 + 1;
      v68 = (float)((float)((float)*v38 * 8.0) * v24) - 8.0;
      v69 = (float)((float)((float)v41 * 8.0) * v24) - 8.0;
      v70 = (float)((float)((float)v42 * 8.0) * v24) - 8.0;
      v72 = (float)((float)((float)v43 * 8.0) * v24) + 8.0;
      v73 = (float)((float)((float)(v41 + 1) * 8.0) * v24) + 8.0;
      *(float *)&v74 = (float)((float)((float)(v42 + 1) * 8.0) * v24) + 8.0;
      if ( (unsigned int)sub_14001FD20(&v68, &v72) || v38[775] )
      {
LABEL_37:
        v44 = v38[6];
        v45 = (float)((float)((float)v38[1] * 8.0) + 4.0) * v24;
        v68 = (float)((float)((float)*v38 * 8.0) + 4.0) * v24;
        v46 = (float)v38[2];
        v69 = v45;
        v70 = (float)((float)(v46 * 8.0) + 4.0) * v24;
        if ( v44 > 0 )
        {
          v47 = v38[775];
          v48 = v38 + 8;
          v49 = (unsigned int)v44;
          do
          {
            v50 = *((unsigned __int8 *)v48 - 4);
            if ( !v47 || !dword_140404A6C[46 * v50 + 421784738] )
            {
              v51 = v39[3246088];
              if ( (_DWORD)v51 != -1 )
              {
                v52 = *v39;
                if ( (_DWORD)v52 != -1 )
                {
                  if ( *v48 )
                  {
                    v53 = (int)dword_140404A6C[v50 + 40714349];
                    v54 = &dword_140404A6C[v50 + 40714349];
                    v55 = v50 << 14;
                    dword_140404A6C[v55 + 40714605 + v53] = 3 * *v48;
                    v56 = v48[1]
                        + (int)(v51 * g_18B7D2FCC
                              + dword_140404A6C[3074 * v51 + 315570524 + 3 * v39[3246089]])
                        / 4
                        + 2 * v48[1];
                    dword_140404A6C[v55 + 53297517 + (int)*v54] = v56;
                    dword_140404A6C[v55 + 53297517 + (int)*v54] *= 4;
                    *(_QWORD *)&dword_140404A6C[2 * v55 + 44908909 + 2 * (int)*v54] = 4 * v56;
                    *(_QWORD *)&dword_140404A6C[2 * v55 + 57491821 + 2 * (int)*v54] = dword_140404A6C[v55 + 53297517 + (int)*v54];
                    v57 = (int)(v52 * g_18AB70FAC + dword_140404A6C[3074 * v52 + 312324436 + 3 * v39[1]]);
                    dword_140404A6C[v55 + 65880429 + (int)(*v54)++] = ((BYTE4(v57) & 0x3F) + (int)v57) >> 6;
                  }
                }
              }
            }
            v48 += 3;
            --v49;
          }
          while ( v49 );
          v40 = v71;
        }
      }
    }
    v39 += 6;
    v38 += 6930;
    --v6;
  }
  while ( v6 );
  v58 = g_150F55020;
  v59 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    v60 = &g_1A87C6BA4;
    v61 = (float *)&g_150F59028;
    v62 = g_150F55020;
    do
    {
      v63 = *v61 * 256.0;
      v61 += 2;
      *v60++ = (int)(float)(16777216.0 - v63);
      --v62;
    }
    while ( v62 );
  }
  renderer_sort_count = v58;
  sub_14007D710();
  if ( v58 > 0 )
  {
    v64 = 0;
    do
    {
      v65 = (int)dword_140404A6C[v64 + 436668494];
      ++v64;
      ++v59;
      dword_140404A6C[v64 + 70074733] = dword_140404A6C[2 * v65 + 70078830];
    }
    while ( v59 < (int)g_150F55020 );
  }
  return 0; /* all native callers ignore EAX */
}
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

//----- (000000014011E730) ----------------------------------------------------
double            sub_14011E730(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = a1;
  v3 = a2;
  glUseProgram(skin_program);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glEnableVertexAttribArray(4);
  glEnableVertexAttribArray(5);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v3 + 283791190] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(12));
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(20));
  glVertexAttribIPointer(4, 4, 5124, 4 * dword_140404A6C[196707 * v3 + 160858070], 32);
  glVertexAttribPointer(5, 4, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(48));
  glUniform3fv(skin_u_boneorgposition, 16, &dword_140404A6C[240 * v2 + 23875685]);
  glUniform3fv(skin_u_boneposition, 16, &dword_140404A6C[240 * v2 + 23875733]);
  glUniformMatrix3fv(skin_u_boneorientation, 16, 0, &dword_140404A6C[240 * v2 + 23875781]);
  glEnable(35977);
  glBeginTransformFeedback(0);
  glDrawArrays(0, 0, dword_140404A6C[196707 * v3 + 160858069]);
  glEndTransformFeedback();
  glDisable(35977);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  glDisableVertexAttribArray(4);
  glDisableVertexAttribArray(5);
  glBindBuffer(34962, 0);
  return ((double (*)(_QWORD))glUseProgram)(0);
}

//----- (000000014011E9B0) ----------------------------------------------------
__int64 sub_14011E9B0()
{
  __int64 v0;
  int v1;
  int i;
  int j;
  int v4;
  float *v5;
  __int64 v6;
  int v7;
  float *v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int *v13;
  float *v14;
  unsigned int *v15;
  __int64 v16;
  int v17;
  float v18;
  float v19;
  __int128 v20;
  int v21;
  unsigned int *v22;
  unsigned int v23;
  float v24;
  unsigned int *v25;
  __int64 v26;
  __int64 v27;
  unsigned int *v28;
  __int64 v29;
  float *v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned int v34;
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
  unsigned int *v49;
  __int64 v50;
  signed int v51;
  signed int v52;
  unsigned int *v53;
  __int64 v54;
  signed int v55;
  __int64 v56;
  unsigned int *v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  float *v87;
  __int64 v88;
  __int64 v89;
  float v90;
  float v91;
  float *v92;
  float v93;
  float v94;
  float v95;
  float v96;
  __int64 v97;
  __int64 v98;
  float v99;
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
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  __int64 v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  signed int v157;
  unsigned int *v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  unsigned int *v176;
  signed int v177;
  float *v178;
  unsigned int v179;
  double v180;
  __int128 v181;
  float v182;
  __int128 v183;
  unsigned int *v184;
  unsigned int *v185;
  __int64 v186;
  signed int v187;
  __int64 v188;
  __int64 v189;
  unsigned int v190;
  __int64 v191;
  unsigned int v192;
  float v193;
  __int64 v194;
  unsigned int v195;
  float v196;
  __int64 v197;
  __int64 v198;
  signed int v199;
  signed int v200;
  unsigned int *v201;
  signed int v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned int *v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  unsigned int *v210;
  unsigned int v211;
  unsigned int v212;
  __int64 v213;
  __int64 v214;
  unsigned int *v215;
  __int64 v216;
  unsigned int *v217;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011E9B0[3232];
#define v219 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 0)) /* [rsp+8h] */
#define v220 (*(int (*))(void *)(sr_frame_14011E9B0 + 32)) /* [rsp+28h] */
#define v221 (*(int (*))(void *)(sr_frame_14011E9B0 + 40)) /* [rsp+30h] */
#define v222 (*(int (*))(void *)(sr_frame_14011E9B0 + 48)) /* [rsp+38h] */
#define v223 (*(int (*))(void *)(sr_frame_14011E9B0 + 56)) /* [rsp+40h] */
#define v224 (*(unsigned int (*))(void *)(sr_frame_14011E9B0 + 64)) /* [rsp+48h] */
#define v225 (*(float (*))(void *)(sr_frame_14011E9B0 + 68)) /* [rsp+4Ch] */
#define v226 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 72)) /* [rsp+50h] */
#define v227 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 80)) /* [rsp+58h] */
#define v228 (*(unsigned int * (*))(void *)(sr_frame_14011E9B0 + 88)) /* [rsp+60h] */
#define v229 (*(__int128 (*))(void *)(sr_frame_14011E9B0 + 96)) /* [rsp+68h] */
#define v230 (*(__int128 (*))(void *)(sr_frame_14011E9B0 + 112)) /* [rsp+78h] */
#define v231 (*(float (*))(void *)(sr_frame_14011E9B0 + 128)) /* [rsp+88h] */
#define v232 (*(_DWORD (*)[2])(void *)(sr_frame_14011E9B0 + 144)) /* [rsp+98h] */
#define v233 (*(_DWORD (*)[766])(void *)(sr_frame_14011E9B0 + 152)) /* [rsp+A0h] */
#define v234 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 3216)) /* [rsp+C98h] */

  glBindTexture(3553, renderer_white_texture);
  v1 = 0;
  for ( i = 0; i < (int)g_16B265F7C; ++i )
  {
    glVertexAttrib3f(2, 1.0f, 0.0f, 0.5f); /* native XMM1-3 */
    sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * i + 723935104), 4.0, 2);
  }
  if ( g_16B165F68 )
  {
    glVertexAttrib3f(2, 1.0f, 1.0f, 0.0f); /* native XMM1-3 */
    for ( j = 0; j < (int)world_train_stop_count; ++j )
      sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 20LL * j + 454739976), 1.0, 1);
  }
  v4 = 0;
  if ( (int)game_unknown_16b1f5f74 > 0 )
  {
    v5 = (float *)&g_16B1F5F90;
    do
    {
      v6 = 7LL * v4;
      glVertexAttrib3fv(2, &dword_140404A6C[v6 + 179815750]);
      sub_140125670(&dword_140404A6C[v6 + 179815747], *v5, 2);
      ++v4;
      v5 += 7;
    }
    while ( v4 < (int)game_unknown_16b1f5f74 );
  }
  v7 = 0;
  if ( (int)g_16B22DF78 > 0 )
  {
    v8 = (float *)&g_16B22DF94;
    do
    {
      v9 = 7LL * v7;
      glVertexAttrib3fv(2, &dword_140404A6C[v9 + 179873095]);
      sub_140125670(&dword_140404A6C[v9 + 179873092], *v8, 2);
      ++v7;
      v8 += 7;
    }
    while ( v7 < (int)g_16B22DF78 );
  }
  v10 = 256;
  v11 = &g_18329E570;
  v227 = 256;
  v12 = &g_18329E52C;
  do
  {
    if ( *(v11 - 154) )
    {
      v13 = &g_18399DF3C;
      v14 = (float *)v12;
      v15 = v11;
      v16 = 16;
      do
      {
        v17 = *(v13 - 1);
        v18 = *((float *)v13 + 1);
        v19 = *(float *)v13;
        v229 = *(_OWORD *)(v15 - 5);
        v20 = *(_OWORD *)(v15 - 1);
        v220 = LODWORD(v18);
        v230 = v20;
        v231 = *((float *)v15 + 3);
        sub_14007E2A0(v14, (__int64)&v229, v17, v19, v18);
        v14 += 78;
        v15 += 78;
        v13 += 25;
        --v16;
      }
      while ( v16 );
      v10 = v227;
    }
    v12 += 7166;
    v11 += 7166;
    v227 = --v10;
  }
  while ( v10 );
  v21 = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    v22 = &g_15FD16278;
    do
    {
      v231 = 1.0;
      v229 = xmmword_140278D30;
      v230 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v229, (float *)&v229 + 3, sr_export_float_lane_container(1070141403));
      sub_14007B2A0((__int64)&v229, (float *)&v229 + 3, sr_export_float_lane_container((unsigned __int64)v22[4]));
      sub_140125670(&dword_140404A6C[383 * v21 + 132400641], 0.125, 1);
      *(float *)&v23 = *((float *)v22 - 2) - (float)(*((float *)&v230 + 2) * 1.5);
      v223 = 0;
      v222 = 0;
      v224 = v23;
      v24 = *((float *)v22 - 1) - (float)(*((float *)&v230 + 3) * 1.5);
      v221 = 1065353216;
      v220 = 0x40000000;
      v225 = v24;
      *(float *)&v226 = *(float *)v22 - (float)(v231 * 1.5);
      sub_14007E010(&v224, &v229, 1.0, 1.0, 2.0, 0x3F800000u, 0, 0);
      if ( v21 == g_16B2A2220 )
        sub_14007E010(&v224, &v229, 1.0, 2.0, 2.0, 0x3F800000u, 0x3F800000u, 0);
      ++v21;
      v22 += 383;
    }
    while ( v21 < (int)world_unknown_15fd16260_count );
  }
  v25 = (unsigned int *)&g_183EBFD60;
  v26 = 6;
  do
  {
    sub_14007DDF0((float *)v25, (float *)(v25 + 3));
    sub_14007DDF0((float *)(v25 + 6), (float *)(v25 + 9));
    v25 += 5873;
    --v26;
  }
  while ( v26 );
  v28 = &g_1B4657DBC;
  v29 = 8;
  do
  {
    v220 = 1065353216;
    glVertexAttrib4f(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
    sub_140125670(v28, 1.0, 2);
    v28 += 19;
    --v29;
  }
  while ( v29 );
  v30 = (float *)&g_182BBB194;
  do
  {
    if ( *((_DWORD *)v30 - 5) )
    {
      v31 = *(int *)v30;
      v220 = 1061158912;
      glVertexAttrib4f(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.8000000000000p-1f);
      if ( *((_DWORD *)v30 - 4) )
      {
        v220 = 1061158912;
        glVertexAttrib4f(2,0x0.0p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.8000000000000p-1f);
      }
      v32 = 0;
      v33 = 1268 * v31;
      do
      {
        v34 = v32 & 3;
        if ( (v32 & 3) == 0 || v34 == 3 )
          v35 = -*(float *)&dword_140404A6C[v33 + 278521350];
        else
          v35 = *(float *)&dword_140404A6C[v33 + 278521350];
        v36 = *(float *)&dword_140404A6C[v33 + 278521351];
        v37 = (float)(v35 * v30[37]) + v30[19];
        v38 = (float)(v35 * v30[36]) + v30[18];
        v39 = (float)(v35 * v30[38]) + v30[20];
        if ( (unsigned int)v32 < 4 )
          v36 = -v36;
        v40 = v36 * v30[40];
        v41 = v36 * v30[39];
        v42 = v39 + (float)(v36 * v30[41]);
        v43 = *(float *)&dword_140404A6C[v33 + 278521352];
        v44 = v37 + v40;
        v45 = v38 + v41;
        if ( v34 < 2 )
          v43 = -v43;
        v46 = v43 * v30[42];
        v47 = v42 + (float)(v43 * v30[44]);
        v225 = v44 + (float)(v43 * v30[43]);
        *(float *)&v224 = v45 + v46;
        *(float *)&v226 = v47;
        sub_140125670(&v224, 0.03125, 1);
        ++v32;
      }
      while ( v32 < 8 );
    }
    v30 += 1760;
  }
  while ( (__int64)v30 < (__int64)&g_18329B194 );
  glBindTexture(3553, renderer_white_texture);
  v51 = 0;
  v52 = world_street_count;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  LODWORD(v227) = 0;
  g_1AD299450 = xmmword_140279650;
  if ( (int)world_street_count > 0 )
  {
    v49 = &g_195AD3920;
    v53 = &g_195AD38F8;
    v54 = 0;
    v228 = &g_195AD3920;
    do
    {
      v55 = 0;
      if ( (int)*v53 > 0 )
      {
        v56 = 5144LL * v51;
        v57 = v49;
        do
        {
          v58 = (int)*(v57 - 1);
          v59 = 3 * (v54 + (int)v57[1]);
          v60 = 3 * (v54 + (int)*v57);
          v61 = *(float *)&dword_140404A6C[3 * v54 + 358297508 + 3 * v58];
          v62 = *(float *)&dword_140404A6C[3 * v54 + 358297509 + 3 * v58];
          v63 = *(float *)&dword_140404A6C[3 * v54 + 358297508 + 3 * (int)v57[1]] - v61;
          v64 = *(float *)&dword_140404A6C[3 * v54 + 358297507 + 3 * v58];
          v65 = *(float *)&dword_140404A6C[3 * v54 + 358297509 + 3 * (int)*v57] - v62;
          v66 = *(float *)&dword_140404A6C[3 * v54 + 358297507 + 3 * (int)v57[1]] - v64;
          v67 = *(float *)&dword_140404A6C[3 * v54 + 358297507 + 3 * (int)*v57] - v64;
          v68 = *(float *)&dword_140404A6C[3 * v54 + 358297508 + 3 * (int)*v57] - v61;
          v69 = *(float *)&dword_140404A6C[3 * v54 + 358297509 + 3 * (int)v57[1]] - v62;
          v70 = (float)(v63 * v65) - (float)(v69 * v68);
          v71 = (float)(v69 * v67) - (float)(v66 * v65);
          v72 = (float)(v66 * v68) - (float)(v63 * v67);
          v73 = fsqrt((float)((float)(v71 * v71) + (float)(v70 * v70)) + (float)(v72 * v72));
          if ( v73 == 0.0 )
          {
            v74 = 0.0;
            v75 = 0.0;
            v76 = 0.0;
          }
          else
          {
            v74 = v70 * (float)(1.0 / v73);
            v75 = v71 * (float)(1.0 / v73);
            v76 = v72 * (float)(1.0 / v73);
          }
          v77 = (float)((float)(v74 * g_18417DE78)
                      + (float)(v75 * g_18417DE7C))
              + (float)(v76 * g_18417DE80);
          if ( v77 <= 0.0 )
            v77 = 0.0;
          g_1AD29945C = 1065353216;
          if ( ((2 * (_BYTE)v51 + (_BYTE)v55) & 3u) >= 2 )
          {
            v78 = (float)(v77 * 0.28049999) + 0.093500003;
            *(float *)&v79 = (float)(v77 * 0.28125) + 0.09375;
          }
          else
          {
            v78 = (float)(v77 * 0.17999999) + 0.059999999;
            *(float *)&v79 = (float)(v77 * 0.1875) + 0.0625;
          }
          g_1AD299458 = v79;
          g_1AD299454 = v79;
          *(float *)&g_1AD299450 = v78;
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v58 + v56) + 1437403384), v60, v59);
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v56 + (int)*v57) + 1437403384), v80, v81);
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v56 + (int)v57[1]) + 1437403384), v82, v83);
          ++v55;
          v57 += 3;
        }
        while ( v55 < (int)*v53 );
        v52 = world_street_count;
        v1 = 0;
        v51 = v227;
        v49 = v228;
      }
      ++v51;
      v49 += 15432;
      v54 += 5144;
      LODWORD(v227) = v51;
      v53 += 15432;
      v228 = v49;
    }
    while ( v51 < v52 );
  }
  sub_14006E0D0((__int64)v49, v48, v50);
  v87 = (float *)&g_15F2D9230;
  g_1AD299450 = xmmword_1402794A0;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    if ( *((_DWORD *)v87 - 12) )
    {
      v84 = *((int *)v87 - 11);
      v88 = 0;
      v89 = 45072 * v84;
      v86 = (int)dword_140404A6C[45072 * v84 + 335161466];
      if ( v86 >= 4 )
      {
        v90 = v87[5];
        v91 = *(v87 - 1);
        v92 = (float *)v233;
        v93 = v87[6];
        v94 = *v87;
        v95 = v87[7];
        v96 = v87[1];
        v97 = 15024 * v84;
        v85 = ((unsigned __int64)(v86 - 4) >> 2) + 1;
        v88 = 4 * v85;
        do
        {
          v98 = 3 * v97;
          v99 = *(float *)&dword_140404A6C[3 * v97 + 335161467];
          v100 = (float)(v99 * v90) + v91;
          v101 = *(float *)&dword_140404A6C[3 * v97 + 335161469] * v87[13];
          v102 = (float)((float)(v99 * v95) + v96) + (float)(*(float *)&dword_140404A6C[3 * v97 + 335161468] * v87[10]);
          v103 = *(float *)&dword_140404A6C[3 * v97 + 335161471];
          v104 = (float)((float)((float)(*(float *)&dword_140404A6C[3 * v97 + 335161467] * v93) + v94)
                       + (float)(*(float *)&dword_140404A6C[3 * v97 + 335161468] * v87[9]))
               + (float)(*(float *)&dword_140404A6C[3 * v97 + 335161469] * v87[12]);
          *(v92 - 2) = (float)(v100 + (float)(*(float *)&dword_140404A6C[3 * v97 + 335161468] * v87[8]))
                     + (float)(*(float *)&dword_140404A6C[3 * v97 + 335161469] * v87[11]);
          v105 = v103 * v87[8];
          v106 = v102 + v101;
          v107 = *(float *)&dword_140404A6C[3 * v97 + 335161472];
          *(v92 - 1) = v104;
          v108 = v107 * v87[11];
          *v92 = v106;
          v109 = *(float *)&dword_140404A6C[3 * v97 + 335161470];
          v110 = (float)((float)(v109 * v90) + v91) + v105;
          v111 = v103 * v87[9];
          v112 = v110 + v108;
          v113 = v107 * v87[12];
          v114 = v107 * v87[13];
          v115 = (float)((float)(v109 * v95) + v96) + (float)(v103 * v87[10]);
          v116 = *(float *)&dword_140404A6C[3 * v97 + 335161474];
          v117 = (float)((float)((float)(*(float *)&dword_140404A6C[3 * v97 + 335161470] * v93) + v94) + v111) + v113;
          v92[1] = v112;
          v118 = v116 * v87[8];
          v119 = v115 + v114;
          v120 = *(float *)&dword_140404A6C[3 * v97 + 335161475];
          v92[2] = v117;
          v121 = v120 * v87[11];
          v92[3] = v119;
          v122 = *(float *)&dword_140404A6C[3 * v97 + 335161473];
          v123 = (float)((float)(v122 * v93) + v94) + (float)(v116 * v87[9]);
          v92[4] = (float)((float)((float)(v122 * v90) + v91) + v118) + v121;
          v124 = v120 * v87[12];
          v97 += 4;
          v125 = v116 * v87[10];
          v126 = v120 * v87[13];
          v127 = v123 + v124;
          v128 = *(float *)&dword_140404A6C[v98 + 335161477];
          v129 = *(float *)&dword_140404A6C[v98 + 335161478];
          v92[5] = v127;
          v130 = v128 * v87[8];
          v92[6] = (float)((float)((float)(v122 * v95) + v96) + v125) + v126;
          v131 = *(float *)&dword_140404A6C[v98 + 335161476];
          v132 = v131;
          v133 = v131 * v90;
          *(float *)&v224 = (float)(v91 + (float)(v131 * v90)) + v130;
          v134 = (float)((float)(v131 * v95) + v96) + (float)(v128 * v87[10]);
          v135 = (float)((float)(v132 * v93) + v94) + (float)(v128 * v87[9]);
          v136 = (float)(v129 * v87[11]) + v130;
          *(float *)&v226 = v134;
          v225 = v135;
          v92[7] = v136 + (float)(v91 + v133);
          v137 = (float)(v129 * v87[12]) + v135;
          v138 = (float)(v129 * v87[13]) + v134;
          v92[8] = v137;
          v92[9] = v138;
          v92 += 12;
          --v85;
        }
        while ( v85 );
      }
      if ( v88 < v86 )
      {
        v139 = v87[5];
        v140 = *(v87 - 1);
        v141 = v87[6];
        v85 = (__int64)&v233[3 * v88];
        v142 = *v87;
        v143 = v87[7];
        v144 = v87[1];
        v84 = v88 + 15024 * v84;
        v86 -= v88;
        do
        {
          v145 = 3 * v84;
          v146 = *(float *)&dword_140404A6C[3 * v84++ + 335161468];
          v147 = *(float *)&dword_140404A6C[v145 + 335161467];
          v148 = *(float *)&dword_140404A6C[v145 + 335161469];
          v149 = v146 * v87[8];
          v150 = v147;
          v151 = v147 * v139;
          *(float *)&v224 = (float)(v140 + (float)(v147 * v139)) + v149;
          v152 = (float)((float)(v147 * v143) + v144) + (float)(v146 * v87[10]);
          v153 = (float)((float)(v150 * v141) + v142) + (float)(v146 * v87[9]);
          v154 = (float)(v148 * v87[11]) + v149;
          *(float *)&v226 = v152;
          v225 = v153;
          *(float *)(v85 - 8) = v154 + (float)(v140 + v151);
          v155 = (float)(v148 * v87[12]) + v153;
          v156 = (float)(v148 * v87[13]) + v152;
          *(float *)(v85 - 4) = v155;
          *(float *)v85 = v156;
          v85 += 12;
          --v86;
        }
        while ( v86 );
      }
      v157 = 0;
      if ( (int)dword_140404A6C[v89 + 335164539] > 0 )
      {
        v158 = &dword_140404A6C[v89 + 335164543];
        do
        {
          if ( *(v158 - 2) == 4 )
          {
            sub_14007D520(&v232[3 * *(v158 - 1)], v84, v86);
            sub_14007D520(&v232[3 * *v158], v159, v160);
            sub_14007D520(&v232[3 * *v158], v161, v162);
            sub_14007D520(&v232[3 * v158[1]], v163, v164);
            sub_14007D520(&v232[3 * v158[1]], v165, v166);
            sub_14007D520(&v232[3 * v158[2]], v167, v168);
            sub_14007D520(&v232[3 * v158[2]], v169, v170);
            sub_14007D520(&v232[3 * *(v158 - 1)], v171, v172);
          }
          ++v157;
          v158 += 6;
        }
        while ( v157 < (int)dword_140404A6C[v89 + 335164539] );
      }
    }
    v87 += 5210;
  }
  while ( (__int64)v87 < (__int64)&g_15FD06230 );
  sub_14006E0D0(v85, v84, v86);
  v176 = &g_15F2D924C;
  do
  {
    if ( *(v176 - 19) )
    {
      v177 = 0;
      if ( (int)v176[3645] > 0 )
      {
        v178 = (float *)(v176 + 3667);
        do
        {
          v179 = *((unsigned int *)v178 - 2);
          *(_QWORD *)&v180 = *((unsigned int *)v178 - 3);
          v225 = *(v178 - 1);
          v181 = *(_OWORD *)(v176 - 2);
          v224 = v179;
          v182 = *v178;
          v229 = v181;
          v183 = *(_OWORD *)(v176 + 2);
          *(float *)&v226 = v182;
          v230 = v183;
          v231 = *((float *)v176 + 6);
          sub_14007B2A0((__int64)&v229, (float *)&v229 + 3, v180);
          sub_14007B2A0((__int64)&v229, (float *)&v229, sr_export_float_lane_container((unsigned __int64)*((_DWORD *)v178 - 4)));
          if ( physics_points_no_gravity )
          {
            v186 = *((int *)v178 - 21);
            v184 = &dword_140404A6C[47 * v186 + 18215724];
            v185 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 188 * v186 + 77076216);
          }
          else
          {
            v184 = (unsigned int *)&v229;
            v185 = &v224;
          }
          sub_14007E9D0(v185, v184, COERCE_DOUBLE((unsigned __int64)*((_DWORD *)v178 - 8)), 0.125);
          ++v177;
          v178 += 43;
        }
        while ( v177 < (int)v176[3645] );
      }
    }
    v176 += 5210;
  }
  while ( (__int64)v176 < (__int64)&g_15FD0624C );
  g_1AD299450 = xmmword_140279550;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( g_16B165F68 )
  {
    if ( g_16B2A2220 != -1 )
    {
      v174 = 383LL * (int)g_16B2A2220;
      v187 = 0;
      if ( (int)dword_140404A6C[v174 + 132400671] > 0 )
      {
        v188 = 0;
        while ( 1 )
        {
          v189 = v174 * 4 + v188 * 4;
          v190 = dword_140404A6C[v174 + 132400681 + v188];
          g_1AD299450 = xmmword_1402794E0;
          if ( v190 == -1 )
            goto LABEL_87;
          if ( v190 == 1 )
            break;
LABEL_88:
          v191 = 34LL
               * (int)dword_140404A6C[396 * *(unsigned int *)((char *)&g_15FD162EC + v189) + 225426056];
          v192 = dword_140404A6C[v191 + 225391235];
          v224 = dword_140404A6C[v191 + 225391233];
          v193 = *(float *)&dword_140404A6C[v191 + 225391234];
          LODWORD(v226) = v192;
          v225 = v193 + 4.0;
          sub_14007D520(&v224, v189, v175);
          v194 = 34LL
               * (int)dword_140404A6C[396 * dword_140404A6C[383 * (int)g_16B2A2220 + 132400672 + v188]
                                    + 225426057];
          v195 = dword_140404A6C[v194 + 225391235];
          v224 = dword_140404A6C[v194 + 225391233];
          v196 = *(float *)&dword_140404A6C[v194 + 225391234];
          LODWORD(v226) = v195;
          v225 = v196 + 4.0;
          sub_14007D520(&v224, v197, v198);
          ++v187;
          v174 = 383LL * (int)g_16B2A2220;
          v188 += 5;
          if ( v187 >= (int)dword_140404A6C[v174 + 132400671] )
            goto LABEL_89;
        }
        *(unsigned int *)&g_1AD299450 = 0;
LABEL_87:
        g_1AD299458 = 1065353216;
        goto LABEL_88;
      }
    }
LABEL_89:
    v199 = g_175FF3464;
    v200 = 0;
    if ( (int)g_175FF3464 > 0 )
    {
      v201 = &g_175FF34A0;
      do
      {
        v202 = 0;
        if ( (int)*v201 > 0 )
        {
          do
          {
            g_1AD299450 = xmmword_140279660;
            v203 = 1584LL * v200 + 28LL * v202;
            sub_14007D520((unsigned int *)((char *)&g_175FF34A8 + v203), v173, v175);
            sub_14007D520((unsigned int *)((char *)&g_175FF34B4 + v203), v204, v205);
            ++v202;
          }
          while ( v202 < (int)*v201 );
          v199 = g_175FF3464;
        }
        ++v200;
        v201 += 396;
      }
      while ( v200 < v199 );
    }
    v206 = &g_1B4287C84;
    g_1AD299450 = xmmword_140279550;
    do
    {
      if ( *(v206 - 1) && !*v206 )
      {
        v207 = (int)v206[5];
        g_1AD299450 = xmmword_140279550;
        sub_14007D520(&dword_140404A6C[60 * v207 + 73007026], v173, v175);
        sub_14007D520(&dword_140404A6C[60 * v206[6] + 73007026], v208, v209);
      }
      v206 += 61;
    }
    while ( (__int64)v206 < (__int64)&g_1B4657C84 );
    if ( (int)game_unknown_16b165f70 > 0 )
    {
      v210 = &g_16B165F94;
      do
      {
        v211 = *(v210 - 1);
        *(unsigned int *)&g_1AD299450 = *(v210 - 2);
        v212 = *v210;
        g_1AD299454 = v211;
        g_1AD299458 = v212;
        g_1AD29945C = 1065353216;
        sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v1 + 722886516), v173, v175);
        sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v1++ + 722886528), v213, v214);
        v210 += 9;
      }
      while ( v1 < (int)game_unknown_16b165f70 );
    }
  }
  sub_14006E0D0(v174 * 4, v173, v175);
  v215 = &g_1449816E4;
  v216 = 0x2000;
  v217 = &g_1449816F8;
  do
  {
    if ( *(v215 - 1) && *v215 == 1 )
      sub_14007E010(
        v217,
        v217 + 9,
        *((float *)v215 + 42),
        *((float *)v215 + 43),
        *((float *)v215 + 44),
        0,
        0x3F800000u,
        0);
    v217 += 47;
    v215 += 47;
    --v216;
  }
  while ( v216 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v219
#undef v220
#undef v221
#undef v222
#undef v223
#undef v224
#undef v225
#undef v226
#undef v227
#undef v228
#undef v229
#undef v230
#undef v231
#undef v232
#undef v233
#undef v234
