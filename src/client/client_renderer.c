#include "shared_client.h"

//----- (000000014007A570) ----------------------------------------------------
__int64            sub_14007A570(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  extern void camera_begin_perspective(int x, int y, int width, int height,
                                       float z_near, float z_far, float tan_half_fov);
  camera_begin_perspective(a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (0000000140094A90) ----------------------------------------------------
__int64 sub_140094A90()
{
  unsigned int v0;
  unsigned int *v1;
  unsigned int *v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int *v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned int *v11;
  int v12;
  float *v13;
  float *v14;
  signed __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float *v22;
  float *v23;
  float *v24;
  signed __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  float *v32;
  float *v33;
  signed __int64 v34;
  __int64 v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float *v41;
  float *v42;
  float *v43;
  signed __int64 v44;
  __int64 v45;
  float v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float v61;
  float *v62;
  float *v63;
  signed __int64 v64;
  __int64 v65;
  float v66;
  __int64 v67;
  float v68;
  float v69;
  float v70;
  float *v71;
  __int64 v72;
  signed __int64 v73;
  float v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float *v79;
  signed __int64 v80;
  __int64 v81;
  float v82;
  __int64 v83;
  float v84;
  float v85;
  float v86;
  __int64 v87;
  __int64 v88;
  _Alignas(16) __int128 sr_visibility_matrix[4];
  _Alignas(16) unsigned char sr_visibility_clip[16];
  _Alignas(16) __int128 sr_visibility_basis[4];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140094A90[224];
#define v90 (*(__int64 (*))(void *)(sr_frame_140094A90 + 0)) /* [rsp+8h] */
#define v91 (*(__int64 (*))(void *)(sr_frame_140094A90 + 32)) /* [rsp+28h] */
#define v92 (*(__int64 (*))(void *)(sr_frame_140094A90 + 40)) /* [rsp+30h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140094A90 + 208)) /* [rsp+D8h] */

  crt_memset((void *)(uintptr_t)(&g_149F54C20), 0, 0x400u);
  if ( !g_183F7CB60 )
  {
    v0 = g_18B7D2FCC;
    v1 = &g_18C3D4FDC;
    v2 = &g_154167270;
    v3 = g_18AB70FAC;
    v4 = 4096;
    do
    {
      if ( *(v2 - 6156) )
      {
        v5 = *v2;
        if ( (int)v5 > 0 )
        {
          v6 = (int)(v0 * *(v1 - 1) + dword_140404A6C[3074 * *(v1 - 1) + 315570524 + 3 * *v1]);
          v7 = (int *)(v2 + 2);
          v8 = (int)(v3 * *(v1 - 3246089) + dword_140404A6C[3074 * *(v1 - 3246089) + 312324436 + 3 * *(v1 - 3246088)])
             / 64;
          do
          {
            v9 = *((unsigned __int8 *)v7 - 4);
            v10 = *v7;
            v7 += 3;
            v11 = &dword_140404A6C[v9 + 40714349];
            v9 <<= 14;
            dword_140404A6C[v9 + 40714605 + (int)*v11] = 3 * v10;
            v12 = *(v7 - 2) + (((BYTE4(v6) & 3) + (int)v6) >> 2) + 2 * *(v7 - 2);
            dword_140404A6C[v9 + 53297517 + (int)*v11] = v12;
            dword_140404A6C[v9 + 53297517 + (int)*v11] *= 4;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 44908909 + 2 * (int)*v11] = 4 * v12;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 57491821 + 2 * (int)*v11] = dword_140404A6C[v9 + 53297517 + (int)*v11];
            dword_140404A6C[v9 + 65880429 + (int)(*v11)++] = v8;
            --v5;
          }
          while ( v5 );
          v0 = g_18B7D2FCC;
        }
      }
      v1 += 6;
      v2 += 6930;
      --v4;
    }
    while ( v4 );
  }
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97798 + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  v13 = (float *)&sr_visibility_matrix[0];
  *(unsigned int *)&g_1A724E5C0 = *(unsigned int *)&g_183F7C550;
  v14 = (float *)&sr_visibility_basis[0] + 1;
  *(unsigned int *)&g_1A724E5E0 = *(unsigned int *)&g_183F7C558;
  v15 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  v16 = 4;
  *(unsigned int *)&g_1A724E5D0 = *(unsigned int *)&g_183F7C554;
  g_1A724E5C4 = *(unsigned int *)&g_183F7C55C;
  g_1A724E5D4 = *(unsigned int *)&g_183F7C560;
  g_1A724E5E4 = *(unsigned int *)&g_183F7C564;
  g_1A724E5C8 = *(unsigned int *)&g_183F7C568;
  g_1A724E5D8 = *(unsigned int *)&g_183F7C56C;
  g_1A724E5E8 = *(unsigned int *)&g_183F7C570;
  sr_visibility_basis[1] = xmmword_140278D80;
  sr_visibility_basis[0] = xmmword_140278D30;
  LODWORD(sr_visibility_basis[3]) = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
  sr_visibility_basis[2] = xmmword_140278E20;
  *((float *)&sr_visibility_basis[3] + 1) = -g_183F7C548;
  *((float *)&sr_visibility_basis[3] + 2) = -g_183F7C54C;
  *(_QWORD *)&g_1A724E5F0 = 0;
  g_1A724E5F8 = 0;
  g_1A724E5CC = 0;
  g_1A724E5DC = 0;
  g_1A724E5EC = 0;
  g_1A724E5FC = 1065353216;
  HIDWORD(sr_visibility_basis[3]) = 1065353216;
  do
  {
    v17 = *(v14 - 1);
    v18 = 4;
    v19 = *v14;
    v20 = v14[1];
    v21 = v14[2];
    do
    {
      *v13 = (float)((float)((float)(v17 * *(float *)((char *)v13 + v15 - 16))
                           + (float)(v19 * *(float *)((char *)v13 + v15)))
                   + (float)(v20 * *(float *)((char *)v13 + v15 + 16)))
           + (float)(v21 * *(float *)((char *)v13 + v15 + 32));
      ++v13;
      --v18;
    }
    while ( v18 );
    v14 += 4;
    v15 -= 16LL;
    --v16;
  }
  while ( v16 );
  v22 = (float *)&g_1A724E604;
  g_1A724E5C0 = sr_visibility_matrix[0];
  v23 = (float *)&sr_visibility_matrix[0];
  v24 = (float *)&g_1A724E604;
  g_1A724E5D0 = sr_visibility_matrix[1];
  v25 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  v26 = 4;
  g_1A724E5E0 = sr_visibility_matrix[2];
  g_1A724E5F0 = sr_visibility_matrix[3];
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v27 = *(v24 - 1);
    v28 = 4;
    v29 = *v24;
    v30 = v24[1];
    v31 = v24[2];
    do
    {
      *v23 = (float)((float)((float)(v27 * *(float *)((char *)v23 + v25 - 16))
                           + (float)(v29 * *(float *)((char *)v23 + v25)))
                   + (float)(v30 * *(float *)((char *)v23 + v25 + 16)))
           + (float)(v31 * *(float *)((char *)v23 + v25 + 32));
      ++v23;
      --v28;
    }
    while ( v28 );
    v24 += 4;
    v25 -= 16LL;
    --v26;
  }
  while ( v26 );
  g_1A724E640 = sr_visibility_matrix[0];
  v32 = (float *)&sr_visibility_matrix[0];
  v33 = (float *)&g_1A724E5C4;
  g_1A724E650 = sr_visibility_matrix[1];
  v34 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  v35 = 4;
  g_1A724E660 = sr_visibility_matrix[2];
  g_1A724E670 = sr_visibility_matrix[3];
  do
  {
    v36 = *(v33 - 1);
    v37 = 4;
    v38 = *v33;
    v39 = v33[1];
    v40 = v33[2];
    do
    {
      *v32 = (float)((float)((float)(v36 * *(float *)((char *)v32 + v34 - 16))
                           + (float)(v38 * *(float *)((char *)v32 + v34)))
                   + (float)(v39 * *(float *)((char *)v32 + v34 + 16)))
           + (float)(v40 * *(float *)((char *)v32 + v34 + 32));
      ++v32;
      --v37;
    }
    while ( v37 );
    v33 += 4;
    v34 -= 16LL;
    --v35;
  }
  while ( v35 );
  v41 = (float *)&g_1A724E644;
  g_1A724E680 = sr_visibility_matrix[0];
  v42 = (float *)&sr_visibility_matrix[0];
  v43 = (float *)&g_1A724E644;
  g_1A724E690 = sr_visibility_matrix[1];
  v44 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  v45 = 4;
  g_1A724E6A0 = sr_visibility_matrix[2];
  g_1A724E6B0 = sr_visibility_matrix[3];
  do
  {
    v46 = *(v43 - 1);
    v47 = 4;
    v48 = *v43;
    v49 = v43[1];
    v50 = v43[2];
    do
    {
      *v42 = (float)((float)((float)(v46 * *(float *)((char *)v42 + v44 - 16))
                           + (float)(v48 * *(float *)((char *)v42 + v44)))
                   + (float)(v49 * *(float *)((char *)v42 + v44 + 16)))
           + (float)(v50 * *(float *)((char *)v42 + v44 + 32));
      ++v42;
      --v47;
    }
    while ( v47 );
    v43 += 4;
    v44 -= 16LL;
    --v45;
  }
  while ( v45 );
  g_1A724E6C0 = sr_visibility_matrix[0];
  g_1A724E6D0 = sr_visibility_matrix[1];
  LODWORD(v91) = 0;
  g_1A724E6E0 = sr_visibility_matrix[2];
  v51 = dword_140404A6C[44 * g_183EBE428 + 284024944];
  g_1A724E6F0 = sr_visibility_matrix[3];
  glFramebufferTexture2D(36160, 36064, 3553, v51, 0);
  glClearColor(0x1.8000000000000p-2f,0x1.8000000000000p-2f,0x1.8000000000000p-2f,0.0f);
  glStencilMask(0xFFFFFFFFLL);
  glClearStencil(0);
  if ( g_151E46194 )
    glClearDepth(0.0);
  glClear(17664);
  if ( g_151E46194 )
    glClearDepth(0x1.0000000000000p+0);
  glStencilMask(0);
  glDepthMask(0);
  g_1AD059458 = g_16D482828;
  g_1AD059470 = g_16D482828;
  v56 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  *(_OWORD *)&g_1AD05945C = xmmword_140279830;
  g_1AD05944C = 6;
  *(_OWORD *)&g_1AD059474 = xmmword_140279830;
  g_1AD059448 = 4;
  g_1AD059450 = g_16D482820;
  g_1AD059454 = g_1873DE440;
  g_1AD05946C = g_1873DE440;
  g_1AD059484 = g_1873DE440;
  *(unsigned int *)&g_1AD059498 = g_16D482820;
  g_1AD05949C = g_1873DE440;
  *(_OWORD *)&g_1AD059488 = xmmword_140278E30;
  *(_OWORD *)&g_1AD0594A0 = xmmword_140278E30;
  glBindBuffer(34962, v56);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glUseProgram(lit_program);
  glUniform3fv(lit_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(lit_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(lit_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(lit_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(lit_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  glDisable(2884);
  glActiveTexture(33985);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glActiveTexture(33984);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  v92 = 12;
  LODWORD(v91) = 4 * g_1AD05944C;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glBindBuffer(34963, g_1AD29946C);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(6u*((int32_t)g_1AD059448/4)),5123,NULL);
  glBindBuffer(34963, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(34067, 0);
  glActiveTexture(33984);
  LOBYTE(v60) = 1;
  glDepthMask(v60);
  v61 = *(float *)&g_1873DE440;
  v62 = (float *)&sr_visibility_matrix[0];
  v63 = (float *)&sr_visibility_basis[0] + 1;
  g_1A724E600 = xmmword_140278D30;
  v64 = (char *)(unsigned int *)&g_1A724E610 - (char *)&sr_visibility_matrix[0];
  *(unsigned int *)&g_1A724E630 = 0;
  v65 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E638 = 0;
  g_1A724E63C = 1065353216;
  g_1A724E610 = xmmword_140278D80;
  sr_visibility_basis[1] = xmmword_140278DE0;
  *(float *)&g_1A724E634 = v61 + v61;
  sr_visibility_basis[0] = xmmword_140278D30;
  sr_visibility_basis[2] = xmmword_140278E20;
  sr_visibility_basis[3] = xmmword_140279490;
  do
  {
    v66 = *(v63 - 1);
    v67 = 4;
    v68 = *v63;
    v69 = v63[1];
    v70 = v63[2];
    do
    {
      *v62 = (float)((float)((float)(v66 * *(float *)((char *)v62 + v64 - 16))
                           + (float)(v68 * *(float *)((char *)v62 + v64)))
                   + (float)(v69 * *(float *)((char *)v62 + v64 + 16)))
           + (float)(v70 * *(float *)((char *)v62 + v64 + 32));
      ++v62;
      --v67;
    }
    while ( v67 );
    v63 += 4;
    v64 -= 16LL;
    --v65;
  }
  while ( v65 );
  v71 = (float *)&sr_visibility_matrix[0];
  g_1A724E600 = sr_visibility_matrix[0];
  v72 = 4;
  v73 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  g_1A724E610 = sr_visibility_matrix[1];
  g_1A724E620 = sr_visibility_matrix[2];
  g_1A724E630 = sr_visibility_matrix[3];
  do
  {
    v74 = *(v22 - 1);
    v75 = 4;
    v76 = *v22;
    v77 = v22[1];
    v78 = v22[2];
    do
    {
      *v71 = (float)((float)((float)(v74 * *(float *)((char *)v71 + v73 - 16))
                           + (float)(v76 * *(float *)((char *)v71 + v73)))
                   + (float)(v77 * *(float *)((char *)v71 + v73 + 16)))
           + (float)(v78 * *(float *)((char *)v71 + v73 + 32));
      ++v71;
      --v75;
    }
    while ( v75 );
    v22 += 4;
    v73 -= 16LL;
    --v72;
  }
  while ( v72 );
  v79 = (float *)&sr_visibility_matrix[0];
  v80 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  v81 = 4;
  g_1A724E640 = sr_visibility_matrix[0];
  g_1A724E650 = sr_visibility_matrix[1];
  g_1A724E660 = sr_visibility_matrix[2];
  g_1A724E670 = sr_visibility_matrix[3];
  do
  {
    v82 = *(v41 - 1);
    v83 = 4;
    v84 = *v41;
    v85 = v41[1];
    v86 = v41[2];
    do
    {
      *v79 = (float)((float)((float)(v82 * *(float *)((char *)v79 + v80 - 16))
                           + (float)(v84 * *(float *)((char *)v79 + v80)))
                   + (float)(v85 * *(float *)((char *)v79 + v80 + 16)))
           + (float)(v86 * *(float *)((char *)v79 + v80 + 32));
      ++v79;
      --v83;
    }
    while ( v83 );
    v41 += 4;
    v80 -= 16LL;
    --v81;
  }
  while ( v81 );
  g_1A724E6C0 = sr_visibility_matrix[0];
  (*(int32_t *)(sr_visibility_clip+0)) = 0;
  g_1A724E6D0 = sr_visibility_matrix[1];
  (*(int64_t *)(sr_visibility_clip+4)) = 1065353216;
  g_1A724E6E0 = sr_visibility_matrix[2];
  g_1A724E6F0 = sr_visibility_matrix[3];
  (*(float *)(sr_visibility_clip+12)) = -v61;
  glUseProgram(world_program);
  glUniform4fv(world_u_clipplane, 1, &(*(int32_t *)(sr_visibility_clip+0)));
  glUseProgram(object_program);
  glUniform4fv(object_u_clipplane, 1, &(*(int32_t *)(sr_visibility_clip+0)));
  glEnable(12288);
  sub_14011E210(0, v87, v88);
  glDisable(12288);
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef v90
#undef v91
#undef v92
#undef v104

//----- (000000014011DDB0) ----------------------------------------------------
__int64            sub_14011DDB0(int a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int *v6;
  __int64 v7;
  signed int v8;
  __int64 v9;
  unsigned int *v10;
  __int64 v11;
  _UNKNOWN *retaddr;

  result = (__int64)&retaddr;
  v4 = a1;
  if ( !g_18AB70F9C && !g_18D096FFC )
  {
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
    if ( !a2 )
    {
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
    /* Native sub_14011DDB0 inherits program/lights from its caller
       (sub_14011FD00 binds 71737685 once before the loop); no per-draw
       uniform upload here. */
    result = (__int64)&g_154167248;
    v5 = 4;
    v6 = &dword_140404A6C[6930 * v4 + 83200503];
    do
    {
      if ( v6[780] )
      {
        result = (int)*v6;
        if ( (int)result >= 0 )
        {
          v7 = (int)*v6;
          result *= 3;
          if ( dword_140404A6C[2 * result + 312226123] != -1 )
          {
            v8 = 0;
            v9 = 8969 * v7;
            /* Original EBP holds vertex bytes; R12D holds element indices. */
            int32_t sr_building_vertex_bytes = (int32_t)(
                g_189F0EF8C * dword_140404A6C[2*result+312226123]
                + dword_140404A6C[309078348+3074*(int64_t)(int32_t)dword_140404A6C[2*result+312226123]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+312226124]]);
            int32_t sr_building_index_bytes = (int32_t)(
                g_18C434FEC * dword_140404A6C[2*result+321964387]
                + dword_140404A6C[318816612+3074*(int64_t)(int32_t)dword_140404A6C[2*result+321964387]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+321964388]]);
            if ( (int)dword_140404A6C[8969 * v7 + 73994484] > 0 )
            {
              v10 = &dword_140404A6C[v9 + 73994485];
              do
              {
                v11 = *(unsigned __int8 *)v10;
                result = 184 * v11;
                if ( !dword_140404A6C[46 * v11 + 421784738] )
                {
                  glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827814] + 284024944]);
                  glActiveTexture(33986);
                  glBindTexture(3553,
                    dword_140404A6C[44 * dword_140404A6C[4 * *(unsigned __int8 *)v10 + 283827815] + 284024944]);
                  glActiveTexture(33988);
                  glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
                  glActiveTexture(33989);
                  glBindTexture(35866, dword_140404A6C[44 * g_183EBC420 + 284024944]);
                  glActiveTexture(33984);
                  glDrawElementsBaseVertex(4,(int32_t)(3u*v10[1]),5125,(const void *)(intptr_t)(int32_t)(4u*((uint32_t)(sr_building_index_bytes/4)+3u*v10[2])),sr_building_vertex_bytes/64);
                }
                ++v8;
                v10 += 3;
              }
              while ( v8 < (int)dword_140404A6C[v9 + 73994484] );
            }
          }
        }
      }
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

//----- (000000014011FD00) ----------------------------------------------------
__int64 sub_14011FD00()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int *v14;
  __int64 v15;
  unsigned int *v16;
  unsigned int *v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int *v22;
  int v23;
  int *v24;
  __int64 v25;
  unsigned int v26;
  unsigned int *v27;
  unsigned int v28;
  __int64 v29;
  float *v30;
  float *v31;
  signed __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float *v39;
  float *v40;
  signed __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float *v54;
  float *v55;
  signed __int64 v56;
  __int64 v57;
  float v58;
  __int64 v59;
  float v60;
  float v61;
  float v62;
  float *v63;
  float *v64;
  signed __int64 v65;
  __int64 v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  float *v72;
  float *v73;
  signed __int64 v74;
  __int64 v75;
  float v76;
  __int64 v77;
  float v78;
  float v79;
  float v80;
  float *v81;
  float *v82;
  signed __int64 v83;
  __int64 v84;
  float v85;
  __int64 v86;
  float v87;
  float v88;
  float v89;
  int i;
  unsigned int v91;
  unsigned int *v92;
  float *v93;
  __int64 v94;
  float v95;
  unsigned int v96;
  __int64 v97;
  unsigned int *v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  float *v120;
  signed __int64 v121;
  float *v122;
  __int64 v123;
  float v124;
  __int64 v125;
  float v126;
  float v127;
  float v128;
  float *v129;
  float *v130;
  signed __int64 v131;
  __int64 v132;
  float v133;
  __int64 v134;
  float v135;
  float v136;
  float v137;
  __int64 v138;
  unsigned int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  signed __int64 v145;
  float *v146;
  signed int v147;
  int v148;
  __int64 v149;
  unsigned int v150;
  unsigned int *v151;
  unsigned int *v152;
  int j;
  float v154;
  float v155;
  float v156;
  float *v157;
  float *v158;
  signed __int64 v159;
  __int64 v160;
  float v161;
  __int64 v162;
  float v163;
  float v164;
  float v165;
  float *v166;
  signed __int64 v167;
  float *v168;
  __int64 v169;
  float v170;
  __int64 v171;
  float v172;
  float v173;
  float v174;
  float *v175;
  signed __int64 v176;
  float *v177;
  __int64 v178;
  float v179;
  __int64 v180;
  float v181;
  float v182;
  float v183;
  int v184;
  int v185;
  int v186;
  unsigned int v187;
  __int64 v188;
  unsigned int v189;
  float *v190;
  signed __int64 v191;
  float *v192;
  __int64 v193;
  float v194;
  __int64 v195;
  float v196;
  float v197;
  float v198;
  float *v199;
  __int64 v200;
  float v201;
  __int64 v202;
  float v203;
  float v204;
  float v205;
  unsigned int *v206;
  unsigned int v207;
  int v208;
  float *v209;
  unsigned int v210;
  unsigned int v211;
  unsigned int v212;
  float *v213;
  signed __int64 v214;
  __int64 v215;
  float v216;
  __int64 v217;
  float v218;
  float v219;
  float v220;
  float *v221;
  float *v222;
  signed __int64 v223;
  __int64 v224;
  float v225;
  __int64 v226;
  float v227;
  float v228;
  float v229;
  float *v230;
  float *v231;
  signed __int64 v232;
  __int64 v233;
  float v234;
  __int64 v235;
  float v236;
  float v237;
  float v238;
  float *v239;
  float *v240;
  signed __int64 v241;
  __int64 v242;
  float v243;
  __int64 v244;
  float v245;
  float v246;
  float v247;
  float *v248;
  __int64 v249;
  float v250;
  __int64 v251;
  float v252;
  float v253;
  float v254;
  __int64 v255;
  __int128 v256;
  float v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  int v267;
  int v268;
  int v269;
  int v270;
  _Alignas(16) uint32_t sr_world_direction[3];
  uint32_t sr_world_material_pair[2];
  _Alignas(16) unsigned char sr_world_matrix_backing[80];
  _Alignas(16) __int128 sr_world_matrix[4];
  __int128 v284;
  char v285[512];
  __int64 v286;

  if ( unk_14040488C && glClipControl )
  {
    v0 = 37727;
    if ( !g_151E46194 )
      v0 = 37726;
    glClipControl(36001, v0);
  }
  v1 = 0;
  g_151E461B8 = 0;
  g_184178D00 = 0;
  *(unsigned int *)&g_18417DE78 = 0;
  *(unsigned int *)&g_18417DE7C = 1065353216;
  *(unsigned int *)&g_18417DE80 = 1056964608;
  g_184178D08 = (float)(int)g_182A7D55C;
  *(unsigned int *)&g_184178D6C = 1031798784;
  *(unsigned int *)&g_184178D74 = *(unsigned int *)&g_183F7C574;
  g_184178D0C = (float)(int)g_182A7D560;
  *(unsigned int *)&g_184178D70 = 1182793728;
  g_184178E38 = (float)(g_183F7C550 * 0.70709997)
                                        + (float)(g_183F7C568 * 0.70709997);
  g_184178E44 = (float)(g_183F7C568 * 0.70709997)
                                        - (float)(g_183F7C550 * 0.70709997);
  g_184178E3C = (float)(g_183F7C554 * 0.70709997)
                                        + (float)(g_183F7C56C * 0.70709997);
  g_184178E48 = (float)(g_183F7C56C * 0.70709997)
                                        - (float)(g_183F7C554 * 0.70709997);
  g_184178E40 = (float)(g_183F7C558 * 0.70709997)
                                        + (float)(g_183F7C570 * 0.70709997);
  g_184178E4C = (float)(g_183F7C570 * 0.70709997)
                                        - (float)(g_183F7C558 * 0.70709997);
  g_1841FA1C8 = g_183F7C544 * *(float *)&dword_1402F61BC;
  g_1841FA1CC = (float)(g_183F7C548 * *(float *)&dword_1402F61BC)
                                        + *(float *)&dword_1402F61C4;
  g_1841FA1D0 = g_183F7C54C * *(float *)&dword_1402F61BC;
  sub_14007A240((__int64)(unsigned int *)&g_18417DE78, (float *)(unsigned int *)&g_18417DE78);
  (*(float *)&sr_world_direction[1]) = 0.44721359;
  *(float *)&sr_world_direction[2] = -0.89442718;
  *(float *)&sr_world_direction[0] = 0.0;
  sub_14007B4D0(
    (float *)(unsigned int *)&g_18417DE78,
    (float *)&sr_world_direction[0],
    sr_export_float_lane_container((unsigned __int64)*(unsigned int *)&game_sun_angle));
  g_18417DE84 = 0;
  sub_1400212E0();
  sub_1400D26A0((float *)(unsigned int *)&g_183F7C544);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(v2) = 1;
  glDepthMask(v2);
  sub_140094A90();
  sub_140093E60();
  sub_14011CC30(0);
  glEnable(2884);
  glFrontFace(2304);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  sub_14007BE20((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  if ( !g_16B165F60 )
    sub_140123190();
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  sub_14007BE20((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  v3 = (int)g_183EBE404;
  LODWORD(v265) = 0;
  if ( g_16B165F60 )
    v3 = (int)g_183EBE430;
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * v3 + 284024944], v265);
  if ( g_16B165F60 )
  {
    glClearColor(1.0f,1.0f,1.0f,0.0f);
    glStencilMask(0xFFFFFFFFLL);
    glClearStencil(0);
    glClear(17664);
    glStencilMask(0);
  }
  glClearColor(0.0f,0.0f,0.0f,0.0f);
  glClear(16384);
  sub_1400A5D30();
  sub_1400A5890((float *)&g_184178D60);
  /* Observe-only recovery diagnostics: log the main-frame state once so the
     black-frame cause is decidable from the debug log. No state is changed. */
  {
    static int sr_frame_logged;
    if (!sr_frame_logged && g_150F55020 != 0)
    {
      unsigned int sr_main = dword_140404A6C[2 * g_183E97744 + 283791765];
      unsigned int sr_refl = dword_140404A6C[2 * g_183E97798 + 283791765];
      __int64 sr_st = glCheckFramebufferStatus ? glCheckFramebufferStatus(36160) : -1;
      SR_DEBUG_LOG("RENDER fbo main=%u refl=%u status=0x%llx size=%ux%u win=%ux%u",
          sr_main, sr_refl, (unsigned long long)sr_st,
          g_182A7D55C, g_182A7D560,
          g_160FC47D8, g_160FC47DC);
      SR_DEBUG_LOG("RENDER cam=(%.2f,%.2f,%.2f) mvp[0,5,10,15]=%.3f,%.3f,%.3f,%.3f draws=%u",
          g_183F7C544, g_183F7C548,
          g_183F7C54C,
          *(float *)&g_1A724E6C0, g_1A724E6D4,
          g_1A724E6E8, g_1A724E6FC,
          g_150F55020);
      SR_DEBUG_LOG("RENDER light dir=(%.3f,%.3f,%.3f) amb=(%.3f,%.3f,%.3f) dif=(%.3f,%.3f,%.3f)",
          g_18417DE78, g_18417DE7C,
          g_18417DE80,
          g_184178D40, g_184178D44,
          g_184178D48,
          g_184178D50, g_184178D54,
          g_184178D58);
      SR_DEBUG_LOG("RENDER tex normal=%u detail=%u color=%u mask=%u shadow=%u cubemap=%u "
          "prog08=%u loc(dir/amb/dif/view/mvp/mask)=%d,%d,%d,%d,%d,%d",
          dword_140404A6C[44 * g_183EBF154 + 284024944],
          dword_140404A6C[44 * g_183EBF158 + 284024944],
          dword_140404A6C[44 * g_183EBF15C + 284024944],
          dword_140404A6C[44 * g_183EBF164 + 284024944],
          dword_140404A6C[44 * shading_texture + 284024944],
          dword_140404A6C[44 * shading_cube_map + 284024944],
          terrain_program,
          (int)terrain_u_lightdirection, (int)terrain_u_lightambient,
          (int)terrain_u_lightdiffuse, (int)terrain_u_viewposition,
          (int)terrain_u_modelviewprojectionmatrix, (int)terrain_u_land_usemask);
      {
        float *sr_p = (float *)(unsigned int *)&g_1A724E580;
        float *sr_v = (float *)(unsigned int *)&g_1A724E5C0;
        float *sr_m = (float *)(unsigned int *)&g_1A724E6C0;
        SR_DEBUG_LOG("RENDER near=%.4f far=%.1f zoom=%.4f rt=%ux%u",
            g_184178D6C, g_184178D70,
            g_184178D74,
            g_182A7D55C, g_182A7D560);
        SR_DEBUG_LOG("RENDER proj =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_p[0],sr_p[1],sr_p[2],sr_p[3], sr_p[4],sr_p[5],sr_p[6],sr_p[7],
            sr_p[8],sr_p[9],sr_p[10],sr_p[11], sr_p[12],sr_p[13],sr_p[14],sr_p[15]);
        SR_DEBUG_LOG("RENDER view =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_v[0],sr_v[1],sr_v[2],sr_v[3], sr_v[4],sr_v[5],sr_v[6],sr_v[7],
            sr_v[8],sr_v[9],sr_v[10],sr_v[11], sr_v[12],sr_v[13],sr_v[14],sr_v[15]);
        SR_DEBUG_LOG("RENDER mvp  =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_m[0],sr_m[1],sr_m[2],sr_m[3], sr_m[4],sr_m[5],sr_m[6],sr_m[7],
            sr_m[8],sr_m[9],sr_m[10],sr_m[11], sr_m[12],sr_m[13],sr_m[14],sr_m[15]);
      }
      {
        /* Terrain visibility, using the exact index math of sub_1400D22E0:
           enabled flag dword[271166189 + slot*257], sub-cell pointer
           dword[271166190 + slot*257 + j], and the -1 cull lookup
           dword[cell + 272034690 + slot*3336 + j*13]. */
        int sr_slot, sr_j, sr_cell, sr_live = 0, sr_enabled = 0;
        unsigned int sr_count = 0, sr_stride = 0, sr_first_cell = 0;
        int sr_first_slot = -1, sr_first_j = -1, sr_lod = -1;
        for (sr_slot = 0; sr_slot < 64; ++sr_slot)
        {
          if (!dword_140404A6C[271166189 + sr_slot * 257]) continue;
          ++sr_enabled;
          for (sr_j = 0; sr_j < 256; ++sr_j)
          {
            sr_cell = (int)dword_140404A6C[271166190 + sr_slot * 257 + sr_j];
            if (dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13] != -1)
            {
              if (!sr_live)
              {
                sr_first_cell = (unsigned int)sr_cell;
                sr_first_slot = sr_slot;
                sr_first_j = sr_j;
                sr_stride = dword_140404A6C[24582 * sr_cell + 271838021];
                sr_count = dword_140404A6C[24582 * sr_cell + 271838022];
                sr_lod = (int)dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13];
              }
              ++sr_live;
            }
          }
        }
        SR_DEBUG_LOG("RENDER terrain enabled-slots=%d live-subcells=%d first(cell=%u count=%u stride=%u)",
            sr_enabled, sr_live, sr_first_cell, sr_count, sr_stride);
        /* Geometry dump: chunk origins, LOD descriptor and the VBO staging
           vertex. Pointer values only (no dereference) so a bad pointer cannot
           fault the diagnostic. sub_1400D0C10 builds
           pos = origin + (cell<<7) + sample, y = heightGrid[...] + originY. */
        if (sr_first_slot >= 0)
        {
          unsigned int sr_cellu = sr_first_cell;
          float *sr_stage = (float *)&g_180E7F720;
          unsigned long long sr_grid_by_tile =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * (int)sr_cellu];
          unsigned long long sr_grid_by_slot =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * sr_first_slot];
          SR_DEBUG_LOG("RENDER geo slot=%d j=%d cell=%u lod=%d ring=%d",
              sr_first_slot, sr_first_j, sr_cellu, sr_lod,
              (int)dword_140404A6C[sr_cell + 272034690 + sr_first_slot * 3336 + sr_first_j * 13]);
          SR_DEBUG_LOG("RENDER geo origin-by-tile=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034678 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034679 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034680 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034681 + 3336 * (int)sr_cellu]);
          SR_DEBUG_LOG("RENDER geo origin-by-slot=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034678 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034679 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034680 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034681 + 3336 * sr_first_slot]);
          SR_DEBUG_LOG("RENDER geo heightgrid ptr tile=0x%llx slot=0x%llx (0=unalloc, ffff..=unset)",
              sr_grid_by_tile, sr_grid_by_slot);
          SR_DEBUG_LOG("RENDER geo loddesc verts-per-patch=%u bytes-per-patch=%u ringhead=%u",
              dword_140404A6C[24582 * sr_cellu + 271838023],
              dword_140404A6C[24582 * sr_cellu + 271838025],
              dword_140404A6C[24582 * sr_cellu + 271838026]);
          SR_DEBUG_LOG("RENDER geo staging pos=(%.2f,%.2f,%.2f) nrm=(%.2f,%.2f,%.2f)",
              sr_stage[0], sr_stage[1], sr_stage[2],
              sr_stage[3], sr_stage[4], sr_stage[5]);
          SR_DEBUG_LOG("RENDER geo vbo-ids tile: ibo=%u vbo=%u  slot: ibo=%u vbo=%u",
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791752] + 283793813],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791752] + 283793813]);
        }
      }
      sr_frame_logged = 1;
    }
  }
  glDisable(3042);
  if ( g_16B165F60 )
  {
    glPolygonMode(1032, 6913);
    glDisable(2929);
  }
  /* Native 0x140120173/0x14012017E: GL_CULL_FACE on with glFrontFace(GL_CW)
     for the whole terrain pass. Verified against original disassembly. */
  glEnable(2884);
  glFrontFace(2304);
  v9 = 256;
  if ( g_16B165F60
    || ((*(void (           **)(_QWORD))(unsigned int *)&glDepthMask)(0), g_16B165F60) )
  {
    if ( !g_18B7D2FBC && !g_18C434FDC )
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
      glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      v266 = 36;
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      LODWORD(v265) = 1065353216;
      glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      v13 = &g_183EBC404;
      v14 = &g_149F54C20;
      v15 = 256;
      v16 = &g_149F55020;
      v17 = &g_14DF55020;
      do
      {
        if ( (int)*v14 > 0 )
        {
          glUseProgram(renderer_ui_program);
          glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * *v13 + 284024944]);
          unk_140404808(4, v16, 5125, v17, *v14, v16 + 25165824);
        }
        v16 += 0x4000;
        v17 += 0x8000;
        v13 += 4;
        ++v14;
        --v15;
      }
      while ( v15 );
      glBindBuffer(34963, 0);
      glBindBuffer(34962, 0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(0);
      v1 = 0;
    }
  }
  else
  {
    sub_14011E210(0, v10, v8);
  }
  sub_1400D22E0(0);
  glUseProgram(world_program);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
  glActiveTexture(33984);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C10 + 283793813]);
  v22 = (int *)&g_150F55024;
  v23 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    v24 = (int *)&g_150F55024;
    do
    {
      sub_14011DDB0(*v24, 0);
      ++v23;
      ++v24;
    }
    while ( v23 < (int)g_150F55020 );
  }
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glActiveTexture(33984);
  glDisableVertexAttribArray(2);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(0);
  glUseProgram(0);
  glUseProgram(model_program);
  sub_140124AF0(0, 0);
  v26 = resting_texture_1;
  v284 = 0;
  sr_world_material_pair[0] = resting_texture_1;
  sr_world_material_pair[1] = resting_texture_1;
  if ( (int)world_particle_count > 0 )
  {
    v27 = &g_1A70AE580;
    do
    {
      if ( v27[2] )
      {
        v28 = *v27;
        v29 = 26LL * v1;
        if ( !*v27 )
        {
          sr_world_material_pair[0] = resting_texture_0;
          sr_world_material_pair[1] = resting_texture_0;
          sub_140124840(
            world_particle_mesh_0,
            &dword_140404A6C[v29 + 431138504],
            &dword_140404A6C[v29 + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&v284);
          v28 = *v27;
          v26 = resting_texture_1;
        }
        if ( v28 == 1 )
        {
          sr_world_material_pair[0] = v26;
          sr_world_material_pair[1] = v26;
          sub_140124840(
            world_particle_mesh_1,
            &dword_140404A6C[v29 + 431138504],
            &dword_140404A6C[v29 + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&v284);
          v26 = resting_texture_1;
        }
      }
      ++v1;
      v27 += 26;
    }
    while ( v1 < (int)world_particle_count );
  }
  g_1A724E600 = xmmword_140278D30;
  v30 = (float *)&sr_world_matrix[0];
  v31 = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  v32 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_world_matrix[0];
  v33 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v34 = *(v31 - 1);
    v35 = 4;
    v36 = *v31;
    v37 = v31[1];
    v38 = v31[2];
    do
    {
      *v30 = (float)((float)((float)(v34 * *(float *)((char *)v30 + v32 - 16))
                           + (float)(v36 * *(float *)((char *)v30 + v32)))
                   + (float)(v37 * *(float *)((char *)v30 + v32 + 16)))
           + (float)(v38 * *(float *)((char *)v30 + v32 + 32));
      ++v30;
      --v35;
    }
    while ( v35 );
    v31 += 4;
    v32 -= 16LL;
    --v33;
  }
  while ( v33 );
  g_1A724E640 = sr_world_matrix[0];
  v39 = (float *)&sr_world_matrix[0];
  g_1A724E650 = sr_world_matrix[1];
  v40 = (float *)&g_1A724E644;
  v41 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_world_matrix[0];
  v42 = 4;
  g_1A724E660 = sr_world_matrix[2];
  g_1A724E670 = sr_world_matrix[3];
  do
  {
    v43 = *(v40 - 1);
    v44 = 4;
    v45 = *v40;
    v46 = v40[1];
    v47 = v40[2];
    do
    {
      *v39 = (float)((float)((float)(v43 * *(float *)((char *)v39 + v41 - 16))
                           + (float)(v45 * *(float *)((char *)v39 + v41)))
                   + (float)(v46 * *(float *)((char *)v39 + v41 + 16)))
           + (float)(v47 * *(float *)((char *)v39 + v41 + 32));
      ++v39;
      --v44;
    }
    while ( v44 );
    v40 += 4;
    v41 -= 16LL;
    --v42;
  }
  while ( v42 );
  g_1A724E6C0 = sr_world_matrix[0];
  g_1A724E6D0 = sr_world_matrix[1];
  g_1A724E6E0 = sr_world_matrix[2];
  g_1A724E6F0 = sr_world_matrix[3];
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  sub_1401259B0(0, v48, v49);
  glUseProgram(0);
  sub_140189E80(0, v50, v51);
  glUseProgram(0);
  if ( g_16B165F60 )
  {
    glPolygonMode(1032, 6914);
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  sub_140122690(0.5625, v52, v53);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  v54 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v55 = (float *)&sr_world_matrix[0] + 1;
  *(unsigned int *)&g_1A724E5C0 = *(unsigned int *)&g_183F7C550;
  v56 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(unsigned int *)&g_1A724E5D0 = *(unsigned int *)&g_183F7C554;
  v57 = 4;
  *(unsigned int *)&g_1A724E5E0 = *(unsigned int *)&g_183F7C558;
  g_1A724E5C4 = *(unsigned int *)&g_183F7C55C;
  g_1A724E5D4 = *(unsigned int *)&g_183F7C560;
  g_1A724E5E4 = *(unsigned int *)&g_183F7C564;
  g_1A724E5C8 = *(unsigned int *)&g_183F7C568;
  g_1A724E5D8 = *(unsigned int *)&g_183F7C56C;
  g_1A724E5E8 = *(unsigned int *)&g_183F7C570;
  sr_world_matrix[1] = xmmword_140278D80;
  sr_world_matrix[0] = xmmword_140278D30;
  sr_world_matrix[2] = xmmword_140278E20;
  LODWORD(sr_world_matrix[3]) = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
  *((float *)&sr_world_matrix[3] + 1) = -g_183F7C548;
  *((float *)&sr_world_matrix[3] + 2) = -g_183F7C54C;
  *(_QWORD *)&g_1A724E5F0 = 0;
  g_1A724E5F8 = 0;
  g_1A724E5CC = 0;
  g_1A724E5DC = 0;
  g_1A724E5EC = 0;
  g_1A724E5FC = 1065353216;
  HIDWORD(sr_world_matrix[3]) = 1065353216;
  do
  {
    v58 = *(v55 - 1);
    v59 = 4;
    v60 = *v55;
    v61 = v55[1];
    v62 = v55[2];
    do
    {
      *v54 = (float)((float)((float)(v58 * *(float *)((char *)v54 + v56 - 16))
                           + (float)(v60 * *(float *)((char *)v54 + v56)))
                   + (float)(v61 * *(float *)((char *)v54 + v56 + 16)))
           + (float)(v62 * *(float *)((char *)v54 + v56 + 32));
      ++v54;
      --v59;
    }
    while ( v59 );
    v55 += 4;
    v56 -= 16LL;
    --v57;
  }
  while ( v57 );
  v63 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E5C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v64 = (float *)&g_1A724E604;
  v65 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E5D0 = (*(__int128 *)(sr_world_matrix_backing+32));
  v66 = 4;
  g_1A724E5E0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E5F0 = (*(__int128 *)(sr_world_matrix_backing+64));
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v67 = *(v64 - 1);
    v68 = 4;
    v69 = *v64;
    v70 = v64[1];
    v71 = v64[2];
    do
    {
      *v63 = (float)((float)((float)(v67 * *(float *)((char *)v63 + v65 - 16))
                           + (float)(v69 * *(float *)((char *)v63 + v65)))
                   + (float)(v70 * *(float *)((char *)v63 + v65 + 16)))
           + (float)(v71 * *(float *)((char *)v63 + v65 + 32));
      ++v63;
      --v68;
    }
    while ( v68 );
    v64 += 4;
    v65 -= 16LL;
    --v66;
  }
  while ( v66 );
  v72 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v73 = (float *)&g_1A724E5C4;
  v74 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
  v75 = 4;
  g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    v76 = *(v73 - 1);
    v77 = 4;
    v78 = *v73;
    v79 = v73[1];
    v80 = v73[2];
    do
    {
      *v72 = (float)((float)((float)(v76 * *(float *)((char *)v72 + v74 - 16))
                           + (float)(v78 * *(float *)((char *)v72 + v74)))
                   + (float)(v79 * *(float *)((char *)v72 + v74 + 16)))
           + (float)(v80 * *(float *)((char *)v72 + v74 + 32));
      ++v72;
      --v77;
    }
    while ( v77 );
    v73 += 4;
    v74 -= 16LL;
    --v75;
  }
  while ( v75 );
  v81 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E680 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v82 = (float *)&g_1A724E644;
  v83 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E690 = (*(__int128 *)(sr_world_matrix_backing+32));
  v84 = 4;
  g_1A724E6A0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E6B0 = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    v85 = *(v82 - 1);
    v86 = 4;
    v87 = *v82;
    v88 = v82[1];
    v89 = v82[2];
    do
    {
      *v81 = (float)((float)((float)(v85 * *(float *)((char *)v81 + v83 - 16))
                           + (float)(v87 * *(float *)((char *)v81 + v83)))
                   + (float)(v88 * *(float *)((char *)v81 + v83 + 16)))
           + (float)(v89 * *(float *)((char *)v81 + v83 + 32));
      ++v81;
      --v86;
    }
    while ( v86 );
    v82 += 4;
    v83 -= 16LL;
    --v84;
  }
  while ( v84 );
  g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
  g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
  glEnable(3042);
  glBlendFunc(1,1);
  glDisable(3553);
  *(float *)&sr_world_direction[0] = (float)(g_18417DE78 * 16368.0) + g_183F7C544;
  *(float *)&sr_world_direction[2] = (float)(g_18417DE80 * 16368.0) + g_183F7C54C;
  (*(float *)&sr_world_direction[1]) = (float)(g_18417DE7C * 16368.0) + g_183F7C548;
  glEnable(3553);
  glBlendFunc(770,771);
  glDepthMask(0);
  glEnable(3042);
  glBlendFunc(1,771);
  sub_1401945F0();
  glUseProgram(lit_program);
  glUniform3fv(lit_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(lit_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(lit_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(lit_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(lit_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  glDisable(2884);
  glActiveTexture(33985);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glActiveTexture(33984);
  for ( i = 0; i < (int)g_150F55020; ++v22 )
  {
    sub_14011DA50(*v22);
    ++i;
  }
  v91 = g_1841FA224;
  if ( (int)g_1841FA224 > 0 )
  {
    v92 = &g_1A87C6BA4;
    v93 = (float *)&g_1841FA264;
    v94 = g_1841FA224;
    do
    {
      v95 = *v93 * 256.0;
      v93 += 17;
      *v92++ = (int)(float)(16777216.0 - v95);
      --v94;
    }
    while ( v94 );
  }
  renderer_sort_count = v91;
  sub_14007D710();
  glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[4 * mark_texture_choice + 283827814] + 284024944]);
  g_1AD059448 = 0;
  v96 = 6;
  g_1AD05944C = 6;
  v97 = 0;
  if ( (int)g_1841FA224 > 0 )
  {
    v98 = &g_1A85C6BA4;
    v99 = g_1841FA224;
    while ( 1 )
    {
      v100 = (int)*v98++;
      v101 = 17 * v100;
      v102 = dword_140404A6C[17 * v100 + 284677627];
      v103 = dword_140404A6C[17 * v100 + 284677628];
      v104 = dword_140404A6C[17 * v100 + 284677629];
      v105 = (int)(v97 * v96);
      dword_140404A6C[v105 + 456217209] = dword_140404A6C[17 * v100 + 284677615];
      dword_140404A6C[v105 + 456217210] = dword_140404A6C[17 * v100 + 284677616];
      dword_140404A6C[v105 + 456217211] = dword_140404A6C[17 * v100 + 284677617];
      v106 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v106 + 456217212] = v102;
      dword_140404A6C[v106 + 456217213] = v103;
      dword_140404A6C[v106 + 456217214] = v104;
      LODWORD(v100) = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[(int)v100 + 456217209] = dword_140404A6C[v101 + 284677618];
      dword_140404A6C[(int)v100 + 456217210] = dword_140404A6C[v101 + 284677619];
      dword_140404A6C[(int)v100 + 456217211] = dword_140404A6C[v101 + 284677620];
      v107 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v107 + 456217212] = v102;
      dword_140404A6C[v107 + 456217213] = v103;
      dword_140404A6C[v107 + 456217214] = v104;
      v108 = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v108 + 456217209] = dword_140404A6C[v101 + 284677621];
      dword_140404A6C[v108 + 456217210] = dword_140404A6C[v101 + 284677622];
      dword_140404A6C[v108 + 456217211] = dword_140404A6C[v101 + 284677623];
      v109 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v109 + 456217212] = v102;
      dword_140404A6C[v109 + 456217213] = v103;
      dword_140404A6C[v109 + 456217214] = v104;
      v110 = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v110 + 456217209] = dword_140404A6C[v101 + 284677624];
      dword_140404A6C[v110 + 456217210] = dword_140404A6C[v101 + 284677625];
      dword_140404A6C[v110 + 456217211] = dword_140404A6C[v101 + 284677626];
      v111 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[v111 + 456217212] = v102;
      dword_140404A6C[v111 + 456217213] = v103;
      dword_140404A6C[v111 + 456217214] = v104;
      v97 = ++g_1AD059448;
      if ( !--v99 )
        break;
      v96 = g_1AD05944C;
    }
  }
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C48 + 283793813]);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  LODWORD(v265) = 4 * g_1AD05944C;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glBindBuffer(34963, g_1AD29946C);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)((unsigned int)(6 * ((signed int)g_1AD059448 / 4))),5123,NULL);
  glBindBuffer(34963, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(34067, 0);
  glActiveTexture(33984);
  glEnable(2884);
  glUseProgram(0);
  glBlendFunc(770,771);
  sub_140125DB0();
  glDisable(2884);
  glDepthMask(0);
  glEnable(3042);
  glBlendFunc(770,771);
  glBindTexture(3553, renderer_white_texture);
  glBlendFunc(1,771);
  glBlendFunc(770,771);
  glEnable(2884);
  glEnable(3553);
  glUseProgram(renderer_ui_program);
  sub_1401253C0();
  if ( !toggle_183f7aee0
    && nearest_item != -1
    && dword_140404A6C[1760 * nearest_item + 278845898] != 42 )
  {
    LODWORD(v265) = 1056964608;
    glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p-1f);
    v117 = (int)dword_140404A6C[dword_140404A6C[1760 * nearest_item + 278845898] + 283826966];
    sub_14007B990(
      (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)nearest_item + 1144548656),
      (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)nearest_item + 1144548668));
    sub_14007B6F0(1.125, 1.125, 1.125);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v117 + 283790166] + 283793813]);
    glEnableVertexAttribArray(0);
    v266 = 0;
    v117 *= 3632;
    LODWORD(v265) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + v117);
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v265),(const void *)(intptr_t)(0));
    glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + v117));
    glDisableVertexAttribArray(0);
    glBindBuffer(34962, 0);
    g_1A724E600 = xmmword_140278D30;
    v120 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v121 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v122 = (float *)&g_1A724E604;
    g_1A724E610 = xmmword_140278D80;
    v123 = 4;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    do
    {
      v124 = *(v122 - 1);
      v125 = 4;
      v126 = *v122;
      v127 = v122[1];
      v128 = v122[2];
      do
      {
        *v120 = (float)((float)((float)(v124 * *(float *)((char *)v120 + v121 - 16))
                              + (float)(v126 * *(float *)((char *)v120 + v121)))
                      + (float)(v127 * *(float *)((char *)v120 + v121 + 16)))
              + (float)(v128 * *(float *)((char *)v120 + v121 + 32));
        ++v120;
        --v125;
      }
      while ( v125 );
      v122 += 4;
      v121 -= 16LL;
      --v123;
    }
    while ( v123 );
    v129 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v130 = (float *)&g_1A724E644;
    v131 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    v132 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v133 = *(v130 - 1);
      v134 = 4;
      v135 = *v130;
      v136 = v130[1];
      v137 = v130[2];
      do
      {
        *v129 = (float)((float)((float)(v133 * *(float *)((char *)v129 + v131 - 16))
                              + (float)(v135 * *(float *)((char *)v129 + v131)))
                      + (float)(v136 * *(float *)((char *)v129 + v131 + 16)))
              + (float)(v137 * *(float *)((char *)v129 + v131 + 32));
        ++v129;
        --v134;
      }
      while ( v134 );
      v130 += 4;
      v131 -= 16LL;
      --v132;
    }
    while ( v132 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
    glPolygonMode(1032, 6914);
    v138 = 1760LL * (int)nearest_item;
    v139 = dword_140404A6C[v138 + 278845917];
    sr_world_direction[0] = dword_140404A6C[v138 + 278845916];
    sr_world_direction[2] = dword_140404A6C[v138 + 278845918];
    (*(float *)&sr_world_direction[1]) = *(float *)&v139;
  }
  glDepthMask(0);
  LOBYTE(v140) = 1;
  glDepthMask(v140);
  glUseProgram(renderer_ui_program);
  glBindTexture(3553, renderer_white_texture);
  if ( g_16B165F68 )
    sub_14011E9B0();
  glPolygonMode(1032, 6914);
  glPolygonMode(1032, 6914);
  glDisable(2884);
  glPolygonMode(1032, 6914);
  glEnable(3042);
  glLineWidth(0x1.8000000000000p+1f);
  glLineWidth(1.0f);
  glEnable(3553);
  if ( game_unknown_189f0eea0 )
    sub_14008D800();
  glDepthMask(0);
  v147 = local_player;
  v148 = -1;
  renderer_current_font = 2;
  if ( local_player != -1 )
  {
    v145 = 14388LL * (int)local_player;
    v149 = *(int *)((char *)&g_151620CFC + v145);
    if ( (_DWORD)v149 != -1 )
    {
      v145 = 28664 * v149;
      v150 = dword_140404A6C[7166 * v149 + 280651313];
      if ( v150 != -1 )
        v148 = v150;
    }
  }
  v151 = &g_18329E310;
  v152 = &g_18430A554;
  for ( j = 0; j < 256; ++j )
  {
    if ( !*(v151 - 2) )
      goto LABEL_133;
    if ( *v151 == -1 )
      goto LABEL_133;
    v154 = *((float *)v152 - 2);
    v155 = *((float *)v152 - 1);
    v156 = *(float *)v152;
    if ( (float)((float)((float)((float)(v155 - g_183F7C548)
                               * (float)(v155 - g_183F7C548))
                       + (float)((float)(v154 - g_183F7C544)
                               * (float)(v154 - g_183F7C544)))
               + (float)((float)(*(float *)v152 - g_183F7C54C)
                       * (float)(*(float *)v152 - g_183F7C54C))) >= 1024.0 )
      goto LABEL_133;
    g_1A724E600 = xmmword_140278D30;
    g_1A724E63C = 1065353216;
    v157 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E620 = xmmword_140278E20;
    v158 = (float *)&sr_world_matrix[0] + 1;
    v159 = (char *)(unsigned int *)&g_1A724E610 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E610 = xmmword_140278D80;
    v160 = 4;
    *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&g_183F7C550;
    *((_QWORD *)&sr_world_matrix[0] + 1) = *(unsigned int *)&g_183F7C558;
    *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&g_183F7C55C;
    *((_QWORD *)&sr_world_matrix[1] + 1) = *(unsigned int *)&g_183F7C564;
    *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&g_183F7C568;
    *((_QWORD *)&sr_world_matrix[2] + 1) = *(unsigned int *)&g_183F7C570;
    *(float *)&g_1A724E630 = v154;
    *(float *)&g_1A724E634 = v155 + 0.875;
    *(float *)&g_1A724E638 = v156;
    sr_world_matrix[3] = xmmword_140279490;
    do
    {
      v161 = *(v158 - 1);
      v162 = 4;
      v163 = *v158;
      v164 = v158[1];
      v165 = v158[2];
      do
      {
        *v157 = (float)((float)(v161 * *(float *)((char *)v157 + v159 - 16))
                      + (float)(v163 * *(float *)((char *)v157 + v159)))
              + (float)((float)(v165 * *(float *)((char *)v157 + v159 + 32))
                      + (float)(v164 * *(float *)((char *)v157 + v159 + 16)));
        ++v157;
        --v162;
      }
      while ( v162 );
      v158 += 4;
      v159 -= 16LL;
      --v160;
    }
    while ( v160 );
    g_1A724E600 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v166 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v167 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v168 = (float *)&g_1A724E604;
    g_1A724E610 = (*(__int128 *)(sr_world_matrix_backing+32));
    v169 = 4;
    g_1A724E620 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E630 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v170 = *(v168 - 1);
      v171 = 4;
      v172 = *v168;
      v173 = v168[1];
      v174 = v168[2];
      do
      {
        *v166 = (float)((float)(v170 * *(float *)((char *)v166 + v167 - 16))
                      + (float)(v172 * *(float *)((char *)v166 + v167)))
              + (float)((float)(v174 * *(float *)((char *)v166 + v167 + 32))
                      + (float)(v173 * *(float *)((char *)v166 + v167 + 16)));
        ++v166;
        --v171;
      }
      while ( v171 );
      v168 += 4;
      v167 -= 16LL;
      --v169;
    }
    while ( v169 );
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v175 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v176 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v177 = (float *)&g_1A724E644;
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    v178 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v179 = *(v177 - 1);
      v180 = 4;
      v181 = *v177;
      v182 = v177[1];
      v183 = v177[2];
      do
      {
        *v175 = (float)((float)(v181 * *(float *)((char *)v175 + v176))
                      + (float)(v179 * *(float *)((char *)v175 + v176 - 16)))
              + (float)((float)(v183 * *(float *)((char *)v175 + v176 + 32))
                      + (float)(v182 * *(float *)((char *)v175 + v176 + 16)));
        ++v175;
        --v180;
      }
      while ( v180 );
      v177 += 4;
      v176 -= 16LL;
      --v178;
    }
    while ( v178 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
    if ( v148 != -1 && v151[8] == v148 )
    {
      glDisable(2929);
      v147 = local_player;
    }
    v184 = v151[7145];
    v185 = 1065353216;
    v186 = 1065353216;
    if ( v184 == 1 )
      goto LABEL_114;
    if ( v184 == 2 )
    {
      v185 = 0;
LABEL_114:
      v186 = 0;
    }
    if ( v147 == -1 || (v187 = dword_140404A6C[3597 * v147 + 71856292], v187 == -1) || v187 != j )
    {
      if ( v184 > 0 || g_18329CC44 )
      {
        v188 = (int)*v151;
        v269 = 1065353216;
        v268 = v186;
        v267 = v185;
        LODWORD(v266) = 1065353216;
        LODWORD(v265) = 193;
        sr_text_draw_recovered((char *)&dword_140404A6C[3597 * v188 + 71856254], 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x3E800000u))))), 0.3125, 193u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140121B9D */;
        v189 = dword_140404A6C[3597 * *v151 + 71856265];
        crt_sprintf(v285, "%03d-%04d", v189 / 0x2710, v189 % 0x2710);
        v269 = 1065353216;
        v268 = v186;
        v267 = v185;
        LODWORD(v266) = 1065353216;
        LODWORD(v265) = 193;
        sr_text_draw_recovered(v285, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 0.25, 193u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140121C22 */;
        v147 = local_player;
      }
    }
    if ( v148 != -1 && v151[8] == v148 )
    {
      glEnable(2929);
      v147 = local_player;
    }
    g_1A724E600 = xmmword_140278D30;
    v190 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v191 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v192 = (float *)&g_1A724E604;
    g_1A724E610 = xmmword_140278D80;
    v193 = 4;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    do
    {
      v194 = *(v192 - 1);
      v195 = 4;
      v196 = *v192;
      v197 = v192[1];
      v198 = v192[2];
      do
      {
        *v190 = (float)((float)(v198 * *(float *)((char *)v190 + v191 + 32))
                      + (float)(v197 * *(float *)((char *)v190 + v191 + 16)))
              + (float)((float)(v196 * *(float *)((char *)v190 + v191))
                      + (float)(v194 * *(float *)((char *)v190 + v191 - 16)));
        ++v190;
        --v195;
      }
      while ( v195 );
      v192 += 4;
      v191 -= 16LL;
      --v193;
    }
    while ( v193 );
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v199 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v145 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v146 = (float *)&g_1A724E644;
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    v200 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v201 = *(v146 - 1);
      v202 = 4;
      v203 = *v146;
      v204 = v146[1];
      v205 = v146[2];
      do
      {
        *v199 = (float)((float)(v201 * *(float *)((char *)v199 + v145 - 16))
                      + (float)(v203 * *(float *)((char *)v199 + v145)))
              + (float)((float)(v205 * *(float *)((char *)v199 + v145 + 32))
                      + (float)(v204 * *(float *)((char *)v199 + v145 + 16)));
        ++v199;
        --v202;
      }
      while ( v202 );
      v146 += 4;
      v145 -= 16LL;
      --v200;
    }
    while ( v200 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
LABEL_133:
    v152 += 344;
    v151 += 7166;
  }
  if ( !g_18329CC44 && game_type == 5 && v147 != -1 )
  {
    v145 = 14388LL * v147;
    if ( *(unsigned int *)((char *)&g_151620CE4 + v145) == 2 )
    {
      v206 = &g_18329E390;
      v207 = g_183F7A564;
      do
      {
        if ( *(v206 - 34) )
        {
          v208 = *(v206 - 32);
          if ( v208 != -1
            && (v208 == v207 || v208 == g_183F7A568)
            && (float)((float)((float)((float)(*((float *)v206 - 1) - g_183F7C548)
                                     * (float)(*((float *)v206 - 1) - g_183F7C548))
                             + (float)((float)(*((float *)v206 - 2) - g_183F7C544)
                                     * (float)(*((float *)v206 - 2) - g_183F7C544)))
                     + (float)((float)(*(float *)v206 - g_183F7C54C)
                             * (float)(*(float *)v206 - g_183F7C54C))) < 1024.0 )
          {
            v209 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v210 = v206[103];
            *(float *)&v211 = *((float *)v206 + 104) + 1.25;
            v212 = v206[105];
            v213 = (float *)&sr_world_matrix[0] + 1;
            g_1A724E600 = xmmword_140278D30;
            v214 = (char *)(unsigned int *)&g_1A724E610 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E63C = 1065353216;
            v215 = 4;
            g_1A724E620 = xmmword_140278E20;
            g_1A724E610 = xmmword_140278D80;
            *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&g_183F7C550;
            *((_QWORD *)&sr_world_matrix[0] + 1) = *(unsigned int *)&g_183F7C558;
            *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&g_183F7C55C;
            *((_QWORD *)&sr_world_matrix[1] + 1) = *(unsigned int *)&g_183F7C564;
            *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&g_183F7C568;
            *((_QWORD *)&sr_world_matrix[2] + 1) = *(unsigned int *)&g_183F7C570;
            *(unsigned int *)&g_1A724E630 = v210;
            g_1A724E634 = v211;
            g_1A724E638 = v212;
            sr_world_matrix[3] = xmmword_140279490;
            do
            {
              v216 = *(v213 - 1);
              v217 = 4;
              v218 = *v213;
              v219 = v213[1];
              v220 = v213[2];
              do
              {
                *v209 = (float)((float)(v216 * *(float *)((char *)v209 + v214 - 16))
                              + (float)(v218 * *(float *)((char *)v209 + v214)))
                      + (float)((float)(v220 * *(float *)((char *)v209 + v214 + 32))
                              + (float)(v219 * *(float *)((char *)v209 + v214 + 16)));
                ++v209;
                --v217;
              }
              while ( v217 );
              v213 += 4;
              v214 -= 16LL;
              --v215;
            }
            while ( v215 );
            g_1A724E600 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v221 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E610 = (*(__int128 *)(sr_world_matrix_backing+32));
            v222 = (float *)&g_1A724E604;
            v223 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v224 = 4;
            g_1A724E620 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E630 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v225 = *(v222 - 1);
              v226 = 4;
              v227 = *v222;
              v228 = v222[1];
              v229 = v222[2];
              do
              {
                *v221 = (float)((float)(v229 * *(float *)((char *)v221 + v223 + 32))
                              + (float)(v228 * *(float *)((char *)v221 + v223 + 16)))
                      + (float)((float)(v227 * *(float *)((char *)v221 + v223))
                              + (float)(v225 * *(float *)((char *)v221 + v223 - 16)));
                ++v221;
                --v226;
              }
              while ( v226 );
              v222 += 4;
              v223 -= 16LL;
              --v224;
            }
            while ( v224 );
            g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v230 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
            v231 = (float *)&g_1A724E644;
            v232 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v233 = 4;
            g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v234 = *(v231 - 1);
              v235 = 4;
              v236 = *v231;
              v237 = v231[1];
              v238 = v231[2];
              do
              {
                *v230 = (float)((float)(v234 * *(float *)((char *)v230 + v232 - 16))
                              + (float)(v236 * *(float *)((char *)v230 + v232)))
                      + (float)((float)(v238 * *(float *)((char *)v230 + v232 + 32))
                              + (float)(v237 * *(float *)((char *)v230 + v232 + 16)));
                ++v230;
                --v235;
              }
              while ( v235 );
              v231 += 4;
              v232 -= 16LL;
              --v233;
            }
            while ( v233 );
            g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
            g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
            if ( v208 == v207 )
            {
              v269 = 1065353216;
              v268 = 0;
              v267 = 1065353216;
              LODWORD(v266) = 0;
              LODWORD(v265) = 193;
              sr_text_draw_recovered("The Savior", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 0.25, 193u, 0x0.0p+0f, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140122282 */;
              v207 = g_183F7A564;
            }
            v239 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E600 = xmmword_140278D30;
            v240 = (float *)&g_1A724E604;
            v241 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E610 = xmmword_140278D80;
            v242 = 4;
            g_1A724E620 = xmmword_140278E20;
            g_1A724E630 = xmmword_140279490;
            do
            {
              v243 = *(v240 - 1);
              v244 = 4;
              v245 = *v240;
              v246 = v240[1];
              v247 = v240[2];
              do
              {
                *v239 = (float)((float)(v247 * *(float *)((char *)v239 + v241 + 32))
                              + (float)(v246 * *(float *)((char *)v239 + v241 + 16)))
                      + (float)((float)(v243 * *(float *)((char *)v239 + v241 - 16))
                              + (float)(v245 * *(float *)((char *)v239 + v241)));
                ++v239;
                --v244;
              }
              while ( v244 );
              v240 += 4;
              v241 -= 16LL;
              --v242;
            }
            while ( v242 );
            v248 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v146 = (float *)&g_1A724E644;
            v145 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
            v249 = 4;
            g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v250 = *(v146 - 1);
              v251 = 4;
              v252 = *v146;
              v253 = v146[1];
              v254 = v146[2];
              do
              {
                *v248 = (float)((float)(v250 * *(float *)((char *)v248 + v145 - 16))
                              + (float)(v252 * *(float *)((char *)v248 + v145)))
                      + (float)((float)(v254 * *(float *)((char *)v248 + v145 + 32))
                              + (float)(v253 * *(float *)((char *)v248 + v145 + 16)));
                ++v248;
                --v251;
              }
              while ( v251 );
              v146 += 4;
              v145 -= 16LL;
              --v249;
            }
            while ( v249 );
            g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
            g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
          }
        }
        v206 += 7166;
        --v9;
      }
      while ( v9 );
      v147 = local_player;
    }
  }
  if ( !toggle_183f7aee0 )
  {
    sub_140092D70();
    v147 = local_player;
  }
  if ( game_type == 5 && v147 != -1 )
  {
    v145 = 14388LL * v147;
    v255 = *(unsigned int *)((char *)&g_151620CE4 + v145);
    if ( (unsigned int)(v255 - 1) <= 1 && g_183F7A570 != 0.0 )
    {
      sr_world_direction[0] = *(unsigned int *)&g_183F7A570;
      sr_world_direction[2] = *(unsigned int *)&g_183F7A578;
      g_1AD059440 = 2;
      g_1AD059448 = 0;
      g_1AD05944C = 9;
      if ( (_DWORD)v255 == 1 )
        v256 = xmmword_1402794A0;
      else
        v256 = xmmword_140279530;
      g_1AD299450 = v256;
      v257 = g_183F7A574 + 2.0;
      (*(float *)&sr_world_direction[1]) = g_183F7A574 + 2.0;
      sub_14007D520((unsigned int *)&sr_world_direction[0], v255, (__int64)v146);
      (*(float *)&sr_world_direction[1]) = v257 + 256.0;
      sub_14007D520((unsigned int *)&sr_world_direction[0], v258, v259);
      sub_14006E0D0(v261, v260, v262);
    }
  }
  LOBYTE(v145) = 1;
  glDepthMask(v145);
  glDisable(2929);
  glDepthMask(0);
  glDisable(2884);
  glDisable(3042);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[42 * g_183EBE430 + 436582486], 0);
  glUseProgram(hdr_program);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33985);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33984);
  glDrawArrays(4, 0, 3);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (000000014014B2A0) ----------------------------------------------------
// Candidate shader/camera uniform cache: resolves viewposition/viewdirection/matrices/light/sampler uniforms and sets inverse resolution.
__int64 render_cache_camera_uniforms_candidate()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  float resolution[2]; /* original contiguous vec2 uniform */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014B2A0[64];
#define v4 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 0)) /* [rsp+0h] */
#define v7 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 48)) /* [rsp+30h] */

  LOBYTE(g_1515B0BC0) = 0;
  if ( (unsigned int)shader_compile_program(0, (__int64)(uintptr_t)world_vertex_source, (__int64)(uintptr_t)world_fragment_source, 0) )
  {
    glUseProgram(world_program);
    world_u_clipplane = glGetUniformLocation(world_program, "clipplane");
    world_u_ooresolution = glGetUniformLocation(world_program, "ooresolution");
    world_u_viewposition = glGetUniformLocation(world_program, "viewposition");
    world_u_flags = glGetUniformLocation(world_program, "flags");
    world_u_lightdirection = glGetUniformLocation(world_program, "lightdirection");
    world_u_isreflection = glGetUniformLocation(world_program, "isreflection");
    world_u_planeposition = glGetUniformLocation(world_program, "planeposition");
    world_u_planenormal = glGetUniformLocation(world_program, "planenormal");
    world_u_modelviewprojectionmatrix = glGetUniformLocation(world_program, "modelviewprojectionmatrix");
    world_u_lightambient = glGetUniformLocation(world_program, "lightambient");
    world_u_lightdiffuse = glGetUniformLocation(world_program, "lightdiffuse");
    world_u_tex_color = glGetUniformLocation(world_program, "tex_color");
    world_u_tex_shadowmap = glGetUniformLocation(world_program, "tex_shadowmap");
    world_u_tex_material = glGetUniformLocation(world_program, "tex_material");
    world_u_tex_cubemap = glGetUniformLocation(world_program, "tex_cubemap");
    world_u_tex_atlas_color = glGetUniformLocation(world_program, "tex_atlas_color");
    world_u_tex_atlas_material = glGetUniformLocation(world_program, "tex_atlas_material");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(world_u_ooresolution, 1, resolution);
    glUniform1i(world_u_tex_color, 0);
    glUniform1i(world_u_tex_shadowmap, 1);
    glUniform1i(world_u_tex_material, 2);
    glUniform1i(world_u_tex_cubemap, 3);
    glUniform1i(world_u_tex_atlas_color, 4);
    glUniform1i(world_u_tex_atlas_material, 5);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(1, (__int64)(uintptr_t)object_vertex_source, (__int64)(uintptr_t)object_fragment_source, 0) )
  {
    glUseProgram(object_program);
    object_u_clipplane = glGetUniformLocation(object_program, "clipplane");
    object_u_ooresolution = glGetUniformLocation(object_program, "ooresolution");
    object_u_viewposition = glGetUniformLocation(object_program, "viewposition");
    object_u_lightdirection = glGetUniformLocation(object_program, "lightdirection");
    object_u_isreflection = glGetUniformLocation(object_program, "isreflection");
    object_u_planeposition = glGetUniformLocation(object_program, "planeposition");
    object_u_planenormal = glGetUniformLocation(object_program, "planenormal");
    object_u_modelviewprojectionmatrix = glGetUniformLocation(object_program, "modelviewprojectionmatrix");
    object_u_lightambient = glGetUniformLocation(object_program, "lightambient");
    object_u_lightdiffuse = glGetUniformLocation(object_program, "lightdiffuse");
    object_u_tex_color = glGetUniformLocation(object_program, "tex_color");
    object_u_tex_shadowmap = glGetUniformLocation(object_program, "tex_shadowmap");
    object_u_tex_material = glGetUniformLocation(object_program, "tex_material");
    object_u_tex_cubemap = glGetUniformLocation(object_program, "tex_cubemap");
    object_u_flags = glGetUniformLocation(object_program, "flags");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(object_u_ooresolution, 1, resolution);
    glUniform1i(object_u_tex_color, 0);
    glUniform1i(object_u_tex_shadowmap, 1);
    glUniform1i(object_u_tex_material, 2);
    glUniform1i(object_u_tex_cubemap, 3);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(2, (__int64)(uintptr_t)lit_vertex_source, (__int64)(uintptr_t)lit_fragment_source, 0) )
  {
    glUseProgram(lit_program);
    lit_u_ooresolution = glGetUniformLocation(lit_program, "ooresolution");
    lit_u_viewposition = glGetUniformLocation(lit_program, "viewposition");
    lit_u_lightdirection = glGetUniformLocation(lit_program, "lightdirection");
    lit_u_modelviewprojectionmatrix = glGetUniformLocation(lit_program, "modelviewprojectionmatrix");
    lit_u_lightambient = glGetUniformLocation(lit_program, "lightambient");
    lit_u_lightdiffuse = glGetUniformLocation(lit_program, "lightdiffuse");
    lit_u_tex_color = glGetUniformLocation(lit_program, "tex_color");
    lit_u_tex_cubemap = glGetUniformLocation(lit_program, "tex_cubemap");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(lit_u_ooresolution, 1, resolution);
    glUniform1i(lit_u_tex_color, 0);
    glUniform1i(lit_u_tex_cubemap, 1);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(3, (__int64)(uintptr_t)model_vertex_source, (__int64)(uintptr_t)model_fragment_source, 0) )
  {
    glUseProgram(model_program);
    model_u_ooresolution = glGetUniformLocation(model_program, "ooresolution");
    model_u_viewposition = glGetUniformLocation(model_program, "viewposition");
    model_u_objposition = glGetUniformLocation(model_program, "objposition");
    model_u_objorientation = glGetUniformLocation(model_program, "objorientation");
    model_u_modelviewprojectionmatrix = glGetUniformLocation(model_program, "modelviewprojectionmatrix");
    model_u_lightdirection = glGetUniformLocation(model_program, "lightdirection");
    model_u_lightambient = glGetUniformLocation(model_program, "lightambient");
    model_u_lightdiffuse = glGetUniformLocation(model_program, "lightdiffuse");
    model_u_viewdirection = glGetUniformLocation(model_program, "viewdirection");
    model_u_tex_color = glGetUniformLocation(model_program, "tex_color");
    model_u_tex_shadowmap = glGetUniformLocation(model_program, "tex_shadowmap");
    model_u_tex_cubemap = glGetUniformLocation(model_program, "tex_cubemap");
    model_u_flags = glGetUniformLocation(model_program, "flags");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(model_u_ooresolution, 1, resolution);
    glUniform1i(model_u_tex_color, 0);
    glUniform1i(model_u_tex_shadowmap, 1);
    glUniform1i(model_u_tex_cubemap, 2);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(4, (__int64)(uintptr_t)skin_vertex_source, (__int64)(uintptr_t)skin_fragment_source, 0) )
  {
    glTransformFeedbackVaryings(skin_program, 3, off_140301DB0, 35980);
    glLinkProgram(skin_program);
    glUseProgram(skin_program);
    skin_u_boneorgposition = glGetUniformLocation(skin_program, "boneorgposition");
    skin_u_boneposition = glGetUniformLocation(skin_program, "boneposition");
    skin_u_boneorientation = glGetUniformLocation(skin_program, "boneorientation");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(5, (__int64)(uintptr_t)land_mask_vertex_source, (__int64)(uintptr_t)land_mask_fragment_source, 0) )
  {
    glUseProgram(land_mask_program);
    land_mask_u_modelviewprojectionmatrix = glGetUniformLocation(land_mask_program, "modelviewprojectionmatrix");
    land_mask_u_modelviewmatrix = glGetUniformLocation(land_mask_program, "modelviewmatrix");
    land_mask_u_land_usemask = glGetUniformLocation(land_mask_program, "land_usemask");
    land_mask_u_tex_mask = glGetUniformLocation(land_mask_program, "tex_mask");
    glUniform1i(land_mask_u_tex_mask, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(6, (__int64)(uintptr_t)sky_vertex_source, (__int64)(uintptr_t)sky_fragment_source, 0) )
  {
    glUseProgram(sky_program);
    sky_u_atmoconstant = glGetUniformLocation(sky_program, "atmoconstant");
    sky_u_atmowavelength = glGetUniformLocation(sky_program, "atmowavelength");
    sky_u_worldposition = glGetUniformLocation(sky_program, "worldposition");
    sky_u_ooresolution = glGetUniformLocation(sky_program, "ooresolution");
    sky_u_lightdirection = glGetUniformLocation(sky_program, "lightdirection");
    sky_u_modelviewprojectionmatrix = glGetUniformLocation(sky_program, "modelviewprojectionmatrix");
    sky_u_numofsamples = glGetUniformLocation(sky_program, "numofsamples");
    glUniform4fv(sky_u_atmoconstant, 1, &unk_1402F61B8);
    glUniform3fv(sky_u_atmowavelength, 1, &unk_1402F61C8);
    glUniform1i(sky_u_numofsamples, 4);
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(sky_u_ooresolution, 1, resolution);
    sky_u_tex_depth = glGetUniformLocation(sky_program, "tex_depth");
    glUniform1i(sky_u_tex_depth, 0);
    sky_u_flags = glGetUniformLocation(sky_program, "flags");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(7, (__int64)(uintptr_t)blur_vertex_source, (__int64)(uintptr_t)blur_fragment_source, 0) )
  {
    glUseProgram(blur_program);
    blur_u_ooresolution = glGetUniformLocation(blur_program, "ooresolution");
    blur_u_sampledir = glGetUniformLocation(blur_program, "sampledir");
    blur_u_blurfilter = glGetUniformLocation(blur_program, "blurfilter");
    blur_u_blurfilter2 = glGetUniformLocation(blur_program, "blurfilter2");
    blur_u_modelviewprojectionmatrix = glGetUniformLocation(blur_program, "modelviewprojectionmatrix");
    blur_u_tex_color = glGetUniformLocation(blur_program, "tex_color");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(blur_u_ooresolution, 1, resolution);
    glUniform1i(blur_u_tex_color, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(8, (__int64)(uintptr_t)terrain_vertex_source, (__int64)(uintptr_t)terrain_fragment_source, 0) )
  {
    glUseProgram(terrain_program);
    terrain_u_lightdirection = glGetUniformLocation(terrain_program, "lightdirection");
    terrain_u_lightambient = glGetUniformLocation(terrain_program, "lightambient");
    terrain_u_lightdiffuse = glGetUniformLocation(terrain_program, "lightdiffuse");
    terrain_u_viewposition = glGetUniformLocation(terrain_program, "viewposition");
    terrain_u_modelviewprojectionmatrix = glGetUniformLocation(terrain_program, "modelviewprojectionmatrix");
    terrain_u_land_usemask = glGetUniformLocation(terrain_program, "land_usemask");
    terrain_u_tex_normal = glGetUniformLocation(terrain_program, "tex_normal");
    terrain_u_tex_detail = glGetUniformLocation(terrain_program, "tex_detail");
    terrain_u_tex_color = glGetUniformLocation(terrain_program, "tex_color");
    terrain_u_tex_mask = glGetUniformLocation(terrain_program, "tex_mask");
    terrain_u_tex_shadow = glGetUniformLocation(terrain_program, "tex_shadow");
    glUniform1i(terrain_u_tex_normal, 0);
    glUniform1i(terrain_u_tex_detail, 1);
    glUniform1i(terrain_u_tex_color, 2);
    glUniform1i(terrain_u_tex_mask, 3);
    glUniform1i(terrain_u_tex_shadow, 4);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(
                       9,
                       (__int64)(uintptr_t)shadow_vertex_source,
                       (__int64)(uintptr_t)shadow_fragment_source,
                       (__int64)(uintptr_t)sr_mem_1402ff550) )
  {
    glUseProgram(shadow_program);
    shadow_u_modelmatrix = glGetUniformLocation(shadow_program, "modelmatrix");
    shadow_u_modelviewprojectionmatrix = glGetUniformLocation(shadow_program, "modelviewprojectionmatrix");
    shadow_u_lightdirection = glGetUniformLocation(shadow_program, "lightdirection");
    shadow_u_shadowlength = glGetUniformLocation(shadow_program, "shadowlength");
    shadow_u_projectionmatrix = glGetUniformLocation(shadow_program, "projectionmatrix");
    shadow_u_viewmatrix = glGetUniformLocation(shadow_program, "viewmatrix");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(10, (__int64)(uintptr_t)texture_lod_vertex_source, (__int64)(uintptr_t)texture_lod_fragment_source, 0) )
  {
    glUseProgram(texture_lod_program);
    texture_lod_u_modelviewprojectionmatrix = glGetUniformLocation(texture_lod_program, "modelviewprojectionmatrix");
    texture_lod_u_texlod = glGetUniformLocation(texture_lod_program, "texlod");
    texture_lod_u_tex_color = glGetUniformLocation(texture_lod_program, "tex_color");
    glUniform1i(texture_lod_u_tex_color, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(11, (__int64)(uintptr_t)hdr_vertex_source, (__int64)(uintptr_t)hdr_fragment_source, 0) )
  {
    glUseProgram(hdr_program);
    hdr_u_tex_hdrcolor = glGetUniformLocation(hdr_program, "tex_hdrcolor");
    hdr_u_tex_hdrbloom = glGetUniformLocation(hdr_program, "tex_hdrbloom");
    glUniform1i(hdr_u_tex_hdrcolor, 0);
    glUniform1i(hdr_u_tex_hdrbloom, 1);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(12, (__int64)(uintptr_t)water_vertex_source, (__int64)(uintptr_t)water_fragment_source, 0) )
  {
    glUseProgram(water_program);
    water_u_modelviewprojectionmatrix = glGetUniformLocation(water_program, "modelviewprojectionmatrix");
    water_u_texturematrix = glGetUniformLocation(water_program, "texturematrix");
    water_u_waterangle = glGetUniformLocation(water_program, "waterangle");
    water_u_flags = glGetUniformLocation(water_program, "flags");
    water_u_tex_color = glGetUniformLocation(water_program, "tex_color");
    glUniform1i(water_u_tex_color, 0);
    glUseProgram(0);
  }
  v0 = -1;
  do
    ++v0;
  while ( *((_BYTE *)&g_1515B0BC0 + v0) );
  if ( v0 )
  {
    v1 = crt_fopen("shaderoutput.txt", "wb");
    v2 = v1;
    v0 = v1;
    if ( v1 )
    {
      sub_1400920F0(v1, (     char *)&g_1515B0BC0);
      v0 = crt_fclose(v2);
    }
  }
  return v0; /* native strlen, fopen-failure or fclose RAX */
}

#undef v4
#undef v7

//----- (000000014001B6A0) ----------------------------------------------------
__int64 sub_14001B6A0()
{
  unsigned int *v0;
  int v1;
  int i;
  int j;
  __int64 v4;
  __int64 v5;
  float *v6;
  __int64 v7;
  __int64 v8;
  _Alignas(16) unsigned sr_cube_filter_rotation[12];
  _Alignas(16) unsigned sr_cube_filter_vertices[28];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B6A0[624];
#define v10 (*(_DWORD (*)[10])(void *)(sr_frame_14001B6A0 + 0)) /* [rsp+8h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 40)) /* [rsp+30h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 608)) /* [rsp+268h] */

  glDisable(2929);
  glDepthMask(0);
  glDisable(3042);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278EB0;
  g_1A724E5B0 = xmmword_140279730;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(texture_lod_program);
  glUniformMatrix4fv(texture_lod_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  v0 = &g_183E97754;
  v1 = 256;
  for ( i = 1; i < 10; ++i )
  {
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    glBindFramebuffer(36160, dword_140404A6C[2 * *v0 + 283791765]);
    glUniform1f((int)texture_lod_u_texlod,_mm_cvtss_f32(_mm_cvtepi32_ps(_mm_setr_epi32(i-1,0,0,0))));
    for ( j = 0; j < 6; ++j )
    {
      glFramebufferTexture2D(36160,
        36064,
        (unsigned int)(j + 34069),
        dword_140404A6C[44 * shading_cube_map + 284024944],
        i);
      glViewport(0, 0, (unsigned int)v1, (unsigned int)v1);
      (*(float *)(void *)(sr_cube_filter_rotation+8)) = 1.0;
      *(_OWORD *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i8) = xmmword_140278D30;
      *(_OWORD *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), u64)[2] = xmmword_140278D30;
      switch ( j )
      {
        case 0:
          v5 = 1070141403;
LABEL_13:
          v6 = (float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3];
          break;
        case 1:
          v5 = 3217625051LL;
          goto LABEL_13;
        case 2:
          v5 = 1070141403;
          v6 = (float *)&(*(__m256i *)(void *)sr_cube_filter_rotation);
          break;
        case 3:
          v5 = 3217625051LL;
          v6 = (float *)&(*(__m256i *)(void *)sr_cube_filter_rotation);
          break;
        case 5:
          v5 = 1078530011;
          goto LABEL_13;
        default:
          goto LABEL_15;
      }
      sub_14007B2A0((__int64)&(*(__m256i *)(void *)sr_cube_filter_rotation), v6, *(double *)&v5);
LABEL_15:
      HIDWORD(((uint64_t *)(void *)sr_cube_filter_vertices)[0]) = 0;
      v7 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
      ((uint64_t *)(void *)sr_cube_filter_vertices)[1] = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+25)) = *(__int64 *)((char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i64)[1] + 4);
      (*(unsigned *)(void *)(sr_cube_filter_vertices+27)) = SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5];
      (*(unsigned *)(void *)(sr_cube_filter_vertices+7)) = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+8)) = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+13)) = 1065353216;
      (*(unsigned *)(void *)(sr_cube_filter_vertices+15)) = 0;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+19)) = 0;
      (*(float *)(void *)(sr_cube_filter_vertices+4)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3] + (float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) * -1.0)) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+22)) = (float)((float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+5)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4] + (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] * -1.0))
          - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(unsigned *)(void *)(sr_cube_filter_vertices+21)) = 0;
      (*(float *)(void *)(sr_cube_filter_vertices+6)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5] + (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] * -1.0)) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+23)) = (float)((float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4])
          - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+10)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3] + *(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+24)) = (float)((float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+11)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4] + *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+12)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5] + *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+16)) = (float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+17)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+18)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      glBindBuffer(34962, v7);
      glBufferSubData(34962, 0, 96, (char *)((uint64_t *)(void *)sr_cube_filter_vertices) + 4);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glEnableVertexAttribArray(2);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
      v11 = 24;
      v10[8] = 24;
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(24));
      glDrawArrays(6, 0, 4);
      glDisableVertexAttribArray(0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(2);
    }
    v1 >>= 1;
    ++v0;
  }
  glBindFramebuffer(36160, 0);
  glEnable(2929);
  LOBYTE(v8) = 1;
  glDepthMask(v8);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v10
#undef v11
#undef v35

//----- (00000001400212E0) ----------------------------------------------------
__int64 sub_1400212E0()
{
  int v0;
  unsigned int *v1;
  unsigned int *v2;
  int v3;
  int *v4;
  unsigned int *v5;
  unsigned int *v6;
  float *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  int v17;
  unsigned int v18;
  float v19;
  unsigned int v20;
  float v21;
  float v22;
  __m128i v23;
  __m128i v24;
  int v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  unsigned int *v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  float v35;
  float v36;
  float v37;
  float v38;
  unsigned int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  signed int v44;
  unsigned int *v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  unsigned int v50;
  unsigned int *v51;
  float v52;
  unsigned int *v53;
  float v54;
  unsigned int *v55;
  float v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  __int64 v61;
  float v62;
  bool v63;
  __int64 v64;
  unsigned int v65;
  __int128 v66;
  __int64 v67;
  signed int v68;
  int *v69;
  float *v70;
  __int64 v71;
  float *v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
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
  unsigned int v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  unsigned int v94;
  float v95;
  float v96;
  double v97;
  __int64 v98;
  __int64 v99;
  _DWORD *v100;
  __int64 v101;
  int v102;
  __int64 v103;
  float v104;
  float *v105;
  float v106;
  float v107;
  float v108;
  float v109;
  __int64 v110;
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
  __int64 v121;
  float v122;
  __int64 v123;
  float *v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  __int64 v134;
  int v135;
  unsigned int *v136;
  unsigned int *v137;
  unsigned int *v138;
  unsigned int *v139;
  unsigned int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  unsigned int v145;
  signed int v146;
  int v147;
  float v148;
  float v149;
  float v150;
  unsigned int v151;
  float v152;
  float v153;
  float v154;
  float v155;
  unsigned __int64 v156;
  bool v157;
  float v158;
  float v159;
  unsigned int v160;
  float v161;
  double v162;
  __int64 v163;
  unsigned int v164;
  __int64 v165;
  unsigned int *v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  signed int v170;
  float *v171;
  signed int v172;
  __int64 v173;
  int v174;
  unsigned int *v175;
  __int64 v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  signed int v185;
  unsigned int *v186;
  __int64 v187;
  unsigned int v188;
  unsigned int v189;
  __int64 v190;
  unsigned int *v191;
  unsigned int *v192;
  __int64 v193;
  unsigned int v194;
  unsigned int v195;
  __int64 v196;
  int v197;
  unsigned int *v198;
  __int64 v199;
  unsigned int *v200;
  unsigned int v201;
  __int64 v202;
  unsigned sr_scene_draw_textures[4];
  _Alignas(8) unsigned sr_scene_draw_position[3];
  _Alignas(16) unsigned sr_scene_draw_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400212E0[176];
#define v204 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 0)) /* [rsp+8h] */
#define v205 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 32)) /* [rsp+28h] */
#define v210 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 80)) /* [rsp+58h] */
#define v211 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 88)) /* [rsp+60h] */
#define v212 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 96)) /* [rsp+68h] */
#define v213 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 104)) /* [rsp+70h] */
#define v214 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 112)) /* [rsp+78h] */
#define v215 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 120)) /* [rsp+80h] */
#define v219 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 168)) /* [rsp+B0h] */

  v0 = 0;
  v1 = &g_183EBBBC4;
  g_18417E1B4 = 0;
  v2 = &g_18329E308;
  g_1841FA224 = 0;
  v3 = 0;
  v4 = (int *)&g_183EBBBC4;
  do
  {
    if ( *v2 )
      sub_140022DF0(v3, *v4);
    ++v3;
    v2 += 7166;
    ++v4;
  }
  while ( v3 < 256 );
  v5 = &g_18430A654;
  v6 = &g_18329E9FC;
  v7 = (float *)&g_18430A668;
  v8 = 0;
  do
  {
    if ( *(v6 - 445) )
    {
      v9 = *v1;
      sr_scene_draw_textures[0] = g_183EBF174;
      sr_scene_draw_textures[1] = g_183EBF174;
      (*(uint64_t *)(void *)sr_scene_draw_position) = 0;
      (*(float *)&sr_scene_draw_position[2]) = 0.0;
      (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
      (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
      (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
      sub_140092140(v9, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)v6[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)&v10 = (float)((float)(int)v6[6698] * 0.0625) + 0.03125;
      dword_140404A6C[30 * g_18417E1B4 + 284554678] = dword_140404A6C[908 * *v1 + 178527484];
      dword_140404A6C[30 * g_18417E1B4 + 284554704] = v10;
      v11 = v6[6699];
      if ( v11 > 0 )
        *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)((float)(v11 - 1) * 0.0625)
                                                                                + 0.03125;
      v12 = 1;
      if ( !g_183F7C2F8 && local_player != -1 )
      {
        v13 = dword_140404A6C[3597 * local_player + 71856292];
        if ( v13 != -1
          && !g_16B165F6C
          && v13 == v8
          && ((int)*(v6 - 430) > 0 || (int)g_183F79DE8 > 0) )
        {
          v12 = 3;
        }
      }
      v14 = *(v7 - 2);
      v15 = *(v7 - 1);
      v16 = *v7;
      v17 = 16 * v6[6691];
      sr_scene_draw_textures[0] = g_183EBF17C;
      sr_scene_draw_textures[1] = g_183EBF17C;
      v18 = v17 + v6[6692];
      v205 = v5;
      v19 = (float)(v14 * 0.125) + *((float *)v6 - 2);
      v20 = dword_140404A6C[v18 + 283827702];
      v21 = (float)(v15 * 0.125) + *((float *)v6 - 1);
      (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v21), LODWORD(v19));
      v22 = (float)(v16 * 0.125) + *(float *)v6;
      (*(float *)&sr_scene_draw_position[2]) = v22;
      sub_140092140(v20, &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v5);
      v23 = _mm_cvtsi32_si128(v6[6693]);
      v24 = _mm_cvtsi32_si128(v6[6694]);
      v205 = v5;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v23), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, v23, i32) = (float)(int)v6[6696];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554704] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v24), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      v25 = 16 * v6[6691];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)(*(float *)SR_VEC_LANES(128, v23, i32) * 0.0625)
                                                                              + 0.03125;
      sub_140092140(dword_140404A6C[v25 + v6[6695] + 283827734], &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v205);
      *(float *)SR_VEC_LANES(128, v24, i32) = (float)((float)(int)v6[6694] * 0.0625) + 0.03125;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)v6[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, v23, i32) = (float)(int)v6[6696];
      dword_140404A6C[30 * g_18417E1B4 + 284554704] = SR_VEC_LANES(128, v24, i32)[0];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)(*(float *)SR_VEC_LANES(128, v23, i32) * 0.0625)
                                                                              + 0.03125;
      if ( v6[6700] )
      {
        v26 = *((float *)v6 - 58);
        v27 = *((float *)v6 - 59) * 0.046875;
        sr_scene_draw_textures[0] = g_183EBF0F4;
        sr_scene_draw_textures[1] = g_183EBF0F4;
        v28 = v19 - v27;
        v205 = v5;
        v29 = *((float *)v6 - 57) * 0.046875;
        *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = v28;
        *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v21 - (float)(v26 * 0.046875);
        (*(float *)&sr_scene_draw_position[2]) = v22 - v29;
        sub_140092140(g_183EBC3CC, &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v5);
      }
    }
    ++v8;
    v5 += 344;
    ++v1;
    v7 += 344;
    v6 += 7166;
  }
  while ( v8 < 256 );
  v30 = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    v31 = &g_15FD16294;
    do
    {
      v32 = (int)*(v31 - 11);
      if ( (_DWORD)v32 == -1
        || !dword_140404A6C[77 * v32 + 285044400]
        || dword_140404A6C[5210 * *(v31 - 11) + 129720183] != v30 )
      {
        v33 = (int)*(v31 - 13);
        v34 = v31[3];
        v35 = *((float *)v31 + 6);
        v36 = *((float *)v31 - 9);
        v37 = *((float *)v31 - 8);
        v38 = *((float *)v31 - 7);
        v39 = dword_140404A6C[v33 + 283826646];
        (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(v31 - 2);
        sr_scene_draw_textures[0] = g_183EBF050;
        LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v31[2];
        LODWORD(v40) = v31[4];
        *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(v40), v34);
        HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v31[5];
        (*(float *)&sr_scene_draw_rotation[8]) = v35;
        sr_scene_draw_textures[1] = g_183EBF050;
        v41 = v36 - (float)(v40 * 1.5);
        v42 = v37 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) * 1.5);
        v43 = v38 - (float)(v35 * 1.5);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v42), LODWORD(v41));
        (*(float *)&sr_scene_draw_position[2]) = v43;
        sub_140092140(v39, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        v44 = 0;
        *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)v31[361] * 0.0625)
                                                                                + 0.03125;
        sr_scene_draw_textures[0] = g_183EBF0F0;
        sr_scene_draw_textures[1] = g_183EBF0F0;
        if ( (int)dword_140404A6C[24944 * *(v31 - 13) + 346731811] > 0 )
        {
          v45 = &dword_140404A6C[24944 * v33 + 346731821];
          do
          {
            v46 = *((float *)v45 - 1);
            v47 = *(float *)v45;
            v48 = *((float *)v45 + 1);
            v49 = (int)v45[7];
            v205 = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
            v50 = dword_140404A6C[v49 + 283827222];
            *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v46) + v41)
                                    + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * v47))
                            + (float)(v48 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
            *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v46) + v42)
                                          + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v47))
                                  + (float)(v48 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3));
            (*(float *)&sr_scene_draw_position[2]) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v46) + v43) + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * v47))
                 + (float)(v48 * (*(float *)&sr_scene_draw_rotation[8]));
            sub_140092140(v50, &sr_scene_draw_textures[0], 0, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
            ++v44;
            v45 += 20;
          }
          while ( v44 < (int)dword_140404A6C[24944 * *(v31 - 13) + 346731811] );
        }
      }
      ++v30;
      v31 += 383;
    }
    while ( v30 < (int)world_unknown_15fd16260_count );
  }
  v51 = &g_15F2D9208;
  v52 = g_183F7C54C;
  v53 = &g_184360530;
  v54 = g_183F7C548;
  v55 = &g_184360550;
  v56 = g_183F7C544;
  v57 = 512;
  v211 = &g_15F2D9208;
  v213 = &g_184360530;
  v212 = 512;
  do
  {
    if ( *(v51 - 2) && *(v55 - 9) && *v51 != 3 )
    {
      v58 = *((float *)v55 - 8);
      v59 = *((float *)v55 - 7);
      v60 = *((float *)v55 - 6);
      sr_scene_draw_textures[0] = g_183EBF050;
      sr_scene_draw_textures[1] = g_183EBF050;
      LODWORD(v210) = *(v51 - 1);
      v61 = (int)v210;
      v215 = (int)v210;
      v62 = (float)((float)((float)(v59 - v54) * (float)(v59 - v54)) + (float)((float)(v58 - v56) * (float)(v58 - v56)))
          + (float)((float)(v60 - v52) * (float)(v60 - v52));
      sub_140092140(dword_140404A6C[(int)v210 + 283826582], &sr_scene_draw_textures[0], 1u, v53, v53 + 3);
      v63 = (int)v51[1] <= 0;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)v51[4] * 0.0625)
                                                                              + 0.03125;
      if ( v63 )
        dword_140404A6C[30 * g_18417E1B4 + 284554703] = 1053818880;
      if ( *(v51 - 1) == 17 && (int)v51[5039] > 0 )
      {
        v64 = 47LL * (int)v51[5040];
        v65 = dword_140404A6C[v64 + 18215716];
        LODWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = dword_140404A6C[v64 + 18215715];
        (*(float *)&sr_scene_draw_position[2]) = *(float *)&dword_140404A6C[v64 + 18215717];
        v66 = *(_OWORD *)&dword_140404A6C[v64 + 18215724];
        HIDWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = v65;
        (*(__int128 *)(void *)sr_scene_draw_rotation) = v66;
        (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)&dword_140404A6C[v64 + 18215728];
        (*(float *)&sr_scene_draw_rotation[8]) = *(float *)&dword_140404A6C[v64 + 18215732];
        sub_140092140(g_183EBB3D4, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      v67 = 99776 * v61;
      sr_scene_draw_textures[0] = g_183EBF0F0;
      v68 = 0;
      sr_scene_draw_textures[1] = g_183EBF0F0;
      v214 = 99776 * v61;
      if ( (int)dword_140404A6C[24944 * v61 + 346731811] > 0 )
      {
        v69 = (int *)(v51 + 3666);
        v70 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1391140640);
        v71 = v214;
        v72 = (float *)(v55 + 5);
        do
        {
          v73 = *((float *)v55 + 2);
          v74 = *(v70 - 1);
          v75 = v70[1];
          LODWORD(v76) = *(v55 - 5);
          LODWORD(v77) = *(v55 - 4);
          LODWORD(v78) = *(v55 - 3);
          LODWORD(v79) = *(v55 - 2);
          LODWORD(v80) = *v55;
          LODWORD(v81) = v55[1];
          v82 = *((float *)v55 + 3);
          v83 = v72[1] + *v70;
          LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = *(v55 - 1);
          (*(float *)&sr_scene_draw_rotation[8]) = v82;
          *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(LODWORD(v77), LODWORD(v76));
          *((_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) = __PAIR64__(LODWORD(v79), LODWORD(v78));
          *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) = v73;
          v84 = (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v83) + (float)(v73 * v75);
          *(_QWORD *)&v85 = *(unsigned int *)v72;
          *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(v81), LODWORD(v80));
          v86 = v84 + (float)((float)(v77 * v74) + *((float *)v55 - 7));
          v87 = (float)((float)(v82 * v75) + (float)(v80 * v83)) + (float)((float)(v78 * v74) + *((float *)v55 - 6));
          *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)(v81 * v75) + (float)(v79 * v83))
                          + (float)((float)(v76 * v74) + *((float *)v55 - 8));
          *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v86;
          (*(float *)&sr_scene_draw_position[2]) = v87;
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v85);
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation), sr_export_float_lane_container((unsigned __int64)*((_DWORD *)v72 - 1)));
          sub_140092140(
            dword_140404A6C[*v69 + 283827222],
            &sr_scene_draw_textures[0],
            v62 < 16384.0,
            (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
            (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
          ++v68;
          v70 += 20;
          v72 += 4;
          v69 += 43;
        }
        while ( v68 < *(int *)((char *)&g_192EB1EF8 + v71) );
        v51 = v211;
        v67 = v214;
        v61 = v215;
      }
      if ( (_DWORD)v210 == 12 )
      {
        LODWORD(v88) = *(v55 - 1);
        LODWORD(v89) = *v55;
        v90 = *(v55 - 5);
        v91 = *(v55 - 4);
        HIDWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = *(v55 - 2);
        *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(v91, v90);
        v92 = *(v55 - 3);
        *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(v89), LODWORD(v88));
        *(float *)&v93 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 1.5) + *((float *)v55 - 8);
        DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = v92;
        *(float *)&v94 = (float)(v88 * 1.5) + *((float *)v55 - 7);
        v95 = (float)(v89 * 1.5) + *((float *)v55 - 6);
        *((_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) = *(_QWORD *)(v55 + 1);
        v96 = *((float *)v55 + 3);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(v94, v93);
        *(_QWORD *)&v97 = v51[3680];
        (*(float *)&sr_scene_draw_rotation[8]) = v96;
        (*(float *)&sr_scene_draw_position[2]) = v95;
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v97);
        sub_140092140(g_183EBC3DC, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1078530011));
        sub_140092140(g_183EBC3DC, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      if ( *(unsigned int *)((char *)&g_192E9A680 + v67)
        && (v98 = 45072 * v61, v99 = (int)dword_140404A6C[45072 * v61 + 335200382], v99 > 0) )
      {
        v56 = g_183F7C544;
        v100 = v51 + 2557;
        v52 = g_183F7C54C;
        v101 = 0;
        v54 = g_183F7C548;
        v102 = g_1841FA224;
        LODWORD(v210) = *(unsigned int *)&g_183F7C544;
        do
        {
          if ( !*v100 && v102 < 0x4000 )
          {
            v103 = 0;
            v104 = 0.0;
            v105 = (float *)&dword_140404A6C[v98 + 335200386 + v101];
            v106 = 0.0;
            v107 = 0.0;
            while ( 1 )
            {
              v108 = v105[3];
              v109 = (float)((float)(*v105 * *((float *)v55 + 1)) + (float)(*(v105 - 2) * *((float *)v55 - 5)))
                   + (float)((float)(*(v105 - 1) * *((float *)v55 - 2)) + *((float *)v55 - 8));
              v110 = v103 + 68LL * v102;
              v111 = (float)(*(v105 - 2) * *((float *)v55 - 4)) + (float)(*v105 * *((float *)v55 + 2));
              v112 = (float)(*v105 * *((float *)v55 + 3)) + (float)(*(v105 - 2) * *((float *)v55 - 3));
              v113 = (float)(*(v105 - 1) * *((float *)v55 - 1)) + *((float *)v55 - 7);
              v114 = v105[1];
              v115 = (float)(*(v105 - 1) * *(float *)v55) + *((float *)v55 - 6);
              *(float *)((char *)&g_1841FA228 + v110) = v109;
              v116 = v111 + v113;
              v117 = v112 + v115;
              v118 = v105[2];
              v105 += 6;
              *(float *)((char *)&g_1841FA22C + v110) = v116;
              *(float *)((char *)&g_1841FA230 + v110) = v117;
              v119 = (float)((float)(v114 * *((float *)v55 - 5)) + (float)(v108 * *((float *)v55 + 1)))
                   + (float)((float)(v118 * *((float *)v55 - 2)) + *((float *)v55 - 8));
              v120 = (float)((float)(v114 * *((float *)v55 - 4)) + (float)(v108 * *((float *)v55 + 2)))
                   + (float)((float)(v118 * *((float *)v55 - 1)) + *((float *)v55 - 7));
              v104 = (float)(v109 + v104) + v119;
              v121 = v103 + 68LL * (int)g_1841FA224;
              v122 = (float)((float)(v108 * *((float *)v55 + 3)) + (float)(v114 * *((float *)v55 - 3)))
                   + (float)((float)(v118 * *(float *)v55) + *((float *)v55 - 6));
              v103 += 24;
              v106 = (float)(v116 + v106) + v120;
              *(float *)((char *)&g_1841FA234 + v121) = v119;
              *(float *)((char *)&g_1841FA238 + v121) = v120;
              v107 = (float)(v117 + v107) + v122;
              *(float *)((char *)&g_1841FA23C + v121) = v122;
              if ( v103 >= 48 )
                break;
              v102 = g_1841FA224;
            }
            v56 = *(float *)&v210;
            *(float *)&dword_140404A6C[17 * g_1841FA224 + 284677630] = fsqrt(
                                                                                        (float)((float)((float)(v54 - (float)(v106 * 0.25)) * (float)(v54 - (float)(v106 * 0.25)))
                                                                                              + (float)((float)(*(float *)&v210 - (float)(v104 * 0.25)) * (float)(*(float *)&v210 - (float)(v104 * 0.25))))
                                                                                      + (float)((float)(v52 - (float)(v107 * 0.25))
                                                                                              * (float)(v52 - (float)(v107 * 0.25))));
            v123 = 17LL * (int)g_1841FA224;
            v125 = *(float *)&dword_140404A6C[v123 + 284677615];
            v126 = *(float *)&dword_140404A6C[v123 + 284677616];
            v127 = *(float *)&dword_140404A6C[v123 + 284677617];
            v128 = *(float *)&dword_140404A6C[v123 + 284677621] - v125;
            v129 = *(float *)&dword_140404A6C[v123 + 284677622] - v126;
            v130 = *(float *)&dword_140404A6C[v123 + 284677618] - v125;
            v131 = *(float *)&dword_140404A6C[v123 + 284677619] - v126;
            v132 = *(float *)&dword_140404A6C[v123 + 284677620] - v127;
            v124 = (float *)&dword_140404A6C[v123 + 284677627];
            v133 = *(float *)&dword_140404A6C[v123 + 284677623] - v127;
            *v124 = (float)(v129 * v132) - (float)(v133 * v131);
            v124[1] = (float)(v133 * v130) - (float)(v128 * v132);
            v124[2] = (float)(v128 * v131) - (float)(v129 * v130);
            sub_14007A240((__int64)v124, v124);
            v0 = 0;
            v134 = 17LL * (int)g_1841FA224;
            dword_140404A6C[v134 + 284677631] = (float)((float)((float)((float)(v54
                                                                              - *(float *)&dword_140404A6C[v134 + 284677616])
                                                                      * *(float *)&dword_140404A6C[v134 + 284677628])
                                                              + (float)((float)(v56
                                                                              - *(float *)&dword_140404A6C[v134 + 284677615])
                                                                      * *(float *)&dword_140404A6C[v134 + 284677627]))
                                                      + (float)((float)(v52
                                                                      - *(float *)&dword_140404A6C[v134 + 284677617])
                                                              * *(float *)&dword_140404A6C[v134 + 284677629])) >= 0.0;
            v102 = ++g_1841FA224;
          }
          ++v100;
          v101 += 13;
          --v99;
        }
        while ( v99 );
        v51 = v211;
      }
      else
      {
        v52 = g_183F7C54C;
        v54 = g_183F7C548;
        v56 = g_183F7C544;
      }
      v57 = v212;
      v53 = v213;
    }
    v53 += 77;
    v51 += 5210;
    v55 += 77;
    --v57;
    v213 = v53;
    v212 = v57;
    v211 = v51;
  }
  while ( v57 );
  v135 = 0;
  sr_scene_draw_textures[0] = resting_texture_0;
  sr_scene_draw_textures[1] = resting_texture_0;
  if ( (int)world_bullet_count > 0 )
  {
    v136 = &g_1A8A879C0;
    do
    {
      sub_140092140(
        dword_140404A6C[*v136 + 283827542],
        &sr_scene_draw_textures[0],
        0,
        &dword_140404A6C[23 * v135 + 437914586],
        &dword_140404A6C[23 * v135 + 437914595]);
      ++v135;
      v136 += 23;
    }
    while ( v135 < (int)world_bullet_count );
  }
  v137 = &g_182BBB1A8;
  v138 = &g_184386D30;
  v139 = &g_184386D38;
  v140 = g_183EBF178;
  v141 = 1024;
  v142 = 0x200800002000LL;
  do
  {
    if ( *(v137 - 10) )
    {
      v143 = (int)*v137;
      if ( ((_DWORD)v143 == -1
         || dword_140404A6C[1760 * v143 + 278845902] == -1
         || (int)dword_140404A6C[1760 * v143 + 278845904] < 3)
        && (*(v137 - 1) == -1 || (int)v137[1] < 3) )
      {
        v144 = (int)*(v137 - 5);
        sr_scene_draw_textures[0] = g_183EBF0F4;
        sr_scene_draw_textures[1] = g_183EBF0F4;
        if ( (unsigned int)(v144 - 1) <= 0xB )
        {
          sr_scene_draw_textures[0] = v140;
          sr_scene_draw_textures[1] = v140;
        }
        if ( !(_DWORD)v144 )
        {
          sr_scene_draw_textures[0] = v140;
          sr_scene_draw_textures[1] = v140;
          goto LABEL_121;
        }
        if ( (_DWORD)v144 == 6 )
        {
          v145 = resting_texture_0;
        }
        else
        {
          if ( (unsigned int)v144 <= 0x2D && _bittest64(&v142, v144) )
          {
            sr_scene_draw_textures[0] = dword_140404A6C[v144 + 283830981];
            sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
          }
          if ( (_DWORD)v144 == 18 )
          {
            v146 = 0;
            v147 = v137[159];
            v148 = *((float *)v139 + 4);
            LODWORD(v149) = v139[5];
            LODWORD(v150) = v139[6];
            v151 = v139[2];
            LODWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = v139[1];
            DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = v139[3];
            DWORD2((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v139[7];
            v152 = *((float *)v139 + 9);
            *((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) = v148;
            *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(v150), LODWORD(v149));
            (*(float *)&sr_scene_draw_rotation[8]) = v152;
            DWORD1((*(__int128 *)(void *)sr_scene_draw_rotation)) = v151;
            HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v139[8];
            v153 = (float)((float)(v148 * (float)v147) * 0.0068359375) + *((float *)v139 - 2);
            v154 = (float)((float)(v149 * (float)v147) * 0.0068359375) + *((float *)v139 - 1);
            v155 = (float)((float)(v150 * (float)v147) * 0.0068359375) + *(float *)v139;
            (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v154), LODWORD(v153));
            (*(float *)&sr_scene_draw_position[2]) = v155;
            if ( v147 < 0 )
              goto LABEL_125;
            do
            {
              v156 = ((unsigned __int64)v137[160] >> (3 * (unsigned __int8)v146)) & 7;
              v205 = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
              sr_scene_draw_textures[0] = dword_140404A6C[v156 + 283830706];
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
              sub_140092140(
                dword_140404A6C[*(v137 - 5) + 283826966],
                &sr_scene_draw_textures[0],
                1u,
                (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
              v157 = *(v137 - 1) == -1;
              v153 = v153 - (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 0.013671875);
              v154 = v154 - (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * 0.013671875);
              (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v154), LODWORD(v153));
              v158 = v153;
              v159 = v154;
              v155 = v155 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * 0.013671875);
              *(float *)&v210 = v155;
              (*(float *)&sr_scene_draw_position[2]) = v155;
              if ( !v157 )
              {
                v160 = v137[1];
                if ( v160 )
                  v161 = v160 == 1 ? 0.03125 : 0.0;
                else
                  v161 = -0.03125;
                v162 = v161 * 1.570796326795;
                sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v162))) /* the original converts to float (cvtsd2ss) before this call */);
                if ( v146 == v137[158] - 1 )
                {
                  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v162))) /* the original converts to float (cvtsd2ss) before this call */);
                  v153 = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v161) + v153;
                  v154 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v161) + v154;
                  v155 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v161) + *(float *)&v210;
                  *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v161) + v158;
                  *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v161) + v159;
                  (*(float *)&sr_scene_draw_position[2]) = v155;
                }
              }
              ++v146;
            }
            while ( v146 <= (int)v137[159] );
            goto LABEL_124;
          }
          if ( (unsigned int)(v144 - 37) <= 1 || (_DWORD)v144 == 44 )
          {
            sr_scene_draw_textures[0] = g_183EBF10C;
            sr_scene_draw_textures[1] = g_183EBF10C;
          }
          if ( (_DWORD)v144 == 43 )
          {
            sr_scene_draw_textures[0] = g_183EBF10C;
            sr_scene_draw_textures[1] = g_183EBF10C;
            goto LABEL_121;
          }
          if ( (unsigned int)(v144 - 39) <= 1 )
          {
            v163 = (int)v137[197];
            if ( dword_140404A6C[3 * v163 + 278520517] )
              v164 = dword_140404A6C[v163 + 283830725];
            else
              v164 = g_183EBF57C;
            sr_scene_draw_textures[1] = v164;
            sr_scene_draw_textures[0] = v164;
          }
          if ( (_DWORD)v144 == 17 )
          {
            v145 = g_183EBF148;
          }
          else
          {
            if ( (unsigned int)(v144 - 19) <= 5 )
            {
              sr_scene_draw_textures[0] = v144 + g_183EBF0F4 - 19;
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
            }
            if ( (_DWORD)v144 == 14 )
            {
              v145 = g_183EBC404;
            }
            else if ( (_DWORD)v144 == 30 )
            {
              v145 = g_183EBF16C;
            }
            else
            {
              if ( (((_DWORD)v144 - 25) & 0xFFFFFFF7) == 0 )
              {
                sr_scene_draw_textures[0] = g_183EBF10C;
                sr_scene_draw_textures[1] = g_183EBF10C;
              }
              switch ( (_DWORD)v144 )
              {
                case 0x1A:
                  v145 = g_183EBF110;
                  break;
                case 0x1C:
                  sr_scene_draw_textures[0] = g_183EBF0F4;
                  sr_scene_draw_textures[1] = g_183EBF0F4;
                  goto LABEL_121;
                case 0x1B:
                  sr_scene_draw_textures[0] = g_183EBF0F4;
                  sr_scene_draw_textures[1] = g_183EBF0F4;
                  goto LABEL_121;
                case 0x22:
                case 0x1D:
                  v165 = (int)v137[197];
                  if ( dword_140404A6C[3 * v165 + 278520517] )
                    v145 = dword_140404A6C[v165 + 283830725];
                  else
                    v145 = g_183EBF168;
                  break;
                default:
LABEL_121:
                  sub_140092140(dword_140404A6C[v144 + 283826966], &sr_scene_draw_textures[0], 1u, v138, v138 + 3);
                  if ( *(v137 - 5) == 25 && v137[148] == 1 )
                    dword_140404A6C[30 * g_18417E1B4 + 284554703] = 1046478848;
LABEL_124:
                  v140 = g_183EBF178;
                  v142 = 0x200800002000LL;
                  goto LABEL_125;
              }
            }
          }
        }
        sr_scene_draw_textures[0] = v145;
        sr_scene_draw_textures[1] = v145;
        goto LABEL_121;
      }
    }
LABEL_125:
    v138 += 13;
    v139 += 13;
    v137 += 1760;
    --v141;
  }
  while ( v141 );
  (*(uint64_t *)(void *)sr_scene_draw_position) = 0x41C0000044890000LL;
  (*(float *)&sr_scene_draw_position[2]) = 1056.0;
  (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
  (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
  (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1070141403));
  sr_scene_draw_textures[0] = g_183EBF178;
  sr_scene_draw_textures[1] = g_183EBF178;
  LODWORD(v210) = 0;
  if ( (int)g_150F55020 > 0 )
  {
    v166 = &g_150F55024;
    v211 = &g_150F55024;
    do
    {
      v167 = 0;
      v212 = 0;
      do
      {
        v168 = (int)dword_140404A6C[6930 * (int)*v166 + 83200503 + v167];
        if ( (int)v168 >= 0 )
        {
          v169 = 8969 * v168;
          v170 = 0;
          LODWORD(v213) = 0;
          if ( (int)dword_140404A6C[8969 * v168 + 73993587] > 0 )
          {
            v171 = (float *)&dword_140404A6C[v169 + 73993594];
            do
            {
              v172 = 0;
              v173 = 948LL * *((int *)v171 - 6);
              if ( (int)dword_140404A6C[v173 + 272299416] > 0 )
              {
                v174 = 1;
                v175 = &dword_140404A6C[v173 + 272299439];
                do
                {
                  if ( (v174 & *(_DWORD *)(v171 - 4)) == 0 )
                  {
                    v176 = (int)*(v175 - 6);
                    sr_scene_draw_textures[0] = dword_140404A6C[v176 + 283830981];
                    sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                    if ( (unsigned int)(v176 - 37) <= 1 || (_DWORD)v176 == 44 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF10C;
                      sr_scene_draw_textures[1] = g_183EBF10C;
                    }
                    if ( (_DWORD)v176 == 43 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF10C;
                      sr_scene_draw_textures[1] = g_183EBF10C;
                    }
                    else if ( (unsigned int)(v176 - 39) <= 1 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF57C;
                      sr_scene_draw_textures[1] = g_183EBF57C;
                    }
                    (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
                    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)((float)*((int *)v171 - 3) * 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
                    v177 = *((float *)v175 - 5);
                    v178 = *((float *)v175 - 4);
                    v179 = *((float *)v175 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3);
                    v180 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v177) + *(v171 - 1))
                         + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v178);
                    v181 = *((float *)v175 - 3) * (*(float *)&sr_scene_draw_rotation[8]);
                    *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v177) + *(v171 - 2))
                                            + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * v178))
                                    + (float)(*((float *)v175 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
                    v182 = v180 + v179;
                    v183 = (float)*((int *)v171 - 3);
                    v184 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v177) + *v171)
                         + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * v178);
                    *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v182;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(v175 - 2);
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)(v175 + 2);
                    (*(float *)&sr_scene_draw_rotation[8]) = *((float *)v175 + 6);
                    (*(float *)&sr_scene_draw_position[2]) = v184 + v181;
                    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(v183 * 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
                    sub_140092140(
                      dword_140404A6C[*(v175 - 6) + 283826966],
                      &sr_scene_draw_textures[0],
                      1u,
                      (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                      (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
                  }
                  ++v172;
                  v174 = __ROL4__(v174, 1);
                  v175 += 29;
                }
                while ( v172 < (int)dword_140404A6C[v173 + 272299416] );
                v170 = (int)v213;
              }
              ++v170;
              v171 += 7;
              LODWORD(v213) = v170;
            }
            while ( v170 < (int)dword_140404A6C[v169 + 73993587] );
            v167 = v212;
          }
          v185 = 0;
          if ( (int)dword_140404A6C[v169 + 73991666] > 0 )
          {
            v186 = &dword_140404A6C[v169 + 73991669];
            while ( 1 )
            {
              v187 = (int)*(v186 - 2);
              sr_scene_draw_textures[0] = g_183EBF0F4;
              sr_scene_draw_textures[1] = g_183EBF0F4;
              if ( (_DWORD)v187 == 1 )
              {
                sr_scene_draw_textures[0] = g_183EBF074;
                sr_scene_draw_textures[1] = g_183EBF074;
                v188 = dword_140404A6C[34 * *(v186 - 1) + 225391250 + *v186];
                if ( v188 == 1 )
                {
                  v189 = g_183EBF078;
LABEL_154:
                  sr_scene_draw_textures[1] = v189;
                  sr_scene_draw_textures[0] = v189;
                  goto LABEL_155;
                }
                if ( v188 == 2 )
                {
                  v189 = g_183EBF07C;
                  goto LABEL_154;
                }
              }
LABEL_155:
              v190 = v169 * 4 + 60LL * v185;
              v191 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v190 + 300180036);
              v192 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v190 + 300180048);
              sub_140092140(dword_140404A6C[v187 + 283827606], &sr_scene_draw_textures[0], 1u, v191, v192);
              if ( *(v186 - 2) == 1 )
              {
                v193 = 34LL * (int)*(v186 - 1);
                v194 = dword_140404A6C[v193 + 225391236 + (((unsigned __int8)*v186 + 1) & 3)];
                if ( v194 == -1 )
                  v194 = dword_140404A6C[v193 + 225391236 + (((unsigned __int8)*v186 - 1) & 3)];
                v205 = v192;
                v195 = 0;
                if ( v194 != -1 )
                  v195 = v194;
                v196 = dword_140404A6C[396 * v195 + 225426055];
                if ( (unsigned int)v196 > 0x10 )
                  v196 = 0;
                sr_scene_draw_textures[0] = dword_140404A6C[v196 + 283831239];
                sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                sub_140092140(g_183EBC0D4, &sr_scene_draw_textures[0], 1u, v191, v205);
              }
              ++v185;
              v186 += 15;
              if ( v185 >= (int)dword_140404A6C[v169 + 73991666] )
              {
                v167 = v212;
                break;
              }
            }
          }
          v166 = v211;
        }
        v212 = ++v167;
      }
      while ( v167 < 4 );
      v211 = ++v166;
      LODWORD(v210) = v210 + 1;
    }
    while ( (int)v210 < (int)g_150F55020 );
  }
  v197 = g_18417E1B4;
  if ( (int)g_18417E1B4 > 0 )
  {
    v198 = &g_1A87C6BA4;
    v199 = g_18417E1B4;
    v200 = &g_1841821C8;
    do
    {
      v201 = *v200;
      v200 += 30;
      *v198++ = v201;
      --v199;
    }
    while ( v199 );
  }
  renderer_sort_count = v197;
  sub_14007D710();
  if ( v197 > 0 )
  {
    v202 = 0;
    do
    {
      ++v0;
      dword_140404A6C[v202 + 284550611] = dword_140404A6C[v202 + 436668494];
      ++v202;
    }
    while ( v0 < (int)g_18417E1B4 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v204
#undef v205
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v219

//----- (0000000140029800) ----------------------------------------------------
__int64            sub_140029800(__int64 a1, __int64 a2, int a3)
{
  int v4;
  int *v6;
  int v8;
  int *v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029800[112];
#define v16 (*(int (*))(void *)(sr_frame_140029800 + 0)) /* [rsp+20h] */
#define v18 (*(int (*))(void *)(sr_frame_140029800 + 104)) /* [rsp+88h] */

  v18 = 1;
  v4 = a3;
  if ( a3 )
  {
    crt_fread((__int64)&v18, 4, 1, a2);
    v6 = (int *)(a1 + 47352508);
    crt_fread(a1 + 47352508, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&v18), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( v18 != 1 )
      return 0;
    v6 = (int *)(a1 + 47352508);
    fread_sr((void *)(uintptr_t)(a1 + 47352508), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  v8 = 0;
  v16 = 0;
  if ( *v6 > 0 )
  {
    v9 = (int *)(a1 + 47352512);
    do
    {
      v10 = 1028LL * v8;
      v11 = v10 + a1 + 47352512;
      if ( v4 )
        crt_fread(v11, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(v11), 4, 1, (FILE *)(uintptr_t)(a2));
      v12 = 0;
      if ( *v9 > 0 )
      {
        do
        {
          v13 = v10 + 16LL * v12;
          v14 = v13 + a1 + 47352516;
          v15 = v13 + a1;
          if ( a3 )
          {
            crt_fread(v14, 4, 3, a2);
            crt_fread(v15 + 47352528, 4, 1, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v14), 4, 3, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(v15 + 47352528), 4, 1, (FILE *)(uintptr_t)(a2));
          }
          ++v12;
        }
        while ( v12 < *v9 );
        v8 = v16;
      }
      v4 = a3;
      ++v8;
      v9 += 257;
      v16 = v8;
    }
    while ( v8 < *v6 );
  }
  return 1;
}
#undef v16
#undef v18

//----- (000000014002FA00) ----------------------------------------------------
__int64 sub_14002FA00()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  __int128 v6;
  unsigned int v7;
  float v8;
  __int64 v9;
  float v10;
  double v11;
  double v12;
  double v13;
  double v14;
  __int128 v15;
  float v16;
  float *v17;
  double v18;
  double v19;
  double v20;
  float v21;
  float v22;
  float v23;
  float v24;
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
  float v41;
  float v42;
  float v43;
  double v44;
  float v45;
  float v46;
  float v47;
  float v48;
  double v49;
  float v50;
  float v51;
  float v52;
  float v53;
  double v54;
  __int64 v55;
  double v56;
  double v57;
  __int64 v58;
  double v59;
  float v60;
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
  double v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002FA00[144];
#define v82 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 8)) /* [rsp+8h] */
#define v83 (*(float (*))(void *)(sr_frame_14002FA00 + 40)) /* [rsp+28h] */
#define v84 (*(float (*))(void *)(sr_frame_14002FA00 + 44)) /* [rsp+2Ch] */
#define v85 (*(_QWORD (*)[3])(void *)(sr_frame_14002FA00 + 48)) /* [rsp+30h] */
#define v86 (*(float (*))(void *)(sr_frame_14002FA00 + 80)) /* [rsp+50h] */
#define v87 (*(float (*))(void *)(sr_frame_14002FA00 + 84)) /* [rsp+54h] */
#define v88 (*(float (*))(void *)(sr_frame_14002FA00 + 88)) /* [rsp+58h] */
#define v89 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 96)) /* [rsp+60h] */
#define v90 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 112)) /* [rsp+70h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_14002FA00 + 128)) /* [rsp+80h] */
#define v92 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 136)) /* [rsp+88h] */

  if ( local_player == -1 )
  {
    g_183F7C588 = -1;
    return 0; /* the function has no caller */
  }
  v0 = 3597LL * (int)local_player;
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( (_DWORD)v1 == -1 )
  {
    g_183F7C588 = -1;
    return 0; /* the function has no caller */
  }
  if ( (_DWORD)v1 == g_183F7C588 )
  {
    v5 = *(unsigned int *)&g_183F7C5AC;
    v4 = *(unsigned int *)&g_183F7C5A8;
    v3 = *(unsigned int *)&g_183F7C5A4;
  }
  else
  {
    *(_QWORD *)&g_183F7C5C8 = 0;
    *(unsigned int *)&g_183F7C5D0 = 0;
    g_183F7C598 = 0;
    g_183F7C5A0 = 0;
    v2 = dword_140404A6C[344 * v1 + 284956408];
    v3 = dword_140404A6C[344 * v1 + 284956410];
    v4 = dword_140404A6C[344 * v1 + 284956411];
    v5 = dword_140404A6C[344 * v1 + 284956412];
    *(unsigned int *)&g_183F7C58C = dword_140404A6C[344 * v1 + 284956407];
    *(unsigned int *)&g_183F7C594 = dword_140404A6C[344 * v1 + 284956409];
    v6 = *(_OWORD *)&dword_140404A6C[344 * v1 + 284956413];
    *(unsigned int *)&g_183F7C590 = v2;
    v7 = dword_140404A6C[344 * v1 + 284956417];
    *(_OWORD *)&g_183F7C5B0 = v6;
    g_183F7C5C4 = dword_140404A6C[344 * v1 + 284956418];
    *(unsigned int *)&g_183F7C5A4 = v3;
    *(unsigned int *)&g_183F7C5A8 = v4;
    *(unsigned int *)&g_183F7C5AC = v5;
    *(unsigned int *)&g_183F7C5C0 = v7;
  }
  v8 = *(float *)&dword_140404A6C[v0 + 71856301];
  v9 = 344 * v1;
  v10 = *(float *)&dword_140404A6C[344 * v1 + 284956339];
  if ( (float)(v8 - v10) >= 3.14159265359 )
    v10 = v10 + 6.28318530718;
  if ( (float)(v10 - v8) >= 3.14159265359 )
    v8 = v8 + 6.28318530718;
  *(_QWORD *)&v11 = dword_140404A6C[v0 + 71856297];
  HIDWORD(v12) = HIDWORD(v11);
  *(float *)&v12 = *(float *)&v11 - (float)(v10 - v8);
  v13 = *(float *)&v12;
  if ( *(float *)&v12 < -3.14159265359 )
  {
    v14 = v13 + 6.28318530718;
LABEL_14:
    v12 = v14;
    goto LABEL_15;
  }
  if ( v13 > 3.14159265359 )
  {
    v14 = v13 - 6.28318530718;
    goto LABEL_14;
  }
LABEL_15:
  v15 = *(_OWORD *)&dword_140404A6C[v9 + 284956414];
  v89 = *(_OWORD *)&dword_140404A6C[v9 + 284956410];
  v91 = dword_140404A6C[v9 + 284956418];
  v90 = v15;
  if ( fsqrt(
         (float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(*(float *)&v4 * *(float *)&v4))
       + (float)(*(float *)&v5 * *(float *)&v5)) < 0.5 )
  {
    v89 = xmmword_140278D30;
    v91 = 1065353216;
    g_183F7C5C4 = 1065353216;
    v90 = xmmword_140278D30;
    g_183F7C5A4 = xmmword_140278D30;
    *(_OWORD *)&g_183F7C5B4 = xmmword_140278D30;
  }
  v16 = *(float *)&dword_140404A6C[v9 + 284956341];
  v17 = (float *)&v89 + 3;
  if ( dword_140404A6C[7166 * v1 + 280651313] == -1 )
  {
    HIDWORD(v18) = HIDWORD(v12);
    *(float *)&v18 = *(float *)&v12 - v16;
  }
  else
  {
    *(float *)&v11 = (float)(*(float *)&v11 - v16) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v11);
    *(_QWORD *)&v19 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&v19 = (float)(*(float *)&v19 - *(float *)&dword_140404A6C[v9 + 284956342]) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89, v19);
    *(_QWORD *)&v20 = dword_140404A6C[3597 * local_player + 71856297];
    *(float *)&v20 = (float)(*(float *)&v20 - *(float *)&dword_140404A6C[v9 + 284956341]) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v20);
    v17 = (float *)&v89;
    *(_QWORD *)&v18 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&v18 = (float)(*(float *)&v18 - *(float *)&dword_140404A6C[v9 + 284956342]) * 0.5;
  }
  sub_14007B2A0((__int64)&v89, v17, v18);
  v21 = *(float *)&dword_140404A6C[v9 + 284956408];
  v22 = *(float *)&dword_140404A6C[v9 + 284956409];
  g_183F7C58C = g_183F7C58C
                                        + (float)((float)(*(float *)&dword_140404A6C[v9 + 284956407]
                                                        - g_183F7C58C)
                                                * 0.5);
  g_183F7C590 = g_183F7C590
                                        + (float)((float)(v21 - g_183F7C590) * 0.5);
  g_183F7C594 = g_183F7C594
                                        + (float)((float)(v22 - g_183F7C594) * 0.5);
  sub_14010E370(&v83, (float *)&v89);
  sub_14010E370((float *)&v85[1], (float *)(unsigned int *)&g_183F7C5A4);
  v23 = *((float *)&v85[2] + 1);
  v24 = *(float *)&v85[2];
  v25 = *(float *)&v85[1];
  v26 = *((float *)&v85[1] + 1);
  if ( (float)((float)((float)(*((float *)v85 + 1) * *((float *)&v85[2] + 1))
                     + (float)(*(float *)v85 * *(float *)&v85[2]))
             + (float)((float)(v83 * *(float *)&v85[1]) + (float)(v84 * *((float *)&v85[1] + 1)))) < 0.0 )
  {
    *(__m128_u *)&v85[1] = _mm_xor_ps(*(__m128_u *)&v85[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v24 = *(float *)&v85[2];
    v26 = *((float *)&v85[1] + 1);
    v25 = *(float *)&v85[1];
    v23 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&v85[1], *(__m128_u *)&v85[1], 255), f32)[0];
  }
  *(float *)&v85[2] = -v24;
  *(float *)&v85[1] = -v25;
  *((float *)&v85[1] + 1) = -v26;
  v27 = (float)((float)((float)(*((float *)v85 + 1) * (float)-v25) + (float)(v23 * v83))
              + (float)(*(float *)v85 * (float)-v26))
      - (float)(v84 * (float)-v24);
  v28 = (float)-v25 * *(float *)v85;
  v29 = -v25;
  v30 = (float)-v25 * v83;
  v31 = v29 * v84;
  v32 = (float)((float)(v23 * v84) - v28) + (float)((float)-v26 * *((float *)v85 + 1));
  v33 = (float)-v26 * v83;
  v34 = (float)-v26 * v84;
  v35 = v32 + (float)((float)-v24 * v83);
  v83 = v27;
  v84 = v35;
  v36 = -v24;
  v37 = (float)-v24 * *(float *)v85;
  v38 = (float)((float)(v31 + (float)(v23 * *(float *)v85)) - v33) + (float)(v36 * *((float *)v85 + 1));
  *(float *)v85 = v38;
  v39 = (float)((float)((float)(*((float *)v85 + 1) * v23) - v30) - v34) - v37;
  *((float *)v85 + 1) = v39;
  v40 = fsqrt((float)((float)(v27 * v27) + (float)(v35 * v35)) + (float)(v38 * v38));
  if ( v40 == 0.0 )
  {
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
  }
  else
  {
    v41 = v27 * (float)(1.0 / v40);
    v42 = v35 * (float)(1.0 / v40);
    v43 = v38 * (float)(1.0 / v40);
  }
  v44 = acos(fminf(fmaxf(v39, -1.0), 1.0));
  HIDWORD(v49) = 0;
  v45 = v44 + v44;
  v46 = (float)((float)(v42 * v45) * 0.125) + g_183F7C5CC;
  v47 = (float)((float)(v41 * v45) * 0.125) + g_183F7C5C8;
  v48 = (float)((float)(v43 * v45) * 0.125) + g_183F7C5D0;
  g_183F7C5C8 = v47 * 0.5;
  g_183F7C5CC = v46 * 0.5;
  g_183F7C5D0 = v48 * 0.5;
  *(float *)&v49 = fsqrt((float)((float)((float)(v46 * v46) + (float)(v47 * v47)) + (float)(v48 * v48)) * 0.25);
  if ( *(float *)&v49 > 0.000015258789 )
  {
    v86 = (float)(v47 * 0.5) * (float)(1.0 / *(float *)&v49);
    v87 = (float)(v46 * 0.5) * (float)(1.0 / *(float *)&v49);
    v88 = (float)(v48 * 0.5) * (float)(1.0 / *(float *)&v49);
    sub_14007B2A0((__int64)(unsigned int *)&g_183F7C5A4, &v86, v49);
  }
  if ( dword_140404A6C[7166 * v1 + 280651313] == -1 )
  {
    v50 = *(float *)&dword_140404A6C[v9 + 284956343];
    if ( v50 > 0.0 )
    {
      if ( g_183F7C5B4 <= 0.0 )
        v51 = 0.0;
      else
        v51 = fabs(
                (float)(g_183F7C5B4 * g_183F7C5B4)
              * g_183F7C5B4);
      v52 = *(float *)&v12 + *(float *)&dword_140404A6C[v9 + 284956337];
      v53 = v51 * v50;
      v89 = xmmword_140278D30;
      v90 = xmmword_140278D30;
      v91 = 1065353216;
      *(_QWORD *)&v54 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&v54 = (float)(*(float *)&v54 * 0.5) + v52;
      sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v54);
      v55 = 3597LL * (int)local_player;
      *(_QWORD *)&v56 = dword_140404A6C[v55 + 71856300];
      *(float *)&v56 = (float)(*(float *)&v56 * 0.75) + (float)(*(float *)&dword_140404A6C[v55 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&v89, (float *)&v89, v56);
      *(_QWORD *)&v57 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&v57 = *(float *)&v57 * 0.5;
      sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v57);
      v58 = 3597LL * (int)local_player;
      *(_QWORD *)&v59 = dword_140404A6C[v58 + 71856300];
      *(float *)&v59 = (float)(*(float *)&v59 * 0.25) + (float)(*(float *)&dword_140404A6C[v58 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&v89, (float *)&v89, v59);
      sub_14010E370(&v83, (float *)&v89);
      sub_14010E370((float *)&v85[1], (float *)(unsigned int *)&g_183F7C5A4);
      v60 = *((float *)&v85[2] + 1);
      v61 = *(float *)&v85[2];
      v62 = *(float *)&v85[1];
      v63 = *((float *)&v85[1] + 1);
      if ( (float)((float)((float)(*((float *)v85 + 1) * *((float *)&v85[2] + 1))
                         + (float)(*(float *)v85 * *(float *)&v85[2]))
                 + (float)((float)(v83 * *(float *)&v85[1]) + (float)(v84 * *((float *)&v85[1] + 1)))) < 0.0 )
      {
        *(__m128_u *)&v85[1] = _mm_xor_ps(*(__m128_u *)&v85[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v61 = *(float *)&v85[2];
        v63 = *((float *)&v85[1] + 1);
        v62 = *(float *)&v85[1];
        v60 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&v85[1], *(__m128_u *)&v85[1], 255), f32)[0];
      }
      v64 = -v61;
      v65 = -v63;
      v66 = -v62;
      v67 = (float)((float)((float)(*((float *)v85 + 1) * v66) + (float)(v60 * v83)) + (float)(*(float *)v85 * v65))
          - (float)(v84 * v64);
      v68 = (float)((float)((float)(v60 * v84) - (float)(*(float *)v85 * v66)) + (float)(*((float *)v85 + 1) * v65))
          + (float)(v83 * v64);
      v69 = (float)((float)((float)(v84 * v66) + (float)(v60 * *(float *)v85)) - (float)(v83 * v65))
          + (float)(*((float *)v85 + 1) * v64);
      v70 = (float)((float)((float)(*((float *)v85 + 1) * v60) - (float)(v83 * v66)) - (float)(v84 * v65))
          - (float)(*(float *)v85 * v64);
      v71 = fsqrt((float)((float)(v68 * v68) + (float)(v67 * v67)) + (float)(v69 * v69));
      if ( v71 == 0.0 )
      {
        v72 = 0.0;
        v73 = 0.0;
        v74 = 0.0;
      }
      else
      {
        v72 = v67 * (float)(1.0 / v71);
        v73 = v68 * (float)(1.0 / v71);
        v74 = v69 * (float)(1.0 / v71);
      }
      v75 = acos(fminf(fmaxf(v70, -1.0), 1.0));
      v76 = v75 + v75;
      v77 = (float)(v72 * v76) * (float)(v53 * 0.5);
      v78 = (float)(v73 * v76) * (float)(v53 * 0.5);
      v79 = (float)(v74 * v76) * (float)(v53 * 0.5);
      v80 = fsqrt((float)((float)(v78 * v78) + (float)(v77 * v77)) + (float)(v79 * v79));
      if ( v80 > 0.000015258789 )
      {
        v87 = (float)(1.0 / v80) * v78;
        v86 = v77 * (float)(1.0 / v80);
        v88 = v79 * (float)(1.0 / v80);
        sub_14007B2A0(
          (__int64)(unsigned int *)&g_183F7C5A4,
          &v86, sr_export_float_lane_container(sr_text_float_bits((float)(fmin(fmax(v53 * -0.39269908169875, v80), v53 * 0.39269908169875)))) /* the original converts to float (cvtsd2ss) before this call */);
      }
    }
  }
  g_183F7C588 = v1;
  return 0; /* the function has no caller */
}
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

//----- (000000014003A0F0) ----------------------------------------------------
void sub_14003A0F0()
{
  unsigned int *v0;
  __int64 v1;
  __int64 v2;
  unsigned int *v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  unsigned int *v19;
  unsigned int *v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  unsigned int *v36;
  unsigned int *v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  __int128 v45;
  __int64 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  unsigned int *v53;
  unsigned int *v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  __int64 v63;
  __int128 v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  __int128 v68;
  __int128 v69;
  unsigned int *v70;
  unsigned int *v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  __int128 v79;
  __int64 v80;
  __int128 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  __int128 v85;
  __int128 v86;
  unsigned int *v87;
  unsigned int *v88;
  __int128 v89;
  __int128 v90;
  __int128 v91;
  __int128 v92;
  __int128 v93;
  __int128 v94;
  __int128 v95;
  __int128 v96;
  __int64 v97;
  __int128 v98;
  __int128 v99;
  __int128 v100;
  __int128 v101;
  __int128 v102;
  __int128 v103;
  unsigned int *v104;
  unsigned int *v105;
  __int128 v106;
  __int128 v107;
  __int128 v108;
  __int128 v109;
  __int128 v110;
  __int128 v111;
  __int128 v112;
  __int128 v113;
  __int64 v114;
  __int128 v115;
  __int128 v116;
  __int128 v117;
  __int128 v118;
  __int128 v119;
  __int128 v120;
  unsigned int *v121;
  unsigned int *v122;
  __int128 v123;
  __int128 v124;
  __int128 v125;
  __int128 v126;
  __int128 v127;
  __int128 v128;
  __int128 v129;
  __int128 v130;
  __int64 v131;
  __int128 v132;
  __int128 v133;
  __int128 v134;
  __int128 v135;
  __int128 v136;
  __int128 v137;
  unsigned int *v138;
  unsigned int *v139;
  __int128 v140;
  __int128 v141;
  __int128 v142;
  __int128 v143;
  __int128 v144;
  __int128 v145;
  __int128 v146;
  __int128 v147;
  __int64 v148;
  __int128 v149;
  __int128 v150;
  __int128 v151;
  __int128 v152;
  __int128 v153;
  __int128 v154;
  unsigned int *v155;
  unsigned int *v156;
  __int128 v157;
  __int128 v158;
  __int128 v159;
  __int128 v160;
  __int128 v161;
  __int128 v162;
  __int128 v163;
  __int128 v164;
  __int64 v165;
  __int128 v166;
  __int128 v167;
  __int128 v168;
  __int128 v169;
  __int128 v170;
  __int128 v171;
  unsigned int *v172;
  unsigned int *v173;
  __int128 v174;
  __int128 v175;
  __int128 v176;
  __int128 v177;
  __int128 v178;
  __int128 v179;
  __int128 v180;
  __int128 v181;
  __int64 v182;
  __int128 v183;
  __int128 v184;
  __int128 v185;
  __int128 v186;
  __int128 v187;
  __int128 v188;
  unsigned int *v189;
  unsigned int *v190;
  __int128 v191;
  __int128 v192;
  __int128 v193;
  __int128 v194;
  __int128 v195;
  __int128 v196;
  __int128 v197;
  __int128 v198;
  __int64 v199;
  __int128 v200;
  __int128 v201;
  __int128 v202;
  __int128 v203;
  __int128 v204;
  __int128 v205;
  unsigned int *v206;
  unsigned int *v207;
  __int128 v208;
  __int128 v209;
  __int128 v210;
  __int128 v211;
  __int128 v212;
  __int128 v213;
  __int128 v214;
  __int128 v215;
  __int64 v216;
  __int128 v217;
  __int128 v218;
  __int128 v219;
  __int128 v220;
  __int128 v221;
  __int128 v222;
  unsigned int *v223;
  unsigned int *v224;
  __int128 v225;
  __int128 v226;
  __int128 v227;
  __int128 v228;
  __int128 v229;
  __int128 v230;
  __int128 v231;
  __int128 v232;
  __int64 v233;
  __int128 v234;
  __int128 v235;
  __int128 v236;
  __int128 v237;
  __int128 v238;
  __int128 v239;
  unsigned int *v240;
  unsigned int *v241;
  __int128 v242;
  __int128 v243;
  __int128 v244;
  __int128 v245;
  __int128 v246;
  __int128 v247;
  __int128 v248;
  __int128 v249;
  __int64 v250;
  __int128 v251;
  __int128 v252;
  __int128 v253;
  __int128 v254;
  __int128 v255;
  __int128 v256;
  unsigned int *v257;
  unsigned int *v258;
  __int128 v259;
  __int128 v260;
  __int128 v261;
  __int128 v262;
  __int128 v263;
  __int128 v264;
  __int128 v265;
  __int128 v266;
  __int64 v267;
  __int128 v268;
  __int128 v269;
  __int128 v270;
  __int128 v271;
  __int128 v272;
  __int128 v273;
  unsigned int *v274;
  unsigned int *v275;
  __int128 v276;
  __int128 v277;
  __int128 v278;
  __int128 v279;
  __int128 v280;
  __int128 v281;
  __int128 v282;
  __int128 v283;
  __int64 v284;
  __int128 v285;
  __int128 v286;
  __int128 v287;
  __int128 v288;
  __int128 v289;
  __int128 v290;
  unsigned int *v291;
  unsigned int *v292;
  __int128 v293;
  __int128 v294;
  __int128 v295;
  __int128 v296;
  __int128 v297;
  __int128 v298;
  __int128 v299;
  __int128 v300;
  __int64 v301;
  __int128 v302;
  __int128 v303;
  __int128 v304;
  __int128 v305;
  __int128 v306;
  __int128 v307;
  unsigned int *v308;
  unsigned int *v309;
  __int128 v310;
  __int128 v311;
  __int128 v312;
  __int128 v313;
  __int128 v314;
  __int128 v315;
  __int128 v316;
  __int128 v317;
  __int64 v318;
  __int128 v319;
  __int128 v320;
  __int128 v321;
  __int128 v322;
  __int128 v323;
  __int128 v324;
  unsigned int *v325;
  unsigned int *v326;
  __int128 v327;
  __int128 v328;
  __int128 v329;
  __int128 v330;
  __int128 v331;
  __int128 v332;
  __int128 v333;
  __int128 v334;
  __int64 v335;
  __int128 v336;
  __int128 v337;
  __int128 v338;
  __int128 v339;
  __int128 v340;
  __int128 v341;
  unsigned int *v342;
  unsigned int *v343;
  __int128 v344;
  __int128 v345;
  __int128 v346;
  __int128 v347;
  __int128 v348;
  __int128 v349;
  __int128 v350;
  __int128 v351;
  __int64 v352;
  __int128 v353;
  __int128 v354;
  __int128 v355;
  __int128 v356;
  __int128 v357;
  __int128 v358;
  unsigned int *v359;
  unsigned int *v360;
  __int128 v361;
  __int128 v362;
  __int128 v363;
  __int128 v364;
  __int128 v365;
  __int128 v366;
  __int128 v367;
  __int128 v368;
  __int64 v369;
  __int128 v370;
  __int128 v371;
  __int128 v372;
  __int128 v373;
  __int128 v374;
  __int128 v375;
  unsigned int *v376;
  unsigned int *v377;
  __int128 v378;
  __int128 v379;
  __int128 v380;
  __int128 v381;
  __int128 v382;
  __int128 v383;
  __int128 v384;
  __int128 v385;
  __int64 v386;
  __int128 v387;
  __int128 v388;
  __int128 v389;
  __int128 v390;
  __int128 v391;
  __int128 v392;
  unsigned int *v393;
  unsigned int *v394;
  __int128 v395;
  __int128 v396;
  __int128 v397;
  __int128 v398;
  __int128 v399;
  __int128 v400;
  __int128 v401;
  __int128 v402;
  __int64 v403;
  __int128 v404;
  __int128 v405;
  __int128 v406;
  __int128 v407;
  __int128 v408;
  __int128 v409;
  unsigned int *v410;
  unsigned int *v411;
  __int128 v412;
  __int128 v413;
  __int128 v414;
  __int128 v415;
  __int128 v416;
  __int128 v417;
  __int128 v418;
  __int128 v419;
  __int64 v420;
  __int128 v421;
  __int128 v422;
  __int128 v423;
  __int128 v424;
  __int128 v425;
  __int128 v426;
  unsigned int *v427;
  unsigned int *v428;
  __int128 v429;
  __int128 v430;
  __int128 v431;
  __int128 v432;
  __int128 v433;
  __int128 v434;
  __int128 v435;
  __int128 v436;
  __int64 v437;
  __int128 v438;
  __int128 v439;
  __int128 v440;
  __int128 v441;
  __int128 v442;
  __int128 v443;
  unsigned int *v444;
  unsigned int *v445;
  __int128 v446;
  __int128 v447;
  __int128 v448;
  __int128 v449;
  __int128 v450;
  __int128 v451;
  __int128 v452;
  __int128 v453;
  __int64 v454;
  __int128 v455;
  __int128 v456;
  __int128 v457;
  __int128 v458;
  __int128 v459;
  __int128 v460;
  unsigned int *v461;
  unsigned int *v462;
  __int128 v463;
  __int128 v464;
  __int128 v465;
  __int128 v466;
  __int128 v467;
  __int128 v468;
  __int128 v469;
  __int128 v470;
  __int64 v471;
  __int128 v472;
  __int128 v473;
  __int128 v474;
  __int128 v475;
  __int128 v476;
  __int128 v477;
  unsigned int *v478;
  unsigned int *v479;
  __int128 v480;
  __int128 v481;
  __int128 v482;
  __int128 v483;
  __int128 v484;
  __int128 v485;
  __int128 v486;
  __int128 v487;
  __int64 v488;
  __int128 v489;
  __int128 v490;
  __int128 v491;
  __int128 v492;
  __int128 v493;
  __int128 v494;
  unsigned int *v495;
  unsigned int *v496;
  __int128 v497;
  __int128 v498;
  __int128 v499;
  __int128 v500;
  __int128 v501;
  __int128 v502;
  __int128 v503;
  __int128 v504;
  __int64 v505;
  __int128 v506;
  __int128 v507;
  __int128 v508;
  __int128 v509;
  __int128 v510;
  __int128 v511;
  unsigned int *v512;
  unsigned int *v513;
  __int128 v514;
  __int128 v515;
  __int128 v516;
  __int128 v517;
  __int128 v518;
  __int128 v519;
  __int128 v520;
  __int128 v521;
  __int128 v522;
  __int128 v523;
  __int128 v524;
  __int128 v525;
  __int128 v526;
  __int128 v527;
  unsigned int *v528;
  unsigned int *v529;
  __int128 v530;
  __int128 v531;
  __int128 v532;
  __int128 v533;
  __int128 v534;
  __int128 v535;
  __int128 v536;
  __int128 v537;
  __int128 v538;
  __int128 v539;
  __int128 v540;
  __int128 v541;
  __int128 v542;
  __int128 v543;
  int v544;
  __int64 v545;
  unsigned int *v546;
  int v547;
  int v548;
  signed int v549;
  __int64 v550;
  int v551;
  unsigned int *v552;
  signed int v553;
  unsigned int *v554;
  unsigned int *v555;
  signed int v556;
  unsigned int *v557;
  signed int v558;
  _DWORD *v559;
  _QWORD *v560;
  int v561;
  __int64 v562;
  int v563;
  char *v564;
  __int64 v565;
  char *v566;
  char v567;
  __int64 v568;
  int v569;
  char *v570;
  __int64 v571;
  char *v572;
  char v573;

  if ( g_182A7D020 )
  {
    v0 = &g_184393D40;
    v1 = 3;
    v2 = 3;
    v3 = &g_184397B40;
    do
    {
      v0 += 32;
      v4 = *(_OWORD *)v3;
      v5 = *((_OWORD *)v3 + 1);
      v3 += 32;
      *((_OWORD *)v0 - 8) = v4;
      v6 = *((_OWORD *)v3 - 6);
      *((_OWORD *)v0 - 7) = v5;
      v7 = *((_OWORD *)v3 - 5);
      *((_OWORD *)v0 - 6) = v6;
      v8 = *((_OWORD *)v3 - 4);
      *((_OWORD *)v0 - 5) = v7;
      v9 = *((_OWORD *)v3 - 3);
      *((_OWORD *)v0 - 4) = v8;
      v10 = *((_OWORD *)v3 - 2);
      *((_OWORD *)v0 - 3) = v9;
      v11 = *((_OWORD *)v3 - 1);
      *((_OWORD *)v0 - 2) = v10;
      *((_OWORD *)v0 - 1) = v11;
      --v2;
    }
    while ( v2 );
    v12 = 3;
    v13 = *((_OWORD *)v3 + 1);
    *(_OWORD *)v0 = *(_OWORD *)v3;
    v14 = *((_OWORD *)v3 + 2);
    *((_OWORD *)v0 + 1) = v13;
    v15 = *((_OWORD *)v3 + 3);
    *((_OWORD *)v0 + 2) = v14;
    v16 = *((_OWORD *)v3 + 4);
    *((_OWORD *)v0 + 3) = v15;
    v17 = *((_OWORD *)v3 + 5);
    *((_OWORD *)v0 + 4) = v16;
    v18 = *((_OWORD *)v3 + 6);
    v19 = &g_184397D30;
    *((_OWORD *)v0 + 5) = v17;
    *((_OWORD *)v0 + 6) = v18;
    v20 = &g_184393F30;
    do
    {
      v20 += 32;
      v21 = *(_OWORD *)v19;
      v22 = *((_OWORD *)v19 + 1);
      v19 += 32;
      *((_OWORD *)v20 - 8) = v21;
      v23 = *((_OWORD *)v19 - 6);
      *((_OWORD *)v20 - 7) = v22;
      v24 = *((_OWORD *)v19 - 5);
      *((_OWORD *)v20 - 6) = v23;
      v25 = *((_OWORD *)v19 - 4);
      *((_OWORD *)v20 - 5) = v24;
      v26 = *((_OWORD *)v19 - 3);
      *((_OWORD *)v20 - 4) = v25;
      v27 = *((_OWORD *)v19 - 2);
      *((_OWORD *)v20 - 3) = v26;
      v28 = *((_OWORD *)v19 - 1);
      *((_OWORD *)v20 - 2) = v27;
      *((_OWORD *)v20 - 1) = v28;
      --v12;
    }
    while ( v12 );
    v29 = 3;
    v30 = *((_OWORD *)v19 + 1);
    *(_OWORD *)v20 = *(_OWORD *)v19;
    v31 = *((_OWORD *)v19 + 2);
    *((_OWORD *)v20 + 1) = v30;
    v32 = *((_OWORD *)v19 + 3);
    *((_OWORD *)v20 + 2) = v31;
    v33 = *((_OWORD *)v19 + 4);
    *((_OWORD *)v20 + 3) = v32;
    v34 = *((_OWORD *)v19 + 5);
    *((_OWORD *)v20 + 4) = v33;
    v35 = *((_OWORD *)v19 + 6);
    v36 = &g_184397F20;
    *((_OWORD *)v20 + 5) = v34;
    *((_OWORD *)v20 + 6) = v35;
    v37 = &g_184394120;
    do
    {
      v37 += 32;
      v38 = *(_OWORD *)v36;
      v39 = *((_OWORD *)v36 + 1);
      v36 += 32;
      *((_OWORD *)v37 - 8) = v38;
      v40 = *((_OWORD *)v36 - 6);
      *((_OWORD *)v37 - 7) = v39;
      v41 = *((_OWORD *)v36 - 5);
      *((_OWORD *)v37 - 6) = v40;
      v42 = *((_OWORD *)v36 - 4);
      *((_OWORD *)v37 - 5) = v41;
      v43 = *((_OWORD *)v36 - 3);
      *((_OWORD *)v37 - 4) = v42;
      v44 = *((_OWORD *)v36 - 2);
      *((_OWORD *)v37 - 3) = v43;
      v45 = *((_OWORD *)v36 - 1);
      *((_OWORD *)v37 - 2) = v44;
      *((_OWORD *)v37 - 1) = v45;
      --v29;
    }
    while ( v29 );
    v46 = 3;
    v47 = *((_OWORD *)v36 + 1);
    *(_OWORD *)v37 = *(_OWORD *)v36;
    v48 = *((_OWORD *)v36 + 2);
    *((_OWORD *)v37 + 1) = v47;
    v49 = *((_OWORD *)v36 + 3);
    *((_OWORD *)v37 + 2) = v48;
    v50 = *((_OWORD *)v36 + 4);
    *((_OWORD *)v37 + 3) = v49;
    v51 = *((_OWORD *)v36 + 5);
    *((_OWORD *)v37 + 4) = v50;
    v52 = *((_OWORD *)v36 + 6);
    v53 = &g_184398110;
    *((_OWORD *)v37 + 5) = v51;
    *((_OWORD *)v37 + 6) = v52;
    v54 = &g_184394310;
    do
    {
      v54 += 32;
      v55 = *(_OWORD *)v53;
      v56 = *((_OWORD *)v53 + 1);
      v53 += 32;
      *((_OWORD *)v54 - 8) = v55;
      v57 = *((_OWORD *)v53 - 6);
      *((_OWORD *)v54 - 7) = v56;
      v58 = *((_OWORD *)v53 - 5);
      *((_OWORD *)v54 - 6) = v57;
      v59 = *((_OWORD *)v53 - 4);
      *((_OWORD *)v54 - 5) = v58;
      v60 = *((_OWORD *)v53 - 3);
      *((_OWORD *)v54 - 4) = v59;
      v61 = *((_OWORD *)v53 - 2);
      *((_OWORD *)v54 - 3) = v60;
      v62 = *((_OWORD *)v53 - 1);
      *((_OWORD *)v54 - 2) = v61;
      *((_OWORD *)v54 - 1) = v62;
      --v46;
    }
    while ( v46 );
    v63 = 3;
    v64 = *((_OWORD *)v53 + 1);
    *(_OWORD *)v54 = *(_OWORD *)v53;
    v65 = *((_OWORD *)v53 + 2);
    *((_OWORD *)v54 + 1) = v64;
    v66 = *((_OWORD *)v53 + 3);
    *((_OWORD *)v54 + 2) = v65;
    v67 = *((_OWORD *)v53 + 4);
    *((_OWORD *)v54 + 3) = v66;
    v68 = *((_OWORD *)v53 + 5);
    *((_OWORD *)v54 + 4) = v67;
    v69 = *((_OWORD *)v53 + 6);
    v70 = &g_184398300;
    *((_OWORD *)v54 + 5) = v68;
    *((_OWORD *)v54 + 6) = v69;
    v71 = &g_184394500;
    do
    {
      v71 += 32;
      v72 = *(_OWORD *)v70;
      v73 = *((_OWORD *)v70 + 1);
      v70 += 32;
      *((_OWORD *)v71 - 8) = v72;
      v74 = *((_OWORD *)v70 - 6);
      *((_OWORD *)v71 - 7) = v73;
      v75 = *((_OWORD *)v70 - 5);
      *((_OWORD *)v71 - 6) = v74;
      v76 = *((_OWORD *)v70 - 4);
      *((_OWORD *)v71 - 5) = v75;
      v77 = *((_OWORD *)v70 - 3);
      *((_OWORD *)v71 - 4) = v76;
      v78 = *((_OWORD *)v70 - 2);
      *((_OWORD *)v71 - 3) = v77;
      v79 = *((_OWORD *)v70 - 1);
      *((_OWORD *)v71 - 2) = v78;
      *((_OWORD *)v71 - 1) = v79;
      --v63;
    }
    while ( v63 );
    v80 = 3;
    v81 = *((_OWORD *)v70 + 1);
    *(_OWORD *)v71 = *(_OWORD *)v70;
    v82 = *((_OWORD *)v70 + 2);
    *((_OWORD *)v71 + 1) = v81;
    v83 = *((_OWORD *)v70 + 3);
    *((_OWORD *)v71 + 2) = v82;
    v84 = *((_OWORD *)v70 + 4);
    *((_OWORD *)v71 + 3) = v83;
    v85 = *((_OWORD *)v70 + 5);
    *((_OWORD *)v71 + 4) = v84;
    v86 = *((_OWORD *)v70 + 6);
    v87 = &g_1843984F0;
    *((_OWORD *)v71 + 5) = v85;
    *((_OWORD *)v71 + 6) = v86;
    v88 = &g_1843946F0;
    do
    {
      v88 += 32;
      v89 = *(_OWORD *)v87;
      v90 = *((_OWORD *)v87 + 1);
      v87 += 32;
      *((_OWORD *)v88 - 8) = v89;
      v91 = *((_OWORD *)v87 - 6);
      *((_OWORD *)v88 - 7) = v90;
      v92 = *((_OWORD *)v87 - 5);
      *((_OWORD *)v88 - 6) = v91;
      v93 = *((_OWORD *)v87 - 4);
      *((_OWORD *)v88 - 5) = v92;
      v94 = *((_OWORD *)v87 - 3);
      *((_OWORD *)v88 - 4) = v93;
      v95 = *((_OWORD *)v87 - 2);
      *((_OWORD *)v88 - 3) = v94;
      v96 = *((_OWORD *)v87 - 1);
      *((_OWORD *)v88 - 2) = v95;
      *((_OWORD *)v88 - 1) = v96;
      --v80;
    }
    while ( v80 );
    v97 = 3;
    v98 = *((_OWORD *)v87 + 1);
    *(_OWORD *)v88 = *(_OWORD *)v87;
    v99 = *((_OWORD *)v87 + 2);
    *((_OWORD *)v88 + 1) = v98;
    v100 = *((_OWORD *)v87 + 3);
    *((_OWORD *)v88 + 2) = v99;
    v101 = *((_OWORD *)v87 + 4);
    *((_OWORD *)v88 + 3) = v100;
    v102 = *((_OWORD *)v87 + 5);
    *((_OWORD *)v88 + 4) = v101;
    v103 = *((_OWORD *)v87 + 6);
    v104 = &g_1843986E0;
    *((_OWORD *)v88 + 5) = v102;
    *((_OWORD *)v88 + 6) = v103;
    v105 = &g_1843948E0;
    do
    {
      v105 += 32;
      v106 = *(_OWORD *)v104;
      v107 = *((_OWORD *)v104 + 1);
      v104 += 32;
      *((_OWORD *)v105 - 8) = v106;
      v108 = *((_OWORD *)v104 - 6);
      *((_OWORD *)v105 - 7) = v107;
      v109 = *((_OWORD *)v104 - 5);
      *((_OWORD *)v105 - 6) = v108;
      v110 = *((_OWORD *)v104 - 4);
      *((_OWORD *)v105 - 5) = v109;
      v111 = *((_OWORD *)v104 - 3);
      *((_OWORD *)v105 - 4) = v110;
      v112 = *((_OWORD *)v104 - 2);
      *((_OWORD *)v105 - 3) = v111;
      v113 = *((_OWORD *)v104 - 1);
      *((_OWORD *)v105 - 2) = v112;
      *((_OWORD *)v105 - 1) = v113;
      --v97;
    }
    while ( v97 );
    v114 = 3;
    v115 = *((_OWORD *)v104 + 1);
    *(_OWORD *)v105 = *(_OWORD *)v104;
    v116 = *((_OWORD *)v104 + 2);
    *((_OWORD *)v105 + 1) = v115;
    v117 = *((_OWORD *)v104 + 3);
    *((_OWORD *)v105 + 2) = v116;
    v118 = *((_OWORD *)v104 + 4);
    *((_OWORD *)v105 + 3) = v117;
    v119 = *((_OWORD *)v104 + 5);
    *((_OWORD *)v105 + 4) = v118;
    v120 = *((_OWORD *)v104 + 6);
    v121 = &g_1843988D0;
    *((_OWORD *)v105 + 5) = v119;
    *((_OWORD *)v105 + 6) = v120;
    v122 = &g_184394AD0;
    do
    {
      v122 += 32;
      v123 = *(_OWORD *)v121;
      v124 = *((_OWORD *)v121 + 1);
      v121 += 32;
      *((_OWORD *)v122 - 8) = v123;
      v125 = *((_OWORD *)v121 - 6);
      *((_OWORD *)v122 - 7) = v124;
      v126 = *((_OWORD *)v121 - 5);
      *((_OWORD *)v122 - 6) = v125;
      v127 = *((_OWORD *)v121 - 4);
      *((_OWORD *)v122 - 5) = v126;
      v128 = *((_OWORD *)v121 - 3);
      *((_OWORD *)v122 - 4) = v127;
      v129 = *((_OWORD *)v121 - 2);
      *((_OWORD *)v122 - 3) = v128;
      v130 = *((_OWORD *)v121 - 1);
      *((_OWORD *)v122 - 2) = v129;
      *((_OWORD *)v122 - 1) = v130;
      --v114;
    }
    while ( v114 );
    v131 = 3;
    v132 = *((_OWORD *)v121 + 1);
    *(_OWORD *)v122 = *(_OWORD *)v121;
    v133 = *((_OWORD *)v121 + 2);
    *((_OWORD *)v122 + 1) = v132;
    v134 = *((_OWORD *)v121 + 3);
    *((_OWORD *)v122 + 2) = v133;
    v135 = *((_OWORD *)v121 + 4);
    *((_OWORD *)v122 + 3) = v134;
    v136 = *((_OWORD *)v121 + 5);
    *((_OWORD *)v122 + 4) = v135;
    v137 = *((_OWORD *)v121 + 6);
    v138 = &g_184398AC0;
    *((_OWORD *)v122 + 5) = v136;
    *((_OWORD *)v122 + 6) = v137;
    v139 = &g_184394CC0;
    do
    {
      v139 += 32;
      v140 = *(_OWORD *)v138;
      v141 = *((_OWORD *)v138 + 1);
      v138 += 32;
      *((_OWORD *)v139 - 8) = v140;
      v142 = *((_OWORD *)v138 - 6);
      *((_OWORD *)v139 - 7) = v141;
      v143 = *((_OWORD *)v138 - 5);
      *((_OWORD *)v139 - 6) = v142;
      v144 = *((_OWORD *)v138 - 4);
      *((_OWORD *)v139 - 5) = v143;
      v145 = *((_OWORD *)v138 - 3);
      *((_OWORD *)v139 - 4) = v144;
      v146 = *((_OWORD *)v138 - 2);
      *((_OWORD *)v139 - 3) = v145;
      v147 = *((_OWORD *)v138 - 1);
      *((_OWORD *)v139 - 2) = v146;
      *((_OWORD *)v139 - 1) = v147;
      --v131;
    }
    while ( v131 );
    v148 = 3;
    v149 = *((_OWORD *)v138 + 1);
    *(_OWORD *)v139 = *(_OWORD *)v138;
    v150 = *((_OWORD *)v138 + 2);
    *((_OWORD *)v139 + 1) = v149;
    v151 = *((_OWORD *)v138 + 3);
    *((_OWORD *)v139 + 2) = v150;
    v152 = *((_OWORD *)v138 + 4);
    *((_OWORD *)v139 + 3) = v151;
    v153 = *((_OWORD *)v138 + 5);
    *((_OWORD *)v139 + 4) = v152;
    v154 = *((_OWORD *)v138 + 6);
    v155 = &g_184398CB0;
    *((_OWORD *)v139 + 5) = v153;
    *((_OWORD *)v139 + 6) = v154;
    v156 = &g_184394EB0;
    do
    {
      v156 += 32;
      v157 = *(_OWORD *)v155;
      v158 = *((_OWORD *)v155 + 1);
      v155 += 32;
      *((_OWORD *)v156 - 8) = v157;
      v159 = *((_OWORD *)v155 - 6);
      *((_OWORD *)v156 - 7) = v158;
      v160 = *((_OWORD *)v155 - 5);
      *((_OWORD *)v156 - 6) = v159;
      v161 = *((_OWORD *)v155 - 4);
      *((_OWORD *)v156 - 5) = v160;
      v162 = *((_OWORD *)v155 - 3);
      *((_OWORD *)v156 - 4) = v161;
      v163 = *((_OWORD *)v155 - 2);
      *((_OWORD *)v156 - 3) = v162;
      v164 = *((_OWORD *)v155 - 1);
      *((_OWORD *)v156 - 2) = v163;
      *((_OWORD *)v156 - 1) = v164;
      --v148;
    }
    while ( v148 );
    v165 = 3;
    v166 = *((_OWORD *)v155 + 1);
    *(_OWORD *)v156 = *(_OWORD *)v155;
    v167 = *((_OWORD *)v155 + 2);
    *((_OWORD *)v156 + 1) = v166;
    v168 = *((_OWORD *)v155 + 3);
    *((_OWORD *)v156 + 2) = v167;
    v169 = *((_OWORD *)v155 + 4);
    *((_OWORD *)v156 + 3) = v168;
    v170 = *((_OWORD *)v155 + 5);
    *((_OWORD *)v156 + 4) = v169;
    v171 = *((_OWORD *)v155 + 6);
    v172 = &g_184398EA0;
    *((_OWORD *)v156 + 5) = v170;
    *((_OWORD *)v156 + 6) = v171;
    v173 = &g_1843950A0;
    do
    {
      v173 += 32;
      v174 = *(_OWORD *)v172;
      v175 = *((_OWORD *)v172 + 1);
      v172 += 32;
      *((_OWORD *)v173 - 8) = v174;
      v176 = *((_OWORD *)v172 - 6);
      *((_OWORD *)v173 - 7) = v175;
      v177 = *((_OWORD *)v172 - 5);
      *((_OWORD *)v173 - 6) = v176;
      v178 = *((_OWORD *)v172 - 4);
      *((_OWORD *)v173 - 5) = v177;
      v179 = *((_OWORD *)v172 - 3);
      *((_OWORD *)v173 - 4) = v178;
      v180 = *((_OWORD *)v172 - 2);
      *((_OWORD *)v173 - 3) = v179;
      v181 = *((_OWORD *)v172 - 1);
      *((_OWORD *)v173 - 2) = v180;
      *((_OWORD *)v173 - 1) = v181;
      --v165;
    }
    while ( v165 );
    v182 = 3;
    v183 = *((_OWORD *)v172 + 1);
    *(_OWORD *)v173 = *(_OWORD *)v172;
    v184 = *((_OWORD *)v172 + 2);
    *((_OWORD *)v173 + 1) = v183;
    v185 = *((_OWORD *)v172 + 3);
    *((_OWORD *)v173 + 2) = v184;
    v186 = *((_OWORD *)v172 + 4);
    *((_OWORD *)v173 + 3) = v185;
    v187 = *((_OWORD *)v172 + 5);
    *((_OWORD *)v173 + 4) = v186;
    v188 = *((_OWORD *)v172 + 6);
    v189 = &g_184399090;
    *((_OWORD *)v173 + 5) = v187;
    *((_OWORD *)v173 + 6) = v188;
    v190 = &g_184395290;
    do
    {
      v190 += 32;
      v191 = *(_OWORD *)v189;
      v192 = *((_OWORD *)v189 + 1);
      v189 += 32;
      *((_OWORD *)v190 - 8) = v191;
      v193 = *((_OWORD *)v189 - 6);
      *((_OWORD *)v190 - 7) = v192;
      v194 = *((_OWORD *)v189 - 5);
      *((_OWORD *)v190 - 6) = v193;
      v195 = *((_OWORD *)v189 - 4);
      *((_OWORD *)v190 - 5) = v194;
      v196 = *((_OWORD *)v189 - 3);
      *((_OWORD *)v190 - 4) = v195;
      v197 = *((_OWORD *)v189 - 2);
      *((_OWORD *)v190 - 3) = v196;
      v198 = *((_OWORD *)v189 - 1);
      *((_OWORD *)v190 - 2) = v197;
      *((_OWORD *)v190 - 1) = v198;
      --v182;
    }
    while ( v182 );
    v199 = 3;
    v200 = *((_OWORD *)v189 + 1);
    *(_OWORD *)v190 = *(_OWORD *)v189;
    v201 = *((_OWORD *)v189 + 2);
    *((_OWORD *)v190 + 1) = v200;
    v202 = *((_OWORD *)v189 + 3);
    *((_OWORD *)v190 + 2) = v201;
    v203 = *((_OWORD *)v189 + 4);
    *((_OWORD *)v190 + 3) = v202;
    v204 = *((_OWORD *)v189 + 5);
    *((_OWORD *)v190 + 4) = v203;
    v205 = *((_OWORD *)v189 + 6);
    v206 = &g_184399280;
    *((_OWORD *)v190 + 5) = v204;
    *((_OWORD *)v190 + 6) = v205;
    v207 = &g_184395480;
    do
    {
      v207 += 32;
      v208 = *(_OWORD *)v206;
      v209 = *((_OWORD *)v206 + 1);
      v206 += 32;
      *((_OWORD *)v207 - 8) = v208;
      v210 = *((_OWORD *)v206 - 6);
      *((_OWORD *)v207 - 7) = v209;
      v211 = *((_OWORD *)v206 - 5);
      *((_OWORD *)v207 - 6) = v210;
      v212 = *((_OWORD *)v206 - 4);
      *((_OWORD *)v207 - 5) = v211;
      v213 = *((_OWORD *)v206 - 3);
      *((_OWORD *)v207 - 4) = v212;
      v214 = *((_OWORD *)v206 - 2);
      *((_OWORD *)v207 - 3) = v213;
      v215 = *((_OWORD *)v206 - 1);
      *((_OWORD *)v207 - 2) = v214;
      *((_OWORD *)v207 - 1) = v215;
      --v199;
    }
    while ( v199 );
    v216 = 3;
    v217 = *((_OWORD *)v206 + 1);
    *(_OWORD *)v207 = *(_OWORD *)v206;
    v218 = *((_OWORD *)v206 + 2);
    *((_OWORD *)v207 + 1) = v217;
    v219 = *((_OWORD *)v206 + 3);
    *((_OWORD *)v207 + 2) = v218;
    v220 = *((_OWORD *)v206 + 4);
    *((_OWORD *)v207 + 3) = v219;
    v221 = *((_OWORD *)v206 + 5);
    *((_OWORD *)v207 + 4) = v220;
    v222 = *((_OWORD *)v206 + 6);
    v223 = &g_184399470;
    *((_OWORD *)v207 + 5) = v221;
    *((_OWORD *)v207 + 6) = v222;
    v224 = &g_184395670;
    do
    {
      v224 += 32;
      v225 = *(_OWORD *)v223;
      v226 = *((_OWORD *)v223 + 1);
      v223 += 32;
      *((_OWORD *)v224 - 8) = v225;
      v227 = *((_OWORD *)v223 - 6);
      *((_OWORD *)v224 - 7) = v226;
      v228 = *((_OWORD *)v223 - 5);
      *((_OWORD *)v224 - 6) = v227;
      v229 = *((_OWORD *)v223 - 4);
      *((_OWORD *)v224 - 5) = v228;
      v230 = *((_OWORD *)v223 - 3);
      *((_OWORD *)v224 - 4) = v229;
      v231 = *((_OWORD *)v223 - 2);
      *((_OWORD *)v224 - 3) = v230;
      v232 = *((_OWORD *)v223 - 1);
      *((_OWORD *)v224 - 2) = v231;
      *((_OWORD *)v224 - 1) = v232;
      --v216;
    }
    while ( v216 );
    v233 = 3;
    v234 = *((_OWORD *)v223 + 1);
    *(_OWORD *)v224 = *(_OWORD *)v223;
    v235 = *((_OWORD *)v223 + 2);
    *((_OWORD *)v224 + 1) = v234;
    v236 = *((_OWORD *)v223 + 3);
    *((_OWORD *)v224 + 2) = v235;
    v237 = *((_OWORD *)v223 + 4);
    *((_OWORD *)v224 + 3) = v236;
    v238 = *((_OWORD *)v223 + 5);
    *((_OWORD *)v224 + 4) = v237;
    v239 = *((_OWORD *)v223 + 6);
    v240 = &g_184399660;
    *((_OWORD *)v224 + 5) = v238;
    *((_OWORD *)v224 + 6) = v239;
    v241 = &g_184395860;
    do
    {
      v241 += 32;
      v242 = *(_OWORD *)v240;
      v243 = *((_OWORD *)v240 + 1);
      v240 += 32;
      *((_OWORD *)v241 - 8) = v242;
      v244 = *((_OWORD *)v240 - 6);
      *((_OWORD *)v241 - 7) = v243;
      v245 = *((_OWORD *)v240 - 5);
      *((_OWORD *)v241 - 6) = v244;
      v246 = *((_OWORD *)v240 - 4);
      *((_OWORD *)v241 - 5) = v245;
      v247 = *((_OWORD *)v240 - 3);
      *((_OWORD *)v241 - 4) = v246;
      v248 = *((_OWORD *)v240 - 2);
      *((_OWORD *)v241 - 3) = v247;
      v249 = *((_OWORD *)v240 - 1);
      *((_OWORD *)v241 - 2) = v248;
      *((_OWORD *)v241 - 1) = v249;
      --v233;
    }
    while ( v233 );
    v250 = 3;
    v251 = *((_OWORD *)v240 + 1);
    *(_OWORD *)v241 = *(_OWORD *)v240;
    v252 = *((_OWORD *)v240 + 2);
    *((_OWORD *)v241 + 1) = v251;
    v253 = *((_OWORD *)v240 + 3);
    *((_OWORD *)v241 + 2) = v252;
    v254 = *((_OWORD *)v240 + 4);
    *((_OWORD *)v241 + 3) = v253;
    v255 = *((_OWORD *)v240 + 5);
    *((_OWORD *)v241 + 4) = v254;
    v256 = *((_OWORD *)v240 + 6);
    v257 = &g_184399850;
    *((_OWORD *)v241 + 5) = v255;
    *((_OWORD *)v241 + 6) = v256;
    v258 = &g_184395A50;
    do
    {
      v258 += 32;
      v259 = *(_OWORD *)v257;
      v260 = *((_OWORD *)v257 + 1);
      v257 += 32;
      *((_OWORD *)v258 - 8) = v259;
      v261 = *((_OWORD *)v257 - 6);
      *((_OWORD *)v258 - 7) = v260;
      v262 = *((_OWORD *)v257 - 5);
      *((_OWORD *)v258 - 6) = v261;
      v263 = *((_OWORD *)v257 - 4);
      *((_OWORD *)v258 - 5) = v262;
      v264 = *((_OWORD *)v257 - 3);
      *((_OWORD *)v258 - 4) = v263;
      v265 = *((_OWORD *)v257 - 2);
      *((_OWORD *)v258 - 3) = v264;
      v266 = *((_OWORD *)v257 - 1);
      *((_OWORD *)v258 - 2) = v265;
      *((_OWORD *)v258 - 1) = v266;
      --v250;
    }
    while ( v250 );
    v267 = 3;
    v268 = *((_OWORD *)v257 + 1);
    *(_OWORD *)v258 = *(_OWORD *)v257;
    v269 = *((_OWORD *)v257 + 2);
    *((_OWORD *)v258 + 1) = v268;
    v270 = *((_OWORD *)v257 + 3);
    *((_OWORD *)v258 + 2) = v269;
    v271 = *((_OWORD *)v257 + 4);
    *((_OWORD *)v258 + 3) = v270;
    v272 = *((_OWORD *)v257 + 5);
    *((_OWORD *)v258 + 4) = v271;
    v273 = *((_OWORD *)v257 + 6);
    v274 = &g_184399A40;
    *((_OWORD *)v258 + 5) = v272;
    *((_OWORD *)v258 + 6) = v273;
    v275 = &g_184395C40;
    do
    {
      v275 += 32;
      v276 = *(_OWORD *)v274;
      v277 = *((_OWORD *)v274 + 1);
      v274 += 32;
      *((_OWORD *)v275 - 8) = v276;
      v278 = *((_OWORD *)v274 - 6);
      *((_OWORD *)v275 - 7) = v277;
      v279 = *((_OWORD *)v274 - 5);
      *((_OWORD *)v275 - 6) = v278;
      v280 = *((_OWORD *)v274 - 4);
      *((_OWORD *)v275 - 5) = v279;
      v281 = *((_OWORD *)v274 - 3);
      *((_OWORD *)v275 - 4) = v280;
      v282 = *((_OWORD *)v274 - 2);
      *((_OWORD *)v275 - 3) = v281;
      v283 = *((_OWORD *)v274 - 1);
      *((_OWORD *)v275 - 2) = v282;
      *((_OWORD *)v275 - 1) = v283;
      --v267;
    }
    while ( v267 );
    v284 = 3;
    v285 = *((_OWORD *)v274 + 1);
    *(_OWORD *)v275 = *(_OWORD *)v274;
    v286 = *((_OWORD *)v274 + 2);
    *((_OWORD *)v275 + 1) = v285;
    v287 = *((_OWORD *)v274 + 3);
    *((_OWORD *)v275 + 2) = v286;
    v288 = *((_OWORD *)v274 + 4);
    *((_OWORD *)v275 + 3) = v287;
    v289 = *((_OWORD *)v274 + 5);
    *((_OWORD *)v275 + 4) = v288;
    v290 = *((_OWORD *)v274 + 6);
    v291 = &g_184399C30;
    *((_OWORD *)v275 + 5) = v289;
    *((_OWORD *)v275 + 6) = v290;
    v292 = &g_184395E30;
    do
    {
      v292 += 32;
      v293 = *(_OWORD *)v291;
      v294 = *((_OWORD *)v291 + 1);
      v291 += 32;
      *((_OWORD *)v292 - 8) = v293;
      v295 = *((_OWORD *)v291 - 6);
      *((_OWORD *)v292 - 7) = v294;
      v296 = *((_OWORD *)v291 - 5);
      *((_OWORD *)v292 - 6) = v295;
      v297 = *((_OWORD *)v291 - 4);
      *((_OWORD *)v292 - 5) = v296;
      v298 = *((_OWORD *)v291 - 3);
      *((_OWORD *)v292 - 4) = v297;
      v299 = *((_OWORD *)v291 - 2);
      *((_OWORD *)v292 - 3) = v298;
      v300 = *((_OWORD *)v291 - 1);
      *((_OWORD *)v292 - 2) = v299;
      *((_OWORD *)v292 - 1) = v300;
      --v284;
    }
    while ( v284 );
    v301 = 3;
    v302 = *((_OWORD *)v291 + 1);
    *(_OWORD *)v292 = *(_OWORD *)v291;
    v303 = *((_OWORD *)v291 + 2);
    *((_OWORD *)v292 + 1) = v302;
    v304 = *((_OWORD *)v291 + 3);
    *((_OWORD *)v292 + 2) = v303;
    v305 = *((_OWORD *)v291 + 4);
    *((_OWORD *)v292 + 3) = v304;
    v306 = *((_OWORD *)v291 + 5);
    *((_OWORD *)v292 + 4) = v305;
    v307 = *((_OWORD *)v291 + 6);
    v308 = &g_184399E20;
    *((_OWORD *)v292 + 5) = v306;
    *((_OWORD *)v292 + 6) = v307;
    v309 = &g_184396020;
    do
    {
      v309 += 32;
      v310 = *(_OWORD *)v308;
      v311 = *((_OWORD *)v308 + 1);
      v308 += 32;
      *((_OWORD *)v309 - 8) = v310;
      v312 = *((_OWORD *)v308 - 6);
      *((_OWORD *)v309 - 7) = v311;
      v313 = *((_OWORD *)v308 - 5);
      *((_OWORD *)v309 - 6) = v312;
      v314 = *((_OWORD *)v308 - 4);
      *((_OWORD *)v309 - 5) = v313;
      v315 = *((_OWORD *)v308 - 3);
      *((_OWORD *)v309 - 4) = v314;
      v316 = *((_OWORD *)v308 - 2);
      *((_OWORD *)v309 - 3) = v315;
      v317 = *((_OWORD *)v308 - 1);
      *((_OWORD *)v309 - 2) = v316;
      *((_OWORD *)v309 - 1) = v317;
      --v301;
    }
    while ( v301 );
    v318 = 3;
    v319 = *((_OWORD *)v308 + 1);
    *(_OWORD *)v309 = *(_OWORD *)v308;
    v320 = *((_OWORD *)v308 + 2);
    *((_OWORD *)v309 + 1) = v319;
    v321 = *((_OWORD *)v308 + 3);
    *((_OWORD *)v309 + 2) = v320;
    v322 = *((_OWORD *)v308 + 4);
    *((_OWORD *)v309 + 3) = v321;
    v323 = *((_OWORD *)v308 + 5);
    *((_OWORD *)v309 + 4) = v322;
    v324 = *((_OWORD *)v308 + 6);
    v325 = &g_18439A010;
    *((_OWORD *)v309 + 5) = v323;
    *((_OWORD *)v309 + 6) = v324;
    v326 = &g_184396210;
    do
    {
      v326 += 32;
      v327 = *(_OWORD *)v325;
      v328 = *((_OWORD *)v325 + 1);
      v325 += 32;
      *((_OWORD *)v326 - 8) = v327;
      v329 = *((_OWORD *)v325 - 6);
      *((_OWORD *)v326 - 7) = v328;
      v330 = *((_OWORD *)v325 - 5);
      *((_OWORD *)v326 - 6) = v329;
      v331 = *((_OWORD *)v325 - 4);
      *((_OWORD *)v326 - 5) = v330;
      v332 = *((_OWORD *)v325 - 3);
      *((_OWORD *)v326 - 4) = v331;
      v333 = *((_OWORD *)v325 - 2);
      *((_OWORD *)v326 - 3) = v332;
      v334 = *((_OWORD *)v325 - 1);
      *((_OWORD *)v326 - 2) = v333;
      *((_OWORD *)v326 - 1) = v334;
      --v318;
    }
    while ( v318 );
    v335 = 3;
    v336 = *((_OWORD *)v325 + 1);
    *(_OWORD *)v326 = *(_OWORD *)v325;
    v337 = *((_OWORD *)v325 + 2);
    *((_OWORD *)v326 + 1) = v336;
    v338 = *((_OWORD *)v325 + 3);
    *((_OWORD *)v326 + 2) = v337;
    v339 = *((_OWORD *)v325 + 4);
    *((_OWORD *)v326 + 3) = v338;
    v340 = *((_OWORD *)v325 + 5);
    *((_OWORD *)v326 + 4) = v339;
    v341 = *((_OWORD *)v325 + 6);
    v342 = &g_18439A200;
    *((_OWORD *)v326 + 5) = v340;
    *((_OWORD *)v326 + 6) = v341;
    v343 = &g_184396400;
    do
    {
      v343 += 32;
      v344 = *(_OWORD *)v342;
      v345 = *((_OWORD *)v342 + 1);
      v342 += 32;
      *((_OWORD *)v343 - 8) = v344;
      v346 = *((_OWORD *)v342 - 6);
      *((_OWORD *)v343 - 7) = v345;
      v347 = *((_OWORD *)v342 - 5);
      *((_OWORD *)v343 - 6) = v346;
      v348 = *((_OWORD *)v342 - 4);
      *((_OWORD *)v343 - 5) = v347;
      v349 = *((_OWORD *)v342 - 3);
      *((_OWORD *)v343 - 4) = v348;
      v350 = *((_OWORD *)v342 - 2);
      *((_OWORD *)v343 - 3) = v349;
      v351 = *((_OWORD *)v342 - 1);
      *((_OWORD *)v343 - 2) = v350;
      *((_OWORD *)v343 - 1) = v351;
      --v335;
    }
    while ( v335 );
    v352 = 3;
    v353 = *((_OWORD *)v342 + 1);
    *(_OWORD *)v343 = *(_OWORD *)v342;
    v354 = *((_OWORD *)v342 + 2);
    *((_OWORD *)v343 + 1) = v353;
    v355 = *((_OWORD *)v342 + 3);
    *((_OWORD *)v343 + 2) = v354;
    v356 = *((_OWORD *)v342 + 4);
    *((_OWORD *)v343 + 3) = v355;
    v357 = *((_OWORD *)v342 + 5);
    *((_OWORD *)v343 + 4) = v356;
    v358 = *((_OWORD *)v342 + 6);
    v359 = &g_18439A3F0;
    *((_OWORD *)v343 + 5) = v357;
    *((_OWORD *)v343 + 6) = v358;
    v360 = &g_1843965F0;
    do
    {
      v360 += 32;
      v361 = *(_OWORD *)v359;
      v362 = *((_OWORD *)v359 + 1);
      v359 += 32;
      *((_OWORD *)v360 - 8) = v361;
      v363 = *((_OWORD *)v359 - 6);
      *((_OWORD *)v360 - 7) = v362;
      v364 = *((_OWORD *)v359 - 5);
      *((_OWORD *)v360 - 6) = v363;
      v365 = *((_OWORD *)v359 - 4);
      *((_OWORD *)v360 - 5) = v364;
      v366 = *((_OWORD *)v359 - 3);
      *((_OWORD *)v360 - 4) = v365;
      v367 = *((_OWORD *)v359 - 2);
      *((_OWORD *)v360 - 3) = v366;
      v368 = *((_OWORD *)v359 - 1);
      *((_OWORD *)v360 - 2) = v367;
      *((_OWORD *)v360 - 1) = v368;
      --v352;
    }
    while ( v352 );
    v369 = 3;
    v370 = *((_OWORD *)v359 + 1);
    *(_OWORD *)v360 = *(_OWORD *)v359;
    v371 = *((_OWORD *)v359 + 2);
    *((_OWORD *)v360 + 1) = v370;
    v372 = *((_OWORD *)v359 + 3);
    *((_OWORD *)v360 + 2) = v371;
    v373 = *((_OWORD *)v359 + 4);
    *((_OWORD *)v360 + 3) = v372;
    v374 = *((_OWORD *)v359 + 5);
    *((_OWORD *)v360 + 4) = v373;
    v375 = *((_OWORD *)v359 + 6);
    v376 = &g_18439A5E0;
    *((_OWORD *)v360 + 5) = v374;
    *((_OWORD *)v360 + 6) = v375;
    v377 = &g_1843967E0;
    do
    {
      v377 += 32;
      v378 = *(_OWORD *)v376;
      v379 = *((_OWORD *)v376 + 1);
      v376 += 32;
      *((_OWORD *)v377 - 8) = v378;
      v380 = *((_OWORD *)v376 - 6);
      *((_OWORD *)v377 - 7) = v379;
      v381 = *((_OWORD *)v376 - 5);
      *((_OWORD *)v377 - 6) = v380;
      v382 = *((_OWORD *)v376 - 4);
      *((_OWORD *)v377 - 5) = v381;
      v383 = *((_OWORD *)v376 - 3);
      *((_OWORD *)v377 - 4) = v382;
      v384 = *((_OWORD *)v376 - 2);
      *((_OWORD *)v377 - 3) = v383;
      v385 = *((_OWORD *)v376 - 1);
      *((_OWORD *)v377 - 2) = v384;
      *((_OWORD *)v377 - 1) = v385;
      --v369;
    }
    while ( v369 );
    v386 = 3;
    v387 = *((_OWORD *)v376 + 1);
    *(_OWORD *)v377 = *(_OWORD *)v376;
    v388 = *((_OWORD *)v376 + 2);
    *((_OWORD *)v377 + 1) = v387;
    v389 = *((_OWORD *)v376 + 3);
    *((_OWORD *)v377 + 2) = v388;
    v390 = *((_OWORD *)v376 + 4);
    *((_OWORD *)v377 + 3) = v389;
    v391 = *((_OWORD *)v376 + 5);
    *((_OWORD *)v377 + 4) = v390;
    v392 = *((_OWORD *)v376 + 6);
    v393 = &g_18439A7D0;
    *((_OWORD *)v377 + 5) = v391;
    *((_OWORD *)v377 + 6) = v392;
    v394 = &g_1843969D0;
    do
    {
      v394 += 32;
      v395 = *(_OWORD *)v393;
      v396 = *((_OWORD *)v393 + 1);
      v393 += 32;
      *((_OWORD *)v394 - 8) = v395;
      v397 = *((_OWORD *)v393 - 6);
      *((_OWORD *)v394 - 7) = v396;
      v398 = *((_OWORD *)v393 - 5);
      *((_OWORD *)v394 - 6) = v397;
      v399 = *((_OWORD *)v393 - 4);
      *((_OWORD *)v394 - 5) = v398;
      v400 = *((_OWORD *)v393 - 3);
      *((_OWORD *)v394 - 4) = v399;
      v401 = *((_OWORD *)v393 - 2);
      *((_OWORD *)v394 - 3) = v400;
      v402 = *((_OWORD *)v393 - 1);
      *((_OWORD *)v394 - 2) = v401;
      *((_OWORD *)v394 - 1) = v402;
      --v386;
    }
    while ( v386 );
    v403 = 3;
    v404 = *((_OWORD *)v393 + 1);
    *(_OWORD *)v394 = *(_OWORD *)v393;
    v405 = *((_OWORD *)v393 + 2);
    *((_OWORD *)v394 + 1) = v404;
    v406 = *((_OWORD *)v393 + 3);
    *((_OWORD *)v394 + 2) = v405;
    v407 = *((_OWORD *)v393 + 4);
    *((_OWORD *)v394 + 3) = v406;
    v408 = *((_OWORD *)v393 + 5);
    *((_OWORD *)v394 + 4) = v407;
    v409 = *((_OWORD *)v393 + 6);
    v410 = &g_18439A9C0;
    *((_OWORD *)v394 + 5) = v408;
    *((_OWORD *)v394 + 6) = v409;
    v411 = &g_184396BC0;
    do
    {
      v411 += 32;
      v412 = *(_OWORD *)v410;
      v413 = *((_OWORD *)v410 + 1);
      v410 += 32;
      *((_OWORD *)v411 - 8) = v412;
      v414 = *((_OWORD *)v410 - 6);
      *((_OWORD *)v411 - 7) = v413;
      v415 = *((_OWORD *)v410 - 5);
      *((_OWORD *)v411 - 6) = v414;
      v416 = *((_OWORD *)v410 - 4);
      *((_OWORD *)v411 - 5) = v415;
      v417 = *((_OWORD *)v410 - 3);
      *((_OWORD *)v411 - 4) = v416;
      v418 = *((_OWORD *)v410 - 2);
      *((_OWORD *)v411 - 3) = v417;
      v419 = *((_OWORD *)v410 - 1);
      *((_OWORD *)v411 - 2) = v418;
      *((_OWORD *)v411 - 1) = v419;
      --v403;
    }
    while ( v403 );
    v420 = 3;
    v421 = *((_OWORD *)v410 + 1);
    *(_OWORD *)v411 = *(_OWORD *)v410;
    v422 = *((_OWORD *)v410 + 2);
    *((_OWORD *)v411 + 1) = v421;
    v423 = *((_OWORD *)v410 + 3);
    *((_OWORD *)v411 + 2) = v422;
    v424 = *((_OWORD *)v410 + 4);
    *((_OWORD *)v411 + 3) = v423;
    v425 = *((_OWORD *)v410 + 5);
    *((_OWORD *)v411 + 4) = v424;
    v426 = *((_OWORD *)v410 + 6);
    v427 = &g_18439ABB0;
    *((_OWORD *)v411 + 5) = v425;
    *((_OWORD *)v411 + 6) = v426;
    v428 = &g_184396DB0;
    do
    {
      v428 += 32;
      v429 = *(_OWORD *)v427;
      v430 = *((_OWORD *)v427 + 1);
      v427 += 32;
      *((_OWORD *)v428 - 8) = v429;
      v431 = *((_OWORD *)v427 - 6);
      *((_OWORD *)v428 - 7) = v430;
      v432 = *((_OWORD *)v427 - 5);
      *((_OWORD *)v428 - 6) = v431;
      v433 = *((_OWORD *)v427 - 4);
      *((_OWORD *)v428 - 5) = v432;
      v434 = *((_OWORD *)v427 - 3);
      *((_OWORD *)v428 - 4) = v433;
      v435 = *((_OWORD *)v427 - 2);
      *((_OWORD *)v428 - 3) = v434;
      v436 = *((_OWORD *)v427 - 1);
      *((_OWORD *)v428 - 2) = v435;
      *((_OWORD *)v428 - 1) = v436;
      --v420;
    }
    while ( v420 );
    v437 = 3;
    v438 = *((_OWORD *)v427 + 1);
    *(_OWORD *)v428 = *(_OWORD *)v427;
    v439 = *((_OWORD *)v427 + 2);
    *((_OWORD *)v428 + 1) = v438;
    v440 = *((_OWORD *)v427 + 3);
    *((_OWORD *)v428 + 2) = v439;
    v441 = *((_OWORD *)v427 + 4);
    *((_OWORD *)v428 + 3) = v440;
    v442 = *((_OWORD *)v427 + 5);
    *((_OWORD *)v428 + 4) = v441;
    v443 = *((_OWORD *)v427 + 6);
    v444 = &g_18439ADA0;
    *((_OWORD *)v428 + 5) = v442;
    *((_OWORD *)v428 + 6) = v443;
    v445 = &g_184396FA0;
    do
    {
      v445 += 32;
      v446 = *(_OWORD *)v444;
      v447 = *((_OWORD *)v444 + 1);
      v444 += 32;
      *((_OWORD *)v445 - 8) = v446;
      v448 = *((_OWORD *)v444 - 6);
      *((_OWORD *)v445 - 7) = v447;
      v449 = *((_OWORD *)v444 - 5);
      *((_OWORD *)v445 - 6) = v448;
      v450 = *((_OWORD *)v444 - 4);
      *((_OWORD *)v445 - 5) = v449;
      v451 = *((_OWORD *)v444 - 3);
      *((_OWORD *)v445 - 4) = v450;
      v452 = *((_OWORD *)v444 - 2);
      *((_OWORD *)v445 - 3) = v451;
      v453 = *((_OWORD *)v444 - 1);
      *((_OWORD *)v445 - 2) = v452;
      *((_OWORD *)v445 - 1) = v453;
      --v437;
    }
    while ( v437 );
    v454 = 3;
    v455 = *((_OWORD *)v444 + 1);
    *(_OWORD *)v445 = *(_OWORD *)v444;
    v456 = *((_OWORD *)v444 + 2);
    *((_OWORD *)v445 + 1) = v455;
    v457 = *((_OWORD *)v444 + 3);
    *((_OWORD *)v445 + 2) = v456;
    v458 = *((_OWORD *)v444 + 4);
    *((_OWORD *)v445 + 3) = v457;
    v459 = *((_OWORD *)v444 + 5);
    *((_OWORD *)v445 + 4) = v458;
    v460 = *((_OWORD *)v444 + 6);
    v461 = &g_18439AF90;
    *((_OWORD *)v445 + 5) = v459;
    *((_OWORD *)v445 + 6) = v460;
    v462 = &g_184397190;
    do
    {
      v462 += 32;
      v463 = *(_OWORD *)v461;
      v464 = *((_OWORD *)v461 + 1);
      v461 += 32;
      *((_OWORD *)v462 - 8) = v463;
      v465 = *((_OWORD *)v461 - 6);
      *((_OWORD *)v462 - 7) = v464;
      v466 = *((_OWORD *)v461 - 5);
      *((_OWORD *)v462 - 6) = v465;
      v467 = *((_OWORD *)v461 - 4);
      *((_OWORD *)v462 - 5) = v466;
      v468 = *((_OWORD *)v461 - 3);
      *((_OWORD *)v462 - 4) = v467;
      v469 = *((_OWORD *)v461 - 2);
      *((_OWORD *)v462 - 3) = v468;
      v470 = *((_OWORD *)v461 - 1);
      *((_OWORD *)v462 - 2) = v469;
      *((_OWORD *)v462 - 1) = v470;
      --v454;
    }
    while ( v454 );
    v471 = 3;
    v472 = *((_OWORD *)v461 + 1);
    *(_OWORD *)v462 = *(_OWORD *)v461;
    v473 = *((_OWORD *)v461 + 2);
    *((_OWORD *)v462 + 1) = v472;
    v474 = *((_OWORD *)v461 + 3);
    *((_OWORD *)v462 + 2) = v473;
    v475 = *((_OWORD *)v461 + 4);
    *((_OWORD *)v462 + 3) = v474;
    v476 = *((_OWORD *)v461 + 5);
    *((_OWORD *)v462 + 4) = v475;
    v477 = *((_OWORD *)v461 + 6);
    v478 = &g_18439B180;
    *((_OWORD *)v462 + 5) = v476;
    *((_OWORD *)v462 + 6) = v477;
    v479 = &g_184397380;
    do
    {
      v479 += 32;
      v480 = *(_OWORD *)v478;
      v481 = *((_OWORD *)v478 + 1);
      v478 += 32;
      *((_OWORD *)v479 - 8) = v480;
      v482 = *((_OWORD *)v478 - 6);
      *((_OWORD *)v479 - 7) = v481;
      v483 = *((_OWORD *)v478 - 5);
      *((_OWORD *)v479 - 6) = v482;
      v484 = *((_OWORD *)v478 - 4);
      *((_OWORD *)v479 - 5) = v483;
      v485 = *((_OWORD *)v478 - 3);
      *((_OWORD *)v479 - 4) = v484;
      v486 = *((_OWORD *)v478 - 2);
      *((_OWORD *)v479 - 3) = v485;
      v487 = *((_OWORD *)v478 - 1);
      *((_OWORD *)v479 - 2) = v486;
      *((_OWORD *)v479 - 1) = v487;
      --v471;
    }
    while ( v471 );
    v488 = 3;
    v489 = *((_OWORD *)v478 + 1);
    *(_OWORD *)v479 = *(_OWORD *)v478;
    v490 = *((_OWORD *)v478 + 2);
    *((_OWORD *)v479 + 1) = v489;
    v491 = *((_OWORD *)v478 + 3);
    *((_OWORD *)v479 + 2) = v490;
    v492 = *((_OWORD *)v478 + 4);
    *((_OWORD *)v479 + 3) = v491;
    v493 = *((_OWORD *)v478 + 5);
    *((_OWORD *)v479 + 4) = v492;
    v494 = *((_OWORD *)v478 + 6);
    v495 = &g_18439B370;
    *((_OWORD *)v479 + 5) = v493;
    *((_OWORD *)v479 + 6) = v494;
    v496 = &g_184397570;
    do
    {
      v496 += 32;
      v497 = *(_OWORD *)v495;
      v498 = *((_OWORD *)v495 + 1);
      v495 += 32;
      *((_OWORD *)v496 - 8) = v497;
      v499 = *((_OWORD *)v495 - 6);
      *((_OWORD *)v496 - 7) = v498;
      v500 = *((_OWORD *)v495 - 5);
      *((_OWORD *)v496 - 6) = v499;
      v501 = *((_OWORD *)v495 - 4);
      *((_OWORD *)v496 - 5) = v500;
      v502 = *((_OWORD *)v495 - 3);
      *((_OWORD *)v496 - 4) = v501;
      v503 = *((_OWORD *)v495 - 2);
      *((_OWORD *)v496 - 3) = v502;
      v504 = *((_OWORD *)v495 - 1);
      *((_OWORD *)v496 - 2) = v503;
      *((_OWORD *)v496 - 1) = v504;
      --v488;
    }
    while ( v488 );
    v505 = 3;
    v506 = *((_OWORD *)v495 + 1);
    *(_OWORD *)v496 = *(_OWORD *)v495;
    v507 = *((_OWORD *)v495 + 2);
    *((_OWORD *)v496 + 1) = v506;
    v508 = *((_OWORD *)v495 + 3);
    *((_OWORD *)v496 + 2) = v507;
    v509 = *((_OWORD *)v495 + 4);
    *((_OWORD *)v496 + 3) = v508;
    v510 = *((_OWORD *)v495 + 5);
    *((_OWORD *)v496 + 4) = v509;
    v511 = *((_OWORD *)v495 + 6);
    v512 = &g_18439B560;
    *((_OWORD *)v496 + 5) = v510;
    *((_OWORD *)v496 + 6) = v511;
    v513 = &g_184397760;
    do
    {
      v513 += 32;
      v514 = *(_OWORD *)v512;
      v515 = *((_OWORD *)v512 + 1);
      v512 += 32;
      *((_OWORD *)v513 - 8) = v514;
      v516 = *((_OWORD *)v512 - 6);
      *((_OWORD *)v513 - 7) = v515;
      v517 = *((_OWORD *)v512 - 5);
      *((_OWORD *)v513 - 6) = v516;
      v518 = *((_OWORD *)v512 - 4);
      *((_OWORD *)v513 - 5) = v517;
      v519 = *((_OWORD *)v512 - 3);
      *((_OWORD *)v513 - 4) = v518;
      v520 = *((_OWORD *)v512 - 2);
      *((_OWORD *)v513 - 3) = v519;
      v521 = *((_OWORD *)v512 - 1);
      *((_OWORD *)v513 - 2) = v520;
      *((_OWORD *)v513 - 1) = v521;
      --v505;
    }
    while ( v505 );
    v522 = *((_OWORD *)v512 + 1);
    *(_OWORD *)v513 = *(_OWORD *)v512;
    v523 = *((_OWORD *)v512 + 2);
    *((_OWORD *)v513 + 1) = v522;
    v524 = *((_OWORD *)v512 + 3);
    *((_OWORD *)v513 + 2) = v523;
    v525 = *((_OWORD *)v512 + 4);
    *((_OWORD *)v513 + 3) = v524;
    v526 = *((_OWORD *)v512 + 5);
    *((_OWORD *)v513 + 4) = v525;
    v527 = *((_OWORD *)v512 + 6);
    v528 = &g_18439B750;
    *((_OWORD *)v513 + 5) = v526;
    *((_OWORD *)v513 + 6) = v527;
    v529 = &g_184397950;
    do
    {
      v529 += 32;
      v530 = *(_OWORD *)v528;
      v531 = *((_OWORD *)v528 + 1);
      v528 += 32;
      *((_OWORD *)v529 - 8) = v530;
      v532 = *((_OWORD *)v528 - 6);
      *((_OWORD *)v529 - 7) = v531;
      v533 = *((_OWORD *)v528 - 5);
      *((_OWORD *)v529 - 6) = v532;
      v534 = *((_OWORD *)v528 - 4);
      *((_OWORD *)v529 - 5) = v533;
      v535 = *((_OWORD *)v528 - 3);
      *((_OWORD *)v529 - 4) = v534;
      v536 = *((_OWORD *)v528 - 2);
      *((_OWORD *)v529 - 3) = v535;
      v537 = *((_OWORD *)v528 - 1);
      *((_OWORD *)v529 - 2) = v536;
      *((_OWORD *)v529 - 1) = v537;
      --v1;
    }
    while ( v1 );
    v538 = *((_OWORD *)v528 + 1);
    *(_OWORD *)v529 = *(_OWORD *)v528;
    v539 = *((_OWORD *)v528 + 2);
    *((_OWORD *)v529 + 1) = v538;
    v540 = *((_OWORD *)v528 + 3);
    *((_OWORD *)v529 + 2) = v539;
    v541 = *((_OWORD *)v528 + 4);
    *((_OWORD *)v529 + 3) = v540;
    v542 = *((_OWORD *)v528 + 5);
    *((_OWORD *)v529 + 4) = v541;
    v543 = *((_OWORD *)v528 + 6);
    *((_OWORD *)v529 + 5) = v542;
    *((_OWORD *)v529 + 6) = v543;
    sr_pad_update();
    v544 = 0;
    g_18439BB60 = sr_pad_count();
    if ( (int)g_18439BB60 > 0 )
    {
      v545 = 0;
      v546 = &g_184397C20;
      do
      {
        if ( v544 < 32 )
        {
          if ( (unsigned int)sr_pad_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149])) )
          {
            v547 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
            if ( v547 > 31 )
              v547 = 31;
            v548 = sr_pad_controller_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]));
            v549 = 0;
            v550 = 124LL * v547;
            v551 = dword_140404A6C[v550 + 285101115];
            if ( v548 )
            {
              if ( v551 > 0 )
              {
                v552 = &dword_140404A6C[v550 + 285101116];
                do
                {
                  ++v552;
                  ++v549;
                  *((float *)v552 - 1) = (float)(__int16)sr_pad_controller_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]),v549-1) * 0.000030517578;
                }
                while ( v549 < (int)dword_140404A6C[v550 + 285101115] );
              }
              v553 = 0;
              if ( (int)dword_140404A6C[v550 + 285101132] > 0 )
              {
                v554 = &dword_140404A6C[v550 + 285101133];
                do
                {
                  ++v553;
                  *v554++ = (unsigned __int8)sr_pad_controller_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]),v553-1);
                }
                while ( v553 < (int)dword_140404A6C[v550 + 285101132] );
              }
            }
            else
            {
              if ( v551 > 0 )
              {
                v555 = &dword_140404A6C[v550 + 285101116];
                do
                {
                  ++v555;
                  ++v549;
                  *((float *)v555 - 1) = (float)(__int16)sr_pad_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v549-1) * 0.000030517578;
                }
                while ( v549 < (int)dword_140404A6C[v550 + 285101115] );
              }
              v556 = 0;
              if ( (int)dword_140404A6C[v550 + 285101132] > 0 )
              {
                v557 = &dword_140404A6C[v550 + 285101133];
                do
                {
                  ++v556;
                  *v557++ = (unsigned __int8)sr_pad_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v556-1);
                }
                while ( v556 < (int)dword_140404A6C[v550 + 285101132] );
              }
              v558 = 0;
              if ( (int)*v546 > 0 )
              {
                v559 = v546 + 2;
                v560 = v546 + 3;
                do
                {
                  v561 = (unsigned __int8)sr_pad_hat(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v558);
                  memset(v559 - 1,0,4 * sizeof(*v559)); /* native two qword clears */
                  if ( ((v561 - 1) & 0xFFFFFFF5) == 0 && v561 != 11 )
                    *(v559 - 1) = 1;
                  if ( ((v561 - 4) & 0xFFFFFFF5) == 0 && v561 != 14 )
                    *v559 = 1;
                  if ( ((v561 - 8) & 0xFFFFFFFA) == 0 && v561 != 13 )
                    v559[1] = 1;
                  if ( ((v561 - 2) & 0xFFFFFFFA) == 0 && v561 != 7 )
                    v559[2] = 1;
                  ++v558;
                  v560 += 2;
                  v559 += 4;
                }
                while ( v558 < (int)*v546 );
              }
            }
          }
          else if ( (unsigned int)sr_pad_is_controller(v544) )
          {
            v562 = (__int64)(uintptr_t)sr_pad_controller_open(v544);
            *(_QWORD *)&dword_140404A6C[v545 + 285105085] = v562;
            if ( v562 )
            {
              *(_QWORD *)&dword_140404A6C[v545 + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]));
              v563 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              if ( v563 > 31 )
                v563 = 31;
              v564 = (char *)sr_pad_name(v544);
              v565 = 124LL * v563;
              v566 = (char *)&g_184397B40 + v565 * 4 - (_QWORD)v564;
              do
              {
                v567 = *v564;
                v564[(_QWORD)v566 + 356] = *v564;
                ++v564;
              }
              while ( v567 );
              dword_140404A6C[v565 + 285101115] = 6;
              dword_140404A6C[v565 + 285101132] = 16;
              dword_140404A6C[v565 + 285101165] = 0;
              dword_140404A6C[v565 + 285101109] = 1;
            }
          }
          else
          {
            v568 = (__int64)(uintptr_t)sr_pad_open(v544);
            *(_QWORD *)&dword_140404A6C[v545 + 285105149] = v568;
            if ( v568 )
            {
              v569 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              if ( v569 > 31 )
                v569 = 31;
              v570 = (char *)sr_pad_name(v544);
              v571 = 124LL * v569;
              v572 = (char *)&g_184397B40 + v571 * 4 - (_QWORD)v570;
              do
              {
                v573 = *v570;
                v570[(_QWORD)v572 + 356] = *v570;
                ++v570;
              }
              while ( v573 );
              dword_140404A6C[v571 + 285101115] = sr_pad_axes(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101132] = sr_pad_buttons(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101165] = sr_pad_hats(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101109] = 1;
            }
          }
        }
        ++v544;
        v546 += 124;
        v545 += 2;
      }
      while ( v544 < (int)g_18439BB60 );
    }
  }
}

//----- (0000000140056980) ----------------------------------------------------
__int64 sub_140056980()
{
  int v0;
  unsigned int v1;
  signed int v2;
  unsigned int v3;
  unsigned int *v4;
  __int64 v5;
  char *v6;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int *v19;
  unsigned int v20;
  int v21;
  unsigned int *v22;
  __int64 v23;
  unsigned int v24;
  signed int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  __m128i v29;
  __m128i v30;
  unsigned int v31;
  float v32;
  unsigned int v33;
  signed int *v34;
  __int64 v35;
  unsigned int *v36;
  signed int v37;
  signed int v38;
  signed int v39;
  signed int v40;
  unsigned int *v41;
  signed int v42;
  signed int v43;
  int v44;
  signed int v45;
       char *v46;
  float v47;
  int v48;
  int v49;
  int v50;
  unsigned int *v51;
  unsigned int *v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  unsigned int v58;
  __m128i v59;
  int v60;
  int i;
  __int64 v62;
  unsigned int *v63;
  int v64;
  unsigned int *v65;
  _DWORD *v66;
  int v67;
  __int64 v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  bool v73;
  bool v74;
  bool v75;
  bool v76;
  bool v77;
  bool v78;
  int v79;
  unsigned int v80;
  int v81;
  BOOL v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  unsigned int *v89;
       char *v90;
  int v91;
  int v92;
  int v93;
  signed int v94;
  __int64 v95;
  unsigned __int8 v96;
  int v97;
  bool v98;
  __int64 v99;
  char v100;
  bool v101;
  __int64 v102;
  char v103;
  bool v104;
  __int64 v105;
  char v106;
  bool v107;
  __int64 v108;
  char v109;
  bool v110;
  __int64 v111;
  char v112;
  bool v113;
  __int64 v114;
  char v115;
  bool v116;
  __int64 v117;
  char v118;
  bool v119;
  __int64 v120;
  char v121;
  bool v122;
  __int64 v123;
  char v124;
  bool v125;
  int v126;
  unsigned int v127;
  int v128;
  unsigned int v129;
  unsigned int v130;
  __int64 v131;
  int v132;
  int v133;
  unsigned int v134;
  float v135;
  int v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  unsigned int v144;
  int v145;
  float v146;
  float v147;
  unsigned int v148;
  unsigned int v149;
  float v150;
  float v151;
  __int64 v152;
  char v153;
  int j;
  int k;
  unsigned int *v156;
  int v157;
  unsigned int *v158;
  int v159;
  __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  unsigned int v164;
  unsigned int v165;
  __int64 v166;
  __int64 v167;
  signed int v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 m;
  __int64 v172;
  int *v173;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140056980[176];
#define v175 (*(_QWORD (*)[5])(void *)(sr_frame_140056980 + 0)) /* [rsp+0h] */
#define v176 (*(unsigned int (*))(void *)(sr_frame_140056980 + 80)) /* [rsp+50h] */
#define v177 (*(int (*))(void *)(sr_frame_140056980 + 84)) /* [rsp+54h] */
#define v178 (*(int (*))(void *)(sr_frame_140056980 + 88)) /* [rsp+58h] */
#define v179 (*(int (*))(void *)(sr_frame_140056980 + 92)) /* [rsp+5Ch] */
#define v180 (*(int (*))(void *)(sr_frame_140056980 + 96)) /* [rsp+60h] */
#define v181 (*(unsigned int * (*))(void *)(sr_frame_140056980 + 104)) /* [rsp+68h] */
#define v182 (*(int (*))(void *)(sr_frame_140056980 + 112)) /* [rsp+70h] */
#define v183 (*(int (*))(void *)(sr_frame_140056980 + 116)) /* [rsp+74h] */
#define v184 (*(__int64 (*))(void *)(sr_frame_140056980 + 120)) /* [rsp+78h] */
#define v185 (*(int (*))(void *)(sr_frame_140056980 + 128)) /* [rsp+80h] */
#define v186 (*(__int64 (*))(void *)(sr_frame_140056980 + 136)) /* [rsp+88h] */
#define v187 (*(__int64 (*))(void *)(sr_frame_140056980 + 144)) /* [rsp+90h] */
#define v188 (*(int (*))(void *)(sr_frame_140056980 + 152)) /* [rsp+98h] */
#define v189 (*(int (*))(void *)(sr_frame_140056980 + 156)) /* [rsp+9Ch] */
#define v190 (*(int (*))(void *)(sr_frame_140056980 + 160)) /* [rsp+A0h] */
#define v191 (*(int (*))(void *)(sr_frame_140056980 + 164)) /* [rsp+A4h] */
#define v192 (*(__int64 (*))(void *)(sr_frame_140056980 + 168)) /* [rsp+A8h] */

  crt_memset((void *)(uintptr_t)(&g_17CE6F5F8), 0, 0x4000000u);
  v182 = crt_chdir("data");
  v183 = crt_chdir((unsigned int *)&g_183EBFAB0);
  sub_1401979D0(0, 0);
  asset_load_city_sbc_candidate();
  _mm_storeu_si128((__m128i *)(void *)&g_175FD1444, _mm_load_si128((const __m128i *)&xmmword_1402799A0));
  g_175FD1454 = -65536;
  g_1873DE440 = 1102577664;
  g_175FD1458 = -65536;
  sub_140026E70();
  sub_140010110();
  srand(0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC404, "concrete2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC408, "concrete2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  v0 = 0;
  sub_1400EDED0(resting_texture_1, "asphalt2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC418, "asphalt2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  v1 = g_1863AE154;
  v2 = g_1A4CFF8D0;
  v3 = 0;
  g_1A4CFF560 = g_1A4CFF8D0;
  g_1A4CFF8D4 = 0;
  if ( g_1863AE154 )
  {
    v4 = &g_1863AE158;
    do
    {
      if ( *v4 == 1482293252 )
      {
        v5 = (intptr_t)&dword_140404A6C[16LL * (int)v3 + 293512638];
        v6 = (char *)v5;
        do
        {
          v7 = *v6;
          v6[(_QWORD)&g_1A4CFFCF8 + 184LL * v2 - v5] = *v6;
          ++v6;
        }
        while ( v7 );
        sub_1401978F0(0, v5, 1482293252);
        sub_140197630(g_1A4CFF560, *(__int64 *)&g_1863AE140, 0);
        v8 = 46LL * (int)g_1A4CFF560;
        v9 = 2LL * (int)g_1A4CFF560;
        v10 = dword_140404A6C[v8 + 421784755];
        v11 = dword_140404A6C[4 * g_1A4CFF560 + 283827814];
        if ( v10 <= 0 )
          sub_140138590(v11, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
        else
          sub_1400EE0A0(v11, v10, *(_QWORD *)&dword_140404A6C[v8 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
        v12 = dword_140404A6C[v8 + 421784759];
        v13 = dword_140404A6C[2 * v9 + 283827815];
        if ( v12 <= 0 )
          sub_140138590(v13, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
        else
          sub_1400EE0A0(v13, v12, *(_QWORD *)&dword_140404A6C[v8 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
        dword_140404A6C[g_1A4CFF8D4 + 421784475] = g_1A4CFF560;
        v1 = g_1863AE154;
        v2 = g_1A4CFF560 + 1;
        ++g_1A4CFF8D4;
        ++g_1A4CFF560;
      }
      ++v3;
      v4 += 16;
    }
    while ( v3 < v1 );
  }
  sub_1400ED9D0(g_183EBF11C, "map.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400C2DB0(v15, v14, v16);
  sub_140056560();
  v17 = 0;
  do
  {
    v18 = 1024;
    do
    {
      *(_WORD *)(v17 + g_181290050) = -1;
      v17 += 2;
      --v18;
    }
    while ( v18 );
  }
  while ( v17 < 0x200000 );
  g_1A4CF0940 = 0;
  v184 = 0;
  v185 = 0;
  sub_14004DB20(0, (float *)&v184, 0x40u, 8, 0x40u, 4.0);
  v19 = &g_17CE4B61C;
  do
  {
    *(v19 - 9) = 0;
    *v19 = 0;
    v19[9] = 0;
    v19[18] = 0;
    v19[27] = 0;
    v19[36] = 0;
    v19[45] = 0;
    v19[54] = 0;
    v19[63] = 0;
    v19[72] = 0;
    v19[81] = 0;
    v19[90] = 0;
    v19[99] = 0;
    v19[108] = 0;
    v19[117] = 0;
    v19[126] = 0;
    v19[135] = 0;
    v19[144] = 0;
    v19[153] = 0;
    v19[162] = 0;
    v19[171] = 0;
    v19[180] = 0;
    v19[189] = 0;
    v19[198] = 0;
    v19[207] = 0;
    v19[216] = 0;
    v19[225] = 0;
    v19[234] = 0;
    v19[243] = 0;
    v19[252] = 0;
    v19[261] = 0;
    v19[270] = 0;
    v19[279] = 0;
    v19[288] = 0;
    v19[297] = 0;
    v19[306] = 0;
    v19[315] = 0;
    v19[324] = 0;
    v19[333] = 0;
    v19[342] = 0;
    v19[351] = 0;
    v19[360] = 0;
    v19[369] = 0;
    v19[378] = 0;
    v19[387] = 0;
    v19[396] = 0;
    v19[405] = 0;
    v19[414] = 0;
    v19[423] = 0;
    v19[432] = 0;
    v19[441] = 0;
    v19[450] = 0;
    v19[459] = 0;
    v19[468] = 0;
    v19[477] = 0;
    v19[486] = 0;
    v19[495] = 0;
    v19[504] = 0;
    v19[513] = 0;
    v19[522] = 0;
    v19[531] = 0;
    v19[540] = 0;
    v19[549] = 0;
    v19[558] = 0;
    v19 += 576;
  }
  while ( (__int64)v19 < (__int64)&g_17CE6F61C );
  v20 = game_type;
  v21 = 0;
  g_175FD145C = 0;
  g_175FF3464 = 0;
  g_1760B9468 = 0;
  g_1760BF46C = 0;
  g_1760C5470 = 0;
  g_183EC4918 = 0;
  g_183ECA4DC = 0;
  g_183ED00A0 = 0;
  g_183ED5C64 = 0;
  g_183EDB828 = 0;
  g_183EE13EC = 0;
  g_183EE6FB0 = 0;
  g_183EECB74 = 0;
  item_block_region_count = 0;
  g_16B2AAEE4 = 0;
  if ( game_type != 1 )
  {
    if ( (int)g_16E486878 > 0 )
    {
      v22 = &g_16E486880;
      v23 = g_16E486878;
      do
      {
        v24 = g_175FD1444;
        v25 = *(v22 - 1);
        v26 = v22[1];
        v27 = *v22;
        v22 += 3;
        if ( (int)g_175FD1444 > v25 )
          v24 = v25;
        g_175FD1444 = v24;
        v28 = g_175FD1450;
        v29 = _mm_cvtsi32_si128(v25);
        if ( (int)g_175FD1450 < v25 )
          v28 = v25;
        v30 = _mm_cvtsi32_si128(v27);
        g_175FD1450 = v28;
        v31 = g_175FD144C;
        v32 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
        if ( (int)g_175FD144C > v26 )
          v31 = v26;
        g_175FD144C = v31;
        v33 = g_175FD1458;
        if ( (int)g_175FD1458 < v26 )
          v33 = v26;
        g_175FD1458 = v33;
        dword_140404A6C[34 * v21 + 225391230] = v25;
        dword_140404A6C[34 * g_175FD145C + 225391231] = v27 - 1;
        dword_140404A6C[34 * g_175FD145C + 225391232] = v26;
        dword_140404A6C[34 * g_175FD145C + 225391236] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391237] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391238] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391239] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391240] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391241] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391242] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391243] = 0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391233] = v32 * 4.0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391234] = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v30), f32)[0] * 4.0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391235] = (float)v26 * 4.0;
        dword_140404A6C[34 * g_175FD145C + 225391244] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391245] = 0;
        v21 = ++g_175FD145C;
        --v23;
      }
      while ( v23 );
    }
    if ( (int)g_16E48987C > 0 )
    {
      v34 = (signed int *)&g_16E48988C;
      v35 = g_16E48987C;
      v36 = &g_16E489894;
      do
      {
        v37 = v34[1];
        v38 = *v34;
        v39 = *(v34 - 2);
        v40 = *(v34 - 3);
        v175[4] = (uint64)(uintptr_t)(v36);
        sub_1400038E0(v40, v39, v38, v37);
        v36 += 13;
        v34 += 13;
        --v35;
      }
      while ( v35 );
    }
    g_175FD1460 = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628800] = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628801] = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628802] = 32;
    dword_140404A6C[12 * g_1760B9468 + 225628804] = 32;
    dword_140404A6C[12 * g_1760B9468 + 225628803] = 6;
    dword_140404A6C[12 * g_1760B9468 + 225628805] = 24;
    dword_140404A6C[12 * g_1760B9468++ + 225628806] = 24;
    v21 = g_175FD145C;
  }
  v188 = 65537;
  v189 = 65537;
  v190 = 65537;
  v191 = 65537;
  if ( v20 == 1 )
  {
    asset_load_building_sbb_candidate((char *)&g_1AD2C94A0, (     char *)&g_1ABD4ACA0, 0);
    sub_140028BD0();
    sub_140027D00();
    sub_140027D00();
    sub_140027D00();
    sub_140029120();
    sub_140023AC0(
      0,
      36 - g_1AD2C94EC,
      6 - g_1AD2C94F0,
      36 - g_1AD2C94F4,
      g_1AE1C94F8,
      g_1AE1C94FC,
      g_1AE1C9500,
      0,
      0);
    v21 = g_175FD145C;
    v20 = game_type;
  }
  v41 = &g_175EFA090;
  crt_memset((void *)(uintptr_t)(&g_175EFA090), 0, 0x1000u);
  v42 = g_175EEA08C;
  v43 = 0;
  if ( (int)g_175EEA08C > 0 )
  {
    v44 = g_181676080;
    do
    {
      v45 = 0;
      if ( v44 > 0 )
      {
        v46 = (     char *)&g_1812C2080;
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)v43 + 225154441], v46) )
            *v41 = v45;
          ++v45;
          v46 += 3792;
        }
        while ( v45 < v44 );
        v42 = g_175EEA08C;
      }
      ++v43;
      ++v41;
    }
    while ( v43 < v42 );
  }
  v47 = 1.0;
  if ( v20 != 1 )
  {
    v48 = 0;
    if ( (int)g_175FF3464 > 0 )
    {
      do
        sub_140020580(v48++);
      while ( v48 < (int)g_175FF3464 );
      v21 = g_175FD145C;
    }
    v49 = 0;
    if ( v21 > 0 )
    {
      do
      {
        sub_140020130(v49);
        v21 = g_175FD145C;
        ++v49;
      }
      while ( v49 < (int)g_175FD145C );
    }
    v50 = 0;
    if ( v21 > 0 )
    {
      v51 = &g_175FD14D4;
      v52 = &g_175FD1490;
      do
      {
        v53 = *(v52 - 1);
        if ( v53 > 0 )
          *(v52 - 1) = v53 + 1;
        if ( (int)*v52 > 0 )
          ++*v52;
        v54 = v52[1];
        if ( v54 > 0 )
          v52[1] = v54 + 1;
        v55 = v52[2];
        if ( v55 > 0 )
          v52[2] = v55 + 1;
        ++v50;
        v56 = *(v51 - 28) - *(v51 - 16);
        v52 += 34;
        v51[1] = 0;
        *(float *)v51 = (float)v56 * 4.0;
        v57 = *(v51 - 18);
        *((float *)v51 + 2) = (float)(int)(*(v51 - 26) - *(v51 - 15)) * 4.0;
        v58 = *(v51 - 28) + v57;
        v51[4] = 0;
        v59 = _mm_cvtsi32_si128(v58);
        v60 = *(v51 - 17);
        *((float *)v51 + 3) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0] * 4.0;
        *((float *)v51 + 5) = (float)(int)(*(v51 - 26) + v60) * 4.0;
        v51 += 34;
      }
      while ( v50 < (int)g_175FD145C );
    }
    for ( i = 0; i < (int)g_175FF3464; ++i )
      sub_140139740(i);
    sub_140009340();
    v177 = 0;
    if ( (int)g_1726DA088 > 0 )
    {
      v62 = 0;
      v186 = 0;
      v63 = &g_1726DA098;
      do
      {
        v64 = 0;
        v176 = 0;
        v65 = nullptr;
        v66 = v63 + 3073;
        do
        {
          v67 = 0;
          v178 = 0;
          v181 = v65;
          v184 = 8;
          do
          {
            v68 = 0;
            v179 = 0;
            v187 = 0;
            v69 = 0;
            do
            {
              v70 = *(v66 - 3072);
              if ( v70 )
              {
                v71 = (__int64)v65 + v68 + v62;
                v72 = *(v63 - 3);
                v71 *= 2;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458508]) == 0;
                LOWORD(v188) = LOWORD(dword_140404A6C[2 * v71 + 210458508]) != 0;
                v73 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458509]) == 0;
                HIWORD(v188) = v73;
                v74 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458509]) == 0;
                LOWORD(v189) = v74;
                v75 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458510]) == 0;
                HIWORD(v189) = v75;
                v76 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458510]) == 0;
                LOWORD(v190) = v76;
                v77 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458511]) == 0;
                HIWORD(v190) = v77;
                v78 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458511]) == 0;
                LOWORD(v191) = v78;
                HIWORD(v191) = !v101;
                v79 = v67 + 8 * *v63;
                v80 = v64 + 8 * *(v63 - 1);
                v81 = v69 + 8 * *(v63 - 2);
                v180 = v81;
                if ( v70 == (g_14500A70C | 0x80000000) )
                {
                  v82 = sub_1400D5950(v72, v81, v80, v79 - 1) == 0;
                  v83 = sub_1400D5950(v72, v81 + 1, v80, v79);
                  v84 = v82 | 2;
                  if ( v83 )
                    v84 = v82;
                  v85 = v84 | 4;
                  if ( (unsigned int)sub_1400D5950(v72, v180, v80, v79 + 1) )
                    v85 = v84;
                  v86 = sub_1400D5950(v72, v180 - 1, v80, v79);
                  v87 = v85 | 8;
                  if ( v86 )
                    v87 = v85;
                  sub_14000F830(v72, v180, v80, v79, dword_140404A6C[v87 + 19928872] | 0x80000000, &v188);
                  v68 = v187;
                }
                else
                {
                  sub_14000F830(v72, v81, v80, v79, v70, &v188);
                }
                v62 = v186;
                v65 = v181;
                v64 = v176;
                v67 = v178;
                v69 = v179;
              }
              if ( *v66 )
                sub_140016F60(
                  *(v63 - 3),
                  v69 + 8 * *(v63 - 2),
                  v64 + 8 * *(v63 - 1),
                  v67 + 8 * *v63,
                  *v66 & 0xFFFF0000 | dword_140404A6C[(*v66 & 0x3FF) + 225170825]);
              v64 = v176;
              ++v69;
              ++v68;
              v179 = v69;
              ++v66;
              v187 = v68;
            }
            while ( v68 < 8 );
            ++v67;
            v65 += 2;
            v101 = v184-- == 1;
            v178 = v67;
            v181 = v65;
          }
          while ( !v101 );
          v64 = v176 + 1;
          v176 = v64;
        }
        while ( v64 < 8 );
        v62 += 897;
        v186 = v62;
        v63 += 3588;
        ++v177;
      }
      while ( v177 < (int)g_1726DA088 );
    }
    sub_1400E6960();
    v88 = 0;
    v180 = 0;
    if ( (int)g_175EFB090 > 0 )
    {
      v89 = &g_175EFB0E0;
      v181 = &g_175EFB0E0;
      do
      {
        v90 = (     char *)&dword_140404A6C[24 * v88 + 225171851];
        sub_1401978F0(0, (__int64)v90, 1482293250);
        sub_140196D60((char *)&g_1AD2C94A0, *(FILE **)&g_1863AE140, 0);
        sub_140028BD0();
        if ( g_183F7CB60 )
        {
          v91 = strcmp_sr(v90, "bc-base01");
          v92 = strcmp_sr(v90, "cornerstore");
          v93 = 13;
          if ( v92 )
            v93 = 9;
          v94 = 0;
          if ( v91 )
            v94 = v93;
          if ( !strcmp_sr(v90, "bc-base02") )
            v94 = 1;
          v178 = v94;
          if ( !strcmp_sr(v90, "bc-base03") )
          {
            v94 = 2;
            v178 = 2;
          }
        }
        else
        {
          v95 = 0;
          while ( 1 )
          {
            v96 = v90[v95++];
            if ( v96 != sr_mem_140276314[v95 - 1] )
              break;
            if ( v95 == 7 )
            {
              v97 = 0;
              goto LABEL_104;
            }
          }
          v97 = v96 < (unsigned __int8)sr_mem_140276314[v95 - 1] ? -1 : 1;
LABEL_104:
          v98 = v97 != 0;
          v99 = 0;
          v94 = v98 ? 9 : 0;
          while ( 1 )
          {
            v100 = v90[v99++];
            v101 = v100 == sr_mem_14027631c[v99 - 1];
            if ( v100 != sr_mem_14027631c[v99 - 1] )
              break;
            if ( v99 == 7 )
            {
              v101 = v100 == sr_mem_14027631c[6];
              break;
            }
          }
          if ( v101 )
            v94 = 1;
          v102 = 0;
          while ( 1 )
          {
            v103 = v90[v102++];
            v104 = v103 == sr_mem_140276324[v102 - 1];
            if ( v103 != sr_mem_140276324[v102 - 1] )
              break;
            if ( v102 == 7 )
            {
              v104 = v103 == sr_mem_140276324[6];
              break;
            }
          }
          if ( v104 )
            v94 = 2;
          v105 = 0;
          while ( 1 )
          {
            v106 = v90[v105++];
            v107 = v106 == sr_mem_14027632c[v105 - 1];
            if ( v106 != sr_mem_14027632c[v105 - 1] )
              break;
            if ( v105 == 7 )
            {
              v107 = v106 == sr_mem_14027632c[6];
              break;
            }
          }
          if ( v107 )
            v94 = 3;
          v108 = 0;
          while ( 1 )
          {
            v109 = v90[v108++];
            v110 = v109 == sr_mem_140276334[v108 - 1];
            if ( v109 != sr_mem_140276334[v108 - 1] )
              break;
            if ( v108 == 7 )
            {
              v110 = v109 == sr_mem_140276334[6];
              break;
            }
          }
          if ( v110 )
            v94 = 4;
          v111 = 0;
          while ( 1 )
          {
            v112 = v90[v111++];
            v113 = v112 == sr_mem_14027633c[v111 - 1];
            if ( v112 != sr_mem_14027633c[v111 - 1] )
              break;
            if ( v111 == 7 )
            {
              v113 = v112 == sr_mem_14027633c[6];
              break;
            }
          }
          if ( v113 )
            v94 = 5;
          if ( !strcmp_sr(v90, "cardealer") )
            v94 = 11;
          if ( !strcmp_sr(v90, "gunstore") )
            v94 = 14;
          v114 = 0;
          while ( 1 )
          {
            v115 = v90[v114++];
            v116 = v115 == sr_mem_1402739f8[v114 - 1];
            if ( v115 != sr_mem_1402739f8[v114 - 1] )
              break;
            if ( v114 == 7 )
            {
              v116 = v115 == sr_mem_1402739f8[6];
              break;
            }
          }
          if ( v116 )
            v94 = 16;
          v117 = 0;
          while ( 1 )
          {
            v118 = v90[v117++];
            v119 = v118 == sr_mem_140276364[v117 - 1];
            if ( v118 != sr_mem_140276364[v117 - 1] )
              break;
            if ( v117 == 5 )
            {
              v119 = v118 == algn_140276369[-1];
              break;
            }
          }
          if ( v119 )
            v94 = 12;
          v120 = 0;
          while ( 1 )
          {
            v121 = v90[v120++];
            v122 = v121 == sr_mem_14027636c[v120 - 1];
            if ( v121 != sr_mem_14027636c[v120 - 1] )
              break;
            if ( v120 == 6 )
            {
              v122 = v121 == sr_mem_14027636c[5];
              break;
            }
          }
          if ( v122 )
            v94 = 13;
          v123 = 0;
          while ( 1 )
          {
            v124 = v90[v123++];
            v125 = v124 == sr_mem_140276378[v123 - 1];
            if ( v124 != sr_mem_140276378[v123 - 1] )
              break;
            if ( v123 == 8 )
            {
              v125 = v124 == sr_mem_140276378[7];
              break;
            }
          }
          if ( v125 )
            v94 = 10;
          v178 = v94;
        }
        v126 = g_1AD2C94F4;
        v127 = g_1AD2C94F4;
        v128 = g_1AD2C94EC;
        v129 = g_1AD2C94EC;
        v130 = g_1AD2C94F0;
        v177 = g_1AD2C94F0;
        g_1AF0C951C = g_1AD2C94E0 - g_1AD2C94EC;
        g_1AF0C9520 = g_1AD2C94E8;
        v176 = g_1AD2C94F4;
        g_1AF0C9510 = g_1AD2C94EC;
        g_1AF0C9514 = g_1AD2C94F0;
        g_1AF0C9518 = g_1AD2C94F4;
        g_1AF0C9524 = g_1AD2C94E4 - g_1AD2C94F4;
        v131 = v94;
        if ( v94 < 6 )
          dword_140404A6C[5873 * v94 + 283831497] = 1078530011;
        v132 = *(v89 - 2);
        v133 = *(v89 - 1);
        v134 = *v89;
        g_1AF0C981C = xmmword_140278D30;
        *(unsigned int *)&g_1AF0C983C = 1065353216;
        v179 = 0;
        v135 = (float)(v132 - v128) * 4.0;
        v136 = v181[1];
        v137 = (float)(int)(v133 - v130) * 4.0;
        v138 = (float)(int)(v134 - v126) * 4.0;
        g_1AF0C9810 = v135;
        g_1AF0C9814 = v137;
        g_1AF0C9818 = v138;
        *(_OWORD *)&g_1AF0C982C = xmmword_140278D30;
        if ( v136 > 0 )
        {
          v139 = g_1AF0C9824;
          v140 = 0.0;
          v141 = g_1AF0C9820;
          v142 = 0.0;
          v143 = *(float *)&g_1AF0C981C;
          v144 = v126;
          v145 = v179;
          do
          {
            v146 = (float)v128 * 4.0;
            v147 = (float)v126 * 4.0;
            g_1AF0C9810 = (float)((float)(v146 * v143) + v135) + (float)(v147 * v140);
            g_1AF0C9814 = (float)((float)(v146 * v141) + v137) + (float)(v147 * v142);
            g_1AF0C9818 = (float)((float)(v146 * v139) + v138) + (float)(v147 * v47);
            sub_14007B2A0(
              (__int64)(unsigned int *)&g_1AF0C981C,
              (float *)&g_1AF0C9828,
              sr_export_float_lane_container(1070141403));
            v148 = v129;
            v149 = g_1AE1C94FC - v144;
            v144 = v148;
            v129 = v149 - 1;
            sub_140027D00();
            if ( v131 < 6 )
              *(float *)&dword_140404A6C[5873 * v131 + 283831497] = *(float *)&dword_140404A6C[5873 * v131 + 283831497]
                                                                  + 1.570796326795;
            v128 = g_1AD2C94EC;
            ++v145;
            v126 = g_1AD2C94F4;
            v143 = *(float *)&g_1AF0C981C;
            v140 = g_1AF0C9834;
            v141 = g_1AF0C9820;
            v142 = g_1AF0C9838;
            v139 = g_1AF0C9824;
            v47 = g_1AF0C983C;
            v150 = (float)-g_1AD2C94EC * 4.0;
            v136 = v181[1];
            v151 = (float)(-1 - g_1AD2C94F4) * 4.0;
            v135 = (float)((float)(v150 * *(float *)&g_1AF0C981C) + g_1AF0C9810)
                 + (float)(g_1AF0C9834 * v151);
            g_1AF0C9810 = v135;
            v137 = (float)((float)(v150 * g_1AF0C9820) + g_1AF0C9814)
                 + (float)(g_1AF0C9838 * v151);
            g_1AF0C9814 = v137;
            v138 = (float)((float)(v150 * g_1AF0C9824) + g_1AF0C9818)
                 + (float)(g_1AF0C983C * v151);
            g_1AF0C9818 = v138;
          }
          while ( v145 < v136 );
          v134 = *v181;
          v133 = *(v181 - 1);
          v132 = *(v181 - 2);
          v47 = 1.0;
          v94 = v178;
          v130 = v177;
          v176 = v144;
          v0 = 0;
          v127 = v176;
        }
        g_1AE1C9504 = v129;
        g_1AE1C9508 = v130;
        g_1AE1C950C = v127;
        sub_140029120();
        sub_140023AC0(
          0,
          v132 - v129,
          v133 - v177,
          v134 - v176,
          g_1AE1C94F8,
          g_1AE1C94FC,
          g_1AE1C9500,
          v94,
          v136);
        v88 = v180 + 1;
        v89 = v181 + 24;
        v180 = v88;
        v181 += 24;
      }
      while ( v88 < (int)g_175EFB090 );
    }
    v152 = 0;
    while ( 1 )
    {
      v153 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v152++);
      if ( v153 != sr_mem_140274da0[v152 - 1] )
        break;
      if ( v152 == 6 )
      {
        for ( j = 0; j < 2; ++j )
        {
          for ( k = 0; k < 2; ++k )
            sub_140016F60(0, j + 407, 0x11u, k + 367, 2u);
        }
        break;
      }
    }
    v177 = 0;
    if ( (int)g_1726DA088 > 0 )
    {
      v156 = &g_1726DA094;
      do
      {
        v157 = 0;
        v158 = v156 + 2562;
        do
        {
          v159 = 0;
          v160 = 8;
          do
          {
            v161 = 0;
            v162 = 8;
            do
            {
              if ( *v158 )
              {
                sub_1400D4FC0(0, v161 + 8 * *(v156 - 1), v157 + 8 * *v156, v159 + 8 * v156[1], *v158);
                sub_14003FA40(v161 + 8 * *(v156 - 1), v159 + 8 * v156[1], (float)(int)(v157 + 8 * *v156) * 4.0);
              }
              ++v161;
              ++v158;
              --v162;
            }
            while ( v162 );
            ++v159;
            --v160;
          }
          while ( v160 );
          ++v157;
        }
        while ( v157 < 8 );
        v156 += 3588;
        ++v177;
      }
      while ( v177 < (int)g_1726DA088 );
    }
  }
  sub_1401977E0(0);
  sub_1400D12E0();
  v163 = 34LL * (int)g_175FF348C;
  g_16B2A2ED4 = 1098907648;
  g_16B2A2ED8 = 1082130432;
  g_16B2A2EDC = 1098907648;
  *(float *)&v164 = *(float *)&dword_140404A6C[v163 + 225391235] - 24.0;
  g_16B2A2EC8 = *(float *)&dword_140404A6C[v163 + 225391233] + 1480.0;
  *(float *)&v165 = *(float *)&dword_140404A6C[v163 + 225391234] + 1.0;
  g_16B2A2ED0 = v164;
  g_183F79E00 = g_175FBB094;
  *(unsigned int *)&g_16B2A2ECC = v165;
  if ( (int)g_175FBB094 > 0 )
  {
    v166 = 0;
    v167 = g_175FBB094;
    do
    {
      dword_140404A6C[v166 + 284021990] = dword_140404A6C[v166 + 225368459];
      dword_140404A6C[v166 + 284021991] = dword_140404A6C[v166 + 225368460];
      dword_140404A6C[v166 + 284021992] = dword_140404A6C[v166 + 225368461];
      v166 += 3;
      --v167;
    }
    while ( v167 );
  }
  sub_140099DD0(g_1A4CFF7E4, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  v168 = 0;
  v169 = 0;
  v170 = 0;
  do
  {
    if ( dword_140404A6C[v170 + 83194357] && dword_140404A6C[v170 + 83200510] && (unsigned int)v168 <= 0xFFF )
    {
      sub_14000C4C0(v168);
      for ( m = 0; m < 4; ++m )
      {
        if ( v170 <= 28378350 )
        {
          v172 = (int)dword_140404A6C[m + 83200503 + v169];
          dword_140404A6C[m + 83200503 + v169] = -1;
          if ( (unsigned int)v172 <= 0x3FF )
          {
            dword_140404A6C[8969 * v172 + 73991662] = -1;
            sub_1401941F0(0, v172);
            sub_1401941F0(3, v172);
            sub_1401941F0(5, v172);
          }
        }
      }
      dword_140404A6C[v170 + 83200510] = 0;
      if ( v168 == 1008 )
        ++g_18402CC00;
    }
    ++v168;
    v170 += 6930LL;
    v169 += 6930;
  }
  while ( v168 < 4096 );
  /* Rendering recovery: land mask 283830718 with all-zero R16UI discards every
     terrain fragment (prog08:66-67). Fall back to 0xFFFF (keep all), mirroring
     the standalone render-test. */
  {
    unsigned short *sr_m = (unsigned short *)(uintptr_t)g_181290050;
    int sr_zero = 1;
    if (!sr_m)
    {
      sr_m = (unsigned short *)(uintptr_t)sr_path_malloc(0x200000);
      g_181290050 = (unsigned long long)(uintptr_t)sr_m;
    }
    if (sr_m)
    {
      unsigned int sr_i;
      for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i)
      {
        if (sr_m[sr_i]) { sr_zero = 0; break; }
      }
      if (sr_zero)
      {
        for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i) sr_m[sr_i] = 0xFFFFu;
        SR_DEBUG_LOG("land mask 283830718 missing/zero -> 0xFFFF R16UI fallback");
      }
    }
  }
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  glTexImage2D(3553,
    0,
    33332,
    1024,
    1024,
    0,
    36244,
    5123,
    g_181290050);
  v173 = (int *)&g_183EBF988;
  do
    sub_14009DA10(*v173++, v0++);
  while ( v0 < 17 );
  if ( !v183 )
    crt_chdir("..");
  if ( !v182 )
    crt_chdir("..");
  g_175FD1400 = 1;
  return 0; /* legacy result ignored; native returns void */
}
#undef v175
#undef v176
#undef v177
#undef v178
#undef v179
#undef v180
#undef v181
#undef v182
#undef v183
#undef v184
#undef v185
#undef v186
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192

//----- (000000014007A8C0) ----------------------------------------------------
__int64            sub_14007A8C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v8;
  float v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  float v14;

  v8 = (float)a3;
  v9 = (float)a4;
  v10 = (int)(float)((float)(a1 * g_182A7D55C) * (float)(1.0 / (renderer_canvas_width)));
  v11 = (int)(float)((float)(a3 * g_182A7D55C) * (float)(1.0 / (renderer_canvas_width)));
  v12 = (int)(float)((float)(g_182A7D560
                           * (int)(float)((renderer_canvas_height) - (float)(a2 + a4)))
                   * (float)(1.0 / (renderer_canvas_height)));
  v13 = (int)(float)((float)(a4 * g_182A7D560) * (float)(1.0 / (renderer_canvas_height)));
  glViewport(v10, v12, v11, v13);
  glScissor(v10, v12, v11, v13);
  *(float *)&g_1A724E580 = a5 / (float)(a5 * a7);
  g_1A724E584 = 0;
  g_1A724E598 = 0;
  g_1A724E594 = a5 / (float)((float)((float)(v9 / v8) * a7) * a5);
  if ( g_151E46194 )
  {
    *(_OWORD *)&g_1A724E5A8 = xmmword_140278DE0;
    g_1A724E5B8 = a5;
    g_1A724E5BC = 0;
  }
  else
  {
    *(_QWORD *)&g_1A724E5B0 = 0;
    g_1A724E5BC = 0;
    v14 = 1.0 / (float)(a6 - a5);
    g_1A724E5A8 = -(float)((float)(a5 + a6) * v14);
    g_1A724E5AC = -1082130432;
    g_1A724E5B8 = (float)(v14 * a5) * (float)(a6 * -2.0);
  }
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  return sub_14007A0E0(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (000000014007D230) ----------------------------------------------------
__int64            sub_14007D230(float a1, float a2)
{
  /* x arrives in xmm0 (0x14007D247), y in xmm1 (0x14007D23F); Hex-Rays had typed them as integers and lost both */
  unsigned int v3 = sr_text_float_bits(a1);
  unsigned int v4 = sr_text_float_bits(a2);
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  v5 = g_1AD059448;
  if ( (int)g_1AD059448 < 0x10000 )
  {
    v6 = g_1AD05944C;
  }
  else
  {
    sub_14006E0D0(0, 0, 0);
    v5 = 0;
    v6 = 9;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
  }
  v7 = (int)(v6 * v5);
  dword_140404A6C[v7 + 456217209] = v3;
  dword_140404A6C[v7 + 456217210] = v4;
  dword_140404A6C[v7 + 456217211] = 0;
  v8 = g_1AD059448 * g_1AD05944C;
  dword_140404A6C[v8 + 456217212] = g_1AD299460;
  dword_140404A6C[v8 + 456217213] = g_1AD299464;
  result = g_1AD059448 * g_1AD05944C;
  dword_140404A6C[(int)result + 456217214] = *(unsigned int *)&g_1AD299450;
  dword_140404A6C[(int)result + 456217215] = g_1AD299454;
  dword_140404A6C[(int)result + 456217216] = g_1AD299458;
  dword_140404A6C[(int)result + 456217217] = g_1AD29945C;
  ++g_1AD059448;
  return result;
}

//----- (000000014007E010) ----------------------------------------------------
__int64            sub_14007E010(
        unsigned int *a1,
        _DWORD *a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8;
  __int64 v9;
  float *v10;
  int v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E010[16];
#define v34 (*(float (*))(void *)(sr_frame_14007E010 + 0)) /* [rsp+20h] */
#define v35 (*(float (*))(void *)(sr_frame_14007E010 + 4)) /* [rsp+24h] */
#define v36 (*(float (*))(void *)(sr_frame_14007E010 + 8)) /* [rsp+28h] */

  sub_14007B990(a1, a2);
  v10 = (float *)&unk_1402B2CC4;
  *(unsigned int *)&g_1AD299450 = a6;
  v11 = 0;
  g_1AD299454 = a7;
  g_1AD299458 = a8;
  g_1AD29945C = 1065353216;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    v12 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v13 = a5 * *(v10 - 11);
    v35 = v12;
    v36 = v13;
    sub_14007D520((unsigned int *)&v34, v8, v9);
    v14 = ((_BYTE)v11 + 1) & 3;
    v34 = a3 * flt_1402B2C90[3 * v14];
    v35 = a4 * flt_1402B2C90[3 * v14 + 1];
    v36 = a5 * flt_1402B2C90[3 * v14 + 2];
    sub_14007D520((unsigned int *)&v34, v15, v16);
    v17 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v18 = a5 * v10[1];
    v35 = v17;
    v36 = v18;
    sub_14007D520((unsigned int *)&v34, v19, v20);
    v21 = (++v11 & 3) + 4LL;
    v34 = a3 * flt_1402B2C90[3 * v21];
    v35 = a4 * flt_1402B2C90[3 * v21 + 1];
    v36 = a5 * flt_1402B2C90[3 * v21 + 2];
    sub_14007D520((unsigned int *)&v34, v22, v23);
    v24 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v25 = a5 * *(v10 - 11);
    v35 = v24;
    v36 = v25;
    sub_14007D520((unsigned int *)&v34, v26, v27);
    v28 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v29 = a5 * v10[1];
    v35 = v28;
    v36 = v29;
    sub_14007D520((unsigned int *)&v34, v30, v31);
    v10 += 3;
  }
  while ( (__int64)v10 < (__int64)flt_1402B2CF4 );
  sub_14006E0D0(v32, v8, v9);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sub_14007A0E0(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}
#undef v34
#undef v35
#undef v36

//----- (000000014007E2A0) ----------------------------------------------------
__int64            sub_14007E2A0(float *a1, __int64 a2, int a3, float a4, float a5)
{
  signed int v5;
  int v8;
  __int64 v9;
  float v10;
  float *v11;
  __int64 v12;
  float v13;
  double v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  signed int v18;
  __m128i v19;
  __m128 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __m128 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  double v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  __m128 v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  __int64 v53;
  unsigned int *v54;
  __int64 v55;
  char v56;
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
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  bool v74;
  float *v75;
  signed __int64 v76;
  float *v77;
  __int64 v78;
  float v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  float *v84;
  signed __int64 v85;
  float *v86;
  __int64 v87;
  float v88;
  __int64 v89;
  float v90;
  float v91;
  float v92;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E2A0[1680];
#define v94 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 0)) /* [rsp+0h] */
#define v95 (*(float (*))(void *)(sr_frame_14007E2A0 + 32)) /* [rsp+20h] */
#define v96 (*(int (*))(void *)(sr_frame_14007E2A0 + 36)) /* [rsp+24h] */
#define v97 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 40)) /* [rsp+28h] */
#define v98 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 48)) /* [rsp+30h] */
#define v99 (*(double (*))(void *)(sr_frame_14007E2A0 + 56)) /* [rsp+38h] */
#define v100 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 64)) /* [rsp+40h] */
#define v101 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 80)) /* [rsp+50h] */
#define v102 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 96)) /* [rsp+60h] */
#define v103 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 112)) /* [rsp+70h] */
#define v104 (*(_DWORD (*)[2])(void *)(sr_frame_14007E2A0 + 128)) /* [rsp+80h] */
#define v105 (*(char (*))(void *)(sr_frame_14007E2A0 + 136)) /* [rsp+88h] */
#define v106 (*(char (*))(void *)(sr_frame_14007E2A0 + 320)) /* [rsp+140h] */
#define v107 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 1664)) /* [rsp+680h] */

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v8 = 0;
      v9 = 2;
    }
    else if ( a3 == 2 )
    {
      v8 = 0;
      v9 = 1;
    }
    else
    {
      v8 = LODWORD(v95);
      v9 = LODWORD(v95);
    }
  }
  else
  {
    v8 = 1;
    v9 = 2;
  }
  v10 = a4 * 0.5;
  v11 = (float *)&v105;
  v12 = 0;
  v13 = a5;
  v14 = 0.5235987755983333;
  v15 = 3LL * v8;
  v16 = 3LL * (int)v9;
  v17 = 3LL * a3;
  v18 = 7;
  v98 = 7;
  v96 = 7;
  do
  {
    if ( v5 >= 4 )
      v19 = _mm_cvtsi32_si128(v18);
    else
      v19 = _mm_cvtsi32_si128(v5);
    v20 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v19), f32)[0] * 0.5235987755983333, v9, 0.5235987755983333));
    v97 = 8;
    v21 = 0.0;
    v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0];
    SR_VEC_LANES(128, v20, f32)[0] = *(double *)SR_VEC_LANES(128, v20, u64);
    v23 = v22 * v13;
    SR_VEC_LANES(128, v20, f32)[0] = SR_VEC_LANES(128, v20, f32)[0] * v13;
    v24 = -v23;
    v25 = v23 + v10;
    v95 = SR_VEC_LANES(128, v20, f32)[0];
    do
    {
      v26 = *(float *)(a2 + 4 * v17 + 4);
      v27 = *(float *)(a2 + 4 * v17 + 8);
      if ( v12 >= 4 )
      {
        v28 = v24 - v10;
        v29 = v26 * (float)(v24 - v10);
        v30 = v27 * (float)(v24 - v10);
      }
      else
      {
        v25 = v10 + v23;
        v28 = v10 + v23;
        v29 = v26 * (float)(v10 + v23);
        v30 = v27 * (float)(v10 + v23);
      }
      v32 = _mm_castpd_ps(sub_1401F8A50(v21, v9, v14));
      v33 = *(float *)(a2 + 4 * v16 + 8);
      v99 = v95;
      v34 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v32, (__m128d)v32, 1), f64)[0] * v95;
      v35 = *(float *)(a2 + 4 * v17) * v28;
      v36 = *(float *)(a2 + 4 * v17);
      v37 = *(double *)SR_VEC_LANES(128, v32, u64) * v95;
      SR_VEC_LANES(128, v32, f32)[0] = *(float *)(a2 + 4 * v15 + 4) * v34;
      v38 = (float)((float)(*(float *)(a2 + 4 * v16) * v37) + (float)(*(float *)(a2 + 4 * v15) * v34))
          + (float)(v35 + *a1);
      v39 = a1[1] + v29;
      v40 = a1[2];
      *(v11 - 2) = v38;
      *(_QWORD *)&v41 = *(unsigned int *)(a2 + 4 * v16 + 4);
      *(float *)&v41 = (float)(*(float *)&v41 * v37) + SR_VEC_LANES(128, v32, f32)[0];
      SR_VEC_LANES(128, v32, f32)[0] = *(float *)(a2 + 4 * v15 + 8) * v34;
      *(float *)&v41 = *(float *)&v41 + v39;
      v42 = v21 + 0.39269909;
      *(v11 - 1) = *(float *)&v41;
      *v11 = (float)((float)(v33 * v37) + SR_VEC_LANES(128, v32, f32)[0]) + (float)(v40 + v30);
      if ( v12 >= 4 )
      {
        v25 = v23 + v10;
        v43 = v36 * (float)(v24 - v10);
        v44 = v26 * (float)(v24 - v10);
        v45 = v27 * (float)(v24 - v10);
      }
      else
      {
        v43 = v36 * v25;
        v44 = v26 * v25;
        v45 = v27 * v25;
      }
      v46 = v44 + a1[1];
      v47 = v43 + *a1;
      v48 = _mm_castpd_ps(sub_1401F8A50(v42, v31, v41));
      *(_QWORD *)&v14 = *(unsigned int *)(a2 + 4 * v15 + 4);
      v21 = v42 + 0.39269909;
      v49 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v48, (__m128d)v48, 1), f64)[0] * v99;
      v50 = *(double *)SR_VEC_LANES(128, v48, u64) * v99;
      SR_VEC_LANES(128, v48, f32)[0] = *(float *)(a2 + 4 * v16 + 4) * v50;
      v11[1] = (float)((float)(*(float *)(a2 + 4 * v15) * v49) + v47) + (float)(*(float *)(a2 + 4 * v16) * v50);
      *(float *)&v14 = (float)((float)(*(float *)&v14 * v49) + v46) + SR_VEC_LANES(128, v48, f32)[0];
      v51 = *(float *)(a2 + 4 * v15 + 8);
      SR_VEC_LANES(128, v48, i32)[0] = *(_DWORD *)(a2 + 4 * v16 + 8);
      v11[2] = *(float *)&v14;
      v11[3] = (float)((float)(v51 * v49) + (float)(v45 + v40)) + (float)(SR_VEC_LANES(128, v48, f32)[0] * v50);
      v11 += 6;
      --v97;
    }
    while ( v97 );
    ++v5;
    v14 = 0.5235987755983333;
    v18 = v96 - 1;
    v13 = a5;
    ++v12;
    v96 = v18;
  }
  while ( v18 > -1 );
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  v54 = (unsigned int *)&v106;
  v55 = 0;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD299450 = xmmword_140279530;
  g_1AD05944C = 9;
  do
  {
    v56 = 1;
    v57 = v55 + 16;
    v58 = 16;
    do
    {
      sub_14007D520(v54 - 48, v52, v53);
      v59 = v56 & 0xF;
      sub_14007D520(&v104[3 * v59 + 3 * v55], v60, v61);
      sub_14007D520(&v104[3 * v59 + 3 * v55], v62, v63);
      sub_14007D520(&v104[3 * v57 + 3 * v59], 3 * (v57 + v59), v64);
      sub_14007D520(&v104[3 * v57 + 3 * v59], v65, v66);
      sub_14007D520(v54, v67, v68);
      sub_14007D520(v54, v69, v70);
      sub_14007D520(v54 - 48, v71, v72);
      v54 += 3;
      ++v56;
      --v58;
    }
    while ( v58 );
    v74 = v98-- == 1;
    v55 += 16;
  }
  while ( !v74 );
  sub_14006E0D0(v73, v52, v53);
  g_1A724E600 = xmmword_140278D30;
  v75 = (float *)&v100;
  v76 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&v100;
  v77 = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  v78 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v79 = *(v77 - 1);
    v80 = 4;
    v81 = *v77;
    v82 = v77[1];
    v83 = v77[2];
    do
    {
      *v75 = (float)((float)((float)(v79 * *(float *)((char *)v75 + v76 - 16))
                           + (float)(v81 * *(float *)((char *)v75 + v76)))
                   + (float)(v82 * *(float *)((char *)v75 + v76 + 16)))
           + (float)(v83 * *(float *)((char *)v75 + v76 + 32));
      ++v75;
      --v80;
    }
    while ( v80 );
    v77 += 4;
    v76 -= 16LL;
    --v78;
  }
  while ( v78 );
  g_1A724E640 = v100;
  v84 = (float *)&v100;
  v85 = (char *)(unsigned int *)&g_1A724E590 - (char *)&v100;
  v86 = (float *)&g_1A724E644;
  g_1A724E650 = v101;
  v87 = 4;
  g_1A724E660 = v102;
  g_1A724E670 = v103;
  do
  {
    v88 = *(v86 - 1);
    v89 = 4;
    v90 = *v86;
    v91 = v86[1];
    v92 = v86[2];
    do
    {
      *v84 = (float)((float)((float)(v88 * *(float *)((char *)v84 + v85 - 16))
                           + (float)(v90 * *(float *)((char *)v84 + v85)))
                   + (float)(v91 * *(float *)((char *)v84 + v85 + 16)))
           + (float)(v92 * *(float *)((char *)v84 + v85 + 32));
      ++v84;
      --v89;
    }
    while ( v89 );
    v86 += 4;
    v85 -= 16LL;
    --v87;
  }
  while ( v87 );
  g_1A724E6C0 = v100;
  g_1A724E6D0 = v101;
  g_1A724E6E0 = v102;
  g_1A724E6F0 = v103;
  return 0; /* compatibility result discarded by all reviewed callers */
}
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

//----- (000000014007E9D0) ----------------------------------------------------
__int64            sub_14007E9D0(unsigned int *a1, _DWORD *a2, double a3, float a4)
{
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __m128 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  __int64 v19;
  __m128 v20;
  double v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __m128 v30;
  double v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __m128 v35;
  double v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float *v43;
  signed __int64 v44;
  float *v45;
  __int64 v46;
  float v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float *v52;
  signed __int64 v53;
  float *v54;
  __int64 v55;
  float v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E9D0[128];
#define v62 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 0)) /* [rsp+8h] */
#define v63 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 28)) /* [rsp+24h] */
#define v64 (*(unsigned __int64 (*))(void *)(sr_frame_14007E9D0 + 36)) /* [rsp+2Ch] */
#define v65 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 48)) /* [rsp+38h] */
#define v66 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 64)) /* [rsp+48h] */
#define v67 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 80)) /* [rsp+58h] */
#define v68 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 96)) /* [rsp+68h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 112)) /* [rsp+78h] */

  sub_14007B990(a1, a2);
  g_1AD059440 = 2;
  v4 = 0.0;
  *((float *)&v63 + 1) = -a4;
  v5 = 0.0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  g_1AD299450 = xmmword_1402794A0;
  v64 = 0;
  sub_14007D520((unsigned int *)&v63 + 1, v6, v7);
  v8 = *(float *)&a3;
  HIDWORD(v64) = LODWORD(a3);
  sub_14007D520((unsigned int *)&v63 + 1, v9, v10);
  v14 = _mm_castpd_ps(sub_1401F8A50(0.0, v11, a3));
  v15 = 32;
  v16 = 32;
  v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0] * *(float *)&a3;
  v18 = *(double *)SR_VEC_LANES(128, v14, u64) * *(float *)&a3;
  v64 = __PAIR64__(LODWORD(v17), LODWORD(v18));
  do
  {
    sub_14007D520((unsigned int *)&v63 + 1, v12, v13);
    v5 = v5 + 0.19634955;
    v20 = _mm_castpd_ps(sub_1401F8A50(v5, v19, a3));
    v21 = *(double *)SR_VEC_LANES(128, v20, u64);
    SR_VEC_LANES(128, v20, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0] * v8;
    *(float *)&v21 = v21 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v20, u32)[0], LODWORD(v21));
    sub_14007D520((unsigned int *)&v63 + 1, v22, v23);
    --v16;
  }
  while ( v16 );
  *((float *)&v63 + 1) = a4;
  v24 = 0.0;
  v64 = 0;
  sub_14007D520((unsigned int *)&v63 + 1, v12, v13);
  *((float *)&v64 + 1) = *(float *)&a3;
  sub_14007D520((unsigned int *)&v63 + 1, v25, v26);
  v64 = __PAIR64__(LODWORD(v17), LODWORD(v18));
  do
  {
    sub_14007D520((unsigned int *)&v63 + 1, v27, v28);
    v24 = v24 + 0.19634955;
    v30 = _mm_castpd_ps(sub_1401F8A50(v24, v29, a3));
    v31 = *(double *)SR_VEC_LANES(128, v30, u64);
    SR_VEC_LANES(128, v30, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v30, (__m128d)v30, 1), f64)[0] * v8;
    *(float *)&v31 = v31 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v30, u32)[0], LODWORD(v31));
    sub_14007D520((unsigned int *)&v63 + 1, v32, v33);
    --v15;
  }
  while ( v15 );
  v34 = 16;
  do
  {
    *((float *)&v63 + 1) = -a4;
    v35 = _mm_castpd_ps(sub_1401F8A50(v4, v27, a3));
    v36 = *(double *)SR_VEC_LANES(128, v35, u64);
    SR_VEC_LANES(128, v35, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v35, (__m128d)v35, 1), f64)[0] * v8;
    *(float *)&v36 = v36 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v35, u32)[0], LODWORD(v36));
    sub_14007D520((unsigned int *)&v63 + 1, v37, v38);
    *((float *)&v63 + 1) = a4;
    sub_14007D520((unsigned int *)&v63 + 1, v39, v40);
    v4 = v4 + 0.39269909;
    --v34;
  }
  while ( v34 );
  sub_14006E0D0(v41, v27, v42);
  g_1A724E600 = xmmword_140278D30;
  v43 = (float *)&v65;
  v44 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&v65;
  v45 = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  v46 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v47 = *(v45 - 1);
    v48 = 4;
    v49 = *v45;
    v50 = v45[1];
    v51 = v45[2];
    do
    {
      *v43 = (float)((float)((float)(v47 * *(float *)((char *)v43 + v44 - 16))
                           + (float)(v49 * *(float *)((char *)v43 + v44)))
                   + (float)(v50 * *(float *)((char *)v43 + v44 + 16)))
           + (float)(v51 * *(float *)((char *)v43 + v44 + 32));
      ++v43;
      --v48;
    }
    while ( v48 );
    v45 += 4;
    v44 -= 16LL;
    --v46;
  }
  while ( v46 );
  g_1A724E640 = v65;
  v52 = (float *)&v65;
  v53 = (char *)(unsigned int *)&g_1A724E590 - (char *)&v65;
  v54 = (float *)&g_1A724E644;
  g_1A724E650 = v66;
  v55 = 4;
  g_1A724E660 = v67;
  g_1A724E670 = v68;
  do
  {
    v56 = *(v54 - 1);
    v57 = 4;
    v58 = *v54;
    v59 = v54[1];
    v60 = v54[2];
    do
    {
      *v52 = (float)((float)((float)(v56 * *(float *)((char *)v52 + v53 - 16))
                           + (float)(v58 * *(float *)((char *)v52 + v53)))
                   + (float)(v59 * *(float *)((char *)v52 + v53 + 16)))
           + (float)(v60 * *(float *)((char *)v52 + v53 + 32));
      ++v52;
      --v57;
    }
    while ( v57 );
    v54 += 4;
    v53 -= 16LL;
    --v55;
  }
  while ( v55 );
  g_1A724E6C0 = v65;
  g_1A724E6D0 = v66;
  g_1A724E6E0 = v67;
  g_1A724E6F0 = v68;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69

//----- (0000000140081DA0) ----------------------------------------------------
void            sub_140081DA0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7;
  float v9;
  __int64 v10;
  __int64 v11;
  __m128 v12;
  double v13;
  __int64 v14;
  double v15;
  double v16;
  double v17;
  unsigned int v18;
  __int64 v19;
  __m128 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140081DA0[16];
#define v25 (*(unsigned int (*))(void *)(sr_frame_140081DA0 + 0)) /* [rsp+20h] */
#define v26 (*(__int32 (*))(void *)(sr_frame_140081DA0 + 4)) /* [rsp+24h] */
#define v27 (*(int (*))(void *)(sr_frame_140081DA0 + 8)) /* [rsp+28h] */

  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  v9 = 0.0;
  g_1AD299458 = a6;
  g_1AD29945C = a7;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  v12 = _mm_castpd_ps(sub_1401F8A50(0.0, v7, a3));
  v13 = *(float *)&a3;
  v27 = 0;
  v14 = 64;
  v15 = a2;
  v16 = a1;
  v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * *(float *)&a3;
  *(float *)&v18 = *(double *)SR_VEC_LANES(128, v12, u64) * v13 + v16;
  SR_VEC_LANES(128, v12, f32)[0] = v15 - v17;
  v25 = v18;
  v26 = SR_VEC_LANES(128, v12, i32)[0];
  do
  {
    sub_14007D520(&v25, v10, v11);
    v9 = v9 + 0.098174773;
    v20 = _mm_castpd_ps(sub_1401F8A50(v9, v19, v17));
    *(float *)&v21 = *(double *)SR_VEC_LANES(128, v20, u64) * v13 + v16;
    v25 = v21;
    SR_VEC_LANES(128, v20, f32)[0] = v15 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0] * v13;
    v26 = SR_VEC_LANES(128, v20, i32)[0];
    sub_14007D520(&v25, v22, v23);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v24, v10, v11);
}
#undef v25
#undef v26
#undef v27

//----- (0000000140081F20) ----------------------------------------------------
void            sub_140081F20(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __m128 v12;
  double v13;
  __int64 v14;
  double v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __m128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140081F20[16];
#define v25 (*(float (*))(void *)(sr_frame_140081F20 + 0)) /* [rsp+20h] */
#define v26 (*(float (*))(void *)(sr_frame_140081F20 + 4)) /* [rsp+24h] */
#define v27 (*(int (*))(void *)(sr_frame_140081F20 + 8)) /* [rsp+28h] */

  glBindTexture(3553, renderer_white_texture);
  g_1AD29945C = a7;
  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  v8 = 0.0;
  g_1AD299458 = a6;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  v27 = 0;
  v12 = _mm_castpd_ps(sub_1401F8A50(0.0, v9, a3));
  v13 = *(float *)&a3;
  v14 = 64;
  v15 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * *(float *)&a3;
  v16 = *(double *)SR_VEC_LANES(128, v12, u64) * v13 + a1;
  v17 = a2 - v15;
  do
  {
    v25 = a1;
    v26 = a2;
    sub_14007D520((unsigned int *)&v25, v10, v11);
    v25 = v16;
    v26 = v17;
    sub_14007D520((unsigned int *)&v25, v18, v19);
    v8 = v8 + 0.098174773;
    v21 = _mm_castpd_ps(sub_1401F8A50(v8, v20, v15));
    v16 = *(double *)SR_VEC_LANES(128, v21, u64) * v13 + a1;
    v25 = v16;
    v17 = a2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v13;
    v26 = v17;
    sub_14007D520((unsigned int *)&v25, v22, v23);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v24, v10, v11);
}
#undef v25
#undef v26
#undef v27

//----- (0000000140082110) ----------------------------------------------------
__int64            sub_140082110(float a1, float a2, float a3, float a4)
{
  /* Written out from 0x140082110..0x14008240C. Hex-Rays had typed the centre (xmm0, xmm1) and the
     radius (xmm2) as integers and discarded all four sine/cosine pairs (calls at 0x1400821B2,
     0x14008224F, 0x14008230F, 0x140082388: each is followed by movaps xmmN, xmm0 / shufpd / mulsd),
     so every vertex was drawn from undefined values. */
  __m128d v4; // xmm0: sine in the low lane, cosine in the high lane
  double v5;
  double v6;
  double v7;
  float v8;
  float v9; // xmm13_4 / xmm9_4
  float v10; // xmm14_4 / xmm10_4
  float v11;
  float v12;
  __int64 v13;

  glBindTexture(3553, renderer_white_texture);
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  v8 = 0.0;
  g_1AD299450 = xmmword_1402792F0;
  v6 = a2;
  v4 = sub_1401F8A50(0.0, 0, 0.0); /* 0x1400821C7: movaps xmm2, xmm0 */
  v5 = a3;
  v7 = a1;
  v11 = v6 - _mm_cvtsd_f64(_mm_unpackhi_pd(v4, v4)) * v5; /* 0x1400821E7: cvtpd2ps xmm9, xmm1 */
  v12 = _mm_cvtsd_f64(v4) * v5 + v7; /* 0x14008220D: cvtsd2ss xmm10, xmm0 */
  v9 = v11;
  v10 = v12;
  v13 = 64;
  do
  {
    sub_14007D420(a1, a2, 0.0);
    sub_14007D420(v10, v9, 0.0);
    v8 = (double)v8 + 0.0981747704246875;
    v4 = sub_1401F8A50(v8, 0, 0.0); /* 0x140082254: movaps xmm2, xmm0 */
    v9 = v6 - _mm_cvtsd_f64(_mm_unpackhi_pd(v4, v4)) * v5;
    v10 = _mm_cvtsd_f64(v4) * v5 + v7;
    sub_14007D420(v10, v9, 0.0);
    --v13;
  }
  while ( v13 );
  sub_14006E0D0(0, 0, 0);
  glLineWidth(2.0f /* native XMM0 */);
  v8 = 0.0;
  v9 = v11; /* 0x1400822B6: movss xmm9, dword ptr [rsp + 0xd8] */
  v10 = v12;
  g_1AD299450 = xmmword_140279490;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  v13 = 64;
  do
  {
    sub_14007D420(v10, v9, 0.0);
    v8 = (double)v8 + 0.0981747704246875;
    v4 = sub_1401F8A50(v8, 0, 0.0); /* 0x140082314: movaps xmm2, xmm0 */
    v9 = v6 - _mm_cvtsd_f64(_mm_unpackhi_pd(v4, v4)) * v5;
    v10 = _mm_cvtsd_f64(v4) * v5 + v7;
    sub_14007D420(v10, v9, 0.0);
    --v13;
  }
  while ( v13 );
  g_1AD299450 = xmmword_1402796B0;
  sub_14007D420(a1, a2, 0.0);
  v4 = sub_1401F8A50(a4, 0, 0.0); /* 0x14008238D: movaps xmm1, xmm0 */
  v9 = v6 - _mm_cvtsd_f64(_mm_unpackhi_pd(v4, v4)) * v5;
  v10 = _mm_cvtsd_f64(v4) * v5 + v7;
  sub_14007D420(v10, v9, 0.0);
  sub_14006E0D0(0, 0, 0);
  return (*(__int64 (**)(float))(unsigned int *)&glLineWidth)(1.0f /* native XMM0 */);
}

//----- (0000000140088000) ----------------------------------------------------
void            sub_140088000(
        float a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  float v8 = a2; // xmm1_4: y (0x140088044 movaps xmm9, xmm1); Hex-Rays had lost it
  double v9 = sr_export_float_lane_container(sr_text_float_bits(a3)); // xmm2_8: the length (0x140088028), as float bits
  float v11;
  __int64 v12;
  __m128 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140088000[16];
#define v20 (*(unsigned int (*))(void *)(sr_frame_140088000 + 0)) /* [rsp+20h] */
#define v21 (*(float (*))(void *)(sr_frame_140088000 + 4)) /* [rsp+24h] */
#define v22 (*(int (*))(void *)(sr_frame_140088000 + 8)) /* [rsp+28h] */

  *(unsigned int *)&g_1AD299450 = a5;
  v11 = v8;
  g_1AD299454 = a6;
  v21 = v8;
  v22 = 0;
  g_1AD299458 = a7;
  g_1AD29945C = a8;
  v20 = LODWORD(a1);
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sub_14007D520(&v20, 0, 0);
  v13 = _mm_castpd_ps(sub_1401F8A50(a4, 0, 0.0)); /* 0x1400880B0: only xmm0 = (double)a4 is an argument */
  *(float *)&v14 = *(double *)SR_VEC_LANES(128, v13, u64) * *(float *)&v9 + a1;
  v21 = v11 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v13, (__m128d)v13, 1), f64)[0] * *(float *)&v9;
  v20 = v14;
  sub_14007D520(&v20, v15, v16);
  sub_14006E0D0(v18, v17, v19);
}
#undef v20
#undef v21
#undef v22

//----- (00000001400891B0) ----------------------------------------------------
void            sub_1400891B0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        float a8)
{
  __int64 v10;
  __int64 v11;
  signed int v12;
  signed int v14;
  double v15;
  double v16;
  double v17;
  __m128i v18;
  float v19;
  __int64 v20;
  __m128 v21;
  double v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __m128i v27;
  float v28;
  __m128 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400891B0[16];
#define v34 (*(unsigned int (*))(void *)(sr_frame_1400891B0 + 0)) /* [rsp+20h] */
#define v35 (*(__int32 (*))(void *)(sr_frame_1400891B0 + 4)) /* [rsp+24h] */
#define v36 (*(int (*))(void *)(sr_frame_1400891B0 + 8)) /* [rsp+28h] */

  glBindTexture(3553, renderer_white_texture);
  v12 = 0;
  v14 = 63;
  v15 = *(float *)&a3;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  g_1AD299458 = a6;
  g_1AD29945C = a7;
  v36 = 0;
  v16 = a1;
  v17 = a2;
  do
  {
    if ( v12 >= 32 )
      v18 = _mm_cvtsi32_si128(v14 + 1);
    else
      v18 = _mm_cvtsi32_si128(v12);
    v34 = LODWORD(a1);
    v35 = LODWORD(a2);
    v19 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v18), f32)[0] * 0.25);
    sub_14007D520(&v34, v10, v11);
    v21 = _mm_castpd_ps(sub_1401F8A50(a8, v20, a3));
    v22 = fmaxf(v19, 1.0);
    *(float *)&v23 = *(double *)SR_VEC_LANES(128, v21, u64) * v15 * v22 + v16;
    SR_VEC_LANES(128, v21, f32)[0] = v17 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v15 * v22;
    v34 = v23;
    v35 = SR_VEC_LANES(128, v21, i32)[0];
    sub_14007D520(&v34, v24, v25);
    a8 = a8 + 0.098174773;
    if ( ++v12 >= 32 )
      v27 = _mm_cvtsi32_si128(v14);
    else
      v27 = _mm_cvtsi32_si128(v12);
    v28 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v27), f32)[0] * 0.25);
    v29 = _mm_castpd_ps(sub_1401F8A50(a8, v26, v22));
    a3 = fmaxf(v28, 1.0);
    *(float *)&v30 = *(double *)SR_VEC_LANES(128, v29, u64) * v15 * a3 + v16;
    SR_VEC_LANES(128, v29, f32)[0] = v17 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v29, (__m128d)v29, 1), f64)[0] * v15 * a3;
    v34 = v30;
    v35 = SR_VEC_LANES(128, v29, i32)[0];
    sub_14007D520(&v34, v31, v32);
    --v14;
  }
  while ( v14 > -1 );
  sub_14006E0D0(v33, v10, v11);
}
#undef v34
#undef v35
#undef v36

//----- (000000014008D280) ----------------------------------------------------
void            sub_14008D280(float *a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  /* Written out from the assembly (0x14008D280..0x14008D55A): the box from a1 to a1 + (a2, a3, a4) in colour
     (a5, a6, a7, 1); the comment on each call is its address. Hex-Rays had typed the corner and the sizes as
     integers and lost every vertex after the first. */
  *(float *)&g_1AD299450 = a5;
  *(float *)&g_1AD299454 = a6;
  *(float *)&g_1AD299458 = a7;
  g_1AD29945C = 1065353216;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D312 */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D328 */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D33E */
  sub_14007D420(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D357 */
  sub_14007D420(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D370 */
  sub_14007D420(a1[0], a1[1], a4 + a1[2]); /* 0x14008D386 */
  sub_14007D420(a1[0], a1[1], a4 + a1[2]); /* 0x14008D39C */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D3AF */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D3C2 */
  sub_14007D420(a1[0], a3 + a1[1], a1[2]); /* 0x14008D3D9 */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D3EF */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D409 */
  sub_14007D420(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D422 */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D43F */
  sub_14007D420(a1[0], a1[1], a4 + a1[2]); /* 0x14008D455 */
  sub_14007D420(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D46F */
  sub_14007D420(a1[0], a3 + a1[1], a1[2]); /* 0x14008D486 */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D4A0 */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D4BA */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D4D7 */
  sub_14007D420(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D4F4 */
  sub_14007D420(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D50E */
  sub_14007D420(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D528 */
  sub_14007D420(a1[0], a3 + a1[1], a1[2]); /* 0x14008D540 */
  sub_14006E0D0(0, 0, 0);
}

//----- (000000014008D560) ----------------------------------------------------
void            sub_14008D560(float *a1, float a2, float a3, float a4, float a5)
{
  /* Written out from the assembly (0x14008D560..0x14008D7FB): the cube from a1 to a1 + a2 on every axis in
     colour (a3, a4, a5, 1); the comment on each call is its address. Hex-Rays had lost a3 (xmm2, stored at
     0x14008D56F), typed the corner and size as integers and lost every vertex after the first. */
  *(float *)&g_1AD299450 = a3;
  g_1AD29945C = 1065353216;
  *(float *)&g_1AD299454 = a4;
  *(float *)&g_1AD299458 = a5;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D5CB */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D5E1 */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D5F7 */
  sub_14007D420(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D610 */
  sub_14007D420(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D629 */
  sub_14007D420(a1[0], a1[1], a2 + a1[2]); /* 0x14008D63F */
  sub_14007D420(a1[0], a1[1], a2 + a1[2]); /* 0x14008D655 */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D668 */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14008D67B */
  sub_14007D420(a1[0], a2 + a1[1], a1[2]); /* 0x14008D691 */
  sub_14007D420(a2 + a1[0], a1[1], a1[2]); /* 0x14008D6A7 */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D6C0 */
  sub_14007D420(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D6D9 */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D6F5 */
  sub_14007D420(a1[0], a1[1], a2 + a1[2]); /* 0x14008D70B */
  sub_14007D420(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D724 */
  sub_14007D420(a1[0], a2 + a1[1], a1[2]); /* 0x14008D73A */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D753 */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D76C */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D788 */
  sub_14007D420(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7A4 */
  sub_14007D420(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7BD */
  sub_14007D420(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7D6 */
  sub_14007D420(a1[0], a2 + a1[1], a1[2]); /* 0x14008D7EC */
  sub_14006E0D0(0, 0, 0);
}

//----- (000000014008D800) ----------------------------------------------------
__int64 sub_14008D800()
{
  int v0;
  int v1;
  float v2;
  float v3;
  float v4;
  float v5;
  int v6;
  int v7;
  int v8;
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
  int n;
  __int64 v24;
  __int64 v25;
  int ii;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int j;
  __int64 v39;
  __int64 v40;
  int k;
  __int64 v42;
  __int64 v43;
  int m;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  signed int v57;
  __int64 v58;
  int v59;
  unsigned int *v60;
  float v61;
  float v62;
  __int64 v63;
  __int64 v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  __int64 v68;
  unsigned int v69;
  float v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int *v77;
  double v78;
  float v79;
  float v80;
  int v81;
  unsigned int *v82;
  __int128 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  int v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  unsigned int v97;
  float v98;
  __int64 v99;
  __int64 v100;
  float v101;
  float v102;
  signed int v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  __int64 v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  float v116;
  signed int v117;
  float v118;
  float v119;
  __int64 v120;
  __int64 v121;
  int *v122;
  float v123;
  float v124;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008D800[224];
#define v126 (*(_DWORD (*)[10])(void *)(sr_frame_14008D800 + 8)) /* [rsp+0h] */
#define v127 (*(float (*))(void *)(sr_frame_14008D800 + 72)) /* [rsp+40h] */
#define v128 (*(float (*))(void *)(sr_frame_14008D800 + 76)) /* [rsp+44h] */
#define v129 (*(float (*))(void *)(sr_frame_14008D800 + 80)) /* [rsp+48h] */
#define v130 (*(float (*))(void *)(sr_frame_14008D800 + 88)) /* [rsp+50h] */
#define v131 (*(float (*))(void *)(sr_frame_14008D800 + 96)) /* [rsp+58h] */
#define v132 (*(float (*))(void *)(sr_frame_14008D800 + 100)) /* [rsp+5Ch] */
#define v133 (*(float (*))(void *)(sr_frame_14008D800 + 104)) /* [rsp+60h] */
#define v134 (*(float (*))(void *)(sr_frame_14008D800 + 112)) /* [rsp+68h] */
#define v135 (*(float (*))(void *)(sr_frame_14008D800 + 116)) /* [rsp+6Ch] */
#define v136 (*(float (*))(void *)(sr_frame_14008D800 + 120)) /* [rsp+70h] */
#define v137 (*(float (*))(void *)(sr_frame_14008D800 + 124)) /* [rsp+74h] */
#define v138 (*(float (*))(void *)(sr_frame_14008D800 + 128)) /* [rsp+78h] */
#define v139 (*(float (*))(void *)(sr_frame_14008D800 + 132)) /* [rsp+7Ch] */
#define v140 (*(float (*))(void *)(sr_frame_14008D800 + 136)) /* [rsp+80h] */
#define v141 (*(unsigned int (*))(void *)(sr_frame_14008D800 + 140)) /* [rsp+84h] */
#define v142 (*(unsigned int (*)[4])(void *)(sr_frame_14008D800 + 144)) /* [rsp+88h] */
#define v143 (*(unsigned int (*)[4])(void *)(sr_frame_14008D800 + 160)) /* [rsp+98h] */
#define v144 (*(__int128 (*))(void *)(sr_frame_14008D800 + 176)) /* [rsp+A8h] */
#define v145 (*(__int128 (*))(void *)(sr_frame_14008D800 + 192)) /* [rsp+B8h] */
#define v146 (*(float (*))(void *)(sr_frame_14008D800 + 208)) /* [rsp+C8h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_14008D800 + 216)) /* [rsp+D0h] */

  v0 = 0;
  if ( *(float *)&g_189F0EEE8 == 0.0 )
  {
    v3 = 0.0;
    v2 = 256.0;
    if ( *(float *)&g_189F0EEF0 == 0.0 )
    {
      v1 = 1;
      v4 = 0.0;
      v5 = 256.0;
    }
    else
    {
      v1 = 2;
      v4 = 256.0;
      v5 = 0.0;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0.0;
    v3 = 256.0;
    v4 = 256.0;
    v5 = 0.0;
  }
  v6 = (int)(float)(g_189F0EEDC * 0.25);
  v7 = (int)(float)(g_189F0EEE4 * 0.25);
  v8 = (int)(float)(g_189F0EEE0 * 0.25);
  glEnable(3042);
  glDisable(2884);
  glDepthMask(0);
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = xmmword_140279420;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  v127 = g_189F0EEDC - v2;
  g_1AD05944C = 9;
  v128 = g_189F0EEE0 + v4;
  v129 = (float)(g_189F0EEE4 - v3) + v5;
  sub_14007D520((unsigned int *)&v127, v9, v10);
  v127 = g_189F0EEDC + v2;
  v128 = g_189F0EEE0 + v4;
  v129 = (float)(g_189F0EEE4 + v3) + v5;
  sub_14007D520((unsigned int *)&v127, v11, v12);
  v127 = g_189F0EEDC + v2;
  v128 = g_189F0EEE0 - v4;
  v129 = (float)(g_189F0EEE4 + v3) - v5;
  sub_14007D520((unsigned int *)&v127, v13, v14);
  v127 = g_189F0EEDC - v2;
  v128 = g_189F0EEE0 - v4;
  v129 = (float)(g_189F0EEE4 - v3) - v5;
  sub_14007D520((unsigned int *)&v127, v15, v16);
  sub_14006E0D0(v18, v17, v19);
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v127 = 0.0;
      g_1AD299450 = xmmword_1402796A0;
      v128 = g_189F0EEE0;
      v129 = g_189F0EEE4 - 256.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v128 = g_189F0EEE0;
      v129 = g_189F0EEE4 + 256.0;
      sub_14007D520((unsigned int *)&v127, v29, v30);
      for ( i = v6 - 64; i < v6 + 64; ++i )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (i & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (i & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)i )
          g_1AD299450 = xmmword_1402796A0;
        v129 = g_189F0EEE4 - 256.0;
        v127 = (float)i * 4.0;
        v128 = g_189F0EEE0;
        sub_14007D520((unsigned int *)&v127, v31, v32);
        v128 = g_189F0EEE0;
        v129 = g_189F0EEE4 + 256.0;
        sub_14007D520((unsigned int *)&v127, v34, v35);
      }
      v129 = 0.0;
      g_1AD299450 = xmmword_1402796A0;
      v128 = g_189F0EEE0;
      v127 = g_189F0EEDC - 256.0;
      sub_14007D520((unsigned int *)&v127, v31, v32);
      v127 = g_189F0EEDC + 256.0;
      v128 = g_189F0EEE0;
      sub_14007D520((unsigned int *)&v127, v36, v37);
      for ( j = v7 - 64; j < v7 + 64; ++j )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (j & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (j & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)j )
          g_1AD299450 = xmmword_1402796A0;
        v127 = g_189F0EEDC - 256.0;
        v128 = g_189F0EEE0;
        v129 = (float)j * 4.0;
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v127 = g_189F0EEDC + 256.0;
        v128 = g_189F0EEE0;
        sub_14007D520((unsigned int *)&v127, v39, v40);
      }
    }
    else
    {
      for ( k = v6 - 64; k < v6 + 64; ++k )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (k & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (k & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)k )
          g_1AD299450 = xmmword_1402796A0;
        v128 = g_189F0EEE0 - 256.0;
        v127 = (float)k * 4.0;
        v129 = g_189F0EEE4;
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v128 = g_189F0EEE0 + 256.0;
        v129 = g_189F0EEE4;
        sub_14007D520((unsigned int *)&v127, v42, v43);
      }
      for ( m = v8 - 64; m < v8 + 64; ++m )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (m & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (m & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)m )
          g_1AD299450 = xmmword_1402796A0;
        v127 = g_189F0EEDC - 256.0;
        v129 = g_189F0EEE4;
        v128 = (float)m * 4.0;
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v127 = g_189F0EEDC + 256.0;
        v129 = g_189F0EEE4;
        sub_14007D520((unsigned int *)&v127, v45, v46);
      }
    }
  }
  else
  {
    for ( n = v8 - 64; n < v8 + 64; ++n )
    {
      g_1AD299450 = xmmword_140279320;
      if ( (n & 3) == 0 )
        g_1AD299450 = xmmword_140279340;
      if ( (n & 7) == 0 )
        g_1AD299450 = xmmword_140279430;
      if ( !(_BYTE)n )
        g_1AD299450 = xmmword_1402796A0;
      v127 = g_189F0EEDC;
      v129 = g_189F0EEE4 - 256.0;
      v128 = (float)n * 4.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v127 = g_189F0EEDC;
      v129 = g_189F0EEE4 + 256.0;
      sub_14007D520((unsigned int *)&v127, v24, v25);
    }
    for ( ii = v7 - 64; ii < v7 + 64; ++ii )
    {
      g_1AD299450 = xmmword_140279320;
      if ( (ii & 3) == 0 )
        g_1AD299450 = xmmword_140279340;
      if ( (ii & 7) == 0 )
        g_1AD299450 = xmmword_140279430;
      if ( !(_BYTE)ii )
        g_1AD299450 = xmmword_1402796A0;
      v127 = g_189F0EEDC;
      v128 = g_189F0EEE0 - 256.0;
      v129 = (float)ii * 4.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v127 = g_189F0EEDC;
      v128 = g_189F0EEE0 + 256.0;
      sub_14007D520((unsigned int *)&v127, v27, v28);
    }
  }
  sub_14006E0D0(v21, v20, v22);
  if ( g_189F0EEA4 )
    goto LABEL_81;
  v127 = (float)(int)g_189F0EEF4 * 4.0;
  v128 = (float)(int)g_189F0EEF8 * 4.0;
  v129 = (float)(int)g_189F0EEFC * 4.0;
  /* 0x14008E0C1: size xmm7 = 4.0 (0x14008DA75), colour xmm6 = 1.0 (0x14008E058) */
  sub_14008D560(&v127, 4.0f, 1.0f, 1.0f, 1.0f);
  v51 = 0;
  v52 = 22LL * (int)g_189F0EF4C;
  v53 = 0;
  v54 = dword_140404A6C[v52 + 225368670] - dword_140404A6C[v52 + 225368674];
  v55 = dword_140404A6C[v52 + 225368669] - dword_140404A6C[v52 + 225368672];
  if ( g_189F0EF50 == 1 )
    v51 = (unsigned int)(v54 - 1);
  if ( g_189F0EF50 == 2 )
  {
    v51 = v55 - 1;
    v53 = v54 - 1;
  }
  else if ( g_189F0EF50 == 3 )
  {
    v51 = 0;
    v53 = v55 - 1;
  }
  else if ( (int)g_189F0EF50 <= 0 )
  {
    goto LABEL_68;
  }
  v50 = g_189F0EF50;
  do
  {
    v56 = v55;
    v55 = v54;
    v54 = v56;
    --v50;
  }
  while ( v50 );
LABEL_68:
  v57 = g_189F0EEF8 - dword_140404A6C[v52 + 225368673];
  /* 0x14008E171: cvtdq2ps, a signed conversion (the C converted the unsigned difference) */
  v127 = (float)(int)(g_189F0EEF4 - (unsigned int)v51) * 4.0;
  v128 = (float)v57 * 4.0;
  v129 = (float)(int)(g_189F0EEFC - v53) * 4.0;
  /* 0x14008E1CE: sizes ecx (v55) * 4 (0x14008E14F), dword [r11+r15+7B34BA8h] * 4 (0x14008E142), edx (v54) * 4
     (0x14008E158); colour 1, 1, xmm11 = 0 (0x14008D863) */
  sub_14008D280(
    &v127,
    (float)(int)v55 * 4.0f,
    (float)(int)dword_140404A6C[v52 + 225368671] * 4.0f,
    (float)(int)v54 * 4.0f,
    1.0f,
    1.0f,
    0.0f);
  if ( !g_189F0EEA4 )
  {
    v59 = 0;
    if ( (int)g_175EFB090 > 0 )
    {
      v60 = &g_175EFB0EC;
      while ( 1 )
      {
        v61 = (float)(int)*(v60 - 4);
        v127 = (float)(int)*(v60 - 5) * 4.0;
        v62 = (float)(int)*(v60 - 3);
        v128 = v61 * 4.0;
        v129 = v62 * 4.0;
        /* 0x14008E257: sizes xmm7 = 4.0 (0x14008DA75); colour 1, xmm11 = 0 (0x14008D863), 1 */
        sub_14008D280(&v127, 4.0f, 4.0f, 4.0f, 1.0f, 0.0f, 1.0f);
        v64 = *v60;
        v65 = *(v60 - 2);
        v66 = *(v60 - 1);
        v67 = v64 - 1;
        if ( v65 == 2 )
          break;
        v68 = v67;
        if ( v65 != 1 )
          v68 = 0;
        if ( v65 == 3 )
        {
          v68 = 0;
          v67 = v66 - 1;
LABEL_78:
          v63 = *(v60 - 2);
          do
          {
            v69 = v66;
            v66 = v64;
            v64 = v69;
            --v63;
          }
          while ( v63 );
          goto LABEL_80;
        }
        v67 = 0;
        if ( v65 > 0 )
          goto LABEL_78;
LABEL_80:
        v70 = (float)(int)(*(v60 - 5) - v68);
        v71 = *(v60 - 3) - v67;
        v128 = (float)(int)*(v60 - 4) * 4.0;
        v127 = v70 * 4.0;
        v129 = (float)v71 * 4.0;
        /* 0x14008E325: sizes ecx (v66) * 4 (0x14008E2DA), [rbx+4] * 4 (0x14008E2B7), edx (v64) * 4 (0x14008E2ED);
           colour xmm6 = 1.0 */
        sub_14008D280(&v127, (float)(int)v66 * 4.0f, (float)(int)v60[1] * 4.0f, (float)(int)v64 * 4.0f, 1.0f, 1.0f, 1.0f);
        ++v59;
        v60 += 24;
        if ( v59 >= (int)g_175EFB090 )
          goto LABEL_81;
      }
      v68 = v66 - 1;
      goto LABEL_78;
    }
    goto LABEL_120;
  }
LABEL_81:
  if ( g_189F0EEA4 == 1 )
  {
    v72 = g_189F0EF20;
    v47 = g_189F0EF2C;
    if ( (int)g_189F0EF20 > (int)g_189F0EF2C )
      goto LABEL_120;
    v48 = g_189F0EF30;
    v73 = g_189F0EF28;
    do
    {
      v74 = g_189F0EF24;
      if ( (int)g_189F0EF24 <= (int)v48 )
      {
        do
        {
          v75 = g_189F0EF1C;
          if ( (int)g_189F0EF1C <= v73 )
          {
            v128 = (float)((float)v72 * 4.0) - 0.125;
            v129 = (float)((float)v74 * 4.0) - 0.125;
            do
            {
              v127 = (float)((float)v75 * 4.0) - 0.125;
              /* 0x14008E3FB: size xmm9 = 4.25 (0x14008E34C), colour xmm6 = 1.0 */
              sub_14008D560(&v127, 4.25f, 1.0f, 1.0f, 1.0f);
              v73 = g_189F0EF28;
              ++v75;
            }
            while ( v75 <= (int)g_189F0EF28 );
            v48 = g_189F0EF30;
          }
          ++v74;
        }
        while ( v74 <= (int)v48 );
        v47 = g_189F0EF2C;
      }
      ++v72;
    }
    while ( v72 <= (int)v47 );
  }
  if ( g_189F0EEA4 == 3 )
  {
    v127 = (float)((float)(int)g_189F0EEF4 * 4.0) - 0.125;
    v128 = (float)((float)(int)g_189F0EEF8 * 4.0) - 0.125;
    v129 = (float)((float)(int)g_189F0EEFC * 4.0) - 0.125;
    /* 0x14008E49C: size xmm9 = 4.25 (0x14008E34C), colour xmm6 = 1.0 */
    sub_14008D560(&v127, 4.25f, 1.0f, 1.0f, 1.0f);
    v76 = 0;
    if ( (int)g_1B4277C40 > 0 )
    {
      v77 = &g_1B4277C4C;
      do
      {
        v126[8] = 1065353216;
        glVertexAttrib4f(2,0x1.8000000000000p+0f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
        sub_140125670(&dword_140404A6C[4 * v76 + 486132854], 0.5, 2);
        *(_QWORD *)&v78 = v77[1];
        v146 = 1.0;
        v144 = xmmword_140278D30;
        v145 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v144, (float *)&v144 + 3, v78);
        v79 = *((float *)v77 - 1) - *((float *)&v145 + 3);
        v127 = *((float *)v77 - 2) - *((float *)&v145 + 2);
        v80 = *(float *)v77;
        v128 = v79;
        v129 = v80 - v146;
        sub_140125670((unsigned int *)&v127, 0.5, 2);
        ++v76;
        v77 += 4;
      }
      while ( v76 < (int)g_1B4277C40 );
    }
  }
  if ( g_189F0EEA4 == 2 )
  {
    v81 = 0;
    g_1AD299450 = xmmword_1402796D0;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    if ( (int)g_16E48987C > 0 )
    {
      v82 = &g_16E48988C;
      do
      {
        if ( v81 == g_189F0EF5C )
          v83 = xmmword_140279700;
        else
          v83 = xmmword_1402796D0;
        v84 = (int)*(v82 - 2);
        g_1AD299450 = v83;
        v85 = dword_140404A6C[3 * v84 + 193070982];
        v86 = dword_140404A6C[3 * v84 + 193070980];
        v87 = 3LL * (int)*(v82 - 3);
        v88 = dword_140404A6C[3 * *(v82 - 3) + 193070982];
        v89 = dword_140404A6C[3 * *(v82 - 3) + 193070980];
        v90 = (float)(v88 - v85);
        v91 = (float)(v86 - v89);
        v92 = fsqrt((float)(v91 * v91) + (float)(v90 * v90));
        if ( v92 == 0.0 )
        {
          v135 = 0.0;
          v94 = 0.0;
          v93 = 0.0;
        }
        else
        {
          v93 = (float)(1.0 / v92) * v91;
          v94 = (float)(1.0 / v92) * v90;
          v135 = v94;
        }
        v95 = (float)(int)dword_140404A6C[v87 + 193070981];
        v136 = (float)v86 * 4.0;
        *(float *)v143 = v136;
        v96 = (float)v89 * 4.0;
        *(float *)&v97 = (float)(v95 * 4.0) + 0.25;
        v98 = (float)v88 * 4.0;
        v137 = (float)((float)(int)dword_140404A6C[3 * v84 + 193070981] * 4.0) + 0.25;
        *(float *)&v143[1] = v137;
        v134 = v93;
        *(float *)v142 = v96;
        v141 = v97;
        v138 = (float)(int)v85 * 4.0;
        *(float *)&v143[2] = v138;
        v142[1] = v97;
        *(float *)&v142[2] = v98;
        sub_14007D520(v142, v87, v85);
        sub_14007D520(v143, v99, v100);
        v101 = v94 + v94;
        v128 = *(float *)&v97;
        v132 = v137;
        v102 = v93 + v93;
        v103 = 0;
        v104 = v96 - (float)(v94 + v94);
        v105 = v138 - (float)(v93 + v93);
        v106 = v98 - (float)(v93 + v93);
        v139 = v136 - (float)(v94 + v94);
        v127 = v104;
        v131 = v139;
        v140 = v105;
        v129 = v106;
        v133 = v105;
        if ( (int)*v82 > 0 )
        {
          v107 = v136 - (float)(v94 + v94);
          v130 = v93;
          v108 = v93 * 4.0;
          v109 = v94 * 4.0;
          v110 = v105;
          do
          {
            sub_14007D520((unsigned int *)&v127, v47, v49);
            sub_14007D520((unsigned int *)&v131, v111, v112);
            v104 = v104 - v109;
            ++v103;
            v106 = v106 - v108;
            v107 = v107 - v109;
            v110 = v110 - v108;
            v127 = v104;
            v129 = v106;
            v131 = v107;
            v133 = v110;
          }
          while ( v103 < (int)*v82 );
          v93 = v134;
          v94 = v135;
        }
        v113 = v96 + v101;
        v114 = v101 + v136;
        v115 = v98 + v102;
        v128 = *(float *)&v141;
        v116 = v102 + v138;
        v117 = 0;
        v127 = v113;
        v131 = v114;
        v129 = v115;
        v133 = v116;
        v132 = v137;
        if ( (int)v82[1] > 0 )
        {
          v118 = v94 * 4.0;
          v119 = v93 * 4.0;
          do
          {
            sub_14007D520((unsigned int *)&v127, v47, v49);
            sub_14007D520((unsigned int *)&v131, v120, v121);
            v113 = v113 + v118;
            ++v117;
            v115 = v115 + v119;
            v114 = v114 + v118;
            v116 = v116 + v119;
            v127 = v113;
            v129 = v115;
            v131 = v114;
            v133 = v116;
          }
          while ( v117 < (int)v82[1] );
        }
        ++v81;
        v82 += 13;
      }
      while ( v81 < (int)g_16E48987C );
    }
    sub_14006E0D0(v48, v47, v49);
    g_1AD299450 = xmmword_140279550;
    v127 = (float)(int)g_189F0EEF4 * 4.0;
    v128 = (float)(int)g_189F0EEF8 * 4.0;
    v129 = (float)(int)g_189F0EEFC * 4.0;
    sub_140125670((unsigned int *)&v127, 1.0, 2);
    if ( (int)g_16E486878 > 0 )
    {
      v122 = (int *)&g_16E486880;
      do
      {
        g_1AD299450 = xmmword_140279690;
        if ( v0 == g_189F0EF54 )
        {
          *(unsigned int *)&g_1AD299450 = 1065353216;
          g_1AD299454 = 1065353216;
          g_1AD299458 = 1065353216;
        }
        if ( v0 == g_189F0EF58 )
        {
          *(unsigned int *)&g_1AD299450 = 1065353216;
          g_1AD299454 = 1061158912;
          g_1AD299458 = 1061158912;
        }
        v123 = (float)*v122;
        v127 = (float)*(v122 - 1) * 4.0;
        v124 = (float)v122[1];
        v128 = v123 * 4.0;
        v129 = v124 * 4.0;
        sub_140125670((unsigned int *)&v127, 1.0, 2);
        ++v0;
        v122 += 3;
      }
      while ( v0 < (int)g_16E486878 );
    }
  }
LABEL_120:
  LOBYTE(v48) = 1;
  glDepthMask(v48);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147

// 14008DEAD: conditional instruction was optimized away because ebx.4==2

//----- (0000000140092140) ----------------------------------------------------
__int64            sub_140092140(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int *v8;
  unsigned int *v9;

  result = (int)g_18417E1B4;
  if ( (int)g_18417E1B4 < 4096 )
  {
    dword_140404A6C[30 * g_18417E1B4 + 284554707] = a1;
    dword_140404A6C[30 * g_18417E1B4 + 284554708] = a1;
    dword_140404A6C[30 * g_18417E1B4 + 284554711] = *a2;
    dword_140404A6C[30 * g_18417E1B4 + 284554712] = a2[1];
    dword_140404A6C[30 * g_18417E1B4 + 284554713] = a2[2];
    dword_140404A6C[30 * g_18417E1B4 + 284554714] = a2[3];
    dword_140404A6C[30 * g_18417E1B4 + 284554710] = a3;
    v6 = &dword_140404A6C[30 * g_18417E1B4 + 284554715];
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v7 = &dword_140404A6C[30 * g_18417E1B4 + 284554718];
    *v7 = *a5;
    v7[1] = a5[1];
    v7[2] = a5[2];
    v8 = &dword_140404A6C[30 * g_18417E1B4 + 284554721];
    *v8 = a5[3];
    v8[1] = a5[4];
    v8[2] = a5[5];
    v9 = &dword_140404A6C[30 * g_18417E1B4 + 284554724];
    *v9 = a5[6];
    v9[1] = a5[7];
    v9[2] = a5[8];
    dword_140404A6C[30 * g_18417E1B4 + 284554727] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554728] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554729] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554730] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554731] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554732] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554733] = 0;
    dword_140404A6C[30 * g_18417E1B4 + 284554734] = 0;
    dword_140404A6C[30 * g_18417E1B4 + 284554735] = 0;
    result = (int)g_18417E1B4;
    dword_140404A6C[30 * g_18417E1B4++ + 284554736] = 0;
  }
  return result;
}

//----- (0000000140092D70) ----------------------------------------------------
__int64 sub_140092D70()
{
  unsigned int *v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int16 *v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  __m128i v13;
  int v14;
  __int64 v15;
  __int16 *v16;
  int v17;
  float *v18;
  float *v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  signed __int64 v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140092D70[224];
#define v33 (*(_DWORD (*)[21])(void *)(sr_frame_140092D70 + 0)) /* [rsp+0h] */
#define v34 (*(_DWORD (*)[11])(void *)(sr_frame_140092D70 + 84)) /* [rsp+54h] */
#define v35 (*(__int128 (*))(void *)(sr_frame_140092D70 + 128)) /* [rsp+80h] */
#define v36 (*(_OWORD (*)[4])(void *)(sr_frame_140092D70 + 144)) /* [rsp+90h] */
#define v37 (*(__int64 (*))(void *)(sr_frame_140092D70 + 208)) /* [rsp+D0h] */

  v0 = &g_189C1DC90;
  v1 = 0;
  v2 = 8;
  do
  {
    if ( *(v0 - 4) )
    {
      v3 = (int)*v0;
      if ( (_DWORD)v3 != -1 )
      {
        v4 = 0.0;
        v5 = v0[30731] - 1;
        if ( !v0[30731] )
          v5 = 63;
        v6 = 960 * v5;
        v7 = v6;
        v8 = v6 + 960;
        if ( v6 < v8 )
        {
          if ( v8 - v6 < 4 )
            goto LABEL_11;
          v9 = (__int16 *)&dword_140404A6C[v6 / 2u + 308307091 + v1] + 1;
          v10 = ((unsigned __int64)(v8 - v6 - 4) >> 2) + 1;
          v7 = v6 + 4 * v10;
          do
          {
            v11 = (float)abs16(v9[2]);
            v12 = (float)abs16(v9[1]);
            v13 = _mm_cvtsi32_si128(abs16(*(v9 - 1)));
            v14 = *v9;
            v9 += 4;
            v4 = v4
               + (float)((float)((float)(v11 * 0.0009765625) + (float)(v12 * 0.0009765625))
                       + (float)((float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v13), f32)[0] * 0.0009765625)
                               + (float)((float)(int)abs32(v14) * 0.0009765625)));
            --v10;
          }
          while ( v10 );
          if ( v7 < v8 )
          {
LABEL_11:
            v15 = v8 - v7;
            v16 = (__int16 *)&g_189C1DCB8 + v7 + v1 * 2;
            do
            {
              v17 = *v16++;
              v4 = v4 + (float)((float)(int)abs32(v17) * 0.0009765625);
              --v15;
            }
            while ( v15 );
          }
        }
        v18 = (float *)v36;
        g_1A724E600 = xmmword_140278D30;
        v19 = (float *)v34;
        g_1A724E63C = 1065353216;
        v20 = 4;
        g_1A724E610 = xmmword_140278D80;
        g_1A724E620 = xmmword_140278E20;
        v34[2] = 0;
        v33[20] = *(unsigned int *)&g_183F7C550;
        v21 = dword_140404A6C[344 * v3 + 284956344];
        *(float *)&v22 = *(float *)&dword_140404A6C[344 * v3 + 284956345] + 1.125;
        v23 = dword_140404A6C[344 * v3 + 284956346];
        v34[0] = *(unsigned int *)&g_183F7C554;
        v24 = (char *)(unsigned int *)&g_1A724E610 - (char *)v36;
        v34[1] = *(unsigned int *)&g_183F7C558;
        v34[3] = *(unsigned int *)&g_183F7C55C;
        v34[4] = *(unsigned int *)&g_183F7C560;
        v34[5] = *(unsigned int *)&g_183F7C564;
        v34[6] = 0;
        v34[7] = *(unsigned int *)&g_183F7C568;
        v34[8] = *(unsigned int *)&g_183F7C56C;
        v25 = fmaxf(v4 * 0.0010416667, 0.25);
        g_1A724E634 = v22;
        *(unsigned int *)&g_1A724E630 = v21;
        g_1A724E638 = v23;
        v34[9] = *(unsigned int *)&g_183F7C570;
        v34[10] = 0;
        v35 = xmmword_140279490;
        do
        {
          v26 = *(v19 - 1);
          v27 = 4;
          v28 = *v19;
          v29 = v19[1];
          v30 = v19[2];
          do
          {
            *v18 = (float)((float)(v30 * *(float *)((char *)v18 + v24 + 32))
                         + (float)(v29 * *(float *)((char *)v18 + v24 + 16)))
                 + (float)((float)(v26 * *(float *)((char *)v18 + v24 - 16))
                         + (float)(v28 * *(float *)((char *)v18 + v24)));
            ++v18;
            --v27;
          }
          while ( v27 );
          v19 += 4;
          v24 -= 16LL;
          --v20;
        }
        while ( v20 );
        g_1A724E600 = v36[0];
        g_1A724E610 = v36[1];
        g_1A724E620 = v36[2];
        g_1A724E630 = v36[3];
        sub_14007A0E0(
          (unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E600,
          (__int64)(unsigned int *)&g_1A724E5C0);
        sub_14007A0E0(
          (unsigned int *)&g_1A724E6C0,
          (__int64)(unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E580);
        glBindTexture(3553, dword_140404A6C[44 * g_183EBF120 + 284024944]);
        sub_14006CFF0(0.0, 0.0, 0x3E280000 /* native XMM2 width 0.1640625f */, 0.1640625, 133, 1065353216, 1065353216, 1065353216, COERCE_INT(v25 * 0.75f));
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
      }
    }
    v0 += 96401;
    v1 += 96401;
    --v2;
  }
  while ( v2 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37

//----- (00000001400932D0) ----------------------------------------------------
_UNKNOWN **           sub_1400932D0()
{
  int v0;
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  float v5;
  signed int v6;
  float v7;
  int v8;
  double v9;
  char v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int *v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  unsigned int v33;
  float v34;
  float v35;
  unsigned int v36;
  float v37;
  unsigned int v38;
  float v39;
  unsigned int v40;
  float v41;
  unsigned int v42;
  unsigned __int64 v43;
  float *v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  float *v48;
  float *v49;
  __int64 v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  __int64 v56;
  float v57;
  float v58;
  float v59;
  float v60;
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
  unsigned int *v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  float v78;
  float v79;
  float v80;
  __int64 v81;
  unsigned int v82;
  float v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  float v87;
  unsigned int v88;
  float v89;
  __int64 v90;
  float v91;
  __int64 v92;
  unsigned int v93;
  float v94;
  unsigned int v95;
  float v96;
  __int64 v97;
  __int64 v98;
  float v99;
  unsigned int v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  float v106;
  unsigned int v107;
  float v108;
  __int64 v109;
  unsigned int *v110;
  __int64 v111;
  __int64 v112;
  float *v113;
  __int64 v114;
  unsigned int v115;
  float v116;
  float v117;
  float v118;
  float v119;
  unsigned int v120;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400932D0[32];
#define v122 (*(__int64 (*))(void *)(sr_frame_1400932D0 + 0)) /* [rsp+A0h] */
#define v123 (*(unsigned int * (*))(void *)(sr_frame_1400932D0 + 8)) /* [rsp+A8h] */
#define v124 (*(__int64 (*))(void *)(sr_frame_1400932D0 + 16)) /* [rsp+B0h] */
#define v125 (*(__int64 (*))(void *)(sr_frame_1400932D0 + 24)) /* [rsp+B8h] */

  v0 = 16;
  if ( frame_slow_pacing )
    v0 = 100;
  v1 = sub_140198F9B() - g_1A4D3BD20;
  v2 = sub_140198F9B();
  v3 = 4 * v0;
  g_1A4D3BD20 = v2;
  v4 = 0;
  if ( v1 >= 0 )
    v4 = v1;
  v5 = (float)v0;
  if ( v4 <= v3 )
    v3 = v4;
  v6 = v3 + g_1A4D3BD24;
  v7 = (float)(v0 * game_tick);
  if ( (float)(v3 + g_1A4D3BD24) > (float)(v7 - (float)(v5 * 0.125)) )
    v6 -= (unsigned int)v0 >> 3;
  if ( (float)v6 < (float)(v7 - (float)((float)(g_1A4D3BD28 + 0.125) * v5)) )
    v6 += (unsigned int)v0 >> 4;
  if ( v6 > (signed int)(v0 * game_tick) )
    v6 = v0 * game_tick;
  g_1A4D3BD24 = v6;
  if ( v6 < (signed int)(v0 * (game_tick - 20)) )
  {
    v6 = (int)(float)(v7 - (float)(v5 * 20.0));
    g_1A4D3BD24 = v6;
  }
  if ( replay_active && v6 < (signed int)(v0 * (game_tick - 1)) )
  {
    v6 = (int)(float)(v7 - v5);
    g_1A4D3BD24 = v6;
  }
  v8 = v6 / v0;
  if ( v6 / v0 > (int)game_tick )
    v8 = game_tick;
  *(_QWORD *)&v9 = COERCE_UNSIGNED_INT((float)(v6 - v0 * v8));
  *(float *)&v9 = fmaxf(*(float *)&v9 / v5, 0.0);
  if ( *(float *)&v9 > 1.0 )
    *(_QWORD *)&v9 = 1065353216;
  v10 = v8 + 1;
  v11 = v8 & 0x3F;
  v12 = v10 & 0x3F;
  if ( !g_151E46204 || g_16B165F68 )
  {
    *(_QWORD *)&v9 = 1065353216;
    v12 = game_tick & 0x3F;
    v11 = v12;
  }
  v13 = v11;
  v14 = 0;
  v15 = v12;
  v16 = &g_18329E308;
  v17 = 256;
  v123 = &g_18329E308;
  v18 = 0;
  v124 = 256;
  v122 = v13;
  v19 = (unsigned int)v13;
  v125 = v15;
  do
  {
    if ( *v16 )
    {
      v20 = 563328 * v19;
      v21 = 140832 * v15;
      v22 = 563328 * v19 + v18 * 4;
      v23 = *(float *)((char *)&g_1A4D3BD3C + v22);
      v24 = 563328 * v15 + v18 * 4;
      v25 = *(float *)((char *)&g_1A4D3BD3C + v24);
      if ( (float)(v23 - v25) >= 3.14159265359 )
        v25 = v25 + 6.28318530718;
      if ( (float)(v25 - v23) >= 3.14159265359 )
        v23 = v23 + 6.28318530718;
      v26 = v25 - v23;
      v27 = *(float *)((char *)&g_1A4D3BD44 + v22);
      v28 = v27;
      *(float *)&dword_140404A6C[v18 + 284956337] = (float)(v26 * *(float *)&v9)
                                                  + *(float *)((char *)&g_1A4D3BD3C + v22);
      v29 = *(float *)((char *)&g_1A4D3BD44 + v24);
      if ( (float)(v27 - v29) >= 3.14159265359 )
        v29 = v29 + 6.28318530718;
      if ( (float)(v29 - v27) >= 3.14159265359 )
        v27 = v27 + 6.28318530718;
      v30 = *(float *)((char *)&g_1A4D3BD4C + v24);
      v31 = v29 - v27;
      v32 = *(float *)((char *)&g_1A4D3BD5C + v22);
      *(float *)&v33 = (float)(v31 * *(float *)&v9) + v28;
      v34 = *(float *)((char *)&g_1A4D3BD60 + v22);
      dword_140404A6C[v18 + 284956339] = v33;
      v35 = *(float *)((char *)&g_1A4D3BD50 + v22);
      *(float *)&dword_140404A6C[v18 + 284956341] = (float)((float)(v30
                                                                  - *(float *)((char *)&g_1A4D3BD4C + v22))
                                                          * *(float *)&v9)
                                                  + *(float *)((char *)&g_1A4D3BD4C + v22);
      *(float *)&v36 = (float)((float)(*(float *)((char *)&g_1A4D3BD50 + v24) - v35) * *(float *)&v9)
                     + v35;
      v37 = *(float *)((char *)&g_1A4D3BD54 + v22);
      dword_140404A6C[v18 + 284956342] = v36;
      *(float *)&v38 = (float)((float)(*(float *)((char *)&g_1A4D3BD54 + v24) - v37) * *(float *)&v9)
                     + v37;
      v39 = *(float *)((char *)&g_1A4D3BD58 + v22);
      dword_140404A6C[v18 + 284956343] = v38;
      *(float *)&v40 = (float)((float)(*(float *)((char *)&g_1A4D3BD58 + v24) - v39) * *(float *)&v9)
                     + v39;
      v41 = *(float *)((char *)&g_1A4D3BD5C + v24);
      dword_140404A6C[v18 + 284956344] = v40;
      *(float *)&v42 = (float)((float)(*(float *)((char *)&g_1A4D3BD60 + v24) - v34) * *(float *)&v9)
                     + v34;
      *(float *)&dword_140404A6C[v18 + 284956345] = (float)((float)(v41 - v32) * *(float *)&v9) + v32;
      dword_140404A6C[v18 + 284956346] = v42;
      sub_1400C2F90(
        (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v14 * 4 + 1144038744),
        (float *)&dword_140404A6C[v20 / 4 + 421846206 + v14],
        (float *)&dword_140404A6C[v21 + 421846206 + v14],
        v9);
      v43 = v21 * 4 - v20;
      v44 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v20 + v14 * 4 + 1691598300);
      v45 = (char *)&g_18430A5D0 - (char *)&g_1A4D3BDDC - v20;
      v46 = 15;
      do
      {
        sub_1400C2F90((float *)((char *)v44 + v45), v44, (float *)((char *)v44 + v43), v9);
        v44 += 21;
        --v46;
      }
      while ( v46 );
      v47 = 15;
      v48 = (float *)&dword_140404A6C[v18 + 284956366];
      v49 = (float *)(unsigned int *)&g_18399DF58;
      v50 = (((intptr_t)dword_140404A6C - 0x404a6cLL) + 84LL) + v14 * 4 + 1144038744;
      do
      {
        v51 = *(v49 - 1);
        v52 = *v49;
        v53 = 21LL * *((int *)v49 - 5);
        v54 = *v49;
        v55 = *v49;
        v56 = v18 * 4 + v53 * 4;
        v57 = (float)(v51 * *(float *)&dword_140404A6C[v18 + 284956347 + v53])
            + *(float *)&dword_140404A6C[v18 + 284956344 + v53];
        *(v48 - 1) = v57;
        v58 = (float)(v51 * *(float *)((char *)&g_18430A55C + v56))
            + *(float *)((char *)&g_18430A550 + v56);
        *v48 = v58;
        v59 = (float)(v51 * *(float *)((char *)&g_18430A560 + v56))
            + *(float *)((char *)&g_18430A554 + v56);
        v48[1] = v59;
        v60 = (float)(v54 * *(float *)&dword_140404A6C[v18 + 284956350 + v53]) + v57;
        v61 = v49[1];
        *(v48 - 1) = v60;
        v62 = (float)(v55 * *(float *)&dword_140404A6C[v18 + 284956351 + v53]) + v58;
        *v48 = v62;
        v63 = (float)(v52 * *(float *)&dword_140404A6C[v18 + 284956352 + v53]) + v59;
        v48[1] = v63;
        *(v48 - 1) = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956353 + v53]) + v60;
        *v48 = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956354 + v53]) + v62;
        v48[1] = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956355 + v53]) + v63;
        sub_14007A010(v50, v50 + 36, (__int64)&dword_140404A6C[v53 + 284956347 + v14]);
        v64 = *(v49 - 4) - *(v49 - 1);
        v65 = *(v49 - 3) - *v49;
        v66 = *(v49 - 2) - v49[1];
        v67 = (float)(v64 * v48[2]) + *(v48 - 1);
        *(v48 - 1) = v67;
        v68 = (float)(v64 * v48[3]) + *v48;
        *v48 = v68;
        v69 = (float)(v64 * v48[4]) + v48[1];
        v48[1] = v69;
        v70 = (float)(v65 * v48[5]) + v67;
        *(v48 - 1) = v70;
        v71 = (float)(v65 * v48[6]) + v68;
        *v48 = v71;
        v72 = (float)(v65 * v48[7]) + v69;
        v48[1] = v72;
        *(v48 - 1) = (float)(v66 * v48[8]) + v70;
        *v48 = (float)(v66 * v48[9]) + v71;
        v50 += 84;
        v49 += 25;
        v48[1] = (float)(v66 * v48[10]) + v72;
        v48 += 21;
        --v47;
      }
      while ( v47 );
      v16 = v123;
      v17 = v124;
      v19 = v122;
      v15 = v125;
    }
    v16 += 7166;
    v14 += 344;
    v18 += 344;
    v123 = v16;
    v124 = --v17;
  }
  while ( v17 );
  v73 = &g_15F2D9200;
  v74 = 0;
  v75 = 0;
  v76 = 512;
  do
  {
    if ( *v73 )
    {
      v77 = 563328 * v122 + v75 * 4;
      v78 = *(float *)((char *)&g_1A4D91D3C + v77);
      v79 = *(float *)((char *)&g_1A4D91D44 + v77);
      v80 = *(float *)((char *)&g_1A4D91D40 + v77);
      dword_140404A6C[v75 + 285044400] = *(unsigned int *)((char *)&g_1A4D91D38 + v77);
      v81 = 563328 * v15 + v75 * 4;
      *(float *)&v82 = (float)((float)(*(float *)((char *)&g_1A4D91D3C + v81) - v78) * *(float *)&v9)
                     + v78;
      v83 = *(float *)((char *)&g_1A4D91D40 + v81);
      dword_140404A6C[v75 + 285044401] = v82;
      *(float *)&v84 = (float)((float)(*(float *)((char *)&g_1A4D91D44 + v81) - v79) * *(float *)&v9)
                     + v79;
      *(float *)&dword_140404A6C[v75 + 285044402] = (float)((float)(v83 - v80) * *(float *)&v9) + v80;
      dword_140404A6C[v75 + 285044403] = v84;
      sub_1400C2F90(
        (float *)&dword_140404A6C[v74 + 285044404],
        (float *)&dword_140404A6C[140832 * v122 + 421934263 + v74],
        (float *)&dword_140404A6C[140832 * v15 + 421934263 + v74],
        v9);
      v85 = v75 * 4 + 563328 * v15;
      v86 = v75 * 4 + 563328 * v122;
      v87 = *(float *)((char *)&g_1A4D91D70 + v86);
      *(float *)&dword_140404A6C[v75 + 285044413] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&g_1A4D91D78 + v85))
                                                  + *(float *)((char *)&g_1A4D91D6C + v86);
      *(float *)&v88 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + v85) - v87) * *(float *)&v9)
                     + v87;
      v89 = *(float *)((char *)&g_1A4D91D74 + v86);
      v90 = v75 * 4 + 16 * (35208 * v122 + 1);
      dword_140404A6C[v75 + 285044414] = v88;
      v91 = *(float *)((char *)&g_1A4D91D74 + v85);
      v92 = v75 * 4 + 16 * (35208 * v15 + 1);
      *(float *)&v93 = (float)((float)(v91 - v89) * *(float *)&v9) + v89;
      v94 = *(float *)((char *)&g_1A4D91D70 + v90);
      dword_140404A6C[v75 + 285044415] = v93;
      *(float *)&dword_140404A6C[v75 + 285044417] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&g_1A4D91D78 + v92))
                                                  + *(float *)((char *)&g_1A4D91D6C + v90);
      *(float *)&v95 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + v92) - v94) * *(float *)&v9)
                     + v94;
      v96 = *(float *)((char *)&g_1A4D91D74 + v90);
      dword_140404A6C[v75 + 285044418] = v95;
      *(float *)&dword_140404A6C[v75 + 285044419] = (float)((float)(*(float *)((char *)&g_1A4D91D74 + v92)
                                                                  - v96)
                                                          * *(float *)&v9)
                                                  + v96;
      v97 = v75 * 4 + 16 * (35208 * v15 + 2);
      v98 = v75 * 4 + 16 * (35208 * v122 + 2);
      v99 = *(float *)((char *)&g_1A4D91D70 + v98);
      *(float *)&dword_140404A6C[v75 + 285044421] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&g_1A4D91D78 + v97))
                                                  + *(float *)((char *)&g_1A4D91D6C + v98);
      *(float *)&v100 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + v97) - v99) * *(float *)&v9)
                      + v99;
      v101 = *(float *)((char *)&g_1A4D91D74 + v98);
      dword_140404A6C[v75 + 285044422] = v100;
      v102 = *(float *)((char *)&g_1A4D91D74 + v97);
      v103 = v75 * 4 + 16 * (35208 * v15 + 3);
      v104 = v75 * 4 + 16 * (35208 * v122 + 3);
      *(float *)&v105 = (float)((float)(v102 - v101) * *(float *)&v9) + v101;
      v106 = *(float *)((char *)&g_1A4D91D70 + v104);
      dword_140404A6C[v75 + 285044423] = v105;
      *(float *)&dword_140404A6C[v75 + 285044425] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&g_1A4D91D78 + v103))
                                                  + *(float *)((char *)&g_1A4D91D6C + v104);
      *(float *)&v107 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + v103) - v106) * *(float *)&v9)
                      + v106;
      v108 = *(float *)((char *)&g_1A4D91D74 + v104);
      dword_140404A6C[v75 + 285044426] = v107;
      *(float *)&dword_140404A6C[v75 + 285044427] = (float)((float)(*(float *)((char *)&g_1A4D91D74 + v103)
                                                                  - v108)
                                                          * *(float *)&v9)
                                                  + v108;
    }
    v74 += 77;
    v73 += 5210;
    v75 += 77;
    --v76;
  }
  while ( v76 );
  v109 = 0;
  v110 = &g_182BBB180;
  v111 = 0;
  v112 = 1024;
  do
  {
    if ( *v110 )
    {
      v113 = (float *)&dword_140404A6C[140832 * v122 + 421973684 + v109];
      v114 = v109 * 4 + 563328 * v15;
      *(float *)&v115 = (float)((float)(*(float *)((char *)&g_1A4DB8540 + v114) - v113[1]) * *(float *)&v9)
                      + v113[1];
      *(float *)&dword_140404A6C[v109 + 285083825] = (float)((float)(*(float *)((char *)&g_1A4DB853C
                                                                              + v114)
                                                                   - *v113)
                                                           * *(float *)&v9)
                                                   + *v113;
      v116 = *(float *)((char *)&g_1A4DB8544 + v114) - v113[2];
      dword_140404A6C[v109 + 285083826] = v115;
      *(float *)&dword_140404A6C[v109 + 285083827] = (float)(v116 * *(float *)&v9) + v113[2];
      sub_1400C2F90(
        (float *)&dword_140404A6C[v111 + 285083828],
        (float *)&dword_140404A6C[140832 * v122 + 421973687 + v111],
        (float *)&dword_140404A6C[140832 * v15 + 421973687 + v111],
        v9);
    }
    v111 += 13;
    v110 += 1760;
    v109 += 13;
    --v112;
  }
  while ( v112 );
  v117 = *(float *)&dword_140404A6C[140832 * v122 + 421986997];
  v118 = *(float *)&dword_140404A6C[140832 * v122 + 421986998];
  v119 = *(float *)&dword_140404A6C[140832 * v15 + 421986997];
  g_183F7C58C = (float)((float)(*(float *)&dword_140404A6C[140832 * v15 + 421986996]
                                                        - *(float *)&dword_140404A6C[140832 * v122 + 421986996])
                                                * *(float *)&v9)
                                        + *(float *)&dword_140404A6C[140832 * v122 + 421986996];
  *(float *)&v120 = (float)((float)(*(float *)&dword_140404A6C[140832 * v15 + 421986998] - v118) * *(float *)&v9) + v118;
  g_183F7C590 = (float)((float)(v119 - v117) * *(float *)&v9) + v117;
  *(unsigned int *)&g_183F7C594 = v120;
  return sub_1400C2F90(
           (float *)(unsigned int *)&g_183F7C5A4,
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * v122 + 1692161364),
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * v15 + 1692161364),
           v9);
}
#undef v122
#undef v123
#undef v124
#undef v125

//----- (0000000140093E60) ----------------------------------------------------
__int64 sub_140093E60()
{
  int i;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float *v6;
  float *v7;
  float *v8;
  signed __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  int j;
  unsigned int v17;
  __int64 v18;
  _Alignas(16) unsigned sr_cube_rotation[12];
  float sr_cube_light[3];
  _Alignas(16) unsigned sr_cube_translation[16];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140093E60[256];
#define v20 (*(__int64 (*))(void *)(sr_frame_140093E60 + 0)) /* [rsp+8h] */
#define v32 (*(_OWORD (*)[4])(void *)(sr_frame_140093E60 + 176)) /* [rsp+B8h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_140093E60 + 240)) /* [rsp+F8h] */

  glDepthFunc(515);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E9774C + 283791765]);
  for ( i = 0; i < 6; ++i )
  {
    glFramebufferTexture2D(36160,
      36064,
      (unsigned int)(i + 34069),
      dword_140404A6C[44 * shading_cube_map + 284024944],
      0);
    glClearColor(0.375f,0.375f,0.375f,0.0f);
    glStencilMask(0xFFFFFFFFLL);
    glClearStencil(0);
    glClear(17664);
    glStencilMask(0);
    sr_cube_rotation[8] = 1065353216;
    (*(__int128 *)(void *)sr_cube_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_cube_rotation+4)) = xmmword_140278D30;
    switch ( i )
    {
      case 0:
        v5 = 1070141403;
LABEL_12:
        v6 = (float *)&(*(__int128 *)(void *)sr_cube_rotation) + 3;
        goto LABEL_13;
      case 1:
        v5 = 3217625051LL;
        goto LABEL_12;
      case 2:
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_cube_rotation), (float *)&(*(__int128 *)(void *)sr_cube_rotation), sr_export_float_lane_container(1070141403));
        break;
      case 3:
        v5 = 3217625051LL;
        v6 = (float *)&(*(__int128 *)(void *)sr_cube_rotation);
LABEL_13:
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_cube_rotation), v6, *(double *)&v5);
        break;
      case 5:
        v5 = 1078530011;
        goto LABEL_12;
    }
    glViewport(0, 0, 512, 512);
    g_1A724E590 = xmmword_140278D80;
    *(_QWORD *)&g_1A724E5A0 = 0;
    g_1A724E580 = xmmword_140278D30;
    g_1A724E5AC = -1082130432;
    *(_QWORD *)&g_1A724E5B0 = 0;
    g_1A724E63C = 1065353216;
    *(_OWORD *)&g_1A724E5BC = xmmword_140278D80;
    g_1A724E5A8 = (float)(g_184178D6C
                                                  + g_184178D70)
                                          * (float)(-1.0
                                                  / (float)(g_184178D70
                                                          - g_184178D6C));
    *(_OWORD *)&g_1A724E5CC = xmmword_140278E20;
    *(_OWORD *)&g_1A724E5EC = 0;
    *(_OWORD *)&g_1A724E5DC = xmmword_140279490;
    g_1A724E60C = xmmword_140278E20;
    *(_OWORD *)&g_1A724E5FC = xmmword_140278D90;
    g_1A724E62C = 0;
    g_1A724E5B8 = (float)((float)(g_184178D70 * -2.0)
                                                  * g_184178D6C)
                                          / (float)(g_184178D70
                                                  - g_184178D6C);
    g_1A724E61C = xmmword_140279490;
    sub_140105840(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sub_140105840(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sub_140105840(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    *(unsigned int *)&g_1A724E5C0 = (*(__int128 *)(void *)sr_cube_rotation);
    *(unsigned int *)&g_1A724E5E0 = DWORD2((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5D4 = (*(__int128 *)(void *)(sr_cube_rotation+4));
    *(unsigned int *)&g_1A724E5D0 = DWORD1((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5C8 = DWORD2((*(__int128 *)(void *)(sr_cube_rotation+4)));
    g_1A724E5C4 = HIDWORD((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5E8 = sr_cube_rotation[8];
    g_1A724E5E4 = DWORD1((*(__int128 *)(void *)(sr_cube_rotation+4)));
    ((_OWORD *)(void *)sr_cube_translation)[0] = xmmword_140278D30;
    g_1A724E5D8 = HIDWORD((*(__int128 *)(void *)(sr_cube_rotation+4)));
    *(_QWORD *)&g_1A724E5F0 = 0;
    g_1A724E5F8 = 0;
    g_1A724E5CC = 0;
    g_1A724E5DC = 0;
    g_1A724E5EC = 0;
    g_1A724E5FC = 1065353216;
    v7 = (float *)v32;
    v8 = (float *)((_OWORD *)(void *)sr_cube_translation) + 1;
    ((_OWORD *)(void *)sr_cube_translation)[1] = xmmword_140278D80;
    v9 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)v32;
    v10 = 4;
    ((_OWORD *)(void *)sr_cube_translation)[2] = xmmword_140278E20;
    sr_cube_translation[12] = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
    (*(float *)&sr_cube_translation[13]) = -g_183F7C548;
    (*(float *)&sr_cube_translation[14]) = -g_183F7C54C;
    sr_cube_translation[15] = 1065353216;
    do
    {
      v11 = *(v8 - 1);
      v12 = 4;
      v13 = *v8;
      v14 = v8[1];
      v15 = v8[2];
      do
      {
        *v7 = (float)((float)(v15 * *(float *)((char *)v7 + v9 + 32)) + (float)(v14 * *(float *)((char *)v7 + v9 + 16)))
            + (float)((float)(v13 * *(float *)((char *)v7 + v9)) + (float)(v11 * *(float *)((char *)v7 + v9 - 16)));
        ++v7;
        --v12;
      }
      while ( v12 );
      v8 += 4;
      v9 -= 16LL;
      --v10;
    }
    while ( v10 );
    g_1A724E5C0 = v32[0];
    g_1A724E5D0 = v32[1];
    g_1A724E5E0 = v32[2];
    g_1A724E5F0 = v32[3];
    g_1A724E600 = xmmword_140278D30;
    g_1A724E610 = xmmword_140278D80;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    sub_14007A0E0(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sub_14007A0E0(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sub_14007A0E0(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    sr_cube_light[0] = g_184178D40 * 0.5;
    sr_cube_light[1] = g_184178D44 * 0.5;
    sr_cube_light[2] = g_184178D48 * 0.5;
    glUniform3fv(terrain_u_lightambient, 1, &sr_cube_light[0]);
    sr_cube_light[0] = g_184178D50 * 0.5;
    sr_cube_light[1] = g_184178D54 * 0.5;
    sr_cube_light[2] = g_184178D58 * 0.5;
    glUniform3fv(terrain_u_lightdiffuse, 1, &sr_cube_light[0]);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF154 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33988);
    glBindTexture(3553, renderer_white_texture);
    glActiveTexture(33987);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
    glEnableVertexAttribArray(0);
    for ( j = 0; j < 64; ++j )
      sub_1400D2B90(j);
    glDisableVertexAttribArray(0);
    glActiveTexture(33984);
    glUseProgram(0);
    glDisable(32823);
  }
  glBindFramebuffer(36160, 0);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  sub_14001B6A0();
  v17 = g_151E46194;
  if ( g_151E46194 )
  {
    glDepthFunc(518);
    v17 = g_151E46194;
  }
  if ( unk_14040488C && glClipControl )
  {
    v18 = 37727;
    if ( !v17 )
      v18 = 37726;
    glClipControl(36001, v18);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v20
#undef v32
#undef v33

//----- (00000001400990A0) ----------------------------------------------------
double            sub_1400990A0(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7;
  int v8;
  signed int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  signed int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  float v32;
  float v33;
  int v34;
  int v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  int v42;
  int v43;

  v7 = g_1862AE010;
  v8 = 128;
  v10 = 128;
  v11 = a1;
  g_1B0037420 = 128;
  v12 = -117;
  g_1B0037424 = 128;
  do
  {
    if ( v8 <= 0 )
      goto LABEL_49;
    v13 = -5;
    do
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      if ( (unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 6) <= 1 )
      {
        v14 = 255;
        v15 = 32;
        switch ( a2 )
        {
          case 1:
            if ( v12 + 112 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 2:
            if ( v12 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 6:
            if ( v13 <= 5 )
              v16 = 255;
            goto LABEL_44;
        }
      }
      if ( a2 == 7 )
      {
        if ( v13 - 112 <= 5 )
          v16 = 255;
        goto LABEL_44;
      }
      if ( (unsigned int)(a2 - 4) <= 1 || (unsigned int)(a2 - 9) <= 1 )
      {
        v14 = 255;
        v15 = 255;
        switch ( a2 )
        {
          case 4:
            v17 = v12 + 112 <= 5;
LABEL_22:
            if ( !v17 )
              goto LABEL_44;
            v18 = v13 - 27;
LABEL_24:
            v19 = v18 <= 0x3F;
LABEL_25:
            if ( v19 )
              v16 = 255;
            goto LABEL_44;
          case 5:
            v17 = v12 <= 5;
            goto LABEL_22;
          case 9:
            if ( v13 > 5 )
              goto LABEL_44;
            v18 = v12 + 85;
            goto LABEL_24;
        }
      }
      switch ( a2 )
      {
        case 10:
          if ( v13 - 112 > 5 )
            break;
          v18 = v12 + 85;
          goto LABEL_24;
        case 3:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v12 + 101 > 0xF )
            v16 = 0;
          v19 = v12 + 21 <= 0xF;
          goto LABEL_25;
        case 8:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v13 - 11 > 0xF )
            v16 = 0;
          if ( v13 - 91 <= 0xF )
            v16 = 255;
          break;
      }
LABEL_44:
      v20 = v13 + 5;
      if ( v7 )
        v21 = v16 + (v15 << 8) + 16842752 * v14;
      else
        v21 = (v16 << 24) + v14 + (v15 << 16) + (v14 << 8);
      ++v13;
      dword_140404A6C[v20 + v8 * (v12 + 117) + 468765295] = v21;
      v8 = g_1B0037420;
    }
    while ( (int)(v13 + 5) < (int)g_1B0037420 );
    v10 = g_1B0037424;
LABEL_49:
    ++v12;
  }
  while ( (int)(v12 + 117) < v10 );
  v22 = 2 * v11;
  glBindTexture(35866, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827816] + 284024944]);
  v23 = a7;
  v24 = 9728;
  v25 = a5;
  v26 = a4;
  if ( !a2 )
  {
    glTexParameteri(35866, 10242, a4);
    glTexParameteri(35866, 10243, a5);
    glTexParameteri(35866, 10240, 9728);
    glTexParameteri(35866, 10241, a7);
    glTexImage3D(35866, 0, 6408, g_1B0037420, g_1B0037424, 11, 0, 6408, 5121, 0);
  }
  glTexSubImage3D(35866,
    0,
    0,
    0,
    a2,
    g_1B0037420,
    g_1B0037424,
    1,
    6408,
    5121,
    &g_1B0037428);
  glGenerateMipmap(35866);
  glTexParameterf(35866, 34046, 16.0f /* native XMM2 */);
  v27 = g_1B0037424;
  v28 = 0;
  if ( (int)g_1B0037424 > 0 )
  {
    v29 = g_1862AE010;
    v30 = g_1B0037420;
    do
    {
      v31 = 0;
      if ( v30 > 0 )
      {
        v32 = (float)v28;
        v33 = (float)v28;
        do
        {
          v34 = 0;
          v35 = 0;
          if ( a2 == 1 || a2 == 2 )
          {
            v36 = (float)v31;
            v34 = 128;
            v37 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v31, v32, 1023), f32)[0];
            v33 = (float)v28;
            v35 = (int)(float)((float)(v37 + v37) + 130.0);
          }
          else
          {
            v36 = (float)v31;
          }
          if ( (unsigned int)(a2 - 6) <= 1 )
          {
            v34 = 128;
            v38 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v32, 1023), f32)[0];
            v35 = (int)(float)((float)(v38 + v38) + 130.0);
          }
          if ( (unsigned int)(a2 - 4) <= 1 )
          {
            v34 = 128;
            v39 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v39 + v39) + 130.0);
          }
          if ( (unsigned int)(a2 - 9) <= 1 )
          {
            v34 = 128;
            v40 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v40 + v40) + 130.0);
          }
          if ( a2 == 3 || a2 == 8 )
          {
            v34 = 128;
            v41 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v41 + v41) + 130.0);
          }
          else
          {
            v33 = (float)v28;
          }
          if ( v29 )
          {
            v42 = v35 << 16;
            v34 <<= 24;
          }
          else
          {
            v42 = v35 << 8;
          }
          v43 = v28 * v30 + v31++;
          dword_140404A6C[v43 + 468765295] = v34 + v42;
          v30 = g_1B0037420;
        }
        while ( v31 < (int)g_1B0037420 );
        v27 = g_1B0037424;
      }
      ++v28;
    }
    while ( v28 < v27 );
    v23 = a7;
    v24 = a6;
    v25 = a5;
    v26 = a4;
  }
  glBindTexture(35866, dword_140404A6C[44 * dword_140404A6C[2 * v22 + 283827817] + 284024944]);
  if ( !a2 )
  {
    glTexParameteri(35866, 10242, v26);
    glTexParameteri(35866, 10243, v25);
    glTexParameteri(35866, 10240, v24);
    glTexParameteri(35866, 10241, v23);
    glTexImage3D(35866, 0, 6408, g_1B0037420, g_1B0037424, 11, 0, 6408, 5121, 0);
  }
  glTexSubImage3D(35866,
    0,
    0,
    0,
    a2,
    g_1B0037420,
    g_1B0037424,
    1,
    6408,
    5121,
    &g_1B0037428);
  glGenerateMipmap(35866);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(35866, 34046, 16.0f /* native XMM2 */);
}

//----- (0000000140099730) ----------------------------------------------------
double            sub_140099730(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  int i;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  signed int v32;
  signed int j;
  __int64 v34;
  signed int v35;
  double result;
  signed int v37;
  signed int v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  signed int v46;
  signed int k;
  __int64 v48;
  signed int v49;
  int v50;

  v7 = 2LL * a1;
  v8 = a2;
  v9 = dword_140404A6C[4 * a1 + 283827814];
  v50 = v9;
  if ( a1 == 1 )
  {
    v12 = 44LL * (int)resting_texture_1;
    v10 = dword_140404A6C[v12 + 284024933];
    v11 = dword_140404A6C[v12 + 284024934];
    g_1B0037420 = v10;
    g_1B0037424 = v11;
    if ( v11 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v10 = 128;
    g_1B0037420 = 128;
    v11 = 128;
    g_1B0037424 = 128;
  }
  v13 = g_1862AE010;
  for ( i = 0; i < v11; ++i )
  {
    v15 = 0;
    if ( v10 > 0 )
    {
      v16 = 16;
      v17 = 16;
      if ( a1 != 2 )
      {
        v16 = 0;
        v17 = 255;
      }
      do
      {
        v18 = v17;
        v19 = v17;
        v20 = v16;
        if ( !a1 )
        {
          v21 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15 * 0.5, (float)i * 0.25, 31), f32)[0];
          v22 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15 * 0.25, (float)i * 0.125, 15), f32)[0];
          v23 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15, (float)i * 0.5, 63), f32)[0];
          v24 = SR_VEC_READ_LANES(128, sub_1400384F0((float)((float)v15 + (float)v15) + 1235.0, (float)i + 123.0, 127), f32)[0];
          v19 = (int)(float)((float)((float)((float)(v21 + v22) + (float)(v23 + v24)) * 1.75) + 167.0);
          v18 = (int)(float)((float)((float)((float)(v24 + v24) + v23) + (float)(v22 + v23))
                           + (float)((float)(v21 + v21) + (float)(v22 + 168.0)));
          v20 = v18;
        }
        if ( v13 )
        {
          v27 = (v18 << 24) + 32;
          v25 = v20 << 16;
          v26 = v19 << 8;
        }
        else
        {
          v25 = v20 << 8;
          v26 = v19 << 16;
          v27 = v18 + 0x20000000;
        }
        v28 = v25 + v27 + v26;
        v29 = v15 + i * v10;
        ++v15;
        dword_140404A6C[v29 + 468765295] = v28;
        v10 = g_1B0037420;
      }
      while ( v15 < (int)g_1B0037420 );
      v11 = g_1B0037424;
    }
  }
  v9 = v50;
  v8 = a2;
LABEL_17:
  v30 = 44LL * v9;
  dword_140404A6C[v30 + 284024933] = v10;
  dword_140404A6C[v30 + 284024938] = a3;
  dword_140404A6C[v30 + 284024939] = a4;
  dword_140404A6C[v30 + 284024934] = v11;
  dword_140404A6C[v30 + 284024935] = 1;
  dword_140404A6C[v30 + 284024936] = 6408;
  dword_140404A6C[v30 + 284024937] = 6408;
  dword_140404A6C[v30 + 284024943] = 0;
  dword_140404A6C[v30 + 284024940] = a5;
  dword_140404A6C[v30 + 284024941] = a6;
  free(*(void **)&dword_140404A6C[v30 + 284024945]);
  v31 = sr_path_malloc((int)(4 * dword_140404A6C[v30 + 284024933] * dword_140404A6C[v30 + 284024934]));
  v32 = 0;
  for ( *(_QWORD *)&dword_140404A6C[v30 + 284024945] = v31; v32 < (int)dword_140404A6C[v30 + 284024934]; ++v32 )
  {
    for ( j = 0;
          j < (int)dword_140404A6C[v30 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v30 + 284024945] + 4LL * v35) = dword_140404A6C[v34 + 468765295] )
    {
      v34 = j + v32 * g_1B0037420;
      v35 = j + dword_140404A6C[v30 + 284024933] * v32;
      ++j;
    }
  }
  if ( v8 )
    sub_14009A370(v9);
  sub_14014D3E0(v9, 1);
  result = (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
  if ( a1 == 1 )
  {
    v37 = g_1B0037424;
    v38 = 0;
    v39 = (int)dword_140404A6C[2 * v7 + 283827815];
    v40 = g_1B0037420;
    if ( (int)g_1B0037424 > 0 )
    {
      v41 = g_1862AE010;
      do
      {
        v42 = 0;
        if ( v40 > 0 )
        {
          do
          {
            v43 = v42 + v38 * v40;
            if ( v41 )
              dword_140404A6C[v43 + 468765295] = -16711904;
            else
              dword_140404A6C[v43 + 468765295] = 553582847;
            v40 = g_1B0037420;
            ++v42;
          }
          while ( v42 < (int)g_1B0037420 );
          v37 = g_1B0037424;
        }
        ++v38;
      }
      while ( v38 < v37 );
    }
    v44 = 44 * v39;
    dword_140404A6C[v44 + 284024938] = a3;
    dword_140404A6C[v44 + 284024939] = a4;
    dword_140404A6C[v44 + 284024933] = v40;
    dword_140404A6C[v44 + 284024934] = v37;
    dword_140404A6C[v44 + 284024935] = 1;
    dword_140404A6C[v44 + 284024936] = 6408;
    dword_140404A6C[v44 + 284024937] = 6408;
    dword_140404A6C[v44 + 284024943] = 0;
    dword_140404A6C[v44 + 284024940] = a5;
    dword_140404A6C[v44 + 284024941] = a6;
    free(*(void **)&dword_140404A6C[44 * v39 + 284024945]);
    v45 = sr_path_malloc((int)(4 * dword_140404A6C[v44 + 284024933] * dword_140404A6C[v44 + 284024934]));
    v46 = 0;
    *(_QWORD *)&dword_140404A6C[v44 + 284024945] = v45;
    if ( (int)dword_140404A6C[44 * v39 + 284024934] > 0 )
    {
      do
      {
        for ( k = 0;
              k < (int)dword_140404A6C[v44 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v44 + 284024945] + 4LL * v49) = dword_140404A6C[v48 + 468765295] )
        {
          v48 = k + v46 * g_1B0037420;
          v49 = k + dword_140404A6C[v44 + 284024933] * v46;
          ++k;
        }
        ++v46;
      }
      while ( v46 < (int)dword_140404A6C[v44 + 284024934] );
    }
    if ( v8 )
      sub_14009A370(v39);
    sub_14014D3E0(v39, 1);
    return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
      sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 224, 32, 0, 0);
  }
  else
  {
    sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 96, 192, 0, 0);
  }
  return result;
}

//----- (0000000140099DD0) ----------------------------------------------------
double            sub_140099DD0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  signed int v12;
  __int64 v13;
  float v14;
  __int64 v15;
  unsigned int *v16;
  unsigned int v17;
  __int64 v18;
  double v19;
  double v20;
  float v21;
  __int64 v22;
  __int64 v23;

  v6 = 0;
  v8 = a3;
  v9 = a2;
  v10 = 0;
  v11 = 2LL * a1;
  do
  {
    if ( v10 )
      v12 = dword_140404A6C[2 * v11 + 283827815];
    else
      v12 = dword_140404A6C[2 * v11 + 283827814];
    v13 = 44LL * v12;
    g_1B0037420 = 128;
    g_1B0037424 = 128;
    glBindTexture(35866, dword_140404A6C[v13 + 284024944]);
    glTexParameteri(35866, 10242, v8);
    glTexParameteri(35866, 10243, a4);
    glTexParameteri(35866, 10240, a5);
    glTexParameteri(35866, 10241, a6);
    glTexImage3D(35866,
      0,
      6408,
      g_1B0037420,
      g_1B0037424,
      g_1A4CF0940,
      0,
      6408,
      5121,
      0);
    glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
    glViewport(0, 0, g_1B0037420, g_1B0037424);
    v14 = (float)(int)g_1B0037420;
    *(unsigned int *)&g_1A724E5A8 = -1082130432;
    g_1A724E5AC = 0;
    g_1A724E584 = 0;
    g_1A724E598 = 0;
    *(float *)&g_1A724E580 = (float)(1.0 / v14) + (float)(1.0 / v14);
    *(float *)&g_1A724E5B0 = -(float)((float)(1.0 / v14) * v14);
    *(_OWORD *)&g_1A724E5C8 = xmmword_140279490;
    g_1A724E594 = (float)(1.0 / (float)(int)g_1B0037424)
                                          + (float)(1.0 / (float)(int)g_1B0037424);
    *(_OWORD *)&g_1A724E5B8 = xmmword_140278E70;
    *(_OWORD *)&g_1A724E5D8 = 0;
    *(_OWORD *)&g_1A724E5E8 = xmmword_140278D30;
    *(_OWORD *)&g_1A724E5F8 = xmmword_140278E60;
    g_1A724E5B4 = -(float)((float)(1.0 / (float)(int)g_1B0037424)
                                                   * (float)(int)g_1B0037424);
    g_1A724E608 = xmmword_140279490;
    g_1A724E638 = 0;
    g_1A724E63C = 1065353216;
    g_1A724E628 = xmmword_140278D30;
    g_1A724E618 = 0;
    sub_14007A0E0(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sub_14007A0E0(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sub_14007A0E0(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glDisable(3042);
    glBlendFunc(770,771);
    glDisable(2929);
    glDepthMask(0);
    glColorMask(1,1,1,1);
    glDisable(2884);
    if ( (int)g_1A4CF0940 > 0 )
    {
      v16 = &g_1A4CF0948;
      do
      {
        glFramebufferTextureLayer(36160, 36064, dword_140404A6C[v13 + 284024944], 0, v6);
        if ( v10 )
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827815];
        else
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827814];
        v18 = 768LL * (int)v16[1] + 12352LL * (int)*v16;
        *(_QWORD *)&v19 = *(unsigned int *)((char *)&g_1ABC89C44 + v18);
        *(_QWORD *)&v20 = *(unsigned int *)((char *)&g_1ABC89C4C + v18);
        *(float *)&v19 = *(float *)&v19 * 128.0;
        *(float *)&v20 = *(float *)&v20 * 128.0;
        v21 = *(float *)((char *)&g_1ABC89C50 + v18) * 128.0;
        glColorMask(1,1,1,1);
        glBindTexture(3553, dword_140404A6C[44 * v17 + 284024944]);
        sub_14006CFF0(0.0, 0.0, 0x43000000 /* native XMM2 width 128.0f */, 128.0, 128, 1065353216, 1065353216, 1065353216, 1065353216);
        if ( !v10 )
        {
          glColorMask(0,0,0,1);
          glBindTexture(3553, renderer_white_texture);
          sub_14006CFF0(v19, v20, COERCE_UNSIGNED_INT((float)(*(float *)((char *)&g_1ABC89C48 + v18) * 128.0f)) /* native XMM2 width = XMM10 */, v21, 128, 0, 0, 0, 1065353216);
        }
        ++v6;
        v16 += 3;
      }
      while ( v6 < (int)g_1A4CF0940 );
      v9 = a2;
      v8 = a3;
    }
    LOBYTE(v15) = 1;
    glColorMask(1,1,1,0);
    glBindTexture(35866, dword_140404A6C[v13 + 284024944]);
    if ( v9 )
      glGenerateMipmap(35866);
    glTexParameterf(35866, 34046, 16.0f /* native XMM2 */);
    ++v10;
    v6 = 0;
  }
  while ( v10 < 2 );
  return ((double (*)(_QWORD, _QWORD))glBindFramebuffer)(36160, 0);
}

//----- (000000014009A5F0) ----------------------------------------------------
void            sub_14009A5F0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
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
  float v33;
  float v34;
  int v35;
  signed int v36;
  int v37;
  int v38;
  float v39;
  bool v40;
  float v41;
  __int64 v42;
  __int64 v43;
  signed int v44;
  signed int i;
  __int64 v46;
  signed int v47;
  int v48;

  v6 = g_183EBE444;
  v7 = a2;
  v8 = a1;
  if ( a1 == g_183EBE440 )
  {
    v9 = dword_1402B2830[0];
    v10 = dword_1402B2834[0];
    v11 = dword_1402B2838[0];
  }
  else if ( a1 == g_183EBE444 )
  {
    v9 = dword_1402B283C;
    v10 = dword_1402B2840;
    v11 = dword_1402B2844;
  }
  else if ( a1 == g_183EBE448 )
  {
    v9 = dword_1402B2848;
    v10 = dword_1402B284C;
    v11 = dword_1402B2850;
  }
  else
  {
    v9 = a2;
    v10 = a2;
    v11 = a2;
  }
  if ( a1 == g_183EBF050 || a1 == g_183EBF054 || a1 == g_183EBF058 )
  {
    *(float *)&v9 = *(float *)&dword_1402B2848 * 0.5;
    *(float *)&v10 = *(float *)&dword_1402B284C * 0.5;
    *(float *)&v11 = *(float *)&dword_1402B2850 * 0.5;
  }
  else if ( a1 >= (int)g_183EBF05C && a1 <= (int)g_183EBF06C )
  {
    *(float *)&v9 = 0.125;
    *(float *)&v11 = 0.375;
    *(float *)&v10 = 0.125;
  }
  v12 = 0;
  if ( a1 != g_183EBF050 )
  {
    v21 = g_183EBF108;
    v14 = 128;
    v22 = g_183EBF0F4;
    v15 = 128;
    v23 = g_183EBF07C;
    v24 = g_183EBF074;
    g_1B0037420 = 128;
    g_1B0037424 = 128;
    v48 = 0;
    while ( 1 )
    {
      v25 = 0;
      if ( v14 > 0 )
        break;
LABEL_160:
      v48 = ++v12;
      if ( v12 >= v15 )
      {
        v7 = a2;
        goto LABEL_162;
      }
    }
    while ( 1 )
    {
      v26 = 0;
      v27 = 255;
      v28 = 255;
      v29 = 32;
      if ( (int)v8 < v24 || (int)v8 > v23 )
        goto LABEL_63;
      if ( (unsigned int)(v25 - 40) > 0x2F )
        break;
      if ( (unsigned int)(v12 - 84) <= 0x17 && (_DWORD)v8 == v24 )
      {
        v29 = 255;
LABEL_61:
        v26 = 32;
        goto LABEL_62;
      }
      if ( (unsigned int)(v12 - 52) <= 0x17 && (_DWORD)v8 == g_183EBF078 )
      {
        v26 = 255;
        v29 = 255;
      }
      else
      {
        if ( (unsigned int)(v12 - 20) > 0x17 || (_DWORD)v8 != v23 )
          break;
        v27 = 32;
        v26 = 255;
        v29 = 255;
      }
LABEL_62:
      v21 = g_183EBF108;
      v28 = 32;
LABEL_63:
      if ( (int)v8 >= v22 && (int)v8 <= v21 )
      {
        if ( (_DWORD)v8 == v22 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
        }
        if ( (_DWORD)v8 == g_183EBF0F8 )
        {
          v27 = 32;
          v26 = 80;
          v28 = 32;
        }
        if ( (_DWORD)v8 == g_183EBF0FC )
        {
          v27 = 32;
          v26 = 32;
          v28 = 128;
        }
        if ( (_DWORD)v8 == g_183EBF100 )
        {
          v27 = 192;
          v26 = 192;
          v28 = 192;
        }
        if ( (_DWORD)v8 == g_183EBF104 )
        {
          v27 = 247;
          v28 = 25;
          v26 = 181;
        }
        if ( (_DWORD)v8 == v21 )
        {
          v26 = 16;
          v27 = 64;
          v28 = 16;
        }
        v29 = 32;
        if ( v12 >= 88
          && (unsigned int)(v25 - 32) <= 0x3F
          && ((unsigned int)(v12 - 92) > 0x1B || (unsigned int)(v25 - 40) > 0xF) )
        {
          v27 = 96;
          v29 = 192;
          v26 = 96;
          v28 = 96;
        }
      }
      if ( (_DWORD)v8 == g_183EBE434 )
      {
        v27 = 16;
        v29 = 32;
        v28 = 16;
        v26 = 64;
      }
      if ( (_DWORD)v8 == g_183EBF10C )
      {
        if ( v25 >= 64 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
          v29 = 32;
        }
        else
        {
          v27 = 128;
          v26 = 120;
          v28 = 112;
          v29 = 1;
        }
      }
      if ( (_DWORD)v8 == g_183EBF114 )
      {
        if ( v25 >= 64 )
        {
          v27 = 64;
          v29 = 32;
          v26 = 24;
          v28 = 12;
        }
        else
        {
          v27 = 16;
          v29 = 192;
          v26 = 16;
          v28 = 16;
        }
      }
      if ( (_DWORD)v8 == resting_texture_0 )
      {
        v27 = 160;
        v28 = 32;
        v29 = 192;
        v26 = 96;
      }
      if ( (_DWORD)v8 == g_183EBF0F0 )
      {
        v30 = 192;
        v31 = 112;
        v32 = 110;
        if ( (float)((float)((float)((float)v12 - 64.0) * (float)((float)v12 - 64.0))
                   + (float)((float)((float)v25 - 64.0) * (float)((float)v25 - 64.0))) >= 2304.0 )
        {
          v32 = 32;
          v30 = 4;
          v31 = 32;
        }
        v26 = v32;
        v27 = v32;
        v28 = v31;
        v29 = v30;
        if ( v12 >= 120 && v12 < 124 && v25 >= 56 && v25 < 72 )
        {
          v28 = 64;
          v29 = 4;
          v26 = 64;
          v27 = 64;
        }
      }
      if ( (_DWORD)v8 == g_183EBE438 )
      {
        v29 = 0;
        v27 = 255;
        v26 = 255;
        v28 = 255;
        if ( (float)((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25))) < 2304.0 )
          v29 = 192;
      }
      if ( (_DWORD)v8 == effect_texture )
      {
        v27 = 255;
        v26 = 255;
        v28 = 255;
        v33 = fsqrt((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25)));
        v34 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v25 * 0.0625, (float)v12 * 0.0625, -1), f32)[0];
        v29 = 0;
        v12 = v48;
        v6 = g_183EBE444;
        if ( (float)((float)(v34 * 6.0) + 48.0) > v33 )
          v29 = 192;
      }
      if ( (int)v8 >= (int)g_183EBF050 && (int)v8 <= (int)g_183EBF06C )
      {
        v26 = 16;
        v27 = 128;
        if ( (_DWORD)v8 != g_183EBF054 )
        {
          v26 = 32;
          v27 = 32;
        }
        v28 = v26;
        if ( (_DWORD)v8 == g_183EBF058 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 96;
        }
        if ( (_DWORD)v8 == g_183EBF05C )
        {
          v27 = 128;
          v26 = 128;
          v28 = 128;
        }
        if ( (_DWORD)v8 == g_183EBF060 )
        {
          v27 = 224;
          v26 = 224;
          v28 = 224;
        }
        if ( (_DWORD)v8 == g_183EBF064 )
        {
          v27 = 219;
          v26 = 192;
          v28 = 89;
        }
        if ( v25 >= 64 )
        {
          v27 = 64;
          v26 = 64;
          v28 = 64;
        }
        v29 = 128;
      }
      if ( (int)v8 >= (int)g_183EBE440 && (int)v8 <= (int)g_183EBE44C )
      {
        v29 = 32;
        if ( v25 >= 64 )
        {
          if ( v12 >= 64 )
          {
            if ( v12 >= 96 )
            {
              v27 = 56;
              v26 = 64;
              v28 = 253;
              v39 = (float)((float)(111.5 - (float)v12) * (float)(111.5 - (float)v12))
                  + (float)((float)(79.5 - (float)v25) * (float)(79.5 - (float)v25));
              v40 = v39 < 36.0;
              v41 = fsqrt(v39);
              if ( !v40 )
              {
                v27 = 253;
                v26 = 253;
              }
              if ( v41 < 3.5 )
              {
                v28 = 64;
                v26 = 64;
                v27 = 64;
              }
            }
            else
            {
              v26 = 128;
              v28 = 32;
              v27 = 160;
            }
          }
          else
          {
            v28 = 159;
            v26 = 180;
            v27 = 253;
          }
        }
        else
        {
          v28 = 96;
          v26 = 96;
          v27 = 96;
          if ( (int)v8 <= v6 && (unsigned int)(v12 - 96) <= 3 && (unsigned int)(v25 - 42) <= 5 )
          {
            v29 = 192;
            v28 = (int)(float)(*(float *)&v11 * 255.0);
            v26 = (int)(float)(*(float *)&v10 * 255.0);
            v27 = (int)(float)(*(float *)&v9 * 255.0);
          }
          v35 = (v12 - 80) >> 2;
          v36 = abs32(v25 - 32);
          if ( v36 < v35 || (int)abs32(v25 - 31) < v35 )
          {
            v29 = 0;
            v28 = 192;
            v26 = 192;
            v27 = 192;
            if ( (_DWORD)v8 == g_183EBE448 )
            {
              if ( v12 < 126 && (unsigned int)(v25 - 31) <= 1 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              if ( v12 < 124 && (unsigned int)(v25 - 30) <= 3 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
            if ( (int)v8 <= v6 && v12 < 126 )
            {
              v37 = (v12 - 112) >> 1;
              if ( v36 < v37 || (int)abs32(v25 - 31) < v37 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              v38 = (120 - v12) >> 2;
              if ( v36 < v38 || (int)abs32(v25 - 31) < v38 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
          }
        }
      }
      if ( g_1862AE010 )
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v28 << 8) + v29 + (v26 << 16) + (v27 << 24);
      else
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v29 << 24) + v27 + (v28 << 16) + (v26 << 8);
      v14 = g_1B0037420;
      ++v25;
      v23 = g_183EBF07C;
      v24 = g_183EBF074;
      v21 = g_183EBF108;
      v22 = g_183EBF0F4;
      if ( v25 >= (int)g_1B0037420 )
      {
        v15 = g_1B0037424;
        goto LABEL_160;
      }
    }
    v27 = 32;
    goto LABEL_61;
  }
  v13 = g_1862AE010;
  v14 = 16;
  v15 = 16;
  g_1B0037420 = 16;
  g_1B0037424 = 16;
  do
  {
    v16 = 0;
    if ( v14 <= 0 )
      goto LABEL_44;
    do
    {
      if ( v12 == 15 )
      {
        if ( v16 < 8 )
        {
LABEL_34:
          v17 = 32;
          v19 = 32;
          v20 = 32;
          v18 = 32;
          if ( v12 != 1 )
            goto LABEL_39;
          v17 = 255;
          v19 = 255;
          v20 = 255;
          if ( v16 != 1 )
            goto LABEL_39;
          v17 = 192;
          v18 = 192;
LABEL_37:
          v19 = 16;
        }
        else
        {
          v17 = 96;
          v18 = 32;
          v19 = 96;
        }
LABEL_38:
        v20 = v19;
        goto LABEL_39;
      }
      if ( v12 )
        goto LABEL_34;
      v17 = 32;
      v19 = 32;
      v20 = 32;
      v18 = 192;
      switch ( v16 )
      {
        case 1:
          v17 = 128;
          goto LABEL_37;
        case 2:
          v20 = 96;
          break;
        case 3:
          v17 = 128;
          v19 = 128;
          goto LABEL_38;
        case 4:
          v17 = 224;
          v19 = 224;
          goto LABEL_38;
        case 5:
          v17 = 219;
          v20 = 89;
          v19 = 192;
          break;
        case 6:
          v17 = 0;
          v19 = 0;
          v20 = 0;
          break;
      }
LABEL_39:
      if ( v13 )
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v20 << 8) + v18 + (v19 << 16) + (v17 << 24);
      else
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v18 << 24) + v17 + (v20 << 16) + (v19 << 8);
      v14 = g_1B0037420;
      ++v16;
    }
    while ( v16 < (int)g_1B0037420 );
    v15 = g_1B0037424;
LABEL_44:
    ++v12;
  }
  while ( v12 < v15 );
LABEL_162:
  v42 = 44 * v8;
  dword_140404A6C[v42 + 284024938] = a3;
  dword_140404A6C[v42 + 284024939] = a4;
  dword_140404A6C[v42 + 284024940] = a5;
  dword_140404A6C[v42 + 284024941] = a6;
  dword_140404A6C[v42 + 284024933] = v14;
  dword_140404A6C[v42 + 284024934] = v15;
  dword_140404A6C[v42 + 284024935] = 1;
  dword_140404A6C[v42 + 284024936] = 6408;
  dword_140404A6C[v42 + 284024937] = 6408;
  dword_140404A6C[v42 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v8 + 284024945]);
  v43 = sr_path_malloc((int)(4 * dword_140404A6C[v42 + 284024933] * dword_140404A6C[v42 + 284024934]));
  v44 = 0;
  *(_QWORD *)&dword_140404A6C[v42 + 284024945] = v43;
  if ( (int)dword_140404A6C[44 * v8 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v42 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v42 + 284024945] + 4LL * v47) = dword_140404A6C[v46 + 468765295] )
      {
        v46 = i + v44 * g_1B0037420;
        v47 = i + dword_140404A6C[v42 + 284024933] * v44;
        ++i;
      }
      ++v44;
    }
    while ( v44 < (int)dword_140404A6C[v42 + 284024934] );
  }
  if ( v7 )
    sub_14009A370(v8);
  sub_14014D3E0(v8, 1);
}

//----- (000000014009C040) ----------------------------------------------------
double            sub_14009C040(int a1, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009C040[16];
#define v47 (*(float (*))(void *)(sr_frame_14009C040 + 0)) /* [rsp+40h] */
#define v48 (*(int (*))(void *)(sr_frame_14009C040 + 4)) /* [rsp+44h] */

  v2 = 0;
  v4 = a1;
  v5 = 44LL * a2;
  g_1B0037420 = 512;
  g_1B0037424 = 512;
  dword_140404A6C[v5 + 284024933] = 512;
  dword_140404A6C[v5 + 284024934] = 512;
  dword_140404A6C[v5 + 284024935] = 1;
  dword_140404A6C[v5 + 284024936] = 6408;
  dword_140404A6C[v5 + 284024937] = 6408;
  dword_140404A6C[v5 + 284024943] = 0;
  dword_140404A6C[v5 + 284024938] = 10497;
  dword_140404A6C[v5 + 284024939] = 10497;
  dword_140404A6C[v5 + 284024940] = 9729;
  dword_140404A6C[v5 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v5 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v5 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[v5 + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  *(unsigned int *)&renderer_canvas_width = 1140850688;
  *(unsigned int *)&renderer_canvas_height = 1140850688;
  glViewport(0, 0, 512, 512);
  v6 = 0.0;
  sub_140079F00(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = 0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  /* 0x14009C374..0x14009C39E: xmm6 = 384.0 (0x14009C33F), xmm7 = 512.0 (0x14009C178), zeros from xorps */
  sub_14007D420(0.0f, 384.0f, 0.0f);
  sub_14007D420(512.0f, 384.0f, 0.0f);
  sub_14007D420(512.0f, 0.0f, 0.0f);
  sub_14007D420(0.0f, 0.0f, 0.0f);
  sub_14006E0D0(v24, v23, v25);
  LOBYTE(v26) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  v27 = renderer_current_font;
  renderer_current_font = 3;
  if ( (_DWORD)v4 != -1 )
  {
    glBindTexture(3553, dword_140404A6C[44 * g_183EBFA88 + 284024944]);
    g_1AD059440 = 1;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    do
    {
      if ( v2 >= 1000 )
        break;
      v31 = (unsigned __int8)aHelloWorld[v2];
      v32 = 39;
      g_1AD299450 = xmmword_140279700;
      if ( (unsigned __int8)(v31 - 65) <= 0x19u )
        v32 = v31 - 52;
      v48 = 1107296256;
      v6 = v6 + 16.0;
      *(float *)&v33 = (float)(v32 >> 4) * 0.0625;
      v47 = v6;
      *(float *)&v34 = (float)(v32 & 0xF) * 0.0625;
      g_1AD299460 = v34;
      *(float *)&g_1AD299464 = *(float *)&v33 + 0.0625;
      sub_14007D320((unsigned int *)&v47, v31, v30);
      *(float *)&g_1AD299464 = *(float *)&v33 + 0.0625;
      v47 = v6 + 16.0;
      *(float *)&g_1AD299460 = *(float *)&v34 + 0.0625;
      sub_14007D320((unsigned int *)&v47, v35, v36);
      *(float *)&g_1AD299460 = *(float *)&v34 + 0.0625;
      g_1AD299464 = v33;
      v48 = 1098907648;
      sub_14007D320((unsigned int *)&v47, v37, v38);
      v47 = v6;
      g_1AD299460 = v34;
      g_1AD299464 = v33;
      sub_14007D320((unsigned int *)&v47, v39, v40);
      ++v2;
    }
    while ( aHelloWorld[v2] );
    sub_14006E0D0(v29, v28, v30);
    /* 0x14009C583: x = 320.0 (0x14009C56E), y = size = xmm12 = 16.0 (0x14009C3CC) */
    sub_140187860(40, 320.0f, 16.0f, 16.0);
    {
      /* 0x14009C5BA: x, y = twice the two ints at [rbp * 1B80h + 42BBB4E8h] (0x14009C5A2, 0x14009C598, addss
         each to itself); the C had passed a byte offset and an undefined local */
      float sr_x = (float)(int)dword_140404A6C[1760 * v4 + 278846111];
      float sr_y = (float)(int)dword_140404A6C[1760 * v4 + 278846112];
      sub_140187860(40, sr_x + sr_x, sr_y + sr_y, 16.0);
    }
  }
  glBindFramebuffer(36160, 0);
  renderer_current_font = v27;
  glEnable(3042);
  LOBYTE(v44) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(v45) = 1;
  glDepthMask(v45);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}
#undef v47
#undef v48

//----- (000000014009C680) ----------------------------------------------------
__int64            sub_14009C680(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int *v13;
  unsigned int v14;
  unsigned int v15;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned int v49;
  __m128i v50;
  __int64 v51;
  __int64 v52;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009C680[1120];
#define v54 (*(_DWORD (*)[20])(void *)(sr_frame_14009C680 + 0)) /* [rsp+0h] */
#define v55 (*(__int16 (*)[512])(void *)(sr_frame_14009C680 + 80)) /* [rsp+50h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_14009C680 + 1104)) /* [rsp+450h] */

  v3 = 44LL * a2;
  v4 = a1;
  g_1B0037420 = 512;
  g_1B0037424 = 512;
  dword_140404A6C[v3 + 284024933] = 512;
  dword_140404A6C[v3 + 284024934] = 512;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  *(unsigned int *)&renderer_canvas_width = 1140850688;
  *(unsigned int *)&renderer_canvas_height = 1140850688;
  glViewport(0, 0, 512, 512);
  sub_140079F00(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glBindTexture(3553, renderer_white_texture);
  v12 = 0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  v13 = &g_1665C4B48;
  do
  {
    v14 = *v13;
    *(unsigned int *)&g_1AD299450 = *(v13 - 1);
    v15 = v13[1];
    g_1AD299454 = v14;
    g_1AD299458 = v15;
    g_1AD29945C = 0;
    /* 0x14009CA1E..0x14009CA70: x0 = i * 16 (xmm7), x1 = (i + 1.0) * 16 (xmm6); y 496 (xmm12, 0x14009C9E6)
       and 512 (xmm11, 0x14009C7D7); z = 0 (xmm8, 0x14009C846) */
    sub_14007D420((float)v12 * 16.0f, 496.0f, 0.0f);
    sub_14007D420(((float)v12 + 1.0f) * 16.0f, 496.0f, 0.0f);
    sub_14007D420(((float)v12 + 1.0f) * 16.0f, 512.0f, 0.0f);
    sub_14007D420((float)v12 * 16.0f, 512.0f, 0.0f);
    ++v12;
    v13 += 6;
  }
  while ( v12 < (int)g_1665C4B40 );
  sub_14006E0D0(v10, v9, v11);
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  /* 0x14009CAD0..0x14009CB02: xmm6 = 384.0 (0x14009CAA0), xmm11 = 512.0 (0x14009C7D7), xmm8 = 0 (0x14009C846) */
  sub_14007D420(0.0f, 384.0f, 0.0f);
  sub_14007D420(512.0f, 384.0f, 0.0f);
  sub_14007D420(512.0f, 0.0f, 0.0f);
  sub_14007D420(0.0f, 0.0f, 0.0f);
  sub_14006E0D0(v38, v37, v39);
  LOBYTE(v40) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  v41 = renderer_current_font;
  v42 = 16.0;
  renderer_current_font = 3;
  if ( (_DWORD)v4 != -1 )
  {
    glBindTexture(3553, g_1519AE8C4);
    v44 = 23;
    v45 = 1760 * v4;
    v46 = 110 * v4;
    v47 = dword_140404A6C[v45 + 278846112];
    do
    {
      sub_140187C70(
        (__int64)&dword_140404A6C[16 * (v46 + v47) + 278846114],
        (__int64)&dword_140404A6C[16 * (v46 + v47) + 278846626],
        8.0f /* 0x14009CBB8: x = xmm7 = 8.0 (0x14009CB6C); the C had passed an undefined local */,
        v42,
        16.0);
      v42 = v42 + 16.0;
      v47 = ((_BYTE)v47 + 1) & 0x1F;
      --v44;
    }
    while ( v44 );
    v48 = dword_140404A6C[v45 + 278846113];
    if ( v48 != -1 )
    {
      v54[16] = 1065353216;
      v49 = (v48 >> 6) - dword_140404A6C[v45 + 278846112];
      v54[14] = 1065353216;
      v54[12] = 1065353216;
      v55[0] = 127;
      v50 = _mm_castps_si128(_mm_set_ss((float)(v49 & 0x1F)));
      v54[10] = 1065353216;
      v54[8] = 64;
      *(float *)SR_VEC_LANES(128, v50, i32) = (float)(*(float *)SR_VEC_LANES(128, v50, i32) + 1.0) * 16.0;
      sr_text_draw_recovered((char *)v55, (float)((float)(v48 & 0x3F) + 1.0) * 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v50))), 16.0, 64u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009CC53 */;
    }
  }
  glBindFramebuffer(36160, 0);
  renderer_current_font = v41;
  glEnable(3042);
  LOBYTE(v51) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(v52) = 1;
  glDepthMask(v52);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* native stack-cookie check is non-returning only on corruption */
}
#undef v54
#undef v55
#undef v56

//----- (000000014009CD10) ----------------------------------------------------
__int64            sub_14009CD10(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  __m128i v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 i;
  unsigned __int8 v16;
  int v17;
  char v18;
  __int64 v19;
  __int64 v20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009CD10[1120];
#define v22 (*(_DWORD (*)[20])(void *)(sr_frame_14009CD10 + 0)) /* [rsp+0h] */
#define v23 (*(unsigned __int8 (*)[1024])(void *)(sr_frame_14009CD10 + 80)) /* [rsp+50h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14009CD10 + 1104)) /* [rsp+450h] */

  v3 = 44LL * a2;
  v4 = a1;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  dword_140404A6C[v3 + 284024933] = 1024;
  dword_140404A6C[v3 + 284024934] = 1024;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  glEnable(3553);
  glEnable(3042);
  glBlendFunc(770,771);
  sub_14007A2C0(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1149239296;
  glViewport(0, 0, 1024, 1024);
  sub_140079F00(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glEnable(3042);
  v9 = renderer_current_font;
  v10 = 0;
  v11 = _mm_cvtsi32_si128((int)(0x41800000u));
  v12 = 0;
  v13 = 1760 * v4;
  renderer_current_font = 3;
  do
  {
    if ( !*((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12) )
      break;
    v14 = 0;
    for ( i = 0; i < 1024; ++i )
    {
      v16 = v23[(_QWORD)&g_182BBB4E8 + v12 + v13 * 4 - (_QWORD)v23 + i];
      if ( !v16 )
        break;
      if ( v16 == 10 )
        break;
      v23[i] = v16;
      ++v14;
    }
    if ( (unsigned __int64)i >= 0x400 )
      sub_1401F8694();
    v22[16] = 1065353216;
    v22[14] = 0;
    v22[12] = 0;
    v22[10] = 0;
    v23[i] = 0;
    v22[8] = 64;
    sr_text_draw_recovered((char *)v23, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11))), 32.0, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D105 */;
    v12 += i;
    v17 = v14 + v10;
    v18 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
    if ( v18 )
    {
      *(float *)SR_VEC_LANES(128, v11, i32) = *(float *)SR_VEC_LANES(128, v11, i32) + 32.0;
      if ( v18 == 10 )
        ++v12;
    }
    v10 = v17 + 1;
    if ( v18 != 10 )
      v10 = v17;
  }
  while ( v12 < 1024 );
  glBindFramebuffer(36160, 0);
  renderer_current_font = v9;
  glEnable(3042);
  LOBYTE(v19) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  glEnable(2929);
  LOBYTE(v20) = 1;
  glDepthMask(v20);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v22
#undef v23
#undef v24

//----- (000000014009D210) ----------------------------------------------------
__int64            sub_14009D210(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __m128i v10;
  int v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  __int64 i;
  unsigned __int8 v17;
  int v18;
  char v19;
  __int64 v20;
  __int64 v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009D210[1120];
#define v23 (*(__int64 (*))(void *)(sr_frame_14009D210 + 0)) /* [rsp+0h] */
#define v24 (*(int (*))(void *)(sr_frame_14009D210 + 32)) /* [rsp+20h] */
#define v25 (*(int (*))(void *)(sr_frame_14009D210 + 40)) /* [rsp+28h] */
#define v26 (*(int (*))(void *)(sr_frame_14009D210 + 48)) /* [rsp+30h] */
#define v27 (*(int (*))(void *)(sr_frame_14009D210 + 56)) /* [rsp+38h] */
#define v28 (*(int (*))(void *)(sr_frame_14009D210 + 64)) /* [rsp+40h] */
#define v29 (*(unsigned __int8 (*)[1024])(void *)(sr_frame_14009D210 + 80)) /* [rsp+50h] */
#define v30 (*(__int64 (*))(void *)(sr_frame_14009D210 + 1104)) /* [rsp+450h] */

  v3 = 44LL * a2;
  v4 = a1;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  dword_140404A6C[v3 + 284024933] = 1024;
  dword_140404A6C[v3 + 284024934] = 1024;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  glEnable(3553);
  glEnable(3042);
  glBlendFunc(770,771);
  sub_14007A2C0(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1149239296;
  glViewport(0, 0, 1024, 1024);
  sub_140079F00(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glEnable(3042);
  v9 = renderer_current_font;
  v28 = 1065353216;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  renderer_current_font = 2;
  v24 = 65;
  sr_text_draw_recovered("The Readme", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 48.0, 65u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D588 */;
  v10 = _mm_cvtsi32_si128((int)(0x42C00000u));
  v11 = 0;
  v12 = 0;
  v13 = 1760 * v4;
  do
  {
    v14 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
    if ( !v14 )
      break;
    v15 = 0;
    for ( i = 0; i < 1024; ++i )
    {
      v17 = v29[(_QWORD)&g_182BBB4E8 + v12 + v13 * 4 - (_QWORD)v29 + i];
      if ( !v17 )
        break;
      if ( v17 == 10 )
        break;
      v29[i] = v17;
      ++v15;
    }
    if ( i <= 0 )
    {
      *(float *)SR_VEC_LANES(128, v10, i32) = *(float *)SR_VEC_LANES(128, v10, i32) + 32.0;
      if ( v14 == 10 )
      {
        ++v11;
        ++v12;
      }
    }
    else
    {
      if ( (unsigned __int64)i >= 0x400 )
        sub_1401F8694();
      v28 = 1065353216;
      v27 = 0;
      v26 = 0;
      v25 = 0;
      v29[i] = 0;
      v24 = 64;
      sr_text_draw_recovered((char *)v29, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10))), 32.0, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D673 */;
      v12 += i;
      v18 = v15 + v11;
      v19 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
      if ( v19 )
      {
        *(float *)SR_VEC_LANES(128, v10, i32) = *(float *)SR_VEC_LANES(128, v10, i32) + 32.0;
        if ( v19 == 10 )
          ++v12;
      }
      v11 = v18 + 1;
      if ( v19 != 10 )
        v11 = v18;
    }
  }
  while ( v12 < 1024 );
  glBindFramebuffer(36160, 0);
  renderer_current_font = v9;
  glEnable(3042);
  LOBYTE(v20) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  glEnable(2929);
  LOBYTE(v21) = 1;
  glDepthMask(v21);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30

//----- (000000014009DA10) ----------------------------------------------------
double            sub_14009DA10(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  char *v11;
  __m128i v12;
  __int64 v13;
  __int64 v14;

  v3 = 44LL * a1;
  v4 = a2;
  g_1B0037420 = 256;
  g_1B0037424 = 64;
  dword_140404A6C[v3 + 284024933] = 256;
  dword_140404A6C[v3 + 284024934] = 64;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a1, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sub_14007A2C0(
    0,
    0,
    g_1B0037420,
    g_1B0037424,
    (float)(int)g_1B0037420,
    (float)(int)g_1B0037424,
    (float)(int)g_1B0037424);
  (renderer_canvas_width) = (float)(int)g_1B0037420;
  (renderer_canvas_height) = (float)(int)g_1B0037424;
  glViewport(0, 0, g_1B0037420, g_1B0037424);
  sub_140079F00(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.0f,0.25f,0.0f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  LOBYTE(v9) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  v10 = renderer_current_font;
  v11 = (char *)off_1402B2C00[v4];
  v12 = _mm_castps_si128(_mm_set_ss((float)(int)g_1B0037424));
  renderer_current_font = g_182A7CFE8;
  *(float *)SR_VEC_LANES(128, v12, i32) = *(float *)SR_VEC_LANES(128, v12, i32) * 0.5;
  sr_text_draw_recovered(v11, (float)(int)g_1B0037420 * 0.5, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v12))), 52.0, 5u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009DDAE */;
  glBindFramebuffer(36160, 0);
  glBindTexture(3553, dword_140404A6C[v3 + 284024944]);
  glGenerateMipmap(3553);
  renderer_current_font = v10;
  glEnable(3042);
  LOBYTE(v13) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(v14) = 1;
  glDepthMask(v14);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (00000001400A0EB0) ----------------------------------------------------
void            sub_1400A0EB0(int a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  signed int v7;
  float v8;
  unsigned int v9;
  float v10;
  float v11;
  float v12;
  unsigned int *v13;
  float v14;
  unsigned int *v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  double v25;
  unsigned int v26;
  unsigned int v27;
  double v28;
  double v29;
  double v30;
  unsigned int v31;
  float v32;

  v2 = 3597LL * a1;
  v3 = a1;
  v4 = g_18329CC24 == 0;
  dword_140404A6C[v2 + 71856325] = 0;
  if ( v4 )
  {
    v5 = (int)dword_140404A6C[v2 + 71856292];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 7166 * v5;
      if ( dword_140404A6C[7166 * v5 + 280651313] != -1 )
      {
        v7 = -1;
        if ( (int)dword_140404A6C[v6 + 280658139] > 0 )
          v7 = dword_140404A6C[v6 + 280658140];
        v4 = dword_140404A6C[v2 + 71856340] == 2;
        dword_140404A6C[v2 + 71856330] = 1;
        if ( !v4 )
        {
          *(_QWORD *)&dword_140404A6C[v2 + 71856297] = 0;
          dword_140404A6C[v2 + 71856293] = 0x40000000;
          dword_140404A6C[v2 + 71856295] = -1082130432;
        }
        if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 18 )
          *(float *)&dword_140404A6C[v2 + 71856331] = (float)((float)(int)g_160FC481C * 0.125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856331];
        else
          sub_1400A2C00(a1, v7);
        v8 = *(float *)&dword_140404A6C[v2 + 71856331];
        if ( v8 >= 0.0 )
        {
          if ( v8 > 0.625 )
          {
            v8 = 0.625;
            dword_140404A6C[v2 + 71856331] = 1059061760;
          }
        }
        else
        {
          v8 = 0.0;
          dword_140404A6C[v2 + 71856331] = 0;
        }
        v4 = g_183F7C754 == 0;
        *(float *)&v9 = (float)((float)(v8 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                      + *(float *)&dword_140404A6C[v2 + 71856332];
        dword_140404A6C[v2 + 71856332] = v9;
        v10 = 1.0 - *(float *)&v9;
        if ( v4 )
        {
          v4 = g_151E46198 == 0;
          v11 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&dword_140404A6C[v2 + 71856297] = (float)((float)(g_183F7C6C8 * v10)
                                                            * 0.001953125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856297];
          if ( v4 )
            v12 = (float)((float)(g_183F7C6CC * v10) * 0.001953125) + v11;
          else
            v12 = v11 - (float)((float)(g_183F7C6CC * v10) * 0.001953125);
          *(float *)&dword_140404A6C[v2 + 71856298] = v12;
          v13 = &dword_140404A6C[v2 + 71856293];
          v14 = *(float *)&dword_140404A6C[v2 + 71856293];
          if ( v14 >= 0.5 )
          {
            if ( v14 >= 1.5 )
              *v13 = 0x40000000;
            else
              *v13 = 1065353216;
          }
          else
          {
            *v13 = 0;
          }
          v15 = &dword_140404A6C[v2 + 71856295];
          v16 = *(float *)&dword_140404A6C[v2 + 71856295];
          if ( v16 >= -0.375 )
          {
            if ( v16 <= 0.375 )
              *v15 = 0;
            else
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
        }
        else
        {
          v13 = &dword_140404A6C[v2 + 71856293];
          v15 = &dword_140404A6C[v2 + 71856295];
          v17 = (float)(g_183F7C6C8 * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856293];
          v18 = (float)(g_183F7C6CC * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856295];
          *(float *)&dword_140404A6C[v2 + 71856293] = v17;
          *(float *)&dword_140404A6C[v2 + 71856295] = v18;
          if ( v17 >= -0.125 )
          {
            if ( v17 > 2.125 )
              *v13 = 1074266112;
          }
          else
          {
            *v13 = -1107296256;
          }
          if ( v18 >= -1.0 )
          {
            if ( v18 > 1.0 )
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
          dword_140404A6C[v2 + 71856325] |= 2u;
        }
        v19 = *(float *)&dword_140404A6C[v2 + 71856297];
        if ( v19 >= -3.14159265359 )
        {
          if ( v19 > 3.14159265359 )
            dword_140404A6C[v2 + 71856297] = 1078530011;
        }
        else
        {
          dword_140404A6C[v2 + 71856297] = -1068953637;
        }
        v20 = *(float *)&dword_140404A6C[v2 + 71856298];
        if ( v20 >= -1.570796326795 )
        {
          if ( v20 > 1.570796326795 )
            dword_140404A6C[v2 + 71856298] = 1070141403;
        }
        else
        {
          dword_140404A6C[v2 + 71856298] = -1077342245;
        }
        if ( !g_18329B180 )
        {
          v21 = *(float *)&dword_140404A6C[v2 + 71856296];
          if ( BYTE2(g_183F7C978) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.03125;
          }
          else if ( BYTE2(g_183F7C974) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.03125;
          }
          else if ( v21 < 0.125 )
          {
            if ( v21 > -0.125 )
              dword_140404A6C[v2 + 71856296] = 0;
            else
              *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.125;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.125;
          }
          v22 = *(float *)&dword_140404A6C[v2 + 71856294];
          if ( LOBYTE(g_183F7C964) )
          {
            if ( v22 <= -0.72187501 )
            {
              v22 = -0.75;
              dword_140404A6C[v2 + 71856294] = -1086324736;
              v23 = -0.75;
            }
            else
            {
              v22 = v22 - 0.028125001;
              *(float *)&dword_140404A6C[v2 + 71856294] = v22;
              v23 = v22;
            }
          }
          else if ( v22 >= -0.037500001 )
          {
            v23 = *(float *)&dword_140404A6C[v2 + 71856294];
            if ( v22 < 0.0 )
            {
              v22 = 0.0;
              dword_140404A6C[v2 + 71856294] = 0;
              v23 = 0.0;
            }
          }
          else
          {
            v22 = v22 + 0.037500001;
            *(float *)&dword_140404A6C[v2 + 71856294] = v22;
            v23 = v22;
          }
          if ( HIBYTE(g_183F7C964) )
          {
            if ( v22 >= 0.72187501 )
              dword_140404A6C[v2 + 71856294] = 1061158912;
            else
              *(float *)&dword_140404A6C[v2 + 71856294] = v23 + 0.028125001;
          }
          else if ( v22 <= 0.037500001 )
          {
            if ( v22 > 0.0 )
              dword_140404A6C[v2 + 71856294] = 0;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856294] = v23 - 0.037500001;
          }
          if ( LOBYTE(g_183F7C98C) )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( LOBYTE(g_183F7CA40) )
            dword_140404A6C[v2 + 71856325] |= 8u;
          if ( BYTE1(g_183F7CA40) )
            dword_140404A6C[v2 + 71856325] |= 0x10u;
          if ( v7 != -1 )
          {
            v24 = 1760LL * v7;
            if ( dword_140404A6C[v24 + 278845898] == 25 && dword_140404A6C[v24 + 278846052] == 1 )
              sub_1400A2DC0(a1, v7);
          }
          if ( LOBYTE(g_183F7C968) )
            dword_140404A6C[v2 + 71856325] |= 0x800u;
          if ( BYTE1(g_183F7C974) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
          if ( BYTE1(g_183F7C968) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          if ( LOBYTE(g_183F7C9AC) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
        }
        if ( toggle_183f7c2fc )
        {
          v4 = g_184397BA4 == 0;
          v25 = g_184397B64 * 2.3561944901925;
          *(float *)&v26 = fabs(g_184397B5C) * g_184397B5C * 0.75;
          *(float *)&v27 = g_184397B70 - g_184397B6C;
          dword_140404A6C[v2 + 71856294] = v26;
          v28 = *(float *)&dword_140404A6C[v2 + 71856297];
          dword_140404A6C[v2 + 71856296] = v27;
          v29 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&v28 = (v25 - v28) * 0.0625 + v28;
          v30 = g_184397B68;
          dword_140404A6C[v2 + 71856297] = LODWORD(v28);
          *(float *)&dword_140404A6C[v2 + 71856298] = (v30 * 2.3561944901925 - v29) * 0.0625 + v29;
          if ( !v4 )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( g_184397BA8 && !g_184393DA8 )
            dword_140404A6C[v2 + 71856329] = -1;
          if ( g_184397BA0 && !g_184393DA0 )
            dword_140404A6C[v2 + 71856329] = 0;
          v31 = dword_140404A6C[v2 + 71856329];
          if ( !v31 )
          {
            *v13 = 0x40000000;
            *v15 = -1082130432;
            v31 = dword_140404A6C[v2 + 71856329];
          }
          if ( v31 == -1 )
          {
            *v13 = 0x40000000;
            *v15 = 1065353216;
          }
        }
        sub_14009EA20(a1, v5);
        v32 = *(float *)&dword_140404A6C[v2 + 71856296];
        if ( v32 >= -1.0 )
        {
          if ( v32 > 1.0 )
            dword_140404A6C[v2 + 71856296] = 1065353216;
        }
        else
        {
          dword_140404A6C[v2 + 71856296] = -1082130432;
        }
      }
    }
  }
}

//----- (00000001400A5890) ----------------------------------------------------
void            sub_1400A5890(float *a1)
{
  float v2;
  float v3;
  float v4;
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
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5890[32];
#define v28 (*(float (*))(void *)(sr_frame_1400A5890 + 0)) /* [rsp+D0h] */
#define v29 (*(float (*))(void *)(sr_frame_1400A5890 + 8)) /* [rsp+D8h] */
#define v30 (*(float (*))(void *)(sr_frame_1400A5890 + 16)) /* [rsp+E0h] */

  v2 = g_18417DE78;
  v3 = g_18417DE7C;
  v4 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v3 * v3) * 246016.0)))
     - (float)(g_18417DE7C * 496.0);
  v5 = g_18417DE78 * v4;
  v6 = g_18417DE80 * v4;
  v28 = g_18417DE7C * v4;
  v7 = (float)((float)(g_18417DE7C * v4) * 0.375) + 496.0;
  v8 = fsqrt(
         (float)((float)((float)(v4 * g_18417DE7C)
                       * (float)(v4 * g_18417DE7C))
               + (float)(v5 * v5))
       + (float)(v6 * v6));
  v9 = (float)((float)((float)((float)(g_18417DE78 * v4) * 0.375)
                     * g_18417DE78)
             + (float)(v7 * g_18417DE7C))
     + (float)((float)((float)(g_18417DE80 * v4) * 0.375)
             * g_18417DE80);
  v10 = (float)(fsqrt(
                  262144.0
                - (float)((float)((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) * 0.140625) + (float)(v7 * v7))
                        - (float)(v9 * v9)))
              - v9)
      * 0.0390625;
  v11 = expf(-(float)(*(float *)&dword_1402B23D0 * v10));
  v12 = *(float *)&dword_1402B23D4;
  v29 = v11;
  v13 = expf(-(float)(*(float *)&dword_1402B23D4 * v10));
  v14 = *(float *)&dword_1402B23D8;
  v30 = v13;
  v15 = 0.0;
  v16 = expf(-(float)(*(float *)&dword_1402B23D8 * v10));
  if ( v8 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v17 = v5 * (float)(1.0 / v8);
    v15 = (float)(1.0 / v8) * v28;
    v18 = v6 * (float)(1.0 / v8);
  }
  v19 = g_18417DE80 * v18;
  v20 = v8 * 0.0390625;
  v21 = v8 * 0.014648438;
  v22 = (float)(v2 * v17) + (float)(v3 * v15);
  v23 = *(float *)&dword_1402B23D0;
  v24 = (float)((float)(v22 + v19) * (float)(v22 + v19)) + 1.0;
  v25 = expf(-(float)(*(float *)&dword_1402B23D0 * v21)) * (float)((float)((float)(v20 * v29) * v24) * v23);
  *a1 = v25;
  v26 = expf(-(float)(v12 * v21)) * (float)((float)((float)(v20 * v30) * v24) * v12);
  a1[1] = v26;
  v27 = expf(-(float)(v14 * v21)) * (float)((float)((float)(v20 * v16) * v24) * v14);
  a1[2] = v27;
  if ( v25 > 1.0 )
    *a1 = 1.0;
  if ( v26 > 1.0 )
    a1[1] = 1.0;
  if ( v27 > 1.0 )
    a1[2] = 1.0;
}
#undef v28
#undef v29
#undef v30

//----- (00000001400A5D30) ----------------------------------------------------
void sub_1400A5D30()
{
  float v0;
  float v1;
  float v2;
  float v3;
  float v4;
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
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5D30[32];
#define v27 (*(float (*))(void *)(sr_frame_1400A5D30 + 0)) /* [rsp+D0h] */
#define v28 (*(float (*))(void *)(sr_frame_1400A5D30 + 8)) /* [rsp+D8h] */
#define v29 (*(float (*))(void *)(sr_frame_1400A5D30 + 16)) /* [rsp+E0h] */
#define v30 (*(float (*))(void *)(sr_frame_1400A5D30 + 24)) /* [rsp+E8h] */

  v0 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)(g_18417DE7C * g_18417DE7C)
                       * 246016.0)))
     - (float)(g_18417DE7C * 496.0);
  v30 = fsqrt(
          (float)((float)((float)(g_18417DE7C * v0)
                        * (float)(g_18417DE7C * v0))
                + (float)((float)(g_18417DE78 * v0)
                        * (float)(g_18417DE78 * v0)))
        + (float)((float)(g_18417DE80 * v0)
                * (float)(g_18417DE80 * v0)))
      * 0.029296875;
  v1 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F618C * *(float *)&dword_1402F618C) * 246016.0)))
     - (float)(*(float *)&dword_1402F618C * 496.0);
  v27 = fsqrt(
          (float)((float)((float)((float)((float)(v1 * v1) * *(float *)&dword_1402F618C) * *(float *)&dword_1402F618C)
                        + (float)((float)(v1 * *(float *)&dword_1402F6190) * (float)(v1 * *(float *)&dword_1402F6190)))
                * 0.09765625)
        + (float)((float)((float)(v1 * 0.09765625) * v1)
                * (float)(*(float *)&dword_1402F6188 * *(float *)&dword_1402F6188)))
      * 0.029296875;
  v2 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F617C * *(float *)&dword_1402F617C) * 246016.0)))
     - (float)(*(float *)&dword_1402F617C * 496.0);
  v28 = fsqrt(
          (float)((float)((float)((float)((float)(v2 * v2) * *(float *)&dword_1402F617C) * *(float *)&dword_1402F617C)
                        + (float)((float)(v2 * *(float *)&dword_1402F6180) * (float)(v2 * *(float *)&dword_1402F6180)))
                * 0.09765625)
        + (float)((float)((float)(v2 * 0.09765625) * v2)
                * (float)(*(float *)&dword_1402F6178 * *(float *)&dword_1402F6178)))
      * 0.029296875;
  v3 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)((float)-*(float *)&dword_1402F617C * (float)-*(float *)&dword_1402F617C) * 246016.0)))
     - (float)((float)-*(float *)&dword_1402F617C * 496.0);
  v29 = fsqrt(
          (float)((float)((float)((float)(v3 * 0.09765625) * (float)-*(float *)&dword_1402F617C)
                        * (float)(v3 * (float)-*(float *)&dword_1402F617C))
                + (float)((float)((float)(v3 * 0.09765625) * v3)
                        * (float)((float)-*(float *)&dword_1402F6178 * (float)-*(float *)&dword_1402F6178)))
        + (float)((float)((float)(v3 * 0.09765625) * v3)
                * (float)((float)-*(float *)&dword_1402F6180 * (float)-*(float *)&dword_1402F6180)))
      * 0.029296875;
  v4 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F619C * *(float *)&dword_1402F619C) * 246016.0)))
     - (float)(*(float *)&dword_1402F619C * 496.0);
  v5 = -*(float *)&dword_1402F619C;
  v6 = fsqrt(
         (float)((float)((float)((float)((float)(v4 * v4) * *(float *)&dword_1402F619C) * *(float *)&dword_1402F619C)
                       + (float)((float)(v4 * *(float *)&dword_1402F61A0) * (float)(v4 * *(float *)&dword_1402F61A0)))
               * 0.09765625)
       + (float)((float)((float)(v4 * 0.09765625) * v4)
               * (float)(*(float *)&dword_1402F6198 * *(float *)&dword_1402F6198)))
     * 0.029296875;
  v7 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v5 * v5) * 246016.0))) - (float)(v5 * 496.0);
  v8 = fsqrt(
         (float)((float)((float)((float)(v7 * 0.09765625) * v7)
                       * (float)((float)-*(float *)&dword_1402F6198 * (float)-*(float *)&dword_1402F6198))
               + (float)((float)((float)(v5 * v5) * 0.09765625) * (float)(v7 * v7)))
       + (float)((float)((float)(v7 * 0.09765625) * v7)
               * (float)((float)-*(float *)&dword_1402F61A0 * (float)-*(float *)&dword_1402F61A0)))
     * 0.029296875;
  v9 = *(float *)&dword_1402B23D0;
  v10 = 1.0
      - (float)((float)((float)(1.0 - g_18417DE7C)
                      * (float)(1.0 - g_18417DE7C))
              * (float)((float)(1.0 - g_18417DE7C)
                      * (float)(1.0 - g_18417DE7C)));
  v11 = expf(-(float)(v28 * *(float *)&dword_1402B23D0));
  v12 = v11 + expf(-(float)(v29 * v9));
  v13 = expf(-(float)(v6 * v9));
  v14 = (float)(v12 + (float)(v13 + expf(-(float)(v8 * v9)))) * 0.5;
  v15 = v14 + (float)(expf(-(float)(v9 * v27)) * 0.75);
  v16 = *(float *)&dword_1402B23D4;
  g_184178D40 = (float)(v15 * v10) * 0.75;
  v17 = expf(-(float)(v28 * *(float *)&dword_1402B23D4));
  v18 = v17 + expf(-(float)(v29 * v16));
  v19 = expf(-(float)(v6 * v16));
  v20 = (float)(v18 + (float)(v19 + expf(-(float)(v8 * v16)))) * 0.5;
  v21 = expf(-(float)(v16 * v27));
  v22 = *(float *)&dword_1402B23D8;
  g_184178D44 = (float)((float)(v20 + (float)(v21 * 0.75)) * v10) * 0.75;
  v23 = expf(-(float)(v28 * *(float *)&dword_1402B23D8));
  v24 = v23 + expf(-(float)(v29 * v22));
  v25 = expf(-(float)(v6 * v22));
  v26 = (float)(v24 + (float)(v25 + expf(-(float)(v8 * v22)))) * 0.5;
  g_184178D48 = (float)((float)(v26 + (float)(expf(-(float)(v22 * v27)) * 0.75)) * v10) * 0.75;
  g_184178D50 = expf(-(float)(v9 * v30)) * 1.125;
  g_184178D54 = expf(-(float)(v16 * v30)) * 1.125;
  g_184178D58 = expf(-(float)(v22 * v30)) * 1.125;
}
#undef v27
#undef v28
#undef v29
#undef v30

//----- (00000001400A6DF0) ----------------------------------------------------
__int64 sub_1400A6DF0()
{
  __int64 v0;

  glEnable(3553);
  LOBYTE(v0) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD))glStencilFunc)(517, 0, 0xFFFFFFFFLL);
}

//----- (00000001400A6E90) ----------------------------------------------------
__int64 sub_1400A6E90()
{
  __int64 v0;

  glEnable(3553);
  LOBYTE(v0) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD))glStencilFunc)(514, 0, 0xFFFFFFFFLL);
}

//----- (00000001400A6F30) ----------------------------------------------------
double sub_1400A6F30()
{
  __int64 v0;
  __int64 v1;

  glEnable(3553);
  LOBYTE(v0) = 1;
  glColorMask(1,1,1,0);
  LOBYTE(v1) = 1;
  glDepthMask(v1);
  glDisable(3042);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(2960);
}

//----- (00000001400A6FB0) ----------------------------------------------------
__int64 sub_1400A6FB0()
{
  __int64 v0;

  glDisable(3553);
  glColorMask(0,0,0,0);
  glDepthMask(0);
  glEnable(2929);
  v0 = 518;
  if ( g_151E46194 )
    v0 = 515;
  glDepthFunc(v0);
  glDisable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilFuncSeparate(1029, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1029, 0xFFFFFFFFLL);
  glStencilOpSeparate(1029, 7680, 7680, 34056);
  glStencilFuncSeparate(1028, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1028, 0xFFFFFFFFLL);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glStencilOpSeparate)(1028, 7680, 7680, 34055);
}

//----- (00000001400C2DB0) ----------------------------------------------------
__int64            sub_1400C2DB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3;
  __int64 i;
  int v5;
  __int64 v6;
  unsigned int *v7;
  int v8;
  int v9;
  unsigned int *v10;
  int v11;
  int v13;

  v3 = &g_18AB10F98;
  for ( i = 0; i < 6; ++i )
  {
    if ( !*(v3 - 3147781) )
      v3[98305] = 0;
    *(v3 - 3147782) = 34962;
    if ( (unsigned __int64)i < 2 )
    {
      v5 = 128;
    }
    else
    {
      *(v3 - 3147782) = 34963;
      v5 = 64;
    }
    *(v3 - 3147780) = v5;
    v6 = 0x4000;
    *(v3 - 3147779) = 0x80000;
    v7 = v3;
    *(v3 - 3147778) = 128;
    do
    {
      *v7 = -1;
      v7 += 6;
      --v6;
    }
    while ( v6 );
    v8 = *(v3 - 3147780);
    v9 = 0;
    if ( v8 > 0 )
    {
      v10 = v3 - 3147776;
      do
      {
        *(_QWORD *)(v10 - 1) = 0;
        v10 += 3074;
        v8 = *(v3 - 3147780);
        ++v9;
      }
      while ( v9 < v8 );
    }
    v3[98304] = 0;
    if ( !*(v3 - 3147781) )
    {
      v11 = *(v3 - 3147779) * v8;
      glBindBuffer(*(v3 - 3147782), dword_140404A6C[2 * dword_140404A6C[i + 283791462] + 283793813]);
      glBufferData(*(v3 - 3147782), (int)(*(v3 - 3147779) * *(v3 - 3147780)), 0, 35048);
      glGetBufferParameteriv(*(v3 - 3147782), 34660, &v13);
      if ( v11 != v13 )
      {
        v3[98305] = 1;
        sub_140198F95(16, (__int64)"Error", (__int64)"Videomem malloc failed");
        g_160FC47C0 = 1;
      }
    }
    *(v3 - 3147781) = 1;
    v3 += 3246088;
  }
  g_18F5BD060 = 34962;
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C20 + 283793813]);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(g_18F5BD060, 0x80000, 0, 35048);
}

//----- (00000001400D4360) ----------------------------------------------------
double            sub_1400D4360(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  double result;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  signed int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  signed int v26;
  signed int i;
  __int64 v28;
  signed int v29;
  int v30;

  v7 = g_183EBF160;
  v8 = a3;
  v9 = 1024;
  v10 = a3;
  v11 = 0;
  v12 = a3;
  v13 = 0;
  v14 = a3;
  v15 = a1;
  v16 = 1024;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  v30 = 0;
  do
  {
    v17 = 0;
    if ( v9 > 0 )
    {
      do
      {
        if ( (_DWORD)v15 == g_183EBF15C || (_DWORD)v15 == v7 )
        {
          v8 = 151;
          v12 = 84;
          if ( (_DWORD)v15 == v7 && (unsigned int)(v11 - 576) <= 0xBF && (unsigned int)(v17 - 256) <= 0xBF )
          {
            v8 = 123;
            v12 = 123;
          }
          v14 = 255;
          v10 = 123;
        }
        if ( (_DWORD)v15 == g_183EBF158 )
        {
          v14 = 0;
          v18 = (((v13 + v17) << 13) ^ (v13 + v17)) * (((v13 + v17) << 13) ^ (v13 + v17));
          v8 = (int)(float)((float)(16.0
                                  - (float)((float)(((15731 * v18 + 789221) * (15731 * v18 + 789221) - 771171059)
                                                  & 0x7FFFFFFF)
                                          * 0.000000014901161))
                          + 192.0);
          v12 = v8;
          v10 = v8;
          *(_QWORD *)&result = SR_VEC_READ_LANES(128, sub_1400384F0((float)v17, (float)v11, 1023), u64)[0];
          v13 = v30;
          if ( *(float *)&result > 0.25 )
          {
            *(float *)&result = (float)(*(float *)&result - 0.25) * 128.0;
            v14 = (int)*(float *)&result;
          }
        }
        if ( g_1862AE010 )
        {
          v19 = v14 + (v10 << 16);
          v20 = v12 << 8;
          v21 = v8 << 24;
        }
        else
        {
          v19 = v8 + (v12 << 16);
          v20 = v14 << 24;
          v21 = v10 << 8;
        }
        v22 = v20 + v19 + v21;
        v23 = v17 + v11 * v9;
        ++v17;
        dword_140404A6C[v23 + 468765295] = v22;
        v9 = g_1B0037420;
        v7 = g_183EBF160;
      }
      while ( v17 < (int)g_1B0037420 );
      v16 = g_1B0037424;
    }
    v13 += 57;
    ++v11;
    v30 = v13;
  }
  while ( v11 < v16 );
  v24 = 44 * v15;
  dword_140404A6C[v24 + 284024938] = a3;
  dword_140404A6C[v24 + 284024939] = a4;
  dword_140404A6C[v24 + 284024940] = a5;
  dword_140404A6C[v24 + 284024941] = a6;
  dword_140404A6C[v24 + 284024933] = v9;
  dword_140404A6C[v24 + 284024934] = v16;
  dword_140404A6C[v24 + 284024935] = 1;
  dword_140404A6C[v24 + 284024936] = 6408;
  dword_140404A6C[v24 + 284024937] = 6408;
  dword_140404A6C[v24 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v15 + 284024945]);
  v25 = sr_path_malloc((int)(4 * dword_140404A6C[v24 + 284024933] * dword_140404A6C[v24 + 284024934]));
  v26 = 0;
  *(_QWORD *)&dword_140404A6C[v24 + 284024945] = v25;
  if ( (int)dword_140404A6C[44 * v15 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v24 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v24 + 284024945] + 4LL * v29) = dword_140404A6C[v28 + 468765295] )
      {
        v28 = i + v26 * g_1B0037420;
        v29 = i + v26 * dword_140404A6C[v24 + 284024933];
        ++i;
      }
      ++v26;
    }
    while ( v26 < (int)dword_140404A6C[v24 + 284024934] );
  }
  if ( a2 )
    sub_14009A370(v15);
  sub_14014D3E0(v15, 1);
  return result;
}

//----- (00000001400E3AB0) ----------------------------------------------------
__int64 sub_1400E3AB0()
{
  int v0;
  __int64 result;
  __int64 v2;
  int v3;
  unsigned int *v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E3AB0[16];
#define v8 (*(unsigned int (*))(void *)(sr_frame_1400E3AB0 + 0)) /* [rsp+24h] */
#define v9 (*(unsigned int (*))(void *)(sr_frame_1400E3AB0 + 4)) /* [rsp+28h] */

  v0 = 0;
  result = sub_140198EB7();
  if ( (int)result > 0 )
  {
    do
    {
      if ( v0 < 512 )
      {
        sub_140198EBD();
        v2 = (int)g_184393D30;
        v3 = 0;
        if ( (int)g_184393D30 <= 0 )
        {
LABEL_8:
          v5 = 3 * v2;
          dword_140404A6C[v5 + 284532901] = v8;
          dword_140404A6C[v5 + 284532902] = v9;
          dword_140404A6C[v5 + 284532903] = 32;
          g_184393D30 = v2 + 1;
        }
        else
        {
          v4 = &g_18416CD04;
          while ( 1 )
          {
            if ( *(v4 - 1) == v8 )
            {
              *v4 = v9;
              if ( v9 )
                break;
            }
            ++v3;
            v4 += 3;
            if ( v3 >= (int)v2 )
              goto LABEL_8;
          }
        }
      }
      ++v0;
      result = sub_140198EB7();
    }
    while ( v0 < (int)result );
  }
  v6 = 3LL * (int)g_184393D30;
  v7 = g_184393D30 + 1;
  dword_140404A6C[v6 + 284532901] = 1024;
  dword_140404A6C[v6 + 284532902] = 640;
  dword_140404A6C[v6 + 284532903] = 32;
  g_184393D30 = v7;
  return result;
}
#undef v8
#undef v9

//----- (000000014011DA50) ----------------------------------------------------
void            sub_14011DA50(int a1)
{
  __int64 v1;
  unsigned int *v2;
  __int64 v3;
  __int64 v4;
  signed int v5;
  int v6;
  unsigned int *v7;
  float *v8;
  float *v9;
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
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011DA50[16];
#define v31 (*(unsigned int * (*))(void *)(sr_frame_14011DA50 + 0)) /* [rsp+E0h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_14011DA50 + 8)) /* [rsp+E8h] */

  v1 = 4;
  v32 = 4;
  v2 = &dword_140404A6C[6930 * a1 + 83200503];
  v31 = v2;
  do
  {
    if ( v2[780] )
    {
      v3 = (int)*v2;
      if ( (int)v3 >= 0 )
      {
        glBindTexture(3553,
          dword_140404A6C[44 * dword_140404A6C[4 * mark_texture_choice + 283827814] + 284024944]);
        v4 = 8969 * v3;
        v5 = 0;
        g_1AD059448 = 0;
        g_1AD05944C = 6;
        if ( (int)dword_140404A6C[8969 * v3 + 73995254] > 0 )
        {
          v6 = g_1841FA224;
          v7 = &dword_140404A6C[v4 + 73995255];
          v8 = (float *)&dword_140404A6C[v4 + 73995261];
          v9 = (float *)&dword_140404A6C[v4 + 73995266];
          do
          {
            if ( *v7 )
            {
              if ( v6 < 0x4000 )
              {
                v10 = *v8;
                v11 = *(v9 - 4);
                v12 = *(v9 - 3);
                v13 = v9[1];
                v14 = *(v9 - 2);
                v15 = *(v9 - 1);
                v16 = *v9;
                v17 = v9[4];
                v18 = v9[5];
                v19 = v9[2];
                v20 = v9[3];
                v21 = v9[6];
                v22 = 17LL * v6;
                *(float *)&dword_140404A6C[v22 + 284677616] = v11;
                *(float *)&dword_140404A6C[v22 + 284677617] = v12;
                *(float *)&dword_140404A6C[v22 + 284677615] = v10;
                v23 = 17LL * (int)g_1841FA224;
                *(float *)&dword_140404A6C[v23 + 284677618] = v14;
                *(float *)&dword_140404A6C[v23 + 284677619] = v15;
                *(float *)&dword_140404A6C[v23 + 284677620] = v16;
                v24 = 17LL * (int)g_1841FA224;
                v25 = (float)((float)((float)(v11 + v15) + v19) + v18) * 0.25;
                v26 = (float)((float)(v14 + v10) + v13) + v17;
                *(float *)&dword_140404A6C[v24 + 284677621] = v13;
                v27 = g_183F7C548;
                *(float *)&dword_140404A6C[v24 + 284677622] = v19;
                *(float *)&dword_140404A6C[v24 + 284677623] = v20;
                v28 = 17LL * (int)g_1841FA224;
                *(float *)&dword_140404A6C[v28 + 284677624] = v17;
                v29 = g_183F7C54C;
                *(float *)&dword_140404A6C[v28 + 284677625] = v18;
                v30 = g_183F7C544;
                *(float *)&dword_140404A6C[v28 + 284677626] = v21;
                *(float *)&dword_140404A6C[17 * g_1841FA224 + 284677630] = fsqrt(
                                                                                            (float)((float)((float)(v27 - v25) * (float)(v27 - v25))
                                                                                                  + (float)((float)(v30 - (float)(v26 * 0.25)) * (float)(v30 - (float)(v26 * 0.25))))
                                                                                          + (float)((float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))
                                                                                                  * (float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))));
                sub_14006EC40(
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 68LL * (int)g_1841FA224 + 1142923864),
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677615],
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677618],
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677621]);
                v6 = ++g_1841FA224;
              }
            }
            ++v5;
            v7 += 21;
            v8 += 21;
            v9 += 21;
          }
          while ( v5 < (int)dword_140404A6C[v4 + 73995254] );
          v2 = v31;
          v1 = v32;
        }
      }
    }
    ++v2;
    --v1;
    v31 = v2;
    v32 = v1;
  }
  while ( v1 );
}
#undef v31
#undef v32

//----- (000000014011E210) ----------------------------------------------------
void            sub_14011E210(int a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int *v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int *v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if ( g_18B7D2FBC || g_18C434FDC )
    return;
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
  glEnableVertexAttribArray(0);
  if ( a1 != 1 )
  {
    glEnableVertexAttribArray(1);
    if ( !a1 )
    {
      glEnableVertexAttribArray(2);
      v5 = 0;
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      goto LABEL_7;
    }
  }
  v5 = 0;
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
  if ( a1 != 1 )
  {
LABEL_7:
    glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
    if ( a1 )
    {
      if ( a1 == 2 )
        glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
    }
    else
    {
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
  }
  v7 = &g_149F54C20;
  v8 = &g_183EBC404;
  v9 = &g_149F55020;
  v10 = &g_14DF55020;
  do
  {
    if ( (int)*v7 <= 0 )
      goto LABEL_28;
    if ( a1 )
    {
      if ( a1 != 2 )
        goto LABEL_26;
      glUseProgram(renderer_ui_program);
      glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
      glActiveTexture(33984);
      v15 = dword_140404A6C[44 * *v8 + 284024944];
      v16 = 3553;
    }
    else
    {
      if ( v5 == g_1A4CFF7E4 )
      {
        glUseProgram(object_program);
        glUniform3fv(object_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(object_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(object_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(object_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniformMatrix4fv(object_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        v11 = object_u_flags;
      }
      else
      {
        glUseProgram(world_program);
        glUniform3fv(world_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(world_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(world_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(world_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniformMatrix4fv(world_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        v11 = world_u_flags;
      }
      glUniform1i(v11, 0);
      v12 = 3553;
      if ( v5 == g_1A4CFF7E4 )
        v12 = 35866;
      glBindTexture(v12, dword_140404A6C[44 * *v8 + 284024944]);
      glActiveTexture(33985);
      glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
      if ( v5 == g_1A4CFF7E4 )
      {
        glActiveTexture(33986);
        v13 = dword_140404A6C[44 * v8[1] + 284024944];
        v14 = 35866;
      }
      else
      {
        glActiveTexture(33986);
        v13 = dword_140404A6C[44 * v8[1] + 284024944];
        v14 = 3553;
      }
      glBindTexture(v14, v13);
      glActiveTexture(33987);
      glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
      glActiveTexture(33988);
      glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
      glActiveTexture(33989);
      v15 = dword_140404A6C[44 * g_183EBC420 + 284024944];
      v16 = 35866;
    }
    glBindTexture(v16, v15);
LABEL_26:
    unk_140404808(4, v9, 5125, v10, *v7, v9 + 25165824);
    if ( !a1 )
      glActiveTexture(33984);
LABEL_28:
    ++v5;
    v9 += 0x4000;
    v10 += 0x8000;
    v8 += 4;
    ++v7;
  }
  while ( v5 < 256 );
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  if ( a1 == 1 || (((double (*)(_QWORD))glDisableVertexAttribArray)(1), a1) )
  {
    glDisableVertexAttribArray(0);
  }
  else
  {
    glDisableVertexAttribArray(2);
    glDisableVertexAttribArray(0);
    glUseProgram(0);
  }
}

// 14011E71A: conditional instruction was optimized away because edi.4!=0

//----- (0000000140122690) ----------------------------------------------------
__int64            sub_140122690(float a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  LOBYTE(a3) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glEnable(3042);
  glBlendFunc(1,770);
  glViewport(0,
    0,
    (unsigned int)(int)g_184178D08,
    (unsigned int)(int)g_184178D0C);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278E80;
  g_1A724E5B0 = xmmword_140279760;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(sky_program);
  glUniform3fv(sky_u_worldposition, 1, (unsigned int *)&g_1841FA1C8);
  glUniform3fv(sky_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(sky_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform1i(sky_u_flags, 0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE414 + 284024944]);
  *(_QWORD *)&g_1AD05944C = 6;
  g_1AD059454 = 1065353216;
  g_1AD059458 = -964689984;
  g_1AD059468 = 1065353216;
  g_1AD05946C = 1065353216;
  g_1AD059470 = -964689984;
  *(float *)&g_1AD05945C = (float)((float)(g_183F7C550
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  g_1AD059460 = (float)((float)(g_183F7C554
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C560
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C56C;
  *(float *)&g_1AD059464 = (float)((float)(g_183F7C558
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C564
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C570;
  *(float *)&g_1AD05947C = (float)((float)(g_183F7C564
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C558
                                                        * g_183F7C574))
                                        - g_183F7C570;
  *(float *)&g_1AD059474 = (float)((float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C550
                                                        * g_183F7C574))
                                        - g_183F7C568;
  g_1AD059478 = (float)((float)(g_183F7C560
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C554
                                                        * g_183F7C574))
                                        - g_183F7C56C;
  g_1AD059490 = (float)((float)(g_183F7C554
                                                        * g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C560))
                                        - g_183F7C56C;
  v4 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  g_1AD059480 = 1065353216;
  *(float *)&g_1AD05948C = (float)((float)(g_183F7C550
                                                        * g_183F7C574)
                                                - (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  g_1AD059488 = -964689984;
  g_1AD059498 = 0;
  g_1AD0594A0 = -964689984;
  g_1AD059448 = 4;
  *(float *)&g_1AD059494 = (float)((float)(g_183F7C558
                                                        * g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C564))
                                        - g_183F7C570;
  *(float *)&g_1AD0594A4 = (float)((float)(g_183F7C550
                                                        * (float)-g_183F7C574)
                                                - (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  *(float *)&g_1AD0594AC = (float)((float)(g_183F7C558
                                                        * (float)-g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C564))
                                        - g_183F7C570;
  *(float *)&g_1AD0594A8 = (float)((float)(g_183F7C554
                                                        * (float)-g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C560))
                                        - g_183F7C56C;
  glBindBuffer(34962, v4);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glDrawArrays(6, 0, g_1AD059448);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glBindBuffer(34962, 0);
  glUseProgram(0);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(v7) = 1;
  glDepthMask(v7);
  glEnable(2884);
  return (*(__int64 (           **)(__int64))(unsigned int *)&glFrontFace)(2304);
}

//----- (0000000140122CA0) ----------------------------------------------------
double            sub_140122CA0(float a1, float *a2, __int64 a3)
{
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  float v8;
  float v9;
  float v10;
  float v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;

  LOBYTE(a3) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glDisable(3042);
  glBlendFunc(1,770);
  glViewport(0, 0, 512, 512);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278EB0;
  g_1A724E5B0 = xmmword_140279730;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(sky_program);
  glUniform3fv(sky_u_worldposition, 1, (unsigned int *)&g_1841FA1C8);
  glUniform3fv(sky_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(sky_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF170 + 284024944]);
  g_1AD059448 = 0;
  g_1AD05944C = 6;
  v5 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  *(float *)&v6 = (float)((float)(a1 * a2[5]) - a2[2]) - a2[8];
  *(float *)&v7 = (float)((float)(a1 * a2[3]) - *a2) - a2[6];
  g_1AD059460 = (float)((float)(a1 * a2[4]) - a2[1]) - a2[7];
  v8 = a1;
  g_1AD059464 = v6;
  v9 = a1;
  g_1AD059448 = 1;
  g_1AD059450 = 0;
  g_1AD05945C = v7;
  v10 = a1;
  v11 = -a1;
  *(_QWORD *)&g_1AD059454 = 1065353216;
  *(float *)&v12 = (float)((float)(v9 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v13 = (float)((float)(v10 * a2[3]) + *a2) - a2[6];
  g_1AD059478 = (float)((float)(v8 * a2[4]) + a2[1]) - a2[7];
  g_1AD05947C = v12;
  g_1AD059448 = 2;
  g_1AD059468 = 1065353216;
  g_1AD059474 = v13;
  *(_QWORD *)&g_1AD05946C = 1065353216;
  *(float *)&v14 = (float)((float)(v11 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v15 = (float)((float)(v11 * a2[3]) + *a2) - a2[6];
  g_1AD059490 = (float)((float)(v11 * a2[4]) + a2[1]) - a2[7];
  g_1AD059494 = v14;
  g_1AD059448 = 3;
  g_1AD059480 = 1065353216;
  g_1AD05948C = v15;
  g_1AD059488 = 0;
  *(float *)&v16 = (float)((float)(v11 * a2[3]) - *a2) - a2[6];
  *(float *)&v17 = (float)((float)(v11 * a2[4]) - a2[1]) - a2[7];
  *(float *)&v18 = (float)((float)(v11 * a2[5]) - a2[2]) - a2[8];
  g_1AD059498 = 0;
  g_1AD0594A0 = 0;
  g_1AD0594A4 = v16;
  g_1AD0594A8 = v17;
  g_1AD0594AC = v18;
  g_1AD059448 = 4;
  glBindBuffer(34962, v5);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glDrawArrays(6, 0, g_1AD059448);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glUseProgram(0);
  glEnable(2929);
  LOBYTE(v20) = 1;
  glDepthMask(v20);
  glEnable(2884);
  glFrontFace(2304);
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(3042);
}

//----- (0000000140123190)

__int64 sub_140123190()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int *v8;
  __int64 v9;
  unsigned int *v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int *v17;
  __int64 v18;
  int v19;
  unsigned int *v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float *v29;
  float *v30;
  float *v31;
  signed __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float *v39;
  float *v40;
  __int64 v41;
  float *v42;
  signed __int64 v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float *v57;
  signed __int64 v58;
  __int64 v59;
  float v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  float *v65;
  float *v66;
  signed __int64 v67;
  __int64 v68;
  float v69;
  __int64 v70;
  float v71;
  float v72;
  float v73;
  float *v74;
  __int64 v75;
  signed __int64 v76;
  float v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
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
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _Alignas(16) unsigned sr_stencil_pass_matrix[16];
  __int64 v107;

  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE414 + 284024944], 0);
  glClearColor(0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0.0f);
  glStencilMask(0xFFFFFFFFLL);
  glClearStencil(0);
  if ( g_151E46194 )
    glClearDepth(0.0);
  glClear(17664);
  if ( g_151E46194 )
    glClearDepth(0x1.0000000000000p+0);
  glStencilMask(0);
  glDisable(3042);
  glUseProgram(land_mask_program);
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(land_mask_u_modelviewmatrix, 1, 0, (unsigned int *)&g_1A724E640);
  if ( !g_18B7D2FBC && !g_18C434FDC )
  {
    glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
    glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
    glEnableVertexAttribArray(0);
    v102 = 0;
    LODWORD(v101) = 64;
    glVertexAttribPointer(0,3,5126,0,64,NULL);
    v8 = &g_149F54C20;
    v9 = 256;
    v10 = &g_149F55020;
    v11 = &g_14DF55020;
    do
    {
      if ( (int)*v8 > 0 )
        unk_140404808(4, v10, 5125, v11, *v8, v10 + 25165824);
      v10 += 0x4000;
      v11 += 0x8000;
      ++v8;
      --v9;
    }
    while ( v9 );
    glBindBuffer(34963, 0);
    glBindBuffer(34962, 0);
    glDisableVertexAttribArray(0);
  }
  sub_140189E80(1, v4, v5);
  glEnableVertexAttribArray(0);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C10 + 283793813]);
  v16 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    v17 = (int *)&g_150F55024;
    do
    {
      sub_14011DDB0(*v17, 1);
      ++v16;
      ++v17;
    }
    while ( v16 < (int)g_150F55020 );
  }
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glDisableVertexAttribArray(0);
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(land_mask_u_modelviewmatrix, 1, 0, (unsigned int *)&g_1A724E640);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glUniform1i(land_mask_u_land_usemask, 1);
  sub_1400D22E0(1);
  glUniform1i(land_mask_u_land_usemask, 0);
  sub_140124AF0(1, 0);
  v19 = 0;
  if ( (int)world_particle_count > 0 )
  {
    v20 = &g_1A70AE580;
    do
    {
      if ( v20[2] )
      {
        v21 = *v20;
        v22 = 26LL * v19;
        if ( !*v20 )
        {
          v23 = (int)world_particle_mesh_0;
          sub_14007B990(&dword_140404A6C[v22 + 431138504], &dword_140404A6C[v22 + 431138510]);
          glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
          glEnableVertexAttribArray(0);
          glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v23 + 283790166] + 283793813]);
          v102 = 0;
          v23 *= 3632;
          LODWORD(v101) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + v23);
          glVertexAttribPointer(0,3,5126,0,(int)(uint32_t)v101,NULL);
          glVertexAttrib4fv(3, &g_184182220);
          glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + v23));
          glBindBuffer(34962, 0);
          glDisableVertexAttribArray(0);
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
          v21 = *v20;
        }
        if ( v21 == 1 )
        {
          v26 = (int)world_particle_mesh_1;
          sub_14007B990(&dword_140404A6C[v22 + 431138504], &dword_140404A6C[v22 + 431138510]);
          glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
          glEnableVertexAttribArray(0);
          glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v26 + 283790166] + 283793813]);
          v102 = 0;
          v26 *= 3632;
          LODWORD(v101) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + v26);
          glVertexAttribPointer(0,3,5126,0,(int)(uint32_t)v101,NULL);
          glVertexAttrib4fv(3, &g_184182220);
          glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + v26));
          glBindBuffer(34962, 0);
          glDisableVertexAttribArray(0);
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
        }
      }
      ++v19;
      v20 += 26;
    }
    while ( v19 < (int)world_particle_count );
  }
  v29 = (float *)&g_1A724E604;
  g_1A724E600 = xmmword_140278D30;
  v30 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E610 = xmmword_140278D80;
  v31 = (float *)&g_1A724E604;
  v32 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v33 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    v34 = *(v31 - 1);
    v35 = 4;
    v36 = *v31;
    v37 = v31[1];
    v38 = v31[2];
    do
    {
      *v30 = (float)((float)((float)(v34 * *(float *)((char *)v30 + v32 - 16))
                           + (float)(v36 * *(float *)((char *)v30 + v32)))
                   + (float)(v37 * *(float *)((char *)v30 + v32 + 16)))
           + (float)(v38 * *(float *)((char *)v30 + v32 + 32));
      ++v30;
      --v35;
    }
    while ( v35 );
    v31 += 4;
    v32 -= 16LL;
    --v33;
  }
  while ( v33 );
  v39 = (float *)&g_1A724E644;
  g_1A724E640 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v40 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E650 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  v41 = 4;
  v42 = (float *)&g_1A724E644;
  v43 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E660 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E670 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v44 = *(v42 - 1);
    v45 = 4;
    v46 = *v42;
    v47 = v42[1];
    v48 = v42[2];
    do
    {
      *v40 = (float)((float)((float)(v44 * *(float *)((char *)v40 + v43 - 16))
                           + (float)(v46 * *(float *)((char *)v40 + v43)))
                   + (float)(v47 * *(float *)((char *)v40 + v43 + 16)))
           + (float)(v48 * *(float *)((char *)v40 + v43 + 32));
      ++v40;
      --v45;
    }
    while ( v45 );
    v42 += 4;
    v43 -= 16LL;
    --v41;
  }
  while ( v41 );
  g_1A724E6C0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E6D0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6E0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6F0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  sub_1401259B0(1, v49, v50);
  glUseProgram(0);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * shading_texture + 284024944], 0);
  glClearColor(0.0f,0.0f,0.0f,0.0f);
  glClear(0x4000);
  glDisable(3553);
  glColorMask(0,0,0,0);
  glDepthMask(0);
  glEnable(2929);
  v55 = 518;
  if ( g_151E46194 )
    v55 = 515;
  glDepthFunc(v55);
  glDisable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilFuncSeparate(1029, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1029, 0xFFFFFFFFLL);
  glStencilOpSeparate(1029, 7680, 7680, 34056);
  glStencilFuncSeparate(1028, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1028, 0xFFFFFFFFLL);
  glStencilOpSeparate(1028, 7680, 7680, 34055);
  sub_1400946D0();
  LOBYTE(v56) = 1;
  glColorMask(1,1,0,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  glStencilFunc(514, 0, 0xFFFFFFFFLL);
  glViewport(0,
    0,
    (unsigned int)(int)g_184178D08,
    (unsigned int)(int)g_184178D0C);
  g_1A724E580 = xmmword_140278D30;
  g_1A724E590 = xmmword_140278D80;
  g_1A724E5A0 = xmmword_140278E90;
  g_1A724E5B0 = xmmword_140279720;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  v57 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v58 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v59 = 4;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  do
  {
    v60 = *(v29 - 1);
    v61 = 4;
    v62 = *v29;
    v63 = v29[1];
    v64 = v29[2];
    do
    {
      *v57 = (float)((float)((float)(v60 * *(float *)((char *)v57 + v58 - 16))
                           + (float)(v62 * *(float *)((char *)v57 + v58)))
                   + (float)(v63 * *(float *)((char *)v57 + v58 + 16)))
           + (float)(v64 * *(float *)((char *)v57 + v58 + 32));
      ++v57;
      --v61;
    }
    while ( v61 );
    v29 += 4;
    v58 -= 16LL;
    --v59;
  }
  while ( v59 );
  v65 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v66 = (float *)&g_1A724E5C4;
  g_1A724E640 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v67 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v68 = 4;
  g_1A724E650 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E660 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E670 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v69 = *(v66 - 1);
    v70 = 4;
    v71 = *v66;
    v72 = v66[1];
    v73 = v66[2];
    do
    {
      *v65 = (float)((float)((float)(v69 * *(float *)((char *)v65 + v67 - 16))
                           + (float)(v71 * *(float *)((char *)v65 + v67)))
                   + (float)(v72 * *(float *)((char *)v65 + v67 + 16)))
           + (float)(v73 * *(float *)((char *)v65 + v67 + 32));
      ++v65;
      --v70;
    }
    while ( v70 );
    v66 += 4;
    v67 -= 16LL;
    --v68;
  }
  while ( v68 );
  v74 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E680 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v75 = 4;
  v76 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E690 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6A0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6B0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v77 = *(v39 - 1);
    v78 = 4;
    v79 = *v39;
    v80 = v39[1];
    v81 = v39[2];
    do
    {
      *v74 = (float)((float)((float)(v77 * *(float *)((char *)v74 + v76 - 16))
                           + (float)(v79 * *(float *)((char *)v74 + v76)))
                   + (float)(v80 * *(float *)((char *)v74 + v76 + 16)))
           + (float)(v81 * *(float *)((char *)v74 + v76 + 32));
      ++v74;
      --v78;
    }
    while ( v78 );
    v39 += 4;
    v76 -= 16LL;
    --v75;
  }
  while ( v75 );
  g_1A724E6C0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E6D0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6E0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6F0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = xmmword_1402796E0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sub_14007D420(-1.0f, 1.0f, 0.0f);
  sub_14007D420(1.0f, 1.0f, 0.0f);
  sub_14007D420(1.0f, -1.0f, 0.0f);
  sub_14007D420(-1.0f, -1.0f, 0.0f);
  sub_14006E0D0(v95, v94, v96);
  glDisable(2960);
  LOBYTE(v97) = 1;
  glColorMask(1,1,1,0);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(v98) = 1;
  glDepthMask(1);
  glEnable(2884);
  glFrontFace(2304);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (0000000140123F80) ----------------------------------------------------
__int64            sub_140123F80(int a1)
{
  int i;
  float sr_terrain_light[3]; // native rsp+20h..28h vec3 upload
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140123F80[64];
#define v4 (*(__int64 (*))(void *)(sr_frame_140123F80 + 0)) /* [rsp+0h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140123F80 + 48)) /* [rsp+30h] */

  if ( !a1 )
  {
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    sr_terrain_light[0] = g_184178D40 * 0.5;
    sr_terrain_light[2] = g_184178D48 * 0.5;
    sr_terrain_light[1] = g_184178D44 * 0.5;
    glUniform3fv(terrain_u_lightambient, 1, sr_terrain_light);
    sr_terrain_light[0] = g_184178D50 * 0.5;
    sr_terrain_light[1] = g_184178D54 * 0.5;
    sr_terrain_light[2] = g_184178D58 * 0.5;
    glUniform3fv(terrain_u_lightdiffuse, 1, sr_terrain_light);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33988);
    glBindTexture(3553, renderer_white_texture);
  }
  glActiveTexture(33987);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glEnableVertexAttribArray(0);
  for ( i = 0; i < 64; ++i )
    sub_1400D2B90(i);
  glDisableVertexAttribArray(0);
  if ( !a1 )
  {
    glActiveTexture(33984);
    glUseProgram(0);
  }
  glDisable(32823);
  return 0; /* the function has no caller */
}
#undef v4
#undef v8

//----- (00000001401241B0) ----------------------------------------------------
double            sub_1401241B0(int a1)
{
  glEnable(32823);
  (*(void (**)(float,float))&flt_140384000[131078])(1.0f, 1.0f); /* glPolygonOffset: native XMM0, XMM1 */
  if ( !a1 )
  {
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glUniform3fv(terrain_u_lightambient, 1, (unsigned int *)&g_184178D40);
    glUniform3fv(terrain_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF154 + 284024944]);
    glActiveTexture(33985);
    glEnable(3553);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glEnable(3553);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF15C + 284024944]);
    glDisable(3553);
    glActiveTexture(33985);
    glDisable(3553);
    glActiveTexture(33984);
    glUseProgram(0);
  }
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(32823);
}

//----- (0000000140124320) ----------------------------------------------------
__int64 sub_140124320()
{
  int v1;
  __int64 v2;
  void *v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
  __int64 v14;
  unsigned int *v15;
  unsigned int *v16;
  unsigned int *v17;
  __int64 v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124320[128];
#define v19 (*(_DWORD (*)[10])(void *)(sr_frame_140124320 + 0)) /* [rsp+0h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140124320 + 40)) /* [rsp+28h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140124320 + 64)) /* [rsp+40h] */
#define v22 (*(float (*))(void *)(sr_frame_140124320 + 72)) /* [rsp+48h] */
#define v23 (*(_OWORD (*)[2])(void *)(sr_frame_140124320 + 80)) /* [rsp+50h] */
#define v24 (*(int (*))(void *)(sr_frame_140124320 + 112)) /* [rsp+70h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140124320 + 120)) /* [rsp+78h] */

  if ( g_183F7CB60 )
  {
    *(unsigned int *)&g_18399EB64 = 1148190720;
    *(unsigned int *)&g_18399EB6C = 1147142144;
    g_18399EB68 = 0;
    return 0; /* reset caller ignores native EAX */
  }
  else
  {
    v1 = g_183EBF11C;
    v2 = 44LL * (int)g_183EBF11C;
    dword_140404A6C[v2 + 284024933] = 512;
    dword_140404A6C[v2 + 284024934] = 512;
    dword_140404A6C[v2 + 284024935] = 1;
    dword_140404A6C[v2 + 284024936] = 6408;
    dword_140404A6C[v2 + 284024937] = 6408;
    dword_140404A6C[v2 + 284024938] = 33071;
    dword_140404A6C[v2 + 284024939] = 33071;
    dword_140404A6C[v2 + 284024940] = 9729;
    dword_140404A6C[v2 + 284024941] = 9729;
    v3 = *(void **)&dword_140404A6C[v2 + 284024945];
    *(_QWORD *)&g_18399EB64 = 1147142144;
    *(unsigned int *)&g_18399EB6C = 1147142144;
    free(v3);
    *(_QWORD *)&dword_140404A6C[v2 + 284024945] = 0;
    sub_14014D3E0(v1, 0);
    if ( glClipControl )
      glClipControl(36001, 37726);
    glClearDepth(1.0);
    glEnable(2929);
    glDepthFunc(515);
    LOBYTE(v4) = 1;
    glDepthMask(1);
    glEnable(2884);
    glFrontFace(2304);
    glDisable(3042);
    glColorMask(1,1,1,1);
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(16640);
    LOBYTE(v9) = 1;
    glColorMask(1,1,1,0);
    HIDWORD(v21) = 0;
    v23[0] = xmmword_140278D30;
    v24 = 1065353216;
    v23[1] = xmmword_140278D30;
    *(float *)&v21 = g_18399EB64 + 1024.0;
    v22 = g_18399EB6C + 1024.0;
    sub_14007B2A0((__int64)v23, (float *)v23, sr_export_float_lane_container(1070141403));
    sub_14007A2C0(0, 0, 1024, 640, 1024.0, 1024.0, 1024.0);
    sub_14007BE20((float *)&v21, (unsigned int *)v23);
    glViewport(0, 0, 512, 512);
    sub_14011CC30(0);
    if ( !g_18B7D2FBC && !g_18C434FDC )
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
      glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      v20 = 36;
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      v19[8] = 1065353216;
      glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      v13 = &g_149F54C20;
      v14 = 256;
      v15 = &g_183EBC404;
      v16 = &g_149F55020;
      v17 = &g_14DF55020;
      do
      {
        if ( (int)*v13 > 0 )
        {
          glUseProgram(renderer_ui_program);
          glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * *v15 + 284024944]);
          unk_140404808(4, v16, 5125, v17, *v13, v16 + 25165824);
        }
        v16 += 0x4000;
        v17 += 0x8000;
        v15 += 4;
        ++v13;
        --v14;
      }
      while ( v14 );
      glBindBuffer(34963, 0);
      glBindBuffer(34962, 0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(0);
    }
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF11C + 284024944]);
    LODWORD(v20) = 0;
    (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, int, int, __int64, float))&flt_140384000[131086])(
      3553,
      0,
      0,
      0,
      0,
      v20,
      512,
      512,
      v21,
      COERCE_FLOAT(LODWORD(v22)));
    return 0; /* reset caller ignores native EAX */
  }
}
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

//----- (0000000140124840) ----------------------------------------------------
double            sub_140124840(int a1, unsigned int *a2, _DWORD *a3, int a4, int *a5, __int64 a6)
{
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  double result;

  v8 = a1;
  if ( a4 )
  {
    if ( a4 == 2 )
    {
      glBindTexture(3553, dword_140404A6C[44 * *a5 + 284024944]);
      sub_14007B990(a2, a3);
    }
    else
    {
      sub_14007B990(a2, a3);
      if ( a4 == 1 )
        glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    }
    v10 = 0;
  }
  else
  {
    glActiveTexture(33984);
    glBindTexture(3553, dword_140404A6C[44 * *a5 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    sub_14007B990(a2, a3);
    glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    v10 = 2;
  }
  glEnableVertexAttribArray(v10);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v8 + 283790166] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(0));
  if ( !a4 )
  {
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(12));
    glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(20));
  }
  glVertexAttrib4fv(3, a6);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * v8 + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  if ( !a4 )
  {
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(2);
  }
  g_1A724E600 = xmmword_140278D30;
  result = 0.0;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  if ( !a4 )
    return ((double (*)(_QWORD))glActiveTexture)(33984);
  return result;
}

//----- (0000000140124AF0) ----------------------------------------------------
double            sub_140124AF0(int a1, int a2)
{
  int v2;
  signed int v4;
  signed int v5;
  unsigned int v6;
  unsigned int *v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  double result;
  int v15;

  v2 = a2;
  if ( !g_16B165F68 )
  {
    glUniform1i(model_u_flags, 0);
    glEnableVertexAttribArray(0);
    if ( (a1 & 0xFFFFFFFD) == 0 )
    {
      glEnableVertexAttribArray(1);
      glEnableVertexAttribArray(2);
      if ( !a1 )
      {
        glActiveTexture(33985);
        glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
        glActiveTexture(33986);
        glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
      }
    }
    v4 = g_18417E1B4;
    v5 = 0;
    v6 = -1;
    v15 = -1;
    if ( (int)g_18417E1B4 > 0 )
    {
      v7 = &g_18417E1B8;
      while ( 1 )
      {
        v8 = 30LL * (int)*v7;
        if ( (dword_140404A6C[v8 + 284554710] & 2) == 0 || v2 )
          break;
LABEL_21:
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_22;
      }
      v9 = (int)dword_140404A6C[v8 + 284554707];
      if ( a1 )
      {
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        if ( a1 != 1 )
        {
LABEL_16:
          if ( (_DWORD)v9 != v15 )
          {
            glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v9 + 283790166] + 283793813]);
            glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(0));
            if ( (a1 & 0xFFFFFFFD) == 0 )
            {
              glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(12));
              glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(20));
            }
            v15 = v9;
          }
          glVertexAttrib4fv(3, &dword_140404A6C[v8 + 284554733]);
          glDrawArrays(4, 0, 3 * dword_140404A6C[908 * v9 + 178527465]);
          v4 = g_18417E1B4;
          v2 = a2;
          goto LABEL_21;
        }
        glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        v10 = land_mask_u_modelviewmatrix;
        v11 = (unsigned int *)&g_1A724E640;
      }
      else
      {
        if ( dword_140404A6C[v8 + 284554711] != v6 )
        {
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[v8 + 284554711] + 284024944]);
          v6 = dword_140404A6C[v8 + 284554711];
        }
        glUniform3fv(model_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(model_u_objposition, 1, &dword_140404A6C[v8 + 284554715]);
        glUniformMatrix3fv(model_u_objorientation, 1, 0, &dword_140404A6C[v8 + 284554718]);
        glUniform3fv(model_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(model_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(model_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniform3fv(model_u_viewdirection, 1, (unsigned int *)&g_183F7C568);
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        v10 = model_u_modelviewprojectionmatrix;
        v11 = (unsigned int *)&g_1A724E6C0;
      }
      glUniformMatrix4fv(v10, 1, 0, v11);
      goto LABEL_16;
    }
LABEL_22:
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
    glBindBuffer(34962, 0);
    if ( a1 )
    {
      if ( a1 != 2 )
        return ((double (*)(_QWORD))glDisableVertexAttribArray)(0);
    }
    else
    {
      glActiveTexture(33986);
      glBindTexture(34067, 0);
      glActiveTexture(33984);
    }
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    return ((double (*)(_QWORD))glDisableVertexAttribArray)(2);
  }
  return result;
}

//----- (0000000140124FE0) ----------------------------------------------------
__int64            sub_140124FE0(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124FE0[80];
#define v14 (*(_DWORD (*)[10])(void *)(sr_frame_140124FE0 + 0)) /* [rsp+0h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140124FE0 + 40)) /* [rsp+28h] */
#define v16 (*(float (*)[4])(void *)(sr_frame_140124FE0 + 48)) /* [rsp+30h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140124FE0 + 64)) /* [rsp+40h] */

  v4 = a2;
  v5 = a1;
  v6 = g_18417DE80 * *(float *)(a4 + 32);
  v7 = g_18417DE80 * *(float *)(a4 + 20);
  v8 = (float)(g_18417DE7C * *(float *)(a4 + 16))
     + (float)(g_18417DE78 * *(float *)(a4 + 12));
  v9 = (float)(g_18417DE7C * *(float *)(a4 + 28))
     + (float)(g_18417DE78 * *(float *)(a4 + 24));
  v16[0] = (float)((float)(g_18417DE7C * *(float *)(a4 + 4))
                 + (float)(g_18417DE78 * *(float *)a4))
         + (float)(g_18417DE80 * *(float *)(a4 + 8));
  v16[1] = v8 + v7;
  v16[2] = v9 + v6;
  sub_14007B990(a3, (_DWORD *)a4);
  glUseProgram(shadow_program);
  glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
  glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
  glUniform3fv(shadow_u_lightdirection, 1, v16);
  glUniform1f((int)shadow_u_shadowlength,0x1.0000000000000p+6f);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[v4 + 283790166] + 283793814]);
  glEnableVertexAttribArray(0);
  v15 = 0;
  v14[8] = 4 * dword_140404A6C[908 * v5 + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v5+178527462]),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6 * dword_140404A6C[908 * v4 + 178527475]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v14
#undef v15
#undef v16
#undef v17

//----- (0000000140125270) ----------------------------------------------------
__int64            sub_140125270(int a1, unsigned int *a2, _DWORD *a3, __int64 a4, float a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v5 = a1;
  sub_14007B990(a2, a3);
  sub_14007B6F0(a5, a5, a5);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v5+178527462]),(const void *)(intptr_t)(0));
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * v5 + 178527465]);
  glDisableVertexAttribArray(0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sub_14007A0E0(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (00000001401253C0) ----------------------------------------------------
double sub_1401253C0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  unsigned int *v3;
  __int64 v4;
  int v5;
  int v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  unsigned int v27[4];

  glDepthMask(0);
  glBindTexture(3553, renderer_white_texture);
  glBlendFunc(770,1);
  v3 = &g_182BBB244;
  v4 = 1024;
  v5 = g_1665C4A18;
  g_1AD299450 = xmmword_140279300;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    if ( *(v3 - 49) )
    {
      v1 = v3[37];
      if ( (int)v1 > 0 )
      {
        v6 = 0;
        v7 = (float)((float)(int)v1 * 0.015625) + 0.125;
        if ( v5 > 0 )
        {
          v8 = 0;
          do
          {
            v9 = 3;
            do
            {
              v10 = *((float *)v3 - 1);
              v11 = *(float *)v3;
              v12 = *(unsigned int *)(g_1665C4A20 + v8);
              v13 = 3 * (int)v12;
              v14 = v7 * *(float *)(g_1665C4A10 + 4 * v13);
              v15 = v7 * *(float *)(g_1665C4A10 + 4 * v13 + 4);
              v16 = (float)((float)(v14 * *((float *)v3 - 8)) + *((float *)v3 - 26)) + (float)(v15 * *((float *)v3 - 5));
              v17 = (float)((float)(v14 * *((float *)v3 - 7)) + *((float *)v3 - 25)) + (float)(v15 * *((float *)v3 - 4));
              v18 = v7 * *(float *)(g_1665C4A10 + 4LL * (3 * (int)v12 + 2));
              v19 = (float)((float)(v14 * *((float *)v3 - 6)) + *((float *)v3 - 24)) + (float)(v15 * *((float *)v3 - 3));
              if ( (_DWORD)v12 == 1 )
                v20 = v18 * 1.5;
              else
                v20 = v18 * 3.0;
              v21 = (float)(*((float *)v3 - 2) * v20) + v16;
              v22 = (float)(v10 * v20) + v17;
              v23 = v11 * v20;
              v24 = *(float *)&dword_140404A6C[1268 * *(v3 - 44) + 278521315] - v7;
              *(float *)v27 = v21 + (float)(*((float *)v3 - 2) * v24);
              *(float *)&v27[1] = v22 + (float)(v10 * v24);
              *(float *)&v27[2] = (float)(v23 + v19) + (float)(v11 * v24);
              sub_14007D520(v27, v12, *(__int64 *)&g_1665C4A10);
              v8 += 4;
              --v9;
            }
            while ( v9 );
            v5 = g_1665C4A18;
            ++v6;
          }
          while ( v6 < (int)g_1665C4A18 );
        }
      }
    }
    v3 += 1760;
    --v4;
  }
  while ( v4 );
  sub_14006E0D0(v1, v0, v2);
  glBlendFunc(770,771);
  LOBYTE(v25) = 1;
  return (*(double (           **)(__int64))(unsigned int *)&glDepthMask)(v25);
}

//----- (0000000140125670) ----------------------------------------------------
__int64            sub_140125670(unsigned int *a1, float a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = a3;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  if ( a1 )
  {
    *(unsigned int *)&g_1A724E630 = *a1;
    g_1A724E634 = a1[1];
    g_1A724E638 = a1[2];
  }
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  sub_14007B6F0(a2, a2, a2);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  v4 = 5 * v3;
  glBindBuffer(34962, dword_140404A6C[2 * v4 + 159842277]);
  glBindBuffer(34963, dword_140404A6C[2 * v4 + 159842278]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * v4 + 159842283]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sub_14007A0E0(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (0000000140125860) ----------------------------------------------------
__int64            sub_140125860(unsigned int *a1, _DWORD *a2, float a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v4 = a4;
  sub_14007B990(a1, a2);
  sub_14007B6F0(a3, a3, a3);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  v4 *= 5;
  glBindBuffer(34962, dword_140404A6C[2 * v4 + 159842277]);
  glBindBuffer(34963, dword_140404A6C[2 * v4 + 159842278]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * v4 + 159842283]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sub_14007A0E0(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (00000001401259B0) ----------------------------------------------------
void            sub_1401259B0(int a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particledraw). Only a1 is an argument. */
  extern void world_draw_resting_particles(int depth_only);
  (void)a2;
  (void)a3;
  world_draw_resting_particles(a1);
}

//----- (0000000140125DB0) ----------------------------------------------------
void            sub_140125DB0(void)
{
  /* Clean implementation: src/engine/world_effects_draw.c, checked against the original executable
     (tools/native-compare suite effectsdraw). The original takes no arguments. */
  extern void world_draw_effects(void);
  world_draw_effects();
}

//----- (000000014013D1B0) ----------------------------------------------------
double sub_14013D1B0()
{
  int v0;
  __m128 v1;
  double v2;
  int i;
  double v4;
  double v5;
  unsigned int *v6;
  signed int v7;
  __m128i si128;
  double v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int j;
  __int64 v21;
  int v22;
  __int64 v23;

  v0 = 0;
  SR_VEC_LANES(128, v1, i32)[0] = 0;
  do
  {
    v2 = cos((float)v0++ * 0.1847995678582353);
    SR_VEC_LANES(128, v1, f32)[0] = v2 + SR_VEC_LANES(128, v1, f32)[0];
  }
  while ( v0 < 8 );
  for ( i = 1; i < 8; ++i )
  {
    v4 = cos((float)i * 0.1847995678582353);
    v5 = SR_VEC_LANES(128, v1, f32)[0];
    v1 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    SR_VEC_LANES(128, v1, f32)[0] = v4 + v5;
  }
  SR_VEC_LANES(128, v1, f32)[0] = SR_VEC_LANES(128, v1, f32)[0] * 0.875;
  v6 = &g_1841FA1E0;
  v7 = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F50);
  *(double *)SR_VEC_LANES(128, v1, u64) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v1, v1, 0), f32)[0];
  do
  {
    v9 = SR_VEC_READ_LANES(128, sub_1401F8B50(
                      SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 0), _mm_move_epi64(si128))), f32)[0]
                    * 0.1847995678582353), f64)[0];
    v7 += 2;
    v6 += 2;
    *((double *)v6 - 1) = v9 / *(double *)SR_VEC_LANES(128, v1, u64);
  }
  while ( v7 < 8 );
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    34842,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5126,
    0);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE428 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    32856,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5121,
    0);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE430 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    32856,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5121,
    0);
  v10 = shading_texture;
  v11 = 44LL * (int)shading_texture;
  dword_140404A6C[v11 + 284024933] = g_182A7D55C;
  dword_140404A6C[v11 + 284024934] = g_182A7D560;
  dword_140404A6C[v11 + 284024935] = 1;
  dword_140404A6C[v11 + 284024936] = 6408;
  dword_140404A6C[v11 + 284024937] = 32856;
  dword_140404A6C[v11 + 284024938] = 33071;
  dword_140404A6C[v11 + 284024939] = 33071;
  dword_140404A6C[v11 + 284024940] = 9729;
  dword_140404A6C[v11 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v11 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v11 + 284024945] = 0;
  sub_14014D3E0(v10, 0);
  v12 = g_183EBE414;
  v13 = 44LL * (int)g_183EBE414;
  dword_140404A6C[v13 + 284024933] = g_182A7D55C;
  dword_140404A6C[v13 + 284024934] = g_182A7D560;
  dword_140404A6C[v13 + 284024935] = 1;
  dword_140404A6C[v13 + 284024936] = 6408;
  dword_140404A6C[v13 + 284024937] = 32856;
  dword_140404A6C[v13 + 284024938] = 33071;
  dword_140404A6C[v13 + 284024939] = 33071;
  dword_140404A6C[v13 + 284024940] = 9728;
  dword_140404A6C[v13 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[v13 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v13 + 284024945] = 0;
  sub_14014D3E0(v12, 0);
  v14 = g_183EBE41C;
  v15 = 44LL * (int)g_183EBE41C;
  dword_140404A6C[v15 + 284024933] = g_182A7D55C;
  dword_140404A6C[v15 + 284024934] = g_182A7D560;
  dword_140404A6C[v15 + 284024935] = 1;
  dword_140404A6C[v15 + 284024936] = 6408;
  dword_140404A6C[v15 + 284024937] = 32856;
  dword_140404A6C[v15 + 284024938] = 33071;
  dword_140404A6C[v15 + 284024939] = 33071;
  dword_140404A6C[v15 + 284024940] = 9729;
  dword_140404A6C[v15 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v15 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v15 + 284024945] = 0;
  sub_14014D3E0(v14, 0);
  v16 = g_183EBE420;
  v17 = 44LL * (int)g_183EBE420;
  dword_140404A6C[v17 + 284024933] = g_182A7D55C;
  dword_140404A6C[v17 + 284024934] = g_182A7D560;
  dword_140404A6C[v17 + 284024935] = 1;
  dword_140404A6C[v17 + 284024936] = 6408;
  dword_140404A6C[v17 + 284024937] = 32856;
  dword_140404A6C[v17 + 284024938] = 33071;
  dword_140404A6C[v17 + 284024939] = 33071;
  dword_140404A6C[v17 + 284024940] = 9729;
  dword_140404A6C[v17 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v17 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v17 + 284024945] = 0;
  sub_14014D3E0(v16, 0);
  v18 = g_183EBE424;
  v19 = 44LL * (int)g_183EBE424;
  dword_140404A6C[v19 + 284024933] = g_182A7D55C;
  dword_140404A6C[v19 + 284024934] = g_182A7D560;
  dword_140404A6C[v19 + 284024935] = 1;
  dword_140404A6C[v19 + 284024936] = 6408;
  dword_140404A6C[v19 + 284024937] = 32856;
  dword_140404A6C[v19 + 284024938] = 33071;
  dword_140404A6C[v19 + 284024939] = 33071;
  dword_140404A6C[v19 + 284024940] = 9729;
  dword_140404A6C[v19 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v19 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v19 + 284024945] = 0;
  sub_14014D3E0(v18, 0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE418 + 284024944]);
  glTexImage2D(3553,
    0,
    36013,
    g_182A7D55C,
    g_182A7D560,
    0,
    34041,
    36269,
    0);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glEnable(34895);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glTexParameteri(34067, 10240, 9729);
  glTexParameteri(34067, 10241, 9985);
  glTexParameteri(34067, 10242, 33071);
  glTexParameteri(34067, 10243, 33071);
  glTexParameteri(34067, 32882, 33071);
  for ( j = 0; j < 6; ++j )
    glTexImage2D((unsigned int)(j + 34069),
      0,
      34842,
      512,
      512,
      0,
      6408,
      5126,
      0);
  glGenerateMipmap(34067);
  glBindTexture(34067, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE404 + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
  v21 = 35056;
  if ( g_151E46190 )
    v21 = 36013;
  glRenderbufferStorage(36161, v21, g_182A7D55C, g_182A7D560);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
  v22 = glCheckFramebufferStatus(36160);
  if ( g_151E46190 )
  {
    if ( v22 == 36053 )
      goto LABEL_16;
    glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
    glRenderbufferStorage(36161, 35056, g_182A7D55C, g_182A7D560);
    glBindRenderbuffer(36161, 0);
    glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
    v22 = glCheckFramebufferStatus(36160);
  }
  if ( v22 != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create framebuffer");
LABEL_16:
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E9774C + 283791765]);
  glFramebufferTexture2D(36160, 36064, 34069, dword_140404A6C[44 * shading_cube_map + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E9774C + 283791766]);
  glRenderbufferStorage(36161, 35056, 512, 512);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E9774C + 283791766]);
  if ( (unsigned int)glCheckFramebufferStatus(36160) != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create cubemap framebuffer");
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97798 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE428 + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97798 + 283791766]);
  v23 = 35056;
  if ( g_151E46190 )
    v23 = 36013;
  glRenderbufferStorage(36161, v23, g_182A7D55C, g_182A7D560);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97798 + 283791766]);
  return ((double (*)(_QWORD, _QWORD))glBindFramebuffer)(36160, 0);
}

//----- (0000000140144700) ----------------------------------------------------
void sub_140144700()
{
  int v0;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char *v6;
  char v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char *v12;
  char v13;

  sr_pad_mappings(sr_pad_file("gamecontrollerdb.txt","rb"),1);
  g_184397B40 = 0;
  g_184397D30 = 0;
  g_184397F20 = 0;
  g_184398110 = 0;
  g_184398300 = 0;
  g_1843984F0 = 0;
  g_1843986E0 = 0;
  g_1843988D0 = 0;
  g_184398AC0 = 0;
  g_184398CB0 = 0;
  g_184398EA0 = 0;
  g_184399090 = 0;
  g_184399280 = 0;
  g_184399470 = 0;
  g_184399660 = 0;
  g_184399850 = 0;
  g_184399A40 = 0;
  g_184399C30 = 0;
  g_184399E20 = 0;
  g_18439A010 = 0;
  g_18439A200 = 0;
  g_18439A3F0 = 0;
  g_18439A5E0 = 0;
  g_18439A7D0 = 0;
  g_18439A9C0 = 0;
  g_18439ABB0 = 0;
  g_18439ADA0 = 0;
  g_18439AF90 = 0;
  g_18439B180 = 0;
  g_18439B370 = 0;
  g_18439B560 = 0;
  g_18439B750 = 0;
  g_18439BB60 = sr_pad_count();
  v0 = 0;
  if ( (int)g_18439BB60 > 0 )
  {
    v1 = 0;
    do
    {
      if ( v0 < 32 )
      {
        if ( (unsigned int)sr_pad_is_controller(v0) )
        {
          v2 = (__int64)(uintptr_t)sr_pad_controller_open(v0);
          *(_QWORD *)&dword_140404A6C[v1 + 285105085] = v2;
          if ( v2 )
          {
            *(_QWORD *)&dword_140404A6C[v1 + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick((void *)(uintptr_t)v2);
            v3 = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            if ( v3 > 31 )
              v3 = 31;
            v4 = (__int64)(uintptr_t)sr_pad_name(v0);
            v5 = 124LL * v3;
            v6 = (char *)&g_184397CA4 + v5 * 4 - v4;
            do
            {
              v7 = *(_BYTE *)v4;
              v6[v4] = *(_BYTE *)v4;
              ++v4;
            }
            while ( v7 );
            dword_140404A6C[v5 + 285101115] = 6;
            dword_140404A6C[v5 + 285101132] = 16;
            dword_140404A6C[v5 + 285101165] = 0;
            dword_140404A6C[v5 + 285101109] = 1;
          }
        }
        else
        {
          v8 = (__int64)(uintptr_t)sr_pad_open(v0);
          *(_QWORD *)&dword_140404A6C[v1 + 285105149] = v8;
          if ( v8 )
          {
            v9 = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            if ( v9 > 31 )
              v9 = 31;
            v10 = (__int64)(uintptr_t)sr_pad_name(v0);
            v11 = 124LL * v9;
            v12 = (char *)&g_184397CA4 + v11 * 4 - v10;
            do
            {
              v13 = *(_BYTE *)v10;
              v12[v10] = *(_BYTE *)v10;
              ++v10;
            }
            while ( v13 );
            dword_140404A6C[v11 + 285101115] = sr_pad_axes((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101132] = sr_pad_buttons((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101165] = sr_pad_hats((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101109] = 1;
          }
        }
      }
      ++v0;
      v1 += 2;
    }
    while ( v0 < (int)g_18439BB60 );
  }
  SDL_JoystickEventState(0);
}

// 1401449A7: control flows out of bounds to 140198F4D

//----- (000000014014D3E0) ----------------------------------------------------
void            sub_14014D3E0(int a1, int a2)
{
  __int64 v2;
  int v4;
  int v5;
  unsigned int *v6;
  signed int v7;
  void **v8;

  v2 = 44LL * a1;
  glBindTexture(3553, dword_140404A6C[v2 + 284024944]);
  glTexParameteri(3553,
    10242,
    dword_140404A6C[v2 + 284024938]);
  glTexParameteri(3553,
    10243,
    dword_140404A6C[v2 + 284024939]);
  glTexParameteri(3553,
    10240,
    dword_140404A6C[v2 + 284024940]);
  glTexParameteri(3553,
    10241,
    dword_140404A6C[v2 + 284024941]);
  v4 = dword_140404A6C[v2 + 284024935];
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = &dword_140404A6C[v2 + 284024945];
    do
    {
      glTexImage2D(3553,
        (unsigned int)v5,
        dword_140404A6C[v2 + 284024937],
        (unsigned int)((int)dword_140404A6C[v2 + 284024933] >> v5),
        (int)dword_140404A6C[v2 + 284024934] >> v5,
        0,
        dword_140404A6C[v2 + 284024936],
        5121,
        *(_QWORD *)v6);
      v4 = dword_140404A6C[v2 + 284024935];
      v6 += 2;
      ++v5;
    }
    while ( v5 < v4 );
  }
  if ( a2 )
  {
    v7 = 0;
    if ( v4 > 0 )
    {
      v8 = (void **)&dword_140404A6C[v2 + 284024945];
      do
      {
        if ( *v8 )
        {
          free(*v8);
          *v8 = nullptr;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < (int)dword_140404A6C[v2 + 284024935] );
    }
  }
}

//----- (0000000140187860) ----------------------------------------------------
void            sub_140187860(int a1, float a2, float a3, float a4)
{
  int v6;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  unsigned int v11;
  unsigned int v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187860[16];
#define v21 (*(float (*))(void *)(sr_frame_140187860 + 0)) /* [rsp+20h] */
#define v22 (*(float (*))(void *)(sr_frame_140187860 + 4)) /* [rsp+24h] */

  v6 = 0;
  /* x arrives in xmm1 (0x14018788A movaps xmm10, xmm1), y in xmm2 (0x1401878A8 movaps xmm14, xmm2); Hex-Rays had
     lost both (v4, v5) and typed the parameters as integers */
  v8 = 0;
  v9 = 0;
  *(float *)&v8 = a2;
  *(float *)&v9 = a3;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    v21 = *(float *)&v8;
    v10 = v9;
    g_1AD299450 = xmmword_140279700;
    *(float *)&v11 = (float)((v6 + a1) >> 4) * 0.0625;
    v22 = *(float *)&v9 + a4;
    *(float *)&v12 = (float)(((_BYTE)v6 + (_BYTE)a1) & 0xF) * 0.0625;
    g_1AD299460 = v12;
    *(float *)&g_1AD299464 = *(float *)&v11 + 0.0625;
    sub_14007D320((unsigned int *)&v21, a2, a3);
    v13 = v8;
    *(float *)&g_1AD299464 = *(float *)&v11 + 0.0625;
    v21 = *(float *)&v8 + a4;
    *(float *)&g_1AD299460 = *(float *)&v12 + 0.0625;
    sub_14007D320((unsigned int *)&v21, v14, v15);
    v22 = *(float *)&v9;
    *(float *)&g_1AD299460 = *(float *)&v12 + 0.0625;
    g_1AD299464 = v11;
    sub_14007D320((unsigned int *)&v21, v16, v17);
    v21 = *(float *)&v8;
    g_1AD299460 = v12;
    g_1AD299464 = v11;
    sub_14007D320((unsigned int *)&v21, v18, v19);
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(float *)&v8 = *(float *)&v8 - a4;
      *(float *)&v10 = *(float *)&v9 + a4;
      v9 = v10;
    }
    else
    {
      *(float *)&v13 = *(float *)&v8 + a4;
      v8 = v13;
    }
    ++v6;
  }
  while ( v6 < 4 );
  sub_14006E0D0(v20, a2, a3);
}
#undef v21
#undef v22

//----- (0000000140187A40) ----------------------------------------------------
void            sub_140187A40(_BYTE *a1, __int64 a2, float a3, float a4, float a5)
{
  float v5 = a3; // xmm2_4: x arrives in xmm2 (0x140187A89 movaps xmm15, xmm2); Hex-Rays had lost it
  float v7;
  _BYTE *v8;
  float v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187A40[16];
#define v20 (*(float (*))(void *)(sr_frame_140187A40 + 0)) /* [rsp+D0h] */
#define v21 (*(float (*))(void *)(sr_frame_140187A40 + 4)) /* [rsp+D4h] */

  v7 = 0.0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( *a1 )
  {
    v8 = a1;
    v9 = a5;
    do
    {
      if ( v8 - a1 >= 1000 )
        break;
      v10 = 39;
      g_1AD299450 = xmmword_140279700;
      v11 = (unsigned __int8)*v8;
      if ( (unsigned __int8)(v11 - 65) <= 0x19u )
        v10 = v11 - 52;
      *(float *)&v12 = (float)(v10 >> 4) * 0.0625;
      v20 = v7 + v5;
      *(float *)&v13 = (float)(v10 & 0xF) * 0.0625;
      v21 = a4 + v9;
      g_1AD299460 = v13;
      *(float *)&g_1AD299464 = *(float *)&v12 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v11, a3);
      *(float *)&g_1AD299464 = *(float *)&v12 + 0.0625;
      v20 = (float)(v7 + v5) + v9;
      *(float *)&g_1AD299460 = *(float *)&v13 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v14, v15);
      v21 = a4;
      *(float *)&g_1AD299460 = *(float *)&v13 + 0.0625;
      g_1AD299464 = v12;
      sub_14007D320((unsigned int *)&v20, v16, v17);
      v20 = v7 + v5;
      g_1AD299460 = v13;
      g_1AD299464 = v12;
      sub_14007D320((unsigned int *)&v20, v18, v19);
      ++v8;
      v7 = v7 + v9;
    }
    while ( *v8 );
  }
  sub_14006E0D0((__int64)a1, a2, a3);
}
#undef v20
#undef v21

//----- (0000000140187C70) ----------------------------------------------------
void            sub_140187C70(__int64 a1, __int64 a2, float a3, float a4, float a5)
{
  float v5 = a3; // xmm2_4: x arrives in xmm2 (0x140187CBB movaps xmm11, xmm2); Hex-Rays had lost it
  __int64 v6;
  float v7;
  __int64 v8;
  _BYTE *v9;
  float v10;
  unsigned __int64 v11;
  int v12;
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
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187C70[16];
#define v39 (*(float (*))(void *)(sr_frame_140187C70 + 0)) /* [rsp+B0h] */
#define v40 (*(float (*))(void *)(sr_frame_140187C70 + 4)) /* [rsp+B4h] */

  g_1AD059440 = 1;
  v6 = a1;
  g_1AD059448 = 0;
  v7 = 0.0;
  g_1AD05944C = 9;
  if ( *(_BYTE *)a1 )
  {
    v8 = a2 - a1;
    v9 = (_BYTE *)a1;
    v10 = a5;
    do
    {
      if ( (__int64)&v9[-v6] >= 1000 )
        break;
      v11 = (unsigned __int64)(unsigned __int8)v9[v8] >> 4;
      v40 = a4;
      *(_QWORD *)&g_1AD29945C = 1065353216;
      g_1AD299464 = 0;
      v12 = dword_1402B2550[3 * v11];
      v11 *= 3LL;
      *(unsigned int *)&g_1AD299450 = v12;
      g_1AD299454 = dword_1402B2554[v11];
      g_1AD299458 = dword_1402B2558[v11];
      v39 = v7 + v5;
      sub_14007D320((unsigned int *)&v39, a2, a3);
      v13 = (unsigned __int8)*v9;
      *(_QWORD *)&g_1AD299460 = 0;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + v13])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v14, v15);
      v16 = (unsigned __int8)*v9;
      *(_QWORD *)&g_1AD299460 = 0;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + v16])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v17, v18);
      v39 = v7 + v5;
      *(_QWORD *)&g_1AD299460 = 0;
      sub_14007D320((unsigned int *)&v39, v19, v20);
      v21 = v9[v8] & 0xF;
      g_1AD29945C = 1065353216;
      v40 = a4;
      *(unsigned int *)&g_1AD299450 = dword_1402B2550[3 * v21];
      g_1AD299454 = dword_1402B2554[3 * v21];
      g_1AD299458 = dword_1402B2558[3 * v21];
      v22 = 8 * ((unsigned __int8)*v9 + 449LL * (int)renderer_current_font);
      v23 = dword_140404A6C[v22 + 72777350];
      g_1AD299460 = dword_140404A6C[v22 + 72777349];
      g_1AD299464 = v23;
      sub_14007D320((unsigned int *)&v39, v24, v25);
      v26 = (unsigned __int8)*v9;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + v26])
          + (float)(v7 + v5);
      v27 = 8 * (v26 + 449LL * (int)renderer_current_font);
      v28 = dword_140404A6C[v27 + 72777351];
      g_1AD299464 = dword_140404A6C[v27 + 72777352];
      g_1AD299460 = v28;
      sub_14007D320((unsigned int *)&v39, v26, v29);
      v30 = (unsigned __int8)*v9;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + v30])
          + (float)(v7 + v5);
      v31 = 8 * (v30 + 449LL * (int)renderer_current_font);
      v32 = dword_140404A6C[v31 + 72777354];
      g_1AD299460 = dword_140404A6C[v31 + 72777353];
      g_1AD299464 = v32;
      sub_14007D320((unsigned int *)&v39, v30, v33);
      v39 = v7 + v5;
      v34 = 8 * ((unsigned __int8)*v9 + 449LL * (int)renderer_current_font);
      v35 = dword_140404A6C[v34 + 72777356];
      g_1AD299460 = dword_140404A6C[v34 + 72777355];
      g_1AD299464 = v35;
      sub_14007D320((unsigned int *)&v39, v36, v37);
      v38 = (unsigned __int8)*v9++;
      a1 = v38 + 3592LL * (int)renderer_current_font;
      v7 = v7 + (float)(v10 * *(float *)&dword_140404A6C[a1 + 72777093]);
    }
    while ( *v9 );
  }
  sub_14006E0D0(a1, a2, a3);
}
#undef v39
#undef v40

//----- (0000000140189E80) ----------------------------------------------------
double            sub_140189E80(int a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
      glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
      glEnableVertexAttribArray(0);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    }
    else
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
    }
  }
  else
  {
    glUseProgram(world_program);
    glUniform3fv(world_u_viewposition, 1, (unsigned int *)&g_183F7C544);
    glUniform3fv(world_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glUniform3fv(world_u_lightambient, 1, (unsigned int *)&g_184178D40);
    glUniform3fv(world_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
    glUniformMatrix4fv(world_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glActiveTexture(33984);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBC404 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBC408 + 284024944]);
    glActiveTexture(33987);
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    glActiveTexture(33988);
    glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
    glActiveTexture(33989);
    glBindTexture(35866, dword_140404A6C[44 * g_183EBC420 + 284024944]);
    glActiveTexture(33984);
    glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    /* 0x14018A05F: position at 0, texcoord at 12, normal at 20 (rsi = 0). */
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(12));
    glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(20));
  }
  glDrawArrays(4, 0, g_195AD08C4);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E977A8 + 283793813]);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_11;
    v7 = 0;
  }
  else
  {
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(12));
    v7 = 2;
  }
  glVertexAttribPointer(v7, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(v7==0?0:20));
LABEL_11:
  glBindTexture(3553, dword_140404A6C[44 * g_183EBC424 + 284024944]);
  glDrawArrays(4, 0, g_195AD08CC);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E977AC + 283793813]);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_16;
    v9 = 0;
  }
  else
  {
    /* 0x14018A289: the third mesh uses its own stride at 0x195AD08D0. */
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(12));
    v9 = 2;
  }
  glVertexAttribPointer(v9, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(v9==0?0:20));
LABEL_16:
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * resting_texture_1 + 284024944]);
  glActiveTexture(33986);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBC418 + 284024944]);
  glActiveTexture(33984);
  glDrawArrays(4, 0, g_195AD08D4);
  if ( !a1 )
  {
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    v11 = 2;
LABEL_20:
    glDisableVertexAttribArray(v11);
    return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, v10);
  }
  if ( a1 == 1 )
  {
    v11 = 0;
    goto LABEL_20;
  }
  return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, v10);
}

//----- (00000001401945F0)

__int64 sub_1401945F0()
{
  float *v0;
  float *v1;
  signed __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  _DWORD v12[10];
  __int64 v13;
  _Alignas(16) unsigned sr_screen_sample_matrix[16];
  _DWORD v17[1048];
  _Alignas(16) unsigned sr_screen_sample_result[16];
  _DWORD v21[1024];
  __int64 v22;

  glUseProgram(water_program);
  v17[0] = *(unsigned int *)&game_spin_angle;
  v17[1] = *(unsigned int *)&game_spin_angle;
  v17[2] = *(unsigned int *)&game_spin_angle;
  glUniformMatrix4fv(water_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(water_u_waterangle, 1, v17);
  glUniform1i(water_u_flags, BYTE2(g_183F7C968) != 0);
  HIDWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1065353216;
  v0 = (float *)&(*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = xmmword_140278E20;
  v1 = (float *)&g_1A724E6C4;
  v2 = (char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), u64)[2] - (char *)&(*(__m256i *)(void *)sr_screen_sample_result);
  *(__int64 *)((char *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64) + 4) = 0;
  *(__int64 *)((char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[1] + 4) = 0;
  v3 = 4;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[3] = 0;
  *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_screen_sample_matrix+12)) + 4) = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[0] = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[5] = 1056964608;
  LODWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1056964608;
  do
  {
    v4 = *(v1 - 1);
    v5 = 4;
    v6 = *v1;
    v7 = v1[1];
    v8 = v1[2];
    do
    {
      *v0 = (float)((float)((float)(v4 * *(float *)((char *)v0 + v2 - 16)) + (float)(v6 * *(float *)((char *)v0 + v2)))
                  + (float)(v7 * *(float *)((char *)v0 + v2 + 16)))
          + (float)(v8 * *(float *)((char *)v0 + v2 + 32));
      ++v0;
      --v5;
    }
    while ( v5 );
    v1 += 4;
    v2 -= 16LL;
    --v3;
  }
  while ( v3 );
  (*(__m256i *)(void *)sr_screen_sample_matrix) = (*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = (*(__int128 *)(void *)(sr_screen_sample_result+8));
  (*(__int128 *)(void *)(sr_screen_sample_matrix+12)) = (*(__int128 *)(void *)(sr_screen_sample_result+12));
  glUniformMatrix4fv(water_u_texturematrix, 1, 0, &(*(__m256i *)(void *)sr_screen_sample_matrix));
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE428 + 284024944]);
  v21[0] = g_16D482820;
  v21[2] = g_16D482828;
  v21[5] = g_16D482828;
  v9 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  v21[9] = g_16D482820;
  v21[1] = 1102577664;
  v21[3] = 1157627904;
  v21[4] = 1102577664;
  v21[6] = 1157627904;
  v21[7] = 1102577664;
  v21[8] = 1157627904;
  v21[10] = 1102577664;
  v21[11] = 1157627904;
  glBindBuffer(34962, v9);
  glBufferSubData(34962, 0, 48, v21);
  glEnableVertexAttribArray(0);
  v13 = 0;
  v12[8] = 12;
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  glDrawArrays(6, 0, 4);
  glDisableVertexAttribArray(0);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (0000000140196D60) ----------------------------------------------------
__int64            sub_140196D60(char *Buffer, FILE *Stream, int a3)
{
  int v3;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  int i;
  char *v11;
  char *v12;
  int j;
  char *v14;
  char *v15;
  int k;
  char *v17;
  char *v18;
  int m;
  char *v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  char *v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140196D60[128];
#define v28 (*(int (*))(void *)(sr_frame_140196D60 + 0)) /* [rsp+20h] */
#define v29 (*(int (*))(void *)(sr_frame_140196D60 + 104)) /* [rsp+88h] */
#define v30 (*(int (*))(void *)(sr_frame_140196D60 + 112)) /* [rsp+90h] */
#define n (*(int (*))(void *)(sr_frame_140196D60 + 120)) /* [rsp+98h] */

  v30 = a3;
  v3 = a3;
  if ( !Stream )
    return 0;
  v29 = 1;
  if ( a3 )
  {
    crt_fread((__int64)&v29, 4, 1, (__int64)Stream);
    crt_fread((__int64)Buffer, 1, 64, (__int64)Stream);
    v6 = Buffer + 64;
    crt_fread((__int64)(Buffer + 64), 4, 1, (__int64)Stream);
    v7 = Buffer + 68;
    crt_fread((__int64)(Buffer + 68), 4, 1, (__int64)Stream);
    v8 = Buffer + 72;
    crt_fread((__int64)(Buffer + 72), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 76), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 80), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 84), 4, 1, (__int64)Stream);
    v9 = Buffer + 47187628;
    crt_fread((__int64)(Buffer + 47187628), 4, 1, (__int64)Stream);
    goto LABEL_6;
  }
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 17) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  fread_sr((void *)(uintptr_t)(&v29), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( v29 != 1 )
    return 0;
  fread_sr((void *)(uintptr_t)(Buffer), 1, 64, (FILE *)(uintptr_t)(Stream));
  v6 = Buffer + 64;
  fread_sr((void *)(uintptr_t)(Buffer + 64), 4, 1, (FILE *)(uintptr_t)(Stream));
  v7 = Buffer + 68;
  fread_sr((void *)(uintptr_t)(Buffer + 68), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = Buffer + 72;
  fread_sr((void *)(uintptr_t)(Buffer + 72), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 76), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 80), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 84), 4, 1, (FILE *)(uintptr_t)(Stream));
  v9 = Buffer + 47187628;
  fread_sr((void *)(uintptr_t)(Buffer + 47187628), 4, 1, (FILE *)(uintptr_t)(Stream));
LABEL_6:
  for ( i = 0; i < *(_DWORD *)v9; ++i )
  {
    v11 = &Buffer[64 * (__int64)i + 47187632];
    if ( v3 )
      crt_fread((__int64)v11, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v11), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v12 = Buffer + 47208112;
  if ( v3 )
    crt_fread((__int64)v12, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v12), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
  {
    v14 = &Buffer[64 * (__int64)j + 47208116];
    if ( v3 )
      crt_fread((__int64)v14, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v14), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v15 = Buffer + 47277748;
  if ( v3 )
    crt_fread((__int64)v15, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v15), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
  {
    v17 = &Buffer[64 * (__int64)k + 47277752];
    if ( v3 )
      crt_fread((__int64)v17, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v17), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v18 = Buffer + 47282872;
  if ( v3 )
    crt_fread((__int64)v18, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
  {
    v20 = &Buffer[64 * (__int64)m + 47282876];
    if ( v3 )
      crt_fread((__int64)v20, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v20), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v21 = 0;
  v28 = 0;
  if ( *(int *)v8 > 0 )
  {
    do
    {
      v22 = 0;
      for ( n = 0; v22 <= *(_DWORD *)v7; n = v22 )
      {
        v23 = 0;
        if ( *(int *)v6 >= 0 )
        {
          v24 = (v22 + ((__int64)v21 << 6)) << 6;
          do
          {
            v25 = 60 * (v24 + v23);
            v26 = &Buffer[v25 + 92];
            if ( v30 )
            {
              crt_fread((__int64)v26, 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 96], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 88], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 100], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 104], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 108], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 112], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 114], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 116], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 118], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 120], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 122], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 124], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 126], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 128], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 130], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 132], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 134], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 136], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 138], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 140], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 142], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[v25 + 144], 4, 1, (__int64)Stream);
            }
            else
            {
              fread_sr((void *)(uintptr_t)(v26), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 96]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 88]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 100]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 104]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 108]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 112]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 114]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 116]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 118]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 120]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 122]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 124]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 126]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 128]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 130]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 132]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 134]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 136]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 138]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 140]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 142]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 144]), 4, 1, (FILE *)(uintptr_t)(Stream));
            }
            ++v23;
          }
          while ( v23 <= *(_DWORD *)v6 );
          v22 = n;
          v21 = v28;
        }
        ++v22;
      }
      v28 = ++v21;
    }
    while ( v21 < *(_DWORD *)v8 );
    v3 = v30;
  }
  sub_140029800((__int64)Buffer, (__int64)Stream, v3);
  return 1;
}
#undef v28
#undef v29
#undef v30
#undef n

