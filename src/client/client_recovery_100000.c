#include "shared_client.h"

// 1400FFF74: variable 'v18' is possibly undefined
// 14010005E: variable 'v27' is possibly undefined
// 140100144: variable 'v36' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (0000000140101220) ----------------------------------------------------
void            sub_140101220(int a1, float *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rcx
  float v15; // xmm0_4
  int *v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
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
  v5 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v5 + 177167567] = *(float *)&dword_140404A6C[v4 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v5 + 177167568] = *(float *)&dword_140404A6C[v4 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v5 + 177167569] = *(float *)&dword_140404A6C[v4 + 177167569] + a2[2];
  v6 = dword_140404A6C[177167565];
  v24[4] = dword_140404A6C[177167565]++;
  v7 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v8 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v8 + 177167567] = *(float *)&dword_140404A6C[v7 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v8 + 177167568] = *(float *)&dword_140404A6C[v7 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v8 + 177167569] = *(float *)&dword_140404A6C[v7 + 177167569] + a2[2];
  v9 = dword_140404A6C[177167565];
  v24[5] = dword_140404A6C[177167565]++;
  v10 = (int)(3 * dword_140404A6C[2 * v3 + 178322644]);
  v11 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v11 + 177167567] = *(float *)&dword_140404A6C[v10 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v11 + 177167568] = *(float *)&dword_140404A6C[v10 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v11 + 177167569] = *(float *)&dword_140404A6C[v10 + 177167569] + a2[2];
  v12 = dword_140404A6C[177167565];
  v24[6] = dword_140404A6C[177167565]++;
  v13 = (int)(3 * dword_140404A6C[2 * v3 + 178322645]);
  v14 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v14 + 177167567] = *(float *)&dword_140404A6C[v13 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v14 + 177167568] = *(float *)&dword_140404A6C[v13 + 177167568] + a2[1];
  v15 = *(float *)&dword_140404A6C[v13 + 177167569];
  v16 = &dword_1402B3674;
  *(float *)&dword_140404A6C[v14 + 177167569] = v15 + a2[2];
  LODWORD(v14) = dword_140404A6C[177167565];
  v24[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v3 + 178322644] = v12;
  dword_140404A6C[2 * v3 + 178322642] = v6;
  dword_140404A6C[2 * v3 + 178322643] = v9;
  dword_140404A6C[2 * v3 + 178322645] = v14;
  v17 = dword_140404A6C[178322641];
  do
  {
    v18 = *v16;
    dword_140404A6C[4 * v17 + 178322642] = v24[*(v16 - 1)];
    v19 = v24[v18];
    v20 = v16[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v19;
    v21 = v24[v20];
    v22 = v16[2];
    v16 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v21;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v24[v22];
    v17 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v16 < (__int64)&dword_1402B36B4 );
  return;
}
#undef v24
#undef v25

// 1402B3674: using guessed type int dword_1402B3674;
// 1402B36B4: using guessed type int dword_1402B36B4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (00000001401014E0) ----------------------------------------------------
__int64            sub_1401014E0(int a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  __int64 v3; // rdx
  float v4; // xmm6_4
  float v5; // xmm4_4
  __int64 v6; // rax
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  int v10; // ecx
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm14_4
  float v15; // xmm13_4
  float v16; // xmm11_4
  float v17; // xmm15_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm13_4
  unsigned int v22; // xmm15_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  unsigned int v25; // xmm13_4
  float v26; // xmm2_4
  unsigned int v27; // xmm11_4
  unsigned int v28; // xmm10_4
  unsigned int v29; // xmm9_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm1_4
  unsigned int v35; // xmm8_4
  float v36; // xmm0_4
  unsigned int v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm14_4
  float v40; // xmm1_4
  unsigned int v41; // xmm7_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm0_4
  unsigned int v45; // r9d
  __int64 v46; // rcx
  unsigned int v47; // xmm9_4
  __int64 v48; // rcx
  __int64 v49; // rcx
  int *v50; // r8
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rdx
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
  v33 = 3 * dword_140404A6C[177167565];
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
  v45 = dword_140404A6C[177167565];
  v64[4] = dword_140404A6C[177167565]++;
  v46 = 3 * dword_140404A6C[177167565];
  dword_140404A6C[v46 + 177167567] = v28;
  dword_140404A6C[v46 + 177167568] = v29;
  v47 = LODWORD(v58);
  dword_140404A6C[v46 + 177167569] = v35;
  LODWORD(v2) = dword_140404A6C[177167565];
  v64[5] = dword_140404A6C[177167565]++;
  v48 = 3 * dword_140404A6C[177167565];
  dword_140404A6C[v48 + 177167567] = v47;
  dword_140404A6C[v48 + 177167568] = v41;
  dword_140404A6C[v48 + 177167569] = v37;
  LODWORD(v3) = dword_140404A6C[177167565];
  v64[6] = dword_140404A6C[177167565]++;
  v49 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v49 + 177167567] = (float)(v38 * 0.25) + v39;
  *(float *)&dword_140404A6C[v49 + 177167568] = (float)(v42 * 0.25) + v43;
  *(float *)&dword_140404A6C[v49 + 177167569] = (float)((float)(v40 - v44) * 0.25) + (float)(v44 - v32);
  LODWORD(v49) = dword_140404A6C[177167565];
  v64[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v1 + 178322642] = v45;
  dword_140404A6C[2 * v1 + 178322643] = v2;
  v50 = &dword_1402B3674;
  dword_140404A6C[2 * v1 + 178322644] = v3;
  dword_140404A6C[2 * v1 + 178322645] = v49;
  v51 = dword_140404A6C[178322641];
  do
  {
    v52 = *v50;
    dword_140404A6C[4 * v51 + 178322642] = v64[*(v50 - 1)];
    v53 = v64[v52];
    v54 = v50[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v53;
    v55 = v64[v54];
    v56 = v50[2];
    v50 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v55;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v64[v56];
    v51 = ++dword_140404A6C[178322641];
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

// 1402B3674: using guessed type int dword_1402B3674;
// 1402B36B4: using guessed type int dword_1402B36B4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (00000001401019A0) ----------------------------------------------------
__int64            sub_1401019A0(int a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm8_4
  unsigned int v13; // edx
  float v14; // xmm8_4
  float v15; // xmm9_4
  unsigned int v16; // xmm10_4
  __int64 v17; // r9
  _DWORD *v18; // r11
  int v19; // r10d
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  int v24; // eax
  float v25; // xmm3_4
  float v26; // xmm5_4
  unsigned int v27; // edx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // xmm2_8
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  int v34; // eax
  float v35; // xmm3_4
  float v36; // xmm5_4
  unsigned int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // r8d
  unsigned int v41; // edx
  unsigned int v42; // r13d
  unsigned int v43; // ebx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // r10d
  unsigned int v49; // r12d
  unsigned int v50; // r14d
  unsigned int v51; // r15d
  unsigned int v52; // esi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edi
  unsigned int v57; // r11d
  unsigned int v58; // r8d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // r9d
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r10d
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rax
  signed int v81; // ecx
  unsigned int *v82; // rax
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
  v13 = dword_140404A6C[177167565];
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
      v27 = dword_140404A6C[177167565];
      v28 = 7LL * (int)dword_140404A6C[177167565];
      *(v18 - 1) = dword_140404A6C[177167565];
      v29 = v27 + 1;
      dword_140404A6C[177167565] = v29;
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
      v37 = dword_140404A6C[177167565];
      v38 = 7LL * (int)dword_140404A6C[177167565];
      *v18 = dword_140404A6C[177167565];
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
      dword_140404A6C[177167565] = v13;
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
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v88;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v39;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v41;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v44 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v44 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v44 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v44 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v40;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v41;
  v45 = v89;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v42;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v46 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v46 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v46 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v46 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v40;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v42;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v43;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v47 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v47 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v47 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v47 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v45;
  v48 = v90;
  v49 = v93[5];
  v50 = v93[4];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v90;
  v51 = v93[3];
  v52 = v95;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v49;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v53 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v53 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v53 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v53 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v45;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v50;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v54 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v54 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v45;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v50;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v51;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v55 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v55 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v52;
  v56 = v94;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v94;
  v57 = v93[6];
  v58 = v93[1];
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v59 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v59 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v59 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v59 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v56;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v60 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v60 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v49;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v61 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v61 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v43;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v42;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v62 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v62 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011349] = 1065353216;
  v63 = v93[7];
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v43;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v64 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v64 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v43;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
  v65 = v96;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v96;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v66 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v66 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v66 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v66 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v65;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v52;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v48;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v43;
  v67 = 8 * dword_140404A6C[178322641];
  *(_QWORD *)&dword_140404A6C[v67 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178388184] = 1065353216;
  ++dword_140404A6C[178322641];
  v68 = v93[0];
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v58;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v57;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v56;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v63;
  v69 = 8 * dword_140404A6C[178322641];
  *(_QWORD *)&dword_140404A6C[v69 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178388184] = 1065353216;
  ++dword_140404A6C[178322641];
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v68;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v51;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v57;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v58;
  v70 = 8 * dword_140404A6C[178322641];
  *(_QWORD *)&dword_140404A6C[v70 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178388184] = 1065353216;
  ++dword_140404A6C[178322641];
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v92;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v68;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v58;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v42;
  v71 = 8LL * (int)dword_140404A6C[178322641];
  *(_OWORD *)&dword_140404A6C[v71 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v71 + 178388182] = 0;
  dword_140404A6C[160292942] = dword_140404A6C[178322641]++;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v51;
  (*(__int64 *)sr_extrude_position) = 0;
  sr_extrude_position[2] = -1124073472;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v50;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v49;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v57;
  v72 = 8LL * (int)dword_140404A6C[178322641];
  *(_OWORD *)&dword_140404A6C[v72 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v72 + 178388182] = 0;
  dword_140404A6C[160292943] = dword_140404A6C[178322641]++;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v63;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v56;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v52;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v65;
  v73 = 8 * dword_140404A6C[178322641];
  *(_QWORD *)&dword_140404A6C[v73 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178388184] = 1065353216;
  LODWORD(v73) = dword_140404A6C[178322641];
  dword_140404A6C[160292944] = dword_140404A6C[178322641]++;
  v74 = 4 * (int)v85;
  dword_140404A6C[v74 + 178322642] = v88;
  dword_140404A6C[v74 + 178322643] = v89;
  dword_140404A6C[v74 + 178322644] = v51;
  dword_140404A6C[v74 + 178322645] = v68;
  sub_140101220(v73, (float *)&(*(__int64 *)sr_extrude_position));
  v75 = (int)dword_140404A6C[177167565];
  v76 = 7 * ((int)dword_140404A6C[177167565] - 4LL);
  v77 = (int)dword_140404A6C[177167565] - 3LL;
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
  v81 = dword_140404A6C[178322641] - 4;
  if ( (signed int)(dword_140404A6C[178322641] - 4) < (int)dword_140404A6C[178322641] )
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
    while ( v81 < (int)dword_140404A6C[178322641] );
  }
  sub_1400FFCE0(dword_140404A6C[160292942], 0, *(double *)&v30);
  return sub_1400FFCE0(dword_140404A6C[160292943], 1, *(double *)&v30); /* 0x140102A36: the result of this call is still in rax at the exit */
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
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16677CBA4: using guessed type unsigned int;
// 16677CBA8: using guessed type unsigned int;
// 16677CBAC: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (0000000140102AA0) ----------------------------------------------------
__int64            sub_140102AA0(int a1, float *a2, float a3, float a4, float a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  __int64 v19; // rax
  float v20; // xmm7_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  unsigned int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // rcx
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // r10d
  __int64 v29; // rdx
  __int64 v30; // rcx
  float v31; // xmm1_4
  float v32; // xmm2_4
  unsigned int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  float v36; // xmm1_4
  float v37; // xmm2_4
  unsigned int v38; // eax
  int *v39; // r8
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rdx
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
  v19 = 3 * dword_140404A6C[177167565];
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
  v23 = dword_140404A6C[177167565];
  v46[4] = dword_140404A6C[177167565]++;
  v24 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v25 = 3 * dword_140404A6C[177167565];
  v26 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167568] - v21) * a4) + v21;
  v27 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v25 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v24 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v25 + 177167568] = v26 + a2[1];
  *(float *)&dword_140404A6C[v25 + 177167569] = v27 + a2[2];
  v28 = dword_140404A6C[177167565];
  v46[5] = dword_140404A6C[177167565]++;
  v29 = (int)(3 * dword_140404A6C[2 * v8 + 178322644]);
  v30 = 3 * dword_140404A6C[177167565];
  v31 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167568] - v21) * a4) + v21;
  v32 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v30 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v29 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v30 + 177167568] = v31 + a2[1];
  *(float *)&dword_140404A6C[v30 + 177167569] = v32 + a2[2];
  v33 = dword_140404A6C[177167565];
  v46[6] = dword_140404A6C[177167565]++;
  v34 = (int)(3 * dword_140404A6C[2 * v8 + 178322645]);
  v35 = 3 * dword_140404A6C[177167565];
  v36 = *(float *)&dword_140404A6C[v34 + 177167568];
  v37 = *(float *)&dword_140404A6C[v34 + 177167569];
  *(float *)&dword_140404A6C[v35 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v34 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v35 + 177167568] = (float)((float)((float)(v36 - v21) * a4) + v21) + a2[1];
  *(float *)&dword_140404A6C[v35 + 177167569] = (float)((float)((float)(v37 - v22) * a5) + v22) + a2[2];
  LODWORD(v35) = dword_140404A6C[177167565];
  v46[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v8 + 178322642] = v23;
  dword_140404A6C[2 * v8 + 178322643] = v28;
  dword_140404A6C[2 * v8 + 178322644] = v33;
  dword_140404A6C[2 * v8 + 178322645] = v35;
  v38 = dword_140404A6C[178322641];
  v39 = &dword_1402B3674;
  do
  {
    v40 = *v39;
    dword_140404A6C[4 * v38 + 178322642] = v46[*(v39 - 1)];
    v41 = v46[v40];
    v42 = v39[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v41;
    v43 = v46[v42];
    v44 = v39[2];
    v39 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v43;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v46[v44];
    v38 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v39 < (__int64)&dword_1402B36B4 );
  return 0; /* the function has no caller */
}
#undef v46
#undef v47

// 1402B3674: using guessed type int dword_1402B3674;
// 1402B36B4: using guessed type int dword_1402B36B4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (0000000140102ED0) ----------------------------------------------------
double            sub_140102ED0(int a1, int a2, char *a3)
{
  double result; // xmm0_8
  int v4; // r14d
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // r15d
  unsigned int *v12; // r14
  signed int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // eax
  unsigned int *v19; // r9
  __int64 v20; // r10
  unsigned int v21; // r8d
  unsigned int v22; // edx
  bool v23; // zf
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102ED0[112];
#define v24 (*(__int64 (*))(void *)(sr_frame_140102ED0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_140102ED0 + 104)) /* [rsp+88h] */

  v4 = a2;
  v5 = a1;
  v6 = sub_14020B8D8(a3, "rb");
  v7 = v6;
  if ( v6 )
  {
    Buffer = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v6));
    v8 = 0;
    if ( Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v7));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v7));
      v9 = 0;
      if ( (int)dword_140404A6C[160507481] > 0 )
      {
        v10 = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v7));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v7));
          v10 += 3;
        }
        while ( v9 < (int)dword_140404A6C[160507481] );
      }
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v7));
      v11 = 0;
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v12 = &dword_140404A6C[160573019];
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
        while ( v11 < (int)dword_140404A6C[160573018] );
        v4 = a2;
      }
      v5 = a1;
    }
    sub_14020B9E8(v7);
    dword_140404A6C[177167565] = dword_140404A6C[160507481];
    if ( (int)dword_140404A6C[160507481] > 0 )
    {
      v14 = 0;
      v15 = dword_140404A6C[160507481];
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
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160573018] > 0 )
    {
      v19 = &dword_140404A6C[160573021];
      v20 = dword_140404A6C[160573018];
      do
      {
        v21 = *(v19 - 1);
        dword_140404A6C[3 * v8 + 177495248] = v21;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v19;
        v22 = v19[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v22;
        v8 = dword_140404A6C[177495247] + 1;
        v23 = *(v19 - 2) == 4;
        ++dword_140404A6C[177495247];
        if ( v23 )
        {
          dword_140404A6C[3 * v8 + 177495248] = v21;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v22;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v19[2];
          v8 = ++dword_140404A6C[177495247];
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

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16684E3D0: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (0000000140103270) ----------------------------------------------------
double            sub_140103270(int a1, char *a2)
{
  double result; // xmm0_8
  int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // esi
  int v8; // r12d
  unsigned int *v9; // rbp
  __int64 v10; // r13
  signed int v11; // esi
  int v12; // r8d
  int v13; // ebp
  unsigned int *v14; // rsi
  __int64 v15; // r14
  signed int i; // ebx
  unsigned __int64 v17; // rsi
  int v18; // eax
  float *v19; // rcx
  __int64 v20; // rdx
  float v21; // xmm1_4
  int v22; // eax
  int v23; // eax
  unsigned int *v24; // r15
  unsigned int *v25; // r9
  unsigned int *v26; // r10
  unsigned int *v27; // rcx
  unsigned int *v28; // rdx
  __int64 v29; // r11
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // r12d
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  unsigned __int64 v36; // r11
  __int64 v37; // r9
  __int64 v38; // r14
  unsigned __int64 v39; // rcx
  unsigned int *v40; // r8
  unsigned __int64 v41; // r10
  char *v42; // rdx
  unsigned int v43; // eax
  char *v44; // rcx
  char *v45; // rcx
  char *v46; // rcx
  char *v47; // rcx
  __int64 v48; // r9
  unsigned int *v49; // rdx
  char *v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ebx
  int v61; // ebp
  int v62; // r8d
  int v63; // r15d
  unsigned int *v64; // r14
  signed int j; // ebp
  int v66; // eax
  unsigned int *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r9
  unsigned int *v70; // rdx
  unsigned int *v71; // r8
  unsigned int *v72; // rcx
  unsigned int v73; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140103270[112];
#define v74 (*(__int64 (*))(void *)(sr_frame_140103270 + 0)) /* [rsp+20h] */
#define Buffer (*(__int64 (*))(void *)(sr_frame_140103270 + 96)) /* [rsp+80h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_140103270 + 104)) /* [rsp+88h] */

  v3 = a1;
  v4 = sub_14020B8D8(a2, "rb");
  v74 = v4;
  v5 = v4;
  if ( v4 )
  {
    LODWORD(Buffer) = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v4));
    if ( (_DWORD)Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v5));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v5));
      v6 = 0;
      if ( (int)dword_140404A6C[160507481] > 0 )
      {
        v7 = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
          v7 += 3;
        }
        while ( v6 < (int)dword_140404A6C[160507481] );
      }
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v5));
      v8 = 0;
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v9 = &dword_140404A6C[160573019];
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
        while ( v8 < (int)dword_140404A6C[160573018] );
        v3 = a1;
      }
    }
    LODWORD(Buffer) = 1;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v5));
    if ( (_DWORD)Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857235]), 4, 1, (FILE *)(uintptr_t)(v5));
      v12 = dword_140404A6C[160857235];
      v13 = 0;
      if ( (int)dword_140404A6C[160857235] > 0 )
      {
        v14 = &dword_140404A6C[160857236];
        do
        {
          v15 = 13LL * v13;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v15 + 160857236]), 4, 1, (FILE *)(uintptr_t)(v5));
          for ( i = 0; i < (int)*v14; ++i )
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * i + 160857237 + v15]), 4, 3, (FILE *)(uintptr_t)(v5));
          v12 = dword_140404A6C[160857235];
          ++v13;
          v14 += 13;
        }
        while ( v13 < (int)dword_140404A6C[160857235] );
        v3 = a1;
      }
    }
    else
    {
      v12 = dword_140404A6C[160857235];
    }
    v17 = 180288LL * v3;
    v77 = v3;
    v18 = dword_140404A6C[160507481];
    dword_140404A6C[v17 / 4 + 335170684] = dword_140404A6C[160507481];
    if ( v18 > 0 )
    {
      v19 = (float *)&dword_140404A6C[v17 / 4 + 335170687];
      v20 = (unsigned int)v18;
      do
      {
        *(_QWORD *)&result = *(unsigned int *)((uintptr_t)v19
                                             + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                             - (uintptr_t)&dword_140404A6C[335170687]);
        v21 = *(float *)((uintptr_t)v19
                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                       - (uintptr_t)&dword_140404A6C[335170687]);
        v22 = *(_DWORD *)((uintptr_t)v19
                        + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                        - (uintptr_t)&dword_140404A6C[335170687]);
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
    v23 = dword_140404A6C[160573018];
    v24 = &dword_140404A6C[160573021];
    dword_140404A6C[v17 / 4 + 335173757] = dword_140404A6C[160573018];
    if ( v23 > 0 )
    {
      v25 = &dword_140404A6C[160573019];
      v26 = &dword_140404A6C[v17 / 4 + 335173759];
      v27 = &dword_140404A6C[160573021];
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
      v36 = v17 - (_QWORD)&dword_140404A6C[160857239];
      do
      {
        v37 = (int)dword_140404A6C[v35 + 160857236];
        v38 = 0;
        dword_140404A6C[13 * (int)v31 + 335200383 + v17 / 4] = 4;
        v39 = v17 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
        *(unsigned int *)((char *)&dword_140404A6C[335200393] + v39) = dword_140404A6C[v35 + 160857243];
        *(unsigned int *)((char *)&dword_140404A6C[335200394] + v39) = dword_140404A6C[v35 + 160857244];
        *(unsigned int *)((char *)&dword_140404A6C[335200395] + v39) = dword_140404A6C[v35 + 160857245];
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
            *(unsigned int *)((char *)&dword_140404A6C[335200384] + (_QWORD)v44) = v43;
            *(unsigned int *)((char *)&dword_140404A6C[335200385] + (_QWORD)v44) = *(v40 - 13);
            *(unsigned int *)((char *)&dword_140404A6C[335200386] + (_QWORD)v44) = *(v40 - 12);
            v45 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200387] + (_QWORD)v45) = *(v40 - 11);
            *(unsigned int *)((char *)&dword_140404A6C[335200388] + (_QWORD)v45) = *(v40 - 10);
            *(unsigned int *)((char *)&dword_140404A6C[335200389] + (_QWORD)v45) = *(v40 - 9);
            v46 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200390] + (_QWORD)v46) = *(v40 - 8);
            *(unsigned int *)((char *)&dword_140404A6C[335200391] + (_QWORD)v46) = *(v40 - 7);
            *(unsigned int *)((char *)&dword_140404A6C[335200392] + (_QWORD)v46) = *(v40 - 6);
            v47 = &v42[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200393] + (_QWORD)v47) = *(v40 - 5);
            *(unsigned int *)((char *)&dword_140404A6C[335200394] + (_QWORD)v47) = *(v40 - 4);
            *(unsigned int *)((char *)&dword_140404A6C[335200395] + (_QWORD)v47) = *(v40 - 3);
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
            *(unsigned int *)((char *)&dword_140404A6C[335200384] + (_QWORD)v50) = *(v49 - 2);
            *(unsigned int *)((char *)&dword_140404A6C[335200385] + (_QWORD)v50) = *(v49 - 1);
            v51 = *v49;
            v49 += 3;
            *(unsigned int *)((char *)&dword_140404A6C[335200386] + (_QWORD)v50) = v51;
            --v48;
          }
          while ( v48 );
        }
        if ( v32 != 8 )
        {
          v52 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200385] + v52) = *(float *)((char *)&dword_140404A6C[335200385] + v52)
                                                                + 0.625;
          v53 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200386] + v53) = *(float *)((char *)&dword_140404A6C[335200386] + v53)
                                                                + 0.625;
          v54 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200388] + v54) = *(float *)((char *)&dword_140404A6C[335200388] + v54)
                                                                + 0.625;
          v55 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200389] + v55) = *(float *)((char *)&dword_140404A6C[335200389] + v55)
                                                                + 0.625;
          v56 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200391] + v56) = *(float *)((char *)&dword_140404A6C[335200391] + v56)
                                                                + 0.625;
          v57 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200392] + v57) = *(float *)((char *)&dword_140404A6C[335200392] + v57)
                                                                + 0.625;
          v58 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200394] + v58) = *(float *)((char *)&dword_140404A6C[335200394] + v58)
                                                                + 0.625;
          v59 = 180288 * v33 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(_QWORD *)&result = *(unsigned int *)((char *)&dword_140404A6C[335200395] + v59);
          *(float *)&result = *(float *)&result + 0.625;
          *(unsigned int *)((char *)&dword_140404A6C[335200395] + v59) = LODWORD(result);
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
      v24 = &dword_140404A6C[160573021];
    }
    if ( a1 == 8 )
    {
      LODWORD(Buffer) = 2;
      fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( (_DWORD)Buffer == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v5));
        v60 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v61 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v61 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v60++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
            v61 += 3;
          }
          while ( v60 < (int)dword_140404A6C[160507481] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v5));
        v62 = dword_140404A6C[160573018];
        LODWORD(v77) = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v63 = v77;
          v64 = &dword_140404A6C[160573019];
          do
          {
            v77 = 56LL * v63;
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[160573019] + v77), 4, 1, (FILE *)(uintptr_t)(v5));
            for ( j = 0; j < (int)*v64; ++j )
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v63 + 160573020 + j]), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v63 + 160573024 + 2 * j]), 4, 2, (FILE *)(uintptr_t)(v5));
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v77 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
            v62 = dword_140404A6C[160573018];
            ++v63;
            v64 += 14;
          }
          while ( v63 < (int)dword_140404A6C[160573018] );
          v24 = &dword_140404A6C[160573021];
        }
      }
      else
      {
        v62 = dword_140404A6C[160573018];
      }
      v66 = dword_140404A6C[160507481];
      dword_140404A6C[v17 / 4 + 335161466] = dword_140404A6C[160507481];
      if ( v66 > 0 )
      {
        v67 = &dword_140404A6C[v17 / 4 + 335161469];
        v68 = (unsigned int)v66;
        do
        {
          *(v67 - 2) = *(unsigned int *)((uintptr_t)v67
                                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                       - (uintptr_t)&dword_140404A6C[335161469]);
          *(v67 - 1) = *(unsigned int *)((uintptr_t)v67
                                       + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                       - (uintptr_t)&dword_140404A6C[335161469]);
          *v67 = *(unsigned int *)((uintptr_t)v67
                                 + (uintptr_t)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                                 - (uintptr_t)&dword_140404A6C[335161469]);
          v67 += 3;
          --v68;
        }
        while ( v68 );
      }
      dword_140404A6C[v17 / 4 + 335164539] = v62;
      if ( v62 > 0 )
      {
        v69 = (unsigned int)v62;
        v70 = &dword_140404A6C[335525117];
        v71 = &dword_140404A6C[160573019];
        v72 = &dword_140404A6C[335525119];
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
    sub_14020B9E8(v5);
  }
  return result;
}
#undef v74
#undef Buffer
#undef v77

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16684E3D0: using guessed type unsigned int;
// 16688E3D4: using guessed type unsigned int;
// 1669A3CB8: using guessed type unsigned int;

//----- (00000001401048E0) ----------------------------------------------------
double            sub_1401048E0(double result, int a2, char *a3)
{
  FILE *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int *v9; // r10
  signed int v10; // r8d
  unsigned int *v11; // r11
  unsigned int *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm3_4
  unsigned int v19; // xmm4_4
  signed int v20; // ecx
  float *v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm0_4
  float v25; // xmm0_4

  v4 = (FILE *)sub_14020B8D8(a3, "rb");
  v5 = (__int64)v4;
  if ( v4 )
  {
    sub_140091310(v4, 0);
    sub_14020B9E8(v5);
    dword_140404A6C[177167565] = dword_140404A6C[160294486];
    if ( (int)dword_140404A6C[160294486] > 0 )
    {
      v6 = 0;
      v7 = dword_140404A6C[160294486];
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
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160343639] > 0 )
    {
      v9 = &dword_140404A6C[160409177];
      v10 = dword_140404A6C[159842357];
      v11 = &dword_140404A6C[160392792];
      v12 = &dword_140404A6C[160343641];
      v13 = dword_140404A6C[160343639];
      do
      {
        dword_140404A6C[3 * v8 + 177495248] = *(v12 - 1);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v12;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v12[1];
        v14 = (int)*v11;
        if ( (unsigned int)v14 > 0xFF )
        {
          *(float *)&v23 = (float)(*(float *)v9 * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 1);
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = v23;
          *(float *)&v24 = (float)(*((float *)v9 + 2) * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v9[1];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = v24;
          v25 = *((float *)v9 + 4);
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[3];
          *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(v25 * 0.75) + 0.25;
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
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842359] = v18;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842360] = v17;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842362] = v16;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842363] = v15;
              v10 = dword_140404A6C[159842357] + 1;
              dword_140404A6C[159842357] = v10;
              LOBYTE(v20) = v10 - 1;
            }
            else
            {
              LOBYTE(v20) = 0;
            }
          }
          else
          {
            v21 = (float *)&dword_140404A6C[159842359];
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
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
        }
        v12 += 3;
        v8 = dword_140404A6C[177495247] + 1;
        ++v11;
        v9 += 6;
        ++dword_140404A6C[177495247];
        --v13;
      }
      while ( v13 );
    }
    return sub_1401449C0(a2, 1);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1665C4B40: using guessed type unsigned int;
// 16677E3C4: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (0000000140104EA0) ----------------------------------------------------
__int64            sub_140104EA0(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm7_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm1_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
  {
    if ( BYTE1(dword_140404A6C[284024821]) )
      v3 = v3 * 16.0;
    else
      v3 = v3 * 0.125;
  }
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
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
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v19 = 1.0 - v18;
  if ( dword_140404A6C[284024634] )
  {
    *(float *)&dword_140404A6C[result + 284024384] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v19)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024384];
    *(float *)&dword_140404A6C[result + 284024385] = (float)((float)(*(float *)&dword_140404A6C[284024600] * v19)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024385];
  }
  v20 = 0.0;
  v21 = (float)((float)(int)dword_140404A6C[137297772] * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( v21 >= 0.0 )
  {
    v20 = (float)((float)(int)dword_140404A6C[137297772] * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
    if ( v21 > 0.875 )
      v20 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v20;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v20 - v18) * 0.0625) + v18;
  return result * 4;
}

// 140104F7C: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105180) ----------------------------------------------------
__int64            sub_140105180(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm7_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  bool v18; // zf
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm2_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
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
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = dword_140404A6C[73991627] == 0;
  v19 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)(*(float *)&dword_140404A6C[284024599] * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v20 = (float)(*(float *)&dword_140404A6C[284024600] * 0.003125) + v19;
  else
    v20 = v19 - (float)(*(float *)&dword_140404A6C[284024600] * 0.003125);
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
  v22 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
  if ( v22 >= 2.0 )
  {
    v21 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
    if ( v22 > 32.0 )
      v21 = 32.0;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v21;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v21 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

// 140105240: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105470) ----------------------------------------------------
__int64            sub_140105470(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm8_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  bool v18; // zf
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
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
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = dword_140404A6C[73991627] == 0;
  v19 = 1.0 - *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v20 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v19)
                                                         * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v21 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v19) * 0.003125) + v20;
  else
    v21 = v20 - (float)((float)(*(float *)&dword_140404A6C[284024600] * v19) * 0.003125);
  v22 = (float)(int)dword_140404A6C[137297772];
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

// 14010553C: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105770) ----------------------------------------------------
__int64            sub_140105770(__int64 a1, __int64 a2, __int64 a3)
{
  float *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  float *v7; // rdx
  __int64 v8; // r9
  float v9; // xmm3_4
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
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
  float *v4; // r11
  char *v5; // r9
  __int64 v6; // r8
  float *v7; // rdx
  float v8; // xmm3_4
  float *v9; // rax
  float v10; // xmm4_4
  __int64 v11; // rcx
  float v12; // xmm5_4
  float v13; // xmm6_4
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
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int *result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105BD0) ----------------------------------------------------
__int64            sub_140105BD0(float a1)
{
  float v1; // xmm1_4

  v1 = pow(a1, 1.75);
  return (unsigned int)(int)(float)((float)(1.0 - (float)(v1 * 0.00390625)) * 256.0);
}


//----- (0000000140105C20) ----------------------------------------------------
__int64            sub_140105C20(int a1, float *a2)
{
  __int64 v3; // r15
  signed int v4; // edi
  unsigned int *v5; // rbx
  unsigned int *v6; // rsi
  __int64 v8; // r12
  __int64 v9; // r8
  signed int v10; // edi
  unsigned __int64 v11; // rbp
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed int v18; // esi
  float *v19; // rbx
  unsigned __int64 v20; // rbp
  _DWORD *v21; // r15
  int v22; // edi
  __int64 v23; // r8
  __int64 result; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx

  v3 = 47224LL * a1;
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v3 + 438920028];
  v6 = &dword_140404A6C[280651303];
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
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  v14 = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  *(_OWORD *)&dword_140404A6C[19060693] = 0;
  *(_OWORD *)&dword_140404A6C[19060697] = 0;
  *(_OWORD *)&dword_140404A6C[19060701] = 0;
  *(_OWORD *)&dword_140404A6C[19060705] = 0;
  *(_OWORD *)&dword_140404A6C[19060709] = 0;
  *(_OWORD *)&dword_140404A6C[19060713] = 0;
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
  v19 = (float *)&dword_140404A6C[278845918];
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
      v27 = *(int *)((char *)&dword_140404A6C[438924127] + v26);
      if ( !*(unsigned int *)((char *)&dword_140404A6C[438924126] + v26) )
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401060F0) ----------------------------------------------------
__int64            sub_1401060F0(int a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140106160) ----------------------------------------------------
__int64            sub_140106160(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int *v13; // rcx
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int *v25; // rcx

  v1 = a1;
  v2 = 47224LL * a1;
  v3 = dword_140404A6C[v2 + 438887426];
  result = dword_140404A6C[456202728] - v3;
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401063E0) ----------------------------------------------------
unsigned int *sub_1401063E0()
{
  signed int v0; // r9d
  signed int v1; // ecx
  signed int v2; // eax
  unsigned int *v3; // r10
  __int64 v4; // rdx
  char v5; // r8
  char v6; // dl
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edi
  __m128i si128; // xmm4
  __int64 v12; // rcx
  unsigned int *v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  unsigned int *v24; // rdx
  unsigned int *v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r14d
  unsigned int *result; // rax
  unsigned int *v30; // rbp
  char *v31; // rcx
  bool v32; // zf
  unsigned int *v33; // rdx
  unsigned int *v34; // rcx
  char v35; // al
  int v36; // ebx
  int v37; // r10d
  __int64 v38; // rdx
       char *v39; // r9
  char *v40; // rdx

  sub_1400ED940("readme.txt");
  v0 = dword_140404A6C[293250414];
  v1 = dword_140404A6C[293250413];
  v2 = 0;
  dword_140404A6C[283720109] = 0;
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
      v5 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        break;
      ++v1;
      *((_BYTE *)v3 + v4++) = v5;
      dword_140404A6C[293250413] = v1;
    }
    while ( v1 < v0 );
    for ( *((_BYTE *)v3 + v4) = 0; v1 < v0; dword_140404A6C[293250413] = ++v1 )
    {
      v6 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v6 != 13 && v6 != 10 )
        break;
    }
    v2 = dword_140404A6C[283720109] + 1;
    dword_140404A6C[283720109] = v2;
  }
  while ( v2 < 1022 );
  v7 = dword_140404A6C[134050358];
  v8 = 0;
  dword_140404A6C[436668493] = dword_140404A6C[134050358];
  LOBYTE(dword_140404A6C[64 * (__int64)v2 + 283720110]) = 0;
  v9 = (__int64)(int)++dword_140404A6C[283720109] << 8;
  *(_QWORD *)((char *)&dword_140404A6C[283720110] + v9) = 0x6C20303120706F54LL;
  *(unsigned int *)((char *)&dword_140404A6C[283720112] + v9) = 7631721;
  v10 = ++dword_140404A6C[283720109];
  if ( v7 >= 8 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
    v12 = 0;
    v13 = &dword_140404A6C[134050430];
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
      *(__m128i *)&dword_140404A6C[v12 + 437192782] = v22;
      *(__m128i *)&dword_140404A6C[v12 + 437192786] = _mm_sub_epi32(
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
  result = &dword_140404A6C[436668504];
  v30 = &dword_140404A6C[436668494];
  do
  {
    if ( v28 < v7 )
    {
      sub_140158AB0(
        &dword_140404A6C[18601677],
        "%d. %s   $",
        v28 + 1,
        (     char *)&dword_140404A6C[28 * *v30 + 134050365]);
      sub_140158B10(&dword_140404A6C[18601805], dword_140404A6C[28 * *v30 + 134050374]);
      v31 = (char *)&dword_140404A6C[18601676] + 3;
      do
        v32 = *++v31 == 0;
      while ( !v32 );
      strcpy(v31, (     char *)&dword_140404A6C[18601805]);
      v33 = &dword_140404A6C[18601677];
      v34 = &dword_140404A6C[64 * (__int64)(int)dword_140404A6C[283720109] + 283720110];
      do
      {
        v35 = *(_BYTE *)v33;
        v33 = (unsigned int *)((char *)v33 + 1);
        *(_BYTE *)v34 = v35;
        v34 = (unsigned int *)((char *)v34 + 1);
      }
      while ( v35 );
      result = &dword_140404A6C[436668504];
      v7 = dword_140404A6C[134050358];
      v10 = ++dword_140404A6C[283720109];
    }
    ++v28;
    ++v30;
  }
  while ( (__int64)v30 < (__int64)&dword_140404A6C[436668504] );
  v36 = 0;
  LOBYTE(dword_140404A6C[283785646]) = 0;
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
        v40 = (char *)&dword_140404A6C[283785645] + 3;
        do
          v32 = *++v40 == 0;
        while ( !v32 );
        strcpy(v40, v39);
        for ( ; (__int64)result < 1022; result = (unsigned int *)((char *)result + 1) )
        {
          if ( !*((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) )
            break;
          ++v36;
        }
        *((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) = 10;
        ++v36;
        result = (unsigned int *)((char *)result + 1);
        *((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) = 0;
        v10 = dword_140404A6C[283720109];
      }
      ++v37;
    }
    while ( v37 < v10 );
  }
  return result;
}

// 14010653D: conditional instruction was optimized away because esi.4>=8
// 140106537: mask 0x80000007 is shortened because esi.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361344: using guessed type unsigned int;
// 183E53120: using guessed type unsigned int;
// 183E93124: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (00000001401069C0) ----------------------------------------------------
__int64 sub_1401069C0()
{
  extern void world_update_vehicle_bounds(void);
  /* src/engine/world_vehicles.c; the original's return value is a leftover, no caller reads it. */
  world_update_vehicle_bounds();
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v1; // r15
  unsigned int v2; // xmm12_4
  unsigned int v3; // xmm11_4
  unsigned int v4; // xmm10_4
  char *v5; // rbx
  __int64 v6; // rcx
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm5_4
  __int64 v14; // rax
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  int v20; // r12d
  int v21; // ecx
  float v22; // xmm0_4
  int v23; // r9d
  float v24; // xmm0_4
  int v25; // r10d
  int v26; // edx
  unsigned __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rcx
  int *v38; // r12
  __int64 v39; // rbp
  __int64 v40; // rbx
  float *v41; // rdi
  float *v42; // rsi
  float v43; // xmm6_4
  float v44; // xmm2_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm8_4
  float v52; // xmm0_4
  unsigned int v53; // xmm1_4
  unsigned int v54; // xmm0_4
  bool v55; // zf
  _DWORD v57[16]; // [rsp-20h] [rbp-184C8h] BYREF
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
  v2 = *(unsigned int *)((char *)&dword_140404A6C[129716729] + v1);
  v3 = *(unsigned int *)((char *)&dword_140404A6C[129716730] + v1);
  v4 = *(unsigned int *)((char *)&dword_140404A6C[129716731] + v1);
  v62 = v1;
  v5 = (char *)&dword_140404A6C[129721812] + v1;
  v63 = (char *)&dword_140404A6C[129721812] + v1;
  v6 = 47LL * *(int *)((char *)&dword_140404A6C[129716719] + v1);
  v7 = *(float *)&dword_140404A6C[v6 + 18215729];
  v8 = *(float *)&dword_140404A6C[v6 + 18215728];
  v9 = *(float *)&dword_140404A6C[v6 + 18215727];
  v10 = 47LL * *(int *)((char *)&dword_140404A6C[129721812] + v1);
  v11 = *(float *)&dword_140404A6C[v10 + 18215728];
  v12 = *(float *)&dword_140404A6C[v10 + 18215729];
  v13 = *(float *)&dword_140404A6C[v10 + 18215727];
  v14 = *(int *)((char *)&dword_140404A6C[129721815] + v1);
  v15 = 18LL * *(int *)((char *)&dword_140404A6C[129721814] + v1);
  *(float *)&dword_140404A6C[2 * v15 + 485543033] = (float)((float)(v11 * v7) - (float)(v12 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543034] = (float)((float)(v9 * v12) - (float)(v13 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543035] = (float)((float)(v13 * v8) - (float)(v9 * v11)) * 0.0625;
  dword_140404A6C[2 * v15 + 485543052] = 1;
  dword_140404A6C[2 * v15 + 485543053] = v2;
  dword_140404A6C[2 * v15 + 485543054] = v3;
  dword_140404A6C[2 * v15 + 485543055] = v4;
  v16 = *(float *)&dword_140404A6C[47 * v14 + 18215728];
  v17 = *(float *)&dword_140404A6C[47 * v14 + 18215729];
  v18 = 18LL * *(int *)((char *)&dword_140404A6C[129721817] + v1);
  v19 = *(float *)&dword_140404A6C[47 * v14 + 18215727];
  *(float *)&dword_140404A6C[2 * v18 + 485543033] = (float)((float)(v16 * v7) - (float)(v17 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543034] = (float)((float)(v9 * v17) - (float)(v19 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543035] = (float)((float)(v19 * v8) - (float)(v9 * v16)) * 0.0625;
  dword_140404A6C[2 * v18 + 485543052] = 1;
  dword_140404A6C[2 * v18 + 485543053] = v2;
  dword_140404A6C[2 * v18 + 485543054] = v3;
  dword_140404A6C[2 * v18 + 485543055] = v4;
  v20 = 0;
  v21 = (int)(float)(*(float *)((char *)&dword_140404A6C[129716753] + v1) * 0.015625);
  v22 = *(float *)((char *)&dword_140404A6C[129716756] + v1) * 0.015625;
  v61 = v21;
  v23 = (int)v22;
  v24 = *(float *)((char *)&dword_140404A6C[129716755] + v1) * 0.015625;
  LODWORD(v60) = v23;
  v25 = (int)v24;
  v26 = (int)(float)(*(float *)((char *)&dword_140404A6C[129716758] + v1) * 0.015625);
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
              sub_1401FC920(
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
        && *(float *)&dword_140404A6C[v37 + 358312926] <= *(float *)((char *)&dword_140404A6C[129716756] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312928] <= *(float *)((char *)&dword_140404A6C[129716758] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312929] >= *(float *)((char *)&dword_140404A6C[129716753] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312931] >= *(float *)((char *)&dword_140404A6C[129716755] + v1) )
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
              *(unsigned int *)((char *)&dword_140404A6C[129721809] + v1) = v36;
            }
            v42 += 3;
            dword_140404A6C[179992845] = 0;
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

// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3528: using guessed type int dword_1402B3528;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EA0: using guessed type unsigned int;

//----- (000000014010CD40) ----------------------------------------------------
__int64            sub_14010CD40(__m128 *a1, float *a2, float *a3)
{
  __int64 result; // rax
  float *v4; // rdi
  float *v5; // r9
  float v8; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm15_4
  __int64 v21; // rdx
  __int64 v22; // r10
  float *v23; // r8
  float *v24; // rcx
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm1_4
  float v28; // xmm11_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm9_4
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

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EA0: using guessed type unsigned int;

//----- (000000014010E030) ----------------------------------------------------
__int64 sub_14010E030()
{
  __int64 result; // rax

  result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = result;
  if ( result )
  {
    *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                              result,
                                              "wglGetProcAddress");
    return *(_QWORD *)&dword_140404A6C[18215113] != 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140270438: using guessed type __int16 LibFileName[13];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (000000014010E080) ----------------------------------------------------
__int64            sub_14010E080(_DWORD *a1, char *a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( a4 )
    return sub_1400920F0(a3, "%s%d\r\n", a2, *a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    result = sub_1400A3D70();
    *a1 = result;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (000000014010E0D0) ----------------------------------------------------
__int64            sub_14010E0D0(char *a1, char *a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  signed int v8; // eax
  int v9; // edx
  char *v10; // r8
  char v11; // cl

  if ( a5 )
    return sub_1400920F0(a4, "%s%s\r\n", a2, a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    v8 = dword_140404A6C[293250413];
    v9 = 0;
    if ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] )
    {
      v10 = a1;
      do
      {
        if ( v9 >= a3 - 1 )
          break;
        v11 = *((_BYTE *)&dword_140404A6C[293250415] + v8);
        if ( v11 == 13 )
          break;
        if ( v11 == 10 )
          break;
        *v10 = v11;
        ++v9;
        ++v10;
        v8 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    result = v9;
    a1[v9] = 0;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (000000014010E190) ----------------------------------------------------
_WORD *           sub_14010E190(int a1, _WORD *a2, int a3, int a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  int *v7; // rcx

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
  return sub_1401FCD30((void *)(uintptr_t)(a2), 0, 0x780u);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E230) ----------------------------------------------------
__int64            sub_14010E230(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 result; // rax

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E2B0) ----------------------------------------------------
int *sub_14010E2B0()
{
  unsigned int *v0; // rbx
  int *result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&dword_140404A6C[299853437] = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, &v2));
  sub_1401E0F40(*(int **)&dword_140404A6C[299853437], 4002, 16000);
  v0 = &dword_140404A6C[299853565];
  do
  {
    result = sub_1401E22F0(48000, 1, &v2);
    *(_QWORD *)v0 = (uint64)(uintptr_t)(result);
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 187BDE460: using guessed type unsigned int;

//----- (000000014010E330) ----------------------------------------------------
void sub_14010E330()
{
  void **v0; // rbx

  sub_1401E0F20(*(void **)&dword_140404A6C[299853437]);
  v0 = (void **)&dword_140404A6C[299853565];
  do
    sub_1401E2C30(*v0++);
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E370) ----------------------------------------------------
void            sub_14010E370(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_quat_from_mat3(float *, const float *);
  math_quat_from_mat3(a1, a2);
}

//----- (000000014010E610) ----------------------------------------------------
__int64            sub_14010E610(float *a1, char a2)
{
  signed int v2; // r8d
  float v3; // xmm3_4
  int v4; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (unsigned int)(1 << a2) >> 1;
  v3 = *a1;
  v4 = (v2 - 1) & (int)(fabs(*a1) * ((float)v2 * 0.1591549430918849));
  v6 = v4;
  if ( v3 < 0.0 )
    v6 = v2 | v4;
  return sub_140115D90(&v6, a2);
}


//----- (000000014010E6C0) ----------------------------------------------------
__int64            sub_14010E6C0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6; // ebx
  __int64 result; // rax
  char v8; // r8
  signed int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  signed int v12; // r9d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  signed int v15; // r8d
  char v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    goto LABEL_27;
  v6 = *a1 - a2;
  if ( (unsigned int)(v6 + 8) <= 0xF )
  {
    result = dword_140404A6C[289301092];
    v8 = dword_140404A6C[289301093];
    v9 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v10 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v9) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        result = dword_140404A6C[289301092];
        if ( v9 < 8 - dword_140404A6C[289301093] )
          break;
        v8 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v9 == v11 )
        {
          result = ++dword_140404A6C[289301092];
          goto LABEL_11;
        }
        result = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        v9 -= v11;
        ++dword_140404A6C[289301092];
        if ( v9 <= 0 )
          goto LABEL_11;
      }
      v8 = v9 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v9;
    }
LABEL_11:
    v12 = 4;
    if ( (int)result < 0x10000 )
    {
      v13 = v6 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v12) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v13 << SLOBYTE(dword_140404A6C[289301093]);
        result = dword_140404A6C[289301093];
        v14 = 8 - dword_140404A6C[289301093];
        if ( v12 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v12 == v14 )
          goto LABEL_25;
        v12 -= v14;
        result = dword_140404A6C[289301092] + 1;
        v13 >>= v14;
        ++dword_140404A6C[289301092];
        v8 = 0;
        if ( v12 <= 0 )
          return result;
      }
      result = v12 + dword_140404A6C[289301093];
      dword_140404A6C[289301093] += v12;
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
  result = dword_140404A6C[289301092];
  v15 = 9;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v16 = dword_140404A6C[289301093];
    v17 = v6 & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v15) - 1) << v16);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v17 << SLOBYTE(dword_140404A6C[289301093]);
      result = dword_140404A6C[289301093];
      v18 = 8 - dword_140404A6C[289301093];
      if ( v15 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v15 == v18 )
      {
LABEL_25:
        ++dword_140404A6C[289301092];
        return result;
      }
      v15 -= v18;
      result = dword_140404A6C[289301092] + 1;
      v17 >>= v18;
      ++dword_140404A6C[289301092];
      v16 = 0;
      if ( v15 <= 0 )
        return result;
    }
    result = v15 + dword_140404A6C[289301093];
    dword_140404A6C[289301093] += v15;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014010E9B0) ----------------------------------------------------
__int64            sub_14010E9B0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6; // r8d
  int v8; // r11d
  signed int v9; // edx
  unsigned int v10; // r9d
  signed int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  signed int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  signed int v17; // edx
  _DWORD *v18; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010E9B0[64];
#define v19 (*(_DWORD (*)[6])(void *)(sr_frame_14010E9B0 + 0)) /* [rsp+20h] */
#define v20 (*(int (*))(void *)(sr_frame_14010E9B0 + 48)) /* [rsp+50h] */

  if ( a3 )
  {
    v6 = *a1 - a2;
    v19[0] = v6;
    if ( dword_140404A6C[179992056] && !v6 )
    {
      v20 = 0;
      return sub_140115D90(&v20, 1);
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679553] && v6 < (int)dword_140404A6C[157679553] )
    {
      v8 = 0;
      goto LABEL_11;
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679554] )
    {
      v8 = 1;
      if ( v6 < (int)dword_140404A6C[157679554] )
        goto LABEL_11;
    }
  }
  v8 = 2;
LABEL_11:
  v9 = dword_140404A6C[289301092];
  LOBYTE(v10) = dword_140404A6C[289301093];
  if ( dword_140404A6C[179992056] )
  {
    v11 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v12 = 1;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v11) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v12 << SLOBYTE(dword_140404A6C[289301093]);
        v13 = 8 - dword_140404A6C[289301093];
        v9 = dword_140404A6C[289301092];
        if ( v11 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v11 == v13 )
        {
          v9 = ++dword_140404A6C[289301092];
          v10 = 0;
          goto LABEL_20;
        }
        v9 = dword_140404A6C[289301092] + 1;
        v12 >>= v13;
        LOBYTE(v10) = 0;
        ++dword_140404A6C[289301092];
        v11 -= v13;
        dword_140404A6C[289301093] = 0;
        if ( v11 <= 0 )
          goto LABEL_21;
      }
      v10 = v11 + dword_140404A6C[289301093];
LABEL_20:
      dword_140404A6C[289301093] = v10;
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
      v17 = dword_140404A6C[157679550];
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
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v14) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v15 << SLOBYTE(dword_140404A6C[289301093]);
        v16 = 8 - dword_140404A6C[289301093];
        if ( v14 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v14 == v16 )
        {
          ++dword_140404A6C[289301092];
          v18 = v19;
          v17 = dword_140404A6C[157679549];
          dword_140404A6C[289301093] = 0;
          return sub_140115D90(v18, v17);
        }
        LOBYTE(v10) = 0;
        v9 = dword_140404A6C[289301092] + 1;
        v15 >>= v16;
        v14 -= v16;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v14 <= 0 )
        {
          v17 = dword_140404A6C[157679549];
          v18 = v19;
          return sub_140115D90(v18, v17);
        }
      }
      dword_140404A6C[289301093] += v14;
    }
    v17 = dword_140404A6C[157679549];
    v18 = v19;
  }
  return sub_140115D90(v18, v17);
}
#undef v19
#undef v20

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;

//----- (000000014010EF40) ----------------------------------------------------
__int64            sub_14010EF40(int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010EFF0) ----------------------------------------------------
__int64            sub_14010EFF0(int a1, int a2)
{
  __int64 v2; // rbp
  int v3; // r11d
  __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  signed int v14; // edx
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  unsigned int *v25; // rsi
  __int64 v26; // rbx
  unsigned int v27; // ebx
  char v28; // r9
  __int64 v29; // r11
  signed int v30; // eax
  unsigned int *v31; // rsi
  signed int v32; // r8d
  unsigned int v33; // r10d
  unsigned int v34; // ecx
  __int64 v35; // rcx
  unsigned int *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm6_4
  int v43; // eax
  float v44; // xmm0_4
  int v45; // r8d
  unsigned int v46; // ebx
  __int64 i; // r11
  signed int v48; // r9d
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  char *v51; // rdx
  unsigned int *v52; // r14
  _DWORD *v53; // rbp
  unsigned int *v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // xmm0_8
  __int64 v58; // xmm0_8
  __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // r9d
  _DWORD *v62; // r13
  _DWORD *v63; // r12
  signed int v64; // eax
  unsigned int *v65; // r15
  unsigned int *v66; // r9
  _DWORD *v67; // r10
  _DWORD *v68; // r11
  __int64 j; // r11
  signed int v70; // r9d
  unsigned int v71; // r10d
  unsigned int v72; // ecx
  _DWORD *v73; // rbp
  __int64 v74; // r15
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // r14
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rbp
  int v81; // r14d
  _DWORD *v82; // rdx
  _DWORD *v83; // rbx
  _DWORD *v84; // r9
  unsigned __int64 v85; // rbx
  __int64 v86; // rcx
  unsigned int v87; // eax
  __int64 v88; // rdx
  signed int v89; // eax
  __int64 v90; // r13
  signed int v91; // eax
  signed int v92; // eax
  signed int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // eax
  signed int v96; // eax
  __int64 v97; // xmm0_8
  __int64 v98; // rcx
  unsigned int v99; // eax
  signed int v100; // eax
  signed int v101; // eax
  signed int v102; // eax
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
  if ( dword_140404A6C[283831474] - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) > 0x258 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
    if ( v5 == 2 )
    {
      if ( ((*(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( v5 == 9 || v5 == 19 )
    {
      goto LABEL_70;
    }
  }
  v6 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
  if ( v6 == 2 )
  {
    v7 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
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
      && dword_140404A6C[47224 * v2 + 438887411] != *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) )
    {
      goto LABEL_70;
    }
  }
  else if ( v6 == 21 )
  {
    if ( *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) == dword_140404A6C[47224 * v2 + 438887411] )
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
      v10 = *(int *)((char *)&dword_140404A6C[297756293] + v4) >> 4;
LABEL_31:
      if ( dword_140404A6C[v9 + 71856286] != (v10 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      v20 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v20 == -1 )
        break;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4);
      v9 = 3597 * v20;
      goto LABEL_31;
    case 2:
      v21 = 47224 * v2;
      v22 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v22 == -1 || !dword_140404A6C[3597 * v22 + 71856277] )
      {
        v23 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
        if ( (unsigned int)(v23 - 1) <= 1 )
        {
          v24 = *(int *)((char *)&dword_140404A6C[297756295] + v4);
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
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756285] + v4), 6);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756286] + v4), 28);
                    v26 = -1;
                    do
                      ++v26;
                    while ( *((_BYTE *)v25 + v26) );
                    v106 = v26;
                    sub_140115D90(&v106, 6);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v4), 4);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v4), 10);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v4), 4);
                    v27 = v26 & 0x3F;
                    if ( v27 )
                    {
                      v28 = dword_140404A6C[289301093];
                      v29 = 0;
                      v30 = dword_140404A6C[289301092];
                      v31 = &dword_140404A6C[3597 * dword_140404A6C[47224 * v2 + 438887411] + 71859827];
                      do
                      {
                        v32 = 7;
                        v33 = *((_BYTE *)v31 + v29) & 0x7F;
                        if ( v30 < 0x10000 )
                        {
                          while ( 1 )
                          {
                            *((_BYTE *)&dword_140404A6C[289301094] + v30) &= ~(((1 << v32) - 1) << v28);
                            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v33 << SLOBYTE(dword_140404A6C[289301093]);
                            v34 = 8 - dword_140404A6C[289301093];
                            v30 = dword_140404A6C[289301092];
                            if ( v32 < 8 - dword_140404A6C[289301093] )
                              break;
                            v28 = 0;
                            dword_140404A6C[289301093] = 0;
                            if ( v32 == v34 )
                            {
                              v30 = ++dword_140404A6C[289301092];
                              goto LABEL_53;
                            }
                            v30 = dword_140404A6C[289301092] + 1;
                            v33 >>= v34;
                            v32 -= v34;
                            ++dword_140404A6C[289301092];
                            if ( v32 <= 0 )
                              goto LABEL_53;
                          }
                          v28 = v32 + LOBYTE(dword_140404A6C[289301093]);
                          dword_140404A6C[289301093] += v32;
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
              v36 = &dword_140404A6C[280651674];
            }
            else
            {
              v35 = 1760 * v24;
              v36 = &dword_140404A6C[278845916];
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
            v43 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4);
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
            if ( *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) == 2 )
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
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756285] + v12), 6);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756286] + v12), 28);
  v13 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v12);
  v109 = v13;
  if ( !v13 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 4);
    v14 = 10;
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 4);
    v14 = 6;
LABEL_21:
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), v14);
    v15 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v16 = v15;
      v17 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v16) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v16) = v17;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v18 = v15;
        v19 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v18) = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v18) = v19;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
LABEL_88:
    v45 = dword_140404A6C[289301093];
    goto LABEL_89;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 10);
      v108 = (char *)&dword_140404A6C[297756294] + v12;
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 4);
      v45 = dword_140404A6C[289301093];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v15 = dword_140404A6C[289301092];
      v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
      v112 = (char *)&dword_140404A6C[297756294] + v12;
      v53 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      v107 = (char *)&dword_140404A6C[297756293] + v12;
      v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      v113 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      goto LABEL_106;
    }
    v15 = dword_140404A6C[289301092];
    goto LABEL_88;
  }
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 6);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 4);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 4);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
  v46 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v12) & 0x3F;
  if ( v46 )
  {
    for ( i = 0; i < v46; ++i )
    {
      v48 = 7;
      v49 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + i) & 0x7F;
      if ( v15 < 0x10000 )
      {
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v48) - 1) << v45);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v15 = dword_140404A6C[289301092];
          if ( v48 < 8 - dword_140404A6C[289301093] )
            break;
          v45 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v48 == v50 )
          {
            v15 = ++dword_140404A6C[289301092];
            goto LABEL_83;
          }
          v15 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v48 -= v50;
          ++dword_140404A6C[289301092];
          if ( v48 <= 0 )
            goto LABEL_83;
        }
        v45 = v48 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v48;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  v51 = (char *)&dword_140404A6C[297756293] + v12;
  v107 = (char *)&dword_140404A6C[297756293] + v12;
  v108 = (char *)&dword_140404A6C[297756294] + v12;
  v112 = (char *)&dword_140404A6C[297756294] + v12;
  v113 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
  v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v53 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  if ( v109 == 4 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 10);
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 4);
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
    v15 = dword_140404A6C[289301092];
    v51 = (char *)&dword_140404A6C[297756293] + v12;
    v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v55 = v15;
      v56 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      v57 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v55) = v57;
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v55) = v56;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v58 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        v59 = v15;
        v60 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v59) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v59) = v60;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v45 = dword_140404A6C[289301093];
  }
  else
  {
    if ( v109 == 5 )
    {
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 20);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
      v105 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v12);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 4);
      v45 = dword_140404A6C[289301093];
      v61 = 5;
      v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
      v15 = dword_140404A6C[289301092];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      goto LABEL_100;
    }
    v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  }
LABEL_106:
  v61 = v109;
  v65 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
  v105 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v12);
  v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
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
      v64 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      {
        v65 = v111;
      }
      else
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v64 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v65 = v111;
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v64) = *v111;
        dword_140404A6C[289301092] += 4;
      }
      sub_140115D90(v105, 24);
      v45 = dword_140404A6C[289301093];
      v15 = dword_140404A6C[289301092];
      for ( j = 0; j < 31; ++j )
      {
        v70 = 7;
        v71 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + j) & 0x7F;
        if ( v15 < 0x10000 )
        {
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v70) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v71 << SLOBYTE(dword_140404A6C[289301093]);
            v72 = 8 - dword_140404A6C[289301093];
            v15 = dword_140404A6C[289301092];
            if ( v70 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v70 == v72 )
            {
              v15 = ++dword_140404A6C[289301092];
              goto LABEL_117;
            }
            v15 = dword_140404A6C[289301092] + 1;
            v71 >>= v72;
            v70 -= v72;
            ++dword_140404A6C[289301092];
            if ( v70 <= 0 )
              goto LABEL_117;
          }
          v45 = v70 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v70;
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
        v45 = dword_140404A6C[289301093];
        v11 = v114;
        v65 = v111;
        v105 = v115;
        v15 = dword_140404A6C[289301092];
        goto LABEL_158;
      case 8:
        v11 = v114;
        v74 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v52;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v111;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v74);
        break;
      case 9:
        v11 = v114;
        v77 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v78 = v15;
        v79 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v77);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v78) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v77);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v78) = v79;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756297]
                                                                                       + v77);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v77);
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
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v114 + 297756297];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
        {
LABEL_133:
          v45 = dword_140404A6C[289301093];
          v65 = v111;
          v67 = v107;
          v68 = v113;
          goto LABEL_157;
        }
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v80);
        break;
    }
    *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v76;
    v15 = dword_140404A6C[289301092] + 4;
    dword_140404A6C[289301092] += 4;
    goto LABEL_133;
  }
  sub_140115D90(v53, 10);
  sub_140115D90(v52, 3);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 16);
  sub_140115D90(v105, 2);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
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
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
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
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
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
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          v15 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v15 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15 + 1) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                                 + v12);
              dword_140404A6C[289301092] += 4;
              return 0; /* compatibility result discarded by all reviewed callers */
            }
LABEL_184:
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                           + v12);
            dword_140404A6C[289301092] += 4;
            return 0; /* compatibility result discarded by all reviewed callers */
          }
        }
      }
      v84 = v82;
LABEL_210:
      v45 = dword_140404A6C[289301093];
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
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
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
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
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
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
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
            goto LABEL_184;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sub_140115D90(v68, 16);
      sub_140115D90(v63, 6);
      sub_140115D90(v65, 7);
      v15 = dword_140404A6C[289301092];
      v85 = *(int *)((char *)&dword_140404A6C[297756295] + v12);
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        sub_1401FC920(
          (__m128i *)((char *)&dword_140404A6C[289301094] + v15),
          (     __m128i *)((char *)&dword_140404A6C[297756301] + v12),
          v85);
        dword_140404A6C[289301092] += v85;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      v84 = v105;
      v45 = dword_140404A6C[289301093];
      goto LABEL_228;
    case 21:
      sub_140115D90(v67, 10);
      sub_140115D90(v73, 4);
      sub_140115D90(v65, 4);
      sub_140115D90(v105, 30);
      v15 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v86 = v15;
        v87 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v86) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v86) = v87;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v12);
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
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
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                     + v12);
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
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v88 + 297756295];
        dword_140404A6C[289301092] += 4;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
LABEL_207:
      v45 = dword_140404A6C[289301093];
      v84 = v83;
      goto LABEL_228;
    case 14:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 8);
      sub_140115D90(v65, 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 20);
      return 0; /* compatibility result discarded by all reviewed callers */
    case 15:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v66;
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v11 + 297756294];
        v89 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v89;
        if ( v89 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v89;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v89;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v89) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          dword_140404A6C[289301092] += 4;
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
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v91 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v91;
        if ( v91 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v91;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v91;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v91) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                         + v90);
          v92 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v92;
          if ( v92 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v92;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v92;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v92) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                           + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(v84, 10);
      v93 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v93 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v94 = v93;
        v95 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v94) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v94) = v95;
        v96 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v96;
        if ( v96 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v96;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v96;
          }
          v97 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v90);
          v98 = v96;
          v99 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v90);
LABEL_262:
          *(_QWORD *)((char *)&dword_140404A6C[289301094] + v98) = v97;
          *(unsigned int *)((char *)&dword_140404A6C[289301096] + v98) = v99;
LABEL_263:
          dword_140404A6C[289301092] += 12;
        }
      }
      break;
    case 18:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v100 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v100;
        if ( v100 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v100;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v100;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v100) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                          + v90);
          v101 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v101;
          if ( v101 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v101;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v101;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v101) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                            + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      break;
    case 20:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v90), 8);
      v102 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v102 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v97 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        v98 = v102;
        v99 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
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
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (0000000140110D00) ----------------------------------------------------
void            sub_140110D00(int a1, int a2)
{
  __int64 v2; // r12
  char v3; // cl
  __int64 v4; // rdi
  int v5; // eax
  char v6; // cl
  signed int v7; // ebx
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // xmm9_4
  unsigned int v12; // xmm10_4
  __int64 v13; // rbp
  unsigned int v14; // xmm11_4
  __int64 v15; // rsi
  signed int v16; // r8d
  int v17; // edi
  __int64 v18; // r14
  char v19; // r10
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r9
  unsigned int *v25; // rdi
  unsigned int *v26; // rdx
  __int64 v27; // r8
  float v28; // xmm1_4
  int v29; // eax
  __int64 v30; // r8
  float v31; // xmm1_4
  int v32; // eax
  __int64 v33; // r8
  float v34; // xmm1_4
  int v35; // eax
  __int64 v36; // r8
  float v37; // xmm1_4
  int v38; // eax
  __int64 v39; // r8
  float v40; // xmm1_4
  int v41; // eax
  __int64 v42; // r8
  float v43; // xmm1_4
  int v44; // eax
  __int64 v45; // r8
  float v46; // xmm1_4
  int v47; // eax
  __int64 v48; // r8
  float v49; // xmm1_4
  int v50; // eax
  __int64 v51; // rsi
  int v52; // r12d
  unsigned int v53; // eax
  int v54; // r8d
  unsigned int *v55; // rdx
  unsigned int v56; // eax
  signed int v57; // edx
  __int64 v58; // r8
  signed int v59; // r9d
  __int64 v60; // rcx
  unsigned int *v61; // r9
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // rcx
  float v65; // xmm1_4
  int v66; // r8d
  __int64 v67; // r11
  __int64 v68; // r9
  __int64 v69; // r12
  unsigned int *v70; // r10
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rdi
  int v74; // ebx
  __int64 v75; // r14
  __int64 v76; // rdi
  int v77; // ebx
  __int64 v78; // r14
  __int64 v79; // rdi
  int v80; // ebx
  __int64 v81; // r14
  __int64 v82; // rdi
  int v83; // ebx
  __int64 v84; // r14
  __int64 v85; // rdi
  int v86; // ebx
  __int64 v87; // r14
  __int64 v88; // rdi
  int v89; // ebx
  __int64 v90; // r14
  __int64 v91; // rdi
  int v92; // ebx
  __int64 v93; // r14
  int v94; // eax
  int v95; // r8d
  int v96; // ecx
  unsigned int *v97; // rdx
  unsigned int v98; // eax
  int v99; // r8d
  __int64 v100; // r15
  unsigned int v101; // eax
  signed int v102; // edx
  __int64 v103; // r8
  signed int v104; // r9d
  __int64 v105; // rcx
  unsigned int *v106; // rcx
  __int64 v107; // r8
  float v108; // xmm3_4
  float v109; // xmm4_4
  float v110; // xmm1_4
  int v111; // edx
  float v112; // xmm3_4
  float v113; // xmm4_4
  float v114; // xmm1_4
  int v115; // edx
  unsigned int *v116; // rdx
  unsigned int v117; // ecx
  __int64 v118; // r9
  unsigned int v119; // r8d
  unsigned int v120; // r9d
  int v121; // r14d
  signed int v122; // r8d
  __int64 v123; // r10
  __int64 v124; // rdx
  __int64 v125; // rax
  int v126; // edx
  unsigned int v127; // eax
  unsigned int v128; // eax
  __int64 v129; // rax
  unsigned int *v130; // r11
  signed int v131; // edi
  __int64 v132; // rbx
  signed int v133; // eax
  signed int v134; // r8d
  char v135; // r9
  unsigned int v136; // r10d
  unsigned int v137; // ecx
  signed int v138; // r8d
  int v139; // r11d
  signed int v140; // eax
  char v141; // r9
  unsigned int v142; // r10d
  unsigned int v143; // ecx
  signed int v144; // ebx
  unsigned int *v145; // rdi
  __int64 v146; // r12
  __int64 v147; // rax
  unsigned int *v148; // r13
  unsigned int *v149; // rbp
  __int64 v150; // rax
  __int64 v151; // r14
  unsigned int v152; // eax
  __int64 v153; // r15
  signed int v154; // r8d
  unsigned int v155; // ebx
  signed int v156; // eax
  int v157; // r11d
  char v158; // r10
  unsigned int v159; // r9d
  unsigned int v160; // ecx
  __int64 v161; // r12
  signed int v162; // r8d
  __int64 v163; // rdi
  unsigned int v164; // ebx
  signed int v165; // eax
  int v166; // r11d
  char v167; // r10
  unsigned int v168; // r9d
  unsigned int v169; // ecx
  unsigned int v170; // eax
  __int64 v171; // r15
  char v172; // cl
  __int64 v173; // r15
  char v174; // di
  signed int v175; // r8d
  unsigned int v176; // r9d
  unsigned int v177; // ecx
  __int64 v178; // rbp
  __int64 v179; // rsi
  __int64 v180; // rbp
  __int64 v181; // r12
  unsigned int *v182; // rax
  __int64 v183; // r13
  signed int v184; // r8d
  unsigned int v185; // r10d
  unsigned int v186; // r9d
  unsigned int v187; // ecx
  signed int v188; // r8d
  unsigned int v189; // r10d
  unsigned int v190; // ecx
  unsigned int v191; // ecx
  __int64 v192; // rax
  BOOL v193; // r14d
  unsigned __int64 v194; // rdx
  unsigned __int64 v195; // rdi
  unsigned __int64 v196; // rbx
  int *v197; // rbx
  _DWORD *v198; // rdi
  __int64 v199; // r12
  bool v200; // zf
  signed int v201; // r10d
  signed int v202; // r8d
  unsigned int v203; // r9d
  unsigned int v204; // ecx
  __int64 v205; // r14
  int v206; // r10d
  float *v207; // rcx
  _DWORD *v208; // rdx
  unsigned int v209; // eax
  __int64 v210; // r8
  __int64 v211; // r9
  float v212; // xmm3_4
  float v213; // xmm1_4
  float v214; // xmm2_4
  int v215; // eax
  float v216; // xmm1_4
  float v217; // xmm0_4
  float v218; // xmm3_4
  float v219; // xmm1_4
  float v220; // xmm2_4
  int v221; // eax
  float v222; // xmm1_4
  float v223; // xmm0_4
  float v224; // xmm3_4
  float v225; // xmm1_4
  float v226; // xmm2_4
  int v227; // eax
  float v228; // xmm1_4
  float v229; // xmm0_4
  float v230; // xmm3_4
  float v231; // xmm1_4
  int v232; // eax
  _DWORD *v233; // rdx
  float *v234; // rcx
  __int64 v235; // r8
  float v236; // xmm3_4
  float v237; // xmm1_4
  int v238; // eax
  signed int v239; // eax
  int v240; // edx
  unsigned int *v241; // r8
  __int64 v242; // rcx
  unsigned int v243; // eax
  int v244; // ebp
  int v245; // eax
  signed int v246; // edx
  __int64 v247; // r8
  int v248; // r9d
  signed int v249; // r11d
  __int64 v250; // r10
  signed int v251; // r8d
  int v252; // r15d
  unsigned int v253; // r10d
  unsigned int v254; // ecx
  signed int v255; // r8d
  unsigned int v256; // r10d
  unsigned int v257; // ecx
  unsigned int *v258; // r8
  __int64 v259; // r10
  __int64 v260; // rcx
  int v261; // ebp
  __int64 v262; // rdx
  __int64 v263; // rax
  unsigned int *v264; // rcx
  unsigned int *v265; // r8
  __int64 v266; // r9
  __int64 v267; // r11
  unsigned int *v268; // r10
  unsigned int *v269; // r13
  __int64 v270; // r12
  __int64 v271; // rsi
  signed int v272; // r8d
  unsigned int v273; // r9d
  unsigned int v274; // ecx
  signed int v275; // r8d
  unsigned int v276; // ebp
  unsigned int v277; // ecx
  int v278; // r14d
  signed int v279; // r8d
  unsigned int v280; // r9d
  unsigned int v281; // ecx
  __int64 v282; // r11
  char v283; // r8
  signed int v284; // r9d
  int v285; // eax
  bool v286; // cc
  unsigned int v287; // edi
  signed int v288; // eax
  unsigned int v289; // r10d
  unsigned int v290; // ecx
  signed int v291; // r9d
  int v292; // r11d
  unsigned int v293; // ebx
  unsigned int v294; // r10d
  unsigned int v295; // ecx
  unsigned int v296; // eax
  __int64 v297; // rdi
  __int64 v298; // rbx
  signed int v299; // r8d
  unsigned int v300; // r9d
  unsigned int v301; // ecx
  signed int v302; // r10d
  signed int v303; // r8d
  unsigned int v304; // ebp
  unsigned int v305; // ecx
  unsigned int *v306; // rsi
  int v307; // r9d
  unsigned int v308; // r8d
  unsigned int v309; // ecx
  __int64 v310; // rbx
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
  v3 = dword_140404A6C[157679549];
  v4 = a2;
  LODWORD(v322) = v2;
  dword_140404A6C[179992055] = 0;
  if ( !dword_140404A6C[157679549] )
  {
    v3 = 4;
    dword_140404A6C[157679549] = 4;
  }
  v5 = 1 << (v3 - 1);
  v6 = dword_140404A6C[157679550];
  dword_140404A6C[157679553] = v5;
  if ( !dword_140404A6C[157679550] )
  {
    v6 = 8;
    dword_140404A6C[157679550] = 8;
  }
  dword_140404A6C[157679554] = 1 << (v6 - 1);
  sub_140115D90(&dword_140404A6C[157679549], 4);
  sub_140115D90(&dword_140404A6C[157679550], 4);
  sub_140115D90(&dword_140404A6C[179992055], 1);
  sub_140115D90(&dword_140404A6C[179992056], 1);
  v7 = dword_140404A6C[289301092];
  v314 = LOBYTE(dword_140404A6C[456202728]);
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    if ( (int)dword_140404A6C[289301093] > 0 )
    {
      v7 = dword_140404A6C[289301092] + 1;
      dword_140404A6C[289301093] = 0;
      ++dword_140404A6C[289301092];
    }
    *(unsigned int *)((char *)&dword_140404A6C[289301094] + v7) = dword_140404A6C[456202728];
    v7 = dword_140404A6C[289301092] + 4;
    dword_140404A6C[289301092] += 4;
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
  if ( dword_140404A6C[283831312] == 4 )
  {
    v324 = v2;
    if ( !dword_140404A6C[3597 * v4 + 71856266] )
    {
      v11 = dword_140404A6C[179992855];
      v12 = dword_140404A6C[179992856];
      v14 = dword_140404A6C[179992857];
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
    v19 = dword_140404A6C[289301093];
    v20 = v18 & 0x7FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v7) &= ~(((1 << v16) - 1) << v19);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v20 << SLOBYTE(dword_140404A6C[289301093]);
      v21 = 8 - dword_140404A6C[289301093];
      if ( v16 < 8 - dword_140404A6C[289301093] )
        break;
      if ( v16 == v21 )
      {
        ++dword_140404A6C[289301092];
        v22 = 0;
        goto LABEL_29;
      }
      v7 = dword_140404A6C[289301092] + 1;
      v20 >>= v21;
      v16 -= v21;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      v19 = 0;
      if ( v16 <= 0 )
        goto LABEL_30;
    }
    v22 = v16 + dword_140404A6C[289301093];
LABEL_29:
    dword_140404A6C[289301093] = v22;
  }
LABEL_30:
  sub_140115D90(&dword_140404A6C[47224 * v13 + 438924125], 11);
  LODWORD(v325) = 16;
  if ( (int)v18 > 0 )
  {
    do
    {
      v23 = v15 * 4 + 20LL * v17;
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924127] + v23), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924126] + v23), 2);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924128] + v23), 3);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924129] + v23), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924130] + v23), 16);
      v17 = ((_WORD)v17 + 1) & 0x7FF;
      --v18;
    }
    while ( v18 );
    v8 = v311;
  }
  v318 = &dword_140404A6C[137283409];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[137283409]), 0, 0x1000u);
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
  dword_140404A6C[436668493] = 0;
  v54 = 0;
  v323 = 1024;
  v55 = v25;
  do
  {
    if ( *(v55 - 1) && !*v55 )
    {
      dword_140404A6C[v53 + 437192782] = v55[2];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v54;
      v53 = ++dword_140404A6C[436668493];
    }
    ++v54;
    v55 += 4;
  }
  while ( v54 < 1024 );
  sub_14007D710();
  v56 = 10;
  if ( v52 == 255 )
    v56 = dword_140404A6C[436668493];
  v57 = dword_140404A6C[436668493] - 1;
  v58 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
  {
    v59 = dword_140404A6C[436668493] - v56;
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
              dword_140404A6C[47224 * v13 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = *(v70 - 1);
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v75 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = *v70;
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v78 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[1];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v81 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[2];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v84 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[3];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v87 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[4];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v90 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[5];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
              dword_140404A6C[v93 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[6];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
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
      v94 = *(unsigned int *)((char *)&dword_140404A6C[278845902] + v64);
      v95 = (int)(float)(256.0 - v65);
      if ( v95 < 16 )
        v95 = 16;
      if ( *(unsigned int *)((char *)&dword_140404A6C[278845895] + v64) )
        v95 = 16;
      if ( v94 != -1 )
      {
        if ( v94 == v8 )
          v95 = 0x10000;
        if ( *(int *)((char *)&dword_140404A6C[278845904] + v64) > 2 )
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
  dword_140404A6C[436668493] = 0;
  v99 = 0;
  v100 = 1024;
  do
  {
    if ( *(v97 - 1) && *v97 == 1 )
    {
      dword_140404A6C[v98 + 437192782] = v97[2];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v99;
      v98 = ++dword_140404A6C[436668493];
    }
    ++v99;
    v97 += 4;
  }
  while ( v99 < 1024 );
  sub_14007D710();
  v101 = 32;
  if ( v52 == 255 )
    v101 = dword_140404A6C[436668493];
  v102 = dword_140404A6C[436668493] - 1;
  v103 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
  {
    v104 = dword_140404A6C[436668493] - v101;
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
  v106 = &dword_140404A6C[129716722];
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
  while ( (__int64)v106 < (__int64)&dword_140404A6C[130383602] );
  v116 = &dword_140404A6C[129716711];
  v117 = 0;
  dword_140404A6C[436668493] = 0;
  v118 = 0;
  v119 = 2;
  do
  {
    if ( *(v116 - 2) && *v116 != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887509 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 - 2;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[5208] && v116[5210] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887511 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 - 1;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[10418] && v116[10420] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887513 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[15628] && v116[15630] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887515 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 1;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[20838] && v116[20840] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887517 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 2;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[26048] && v116[26050] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887519 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 3;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[31258] && v116[31260] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887521 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 4;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[36468] && v116[36470] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887523 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 5;
      v117 = ++dword_140404A6C[436668493];
    }
    v119 += 8;
    v118 += 8;
    v116 += 41680;
  }
  while ( (int)(v119 - 2) < 128 );
  sub_14007D710();
  v120 = dword_140404A6C[436668493];
  v121 = 0;
  v312 = 0;
  dword_140404A6C[137282766] = 0;
  v122 = dword_140404A6C[436668493] - 1;
  v123 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
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
        v125 = (int)dword_140404A6C[137282766];
        dword_140404A6C[47224 * v13 + 438887509 + 2 * v124] = 0;
        dword_140404A6C[2 * v125 + 137282768] = 1;
        goto LABEL_261;
      }
      if ( v122 >= (int)(v120 - 16) )
      {
        dword_140404A6C[2 * v121 + 137282767] = v124;
        dword_140404A6C[2 * dword_140404A6C[137282766] + 137282768] = 2;
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
    dword_140404A6C[2 * dword_140404A6C[137282766] + 137282768] = 0;
LABEL_261:
    v121 = ++dword_140404A6C[137282766];
    goto LABEL_262;
  }
LABEL_264:
  dword_140404A6C[137283023] = 0;
  if ( v52 != 255 )
  {
    v126 = dword_140404A6C[47224 * v52 + 438887424];
    if ( (int)dword_140404A6C[308307070] < v126 )
    {
      if ( (signed int)(dword_140404A6C[308307070] - v126 + 0x10000) > 22 )
      {
        v128 = dword_140404A6C[137282509];
        if ( (int)dword_140404A6C[137282509] > 2 )
          v128 = 2;
        dword_140404A6C[137282509] = v128;
        if ( v121 > 2 )
          v121 = 2;
        v312 = v121;
        dword_140404A6C[137282766] = v121;
      }
    }
    else if ( (signed int)(dword_140404A6C[308307070] - v126) > 22 )
    {
      v127 = dword_140404A6C[137282509];
      if ( (int)dword_140404A6C[137282509] > 2 )
        v127 = 2;
      dword_140404A6C[137282509] = v127;
      if ( v121 > 2 )
      {
        v312 = 2;
        dword_140404A6C[137282766] = 2;
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
  v133 = dword_140404A6C[289301092];
  if ( (int)v132 > 255 )
    v132 = 255;
  v134 = 8;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v135 = dword_140404A6C[289301093];
    v136 = (unsigned __int8)v132;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v133) &= ~(((1 << v134) - 1) << v135);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v136 << SLOBYTE(dword_140404A6C[289301093]);
      v137 = 8 - dword_140404A6C[289301093];
      if ( v134 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v134 == v137 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_289;
      }
      v134 -= v137;
      v133 = dword_140404A6C[289301092] + 1;
      v136 >>= v137;
      ++dword_140404A6C[289301092];
      v135 = 0;
      if ( v134 <= 0 )
        goto LABEL_289;
    }
    dword_140404A6C[289301093] += v134;
  }
LABEL_289:
  sub_140115D90(v130, 8);
  if ( (int)v132 > 0 )
  {
    do
    {
      v138 = 16;
      v139 = dword_140404A6C[47224 * v13 + 438934369 + v131];
      v140 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v141 = dword_140404A6C[289301093];
        v142 = (unsigned __int16)v139;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v140) &= ~(((1 << v138) - 1) << v141);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v142 << SLOBYTE(dword_140404A6C[289301093]);
          v143 = 8 - dword_140404A6C[289301093];
          if ( v138 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v138 == v143 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_298;
          }
          v138 -= v143;
          v140 = dword_140404A6C[289301092] + 1;
          v142 >>= v143;
          ++dword_140404A6C[289301092];
          v141 = 0;
          if ( v138 <= 0 )
            goto LABEL_298;
        }
        dword_140404A6C[289301093] += v138;
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
  v144 = dword_140404A6C[289301092];
  v145 = &dword_140404A6C[137283409];
  v146 = 88LL * v314;
  v147 = 47224 * v13;
  v315 = dword_140404A6C[289301092];
  v148 = &dword_140404A6C[137283409];
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
        v156 = dword_140404A6C[289301092];
        v157 = *(unsigned int *)((char *)&dword_140404A6C[3 * v153 + 438888533] + v51);
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          v158 = dword_140404A6C[289301093];
          v159 = v157 != v155;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v156) &= ~(((1 << v154) - 1) << v158);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v159 << SLOBYTE(dword_140404A6C[289301093]);
            v160 = 8 - dword_140404A6C[289301093];
            if ( v154 < 8 - dword_140404A6C[289301093] )
              break;
            if ( v154 == v160 )
            {
              ++dword_140404A6C[289301092];
              dword_140404A6C[289301093] = 0;
              goto LABEL_309;
            }
            v158 = 0;
            v156 = dword_140404A6C[289301092] + 1;
            v159 >>= v160;
            v154 -= v160;
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            if ( v154 <= 0 )
              goto LABEL_309;
          }
          dword_140404A6C[289301093] += v154;
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
        v165 = dword_140404A6C[289301092];
        v166 = *(unsigned int *)((char *)&dword_140404A6C[5 * v161 + 438889301] + v51);
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          v167 = dword_140404A6C[289301093];
          v168 = v166 != v164;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v165) &= ~(((1 << v162) - 1) << v167);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v168 << SLOBYTE(dword_140404A6C[289301093]);
            v169 = 8 - dword_140404A6C[289301093];
            if ( v162 < 8 - dword_140404A6C[289301093] )
              break;
            if ( v162 == v169 )
            {
              ++dword_140404A6C[289301092];
              v170 = 0;
              goto LABEL_323;
            }
            v167 = 0;
            v165 = dword_140404A6C[289301092] + 1;
            v168 >>= v169;
            v162 -= v169;
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            if ( v162 <= 0 )
              goto LABEL_324;
          }
          v170 = v162 + dword_140404A6C[289301093];
LABEL_323:
          dword_140404A6C[289301093] = v170;
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
        v144 = dword_140404A6C[289301092];
        v100 = v323;
        v172 = v161 & 0x1F;
        v146 = v330;
        dword_140404A6C[v330 + 438897517 + v151 + (v163 >> 5)] |= 1 << v172;
        v145 = v318;
      }
      else
      {
LABEL_328:
        v144 = dword_140404A6C[289301092];
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
  dword_140404A6C[179992052] += v144 - v315;
  v174 = dword_140404A6C[289301093];
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
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v175) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v176 << SLOBYTE(dword_140404A6C[289301093]);
      v177 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v175 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v175 == v177 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_338;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v176 >>= v177;
      v175 -= v177;
      ++dword_140404A6C[289301092];
      if ( v175 <= 0 )
        goto LABEL_338;
    }
    v174 = v175 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v175;
  }
LABEL_338:
  v178 = v324;
  if ( v312 > 0 )
  {
    v179 = 23612LL * (int)v322;
    v180 = 23612 * v324;
    v181 = 79616LL * v314;
    v182 = &dword_140404A6C[137282768];
    v323 = (unsigned int)v312;
    v326 = &dword_140404A6C[137282768];
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
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v184) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v186 << SLOBYTE(dword_140404A6C[289301093]);
          v187 = 8 - dword_140404A6C[289301093];
          v144 = dword_140404A6C[289301092];
          if ( v184 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v184 == v187 )
          {
            v144 = ++dword_140404A6C[289301092];
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            goto LABEL_348;
          }
          v186 >>= v187;
          v144 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          v184 -= v187;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v184 <= 0 )
            goto LABEL_348;
        }
        v174 = v184 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v184;
      }
LABEL_348:
      v188 = 2;
      if ( v144 < 0x10000 )
      {
        v189 = v185 & 3;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v188) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v189 << SLOBYTE(dword_140404A6C[289301093]);
          v190 = 8 - dword_140404A6C[289301093];
          if ( v188 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v188 == v190 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_356;
          }
          v188 -= v190;
          v144 = dword_140404A6C[289301092] + 1;
          v189 >>= v190;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v188 <= 0 )
            goto LABEL_356;
        }
        dword_140404A6C[289301093] += v188;
      }
LABEL_356:
      sub_140115D90(&dword_140404A6C[5210 * v183 + 129720183], 10);
      sub_140115D90(&dword_140404A6C[2 * v179 + 438887510 + 2 * v183], 8);
      v191 = dword_140404A6C[2 * v180 + 438887510 + 2 * v183];
      v192 = (unsigned __int8)v191;
      v193 = (int)(dword_140404A6C[456202728] - v191) < 192;
      v194 = 228 * v183;
      if ( (int)(dword_140404A6C[456202728] - v191) >= 192 )
        v192 = 0;
      v195 = v181 * 4 + v194;
      v196 = v194 + 318464 * v192;
      sub_14010E6C0(
        &dword_140404A6C[v181 + 137328830 + v194 / 4],
        *(unsigned int *)((char *)&dword_140404A6C[137328830] + v196),
        (int)(dword_140404A6C[456202728] - v191) < 192,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137328831] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328831] + v196),
        v193,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137328832] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328832] + v196),
        v193,
        28);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[137328833] + v195), 2);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328834] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328834] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328835] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328835] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328836] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328836] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328837] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328837] + v196),
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
      v174 = dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
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
  dword_140404A6C[179992053] += v144 - v316;
  if ( v144 < 0x10000 )
  {
    v203 = 0;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v202) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v203 << SLOBYTE(dword_140404A6C[289301093]);
      v204 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v202 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v202 == v204 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_371;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v203 >>= v204;
      v202 -= v204;
      ++dword_140404A6C[289301092];
      if ( v202 <= 0 )
        goto LABEL_371;
    }
    v174 = v202 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v202;
  }
LABEL_371:
  v205 = dword_140404A6C[132792829];
  dword_140404A6C[179992054] += v144 - v201;
  v206 = 0;
  if ( (int)dword_140404A6C[132792829] < 4 )
  {
    if ( (int)dword_140404A6C[132792829] <= 0 )
      goto LABEL_410;
    v211 = 0;
    goto LABEL_402;
  }
  v207 = (float *)&dword_140404A6C[132400643];
  v208 = (unsigned int *)((char *)&dword_140404A6C[438894425] + v51);
  v209 = ((dword_140404A6C[132792829] - 4) >> 2) + 1;
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
  dword_140404A6C[436668493] = 0;
  if ( (int)v205 > 0 )
  {
    v241 = (unsigned int *)((char *)&dword_140404A6C[438894422] + v51);
    do
    {
      v242 = v239;
      v243 = *v241;
      v241 += 3;
      dword_140404A6C[v242 + 437192782] = v243;
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v240++;
      v239 = ++dword_140404A6C[436668493];
    }
    while ( v240 < (int)v205 );
  }
  sub_14007D710();
  v244 = v322;
  dword_140404A6C[137296722] = 0;
  v245 = 32;
  v246 = dword_140404A6C[436668493] - 1;
  if ( (_DWORD)v322 != 255 )
    v245 = 16;
  v247 = v246;
  v248 = 0;
  if ( v246 >= 0 )
  {
    v249 = dword_140404A6C[436668493] - v245;
    do
    {
      v250 = (int)dword_140404A6C[dword_140404A6C[v247 + 436668494] + 437454926];
      if ( v246 >= v249 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[3 * v250 + 438894422] + v51) = 0;
        dword_140404A6C[v248 + 137296723] = v250;
        v248 = ++dword_140404A6C[137296722];
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
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v251) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v253 << SLOBYTE(dword_140404A6C[289301093]);
      v254 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v251 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v251 == v254 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_428;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v253 >>= v254;
      v251 -= v254;
      ++dword_140404A6C[289301092];
      if ( v251 <= 0 )
        goto LABEL_428;
    }
    v174 = v251 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v251;
  }
LABEL_428:
  v255 = 8;
  if ( v144 < 0x10000 )
  {
    v256 = (unsigned __int8)v248;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v255) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v256 << SLOBYTE(dword_140404A6C[289301093]);
      v257 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v255 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v255 == v257 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_436;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v256 >>= v257;
      v255 -= v257;
      ++dword_140404A6C[289301092];
      if ( v255 <= 0 )
        goto LABEL_436;
    }
    v174 = v255 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v255;
  }
LABEL_436:
  *(_OWORD *)&dword_140404A6C[137297781] = 0;
  *(_OWORD *)&dword_140404A6C[137297785] = 0;
  *(_OWORD *)&dword_140404A6C[137297789] = 0;
  *(_OWORD *)&dword_140404A6C[137297793] = 0;
  *(_OWORD *)&dword_140404A6C[137297797] = 0;
  *(_OWORD *)&dword_140404A6C[137297801] = 0;
  *(_OWORD *)&dword_140404A6C[137297805] = 0;
  *(_OWORD *)&dword_140404A6C[137297809] = 0;
  if ( v248 > 0 )
  {
    v258 = &dword_140404A6C[137296723];
    v259 = (unsigned int)v248;
    do
    {
      v260 = (int)*v258++;
      dword_140404A6C[(v260 >> 5) + 137297781] |= 1 << (v260 & 0x1F);
      --v259;
    }
    while ( v259 );
  }
  if ( LOBYTE(dword_140404A6C[284024765]) && v244 == 255 )
  {
    sub_140158AB0(
      &dword_140404A6C[179991767],
      "%08x %08x %08x %08x %08x %08x %08x %08x\n",
      dword_140404A6C[137297781],
      dword_140404A6C[137297782],
      dword_140404A6C[137297783],
      dword_140404A6C[137297784],
      dword_140404A6C[137297785],
      dword_140404A6C[137297786],
      dword_140404A6C[137297787],
      dword_140404A6C[137297788]);
    v174 = dword_140404A6C[289301093];
    v144 = dword_140404A6C[289301092];
    v205 = dword_140404A6C[132792829];
  }
  v261 = 0;
  if ( (int)v205 <= 0 )
    goto LABEL_511;
  v262 = 0;
  v322 = 0;
  v263 = 0;
  v323 = 0;
  v264 = &dword_140404A6C[132792837];
  v326 = nullptr;
  v265 = &dword_140404A6C[132400639];
  v324 = 0;
  v266 = 0;
  v320 = 0;
  v267 = 0;
  v325 = &dword_140404A6C[132792837];
  v268 = nullptr;
  v319 = &dword_140404A6C[132400639];
  v269 = &dword_140404A6C[132401011];
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
            *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v272) - 1) << v174);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v273 << SLOBYTE(dword_140404A6C[289301093]);
            v274 = 8 - dword_140404A6C[289301093];
            v144 = dword_140404A6C[289301092];
            if ( v272 < 8 - dword_140404A6C[289301093] )
              break;
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v272 == v274 )
            {
              v144 = ++dword_140404A6C[289301092];
              goto LABEL_454;
            }
            v144 = dword_140404A6C[289301092] + 1;
            v273 >>= v274;
            v272 -= v274;
            ++dword_140404A6C[289301092];
            if ( v272 <= 0 )
              goto LABEL_454;
          }
          v174 = v272 + LOBYTE(dword_140404A6C[289301093]);
          dword_140404A6C[289301093] += v272;
        }
LABEL_454:
        v275 = 10;
        if ( v144 < 0x10000 )
        {
          v276 = v261 & 0x3FF;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v275) - 1) << v174);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v276 << SLOBYTE(dword_140404A6C[289301093]);
            v277 = 8 - dword_140404A6C[289301093];
            v144 = dword_140404A6C[289301092];
            if ( v275 < 8 - dword_140404A6C[289301093] )
              break;
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v275 == v277 )
            {
              v144 = ++dword_140404A6C[289301092];
              goto LABEL_462;
            }
            v144 = dword_140404A6C[289301092] + 1;
            v276 >>= v277;
            v275 -= v277;
            ++dword_140404A6C[289301092];
            if ( v275 <= 0 )
              goto LABEL_462;
          }
          v174 = v275 + LOBYTE(dword_140404A6C[289301093]);
          dword_140404A6C[289301093] += v275;
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
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v279) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v280 << SLOBYTE(dword_140404A6C[289301093]);
          v281 = 8 - dword_140404A6C[289301093];
          if ( v279 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v279 == v281 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_470;
          }
          v279 -= v281;
          v144 = dword_140404A6C[289301092] + 1;
          v280 >>= v281;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v279 <= 0 )
            goto LABEL_470;
        }
        dword_140404A6C[289301093] += v279;
      }
LABEL_470:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438894423] + (unsigned __int64)v329 + (_QWORD)v268), 8);
      v282 = v271 + v324;
      v283 = dword_140404A6C[289301093];
      v284 = 1;
      v285 = *(unsigned int *)((char *)&dword_140404A6C[438894423] + v271 + v324);
      v286 = (signed int)(dword_140404A6C[456202728] - v285) < 192;
      v287 = (unsigned __int8)v285;
      v288 = dword_140404A6C[289301092];
      LOBYTE(v278) = v286;
      if ( !v286 )
        v287 = 0;
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v289 = *v319 != -1;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v288) &= ~(((1 << v284) - 1) << v283);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v289 << SLOBYTE(dword_140404A6C[289301093]);
          v290 = 8 - dword_140404A6C[289301093];
          v288 = dword_140404A6C[289301092];
          if ( v284 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v284 == v290 )
          {
            v288 = ++dword_140404A6C[289301092];
            v283 = 0;
            dword_140404A6C[289301093] = 0;
            goto LABEL_480;
          }
          v289 >>= v290;
          v288 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          v284 -= v290;
          ++dword_140404A6C[289301092];
          v283 = 0;
          if ( v284 <= 0 )
            goto LABEL_480;
        }
        v283 = v284 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v284;
      }
LABEL_480:
      v291 = 1;
      v292 = *(unsigned int *)((char *)&dword_140404A6C[438894421] + v282);
      v293 = *v325;
      if ( v288 < 0x10000 )
      {
        v294 = v292 != v293;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v288) &= ~(((1 << v291) - 1) << v283);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v294 << SLOBYTE(dword_140404A6C[289301093]);
          v295 = 8 - dword_140404A6C[289301093];
          if ( v291 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v291 == v295 )
          {
            ++dword_140404A6C[289301092];
            v296 = 0;
            goto LABEL_488;
          }
          v288 = dword_140404A6C[289301092] + 1;
          v294 >>= v295;
          v291 -= v295;
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          v283 = 0;
          if ( v291 <= 0 )
            goto LABEL_489;
        }
        v296 = v291 + dword_140404A6C[289301093];
LABEL_488:
        dword_140404A6C[289301093] = v296;
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
        (unsigned int *)((char *)&dword_140404A6C[137367231] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367231] + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137367232] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367232] + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137367233] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367233] + v297),
        v278,
        28);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137367238] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367238] + v297),
        v278,
        9);
      v174 = dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
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
        *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v299) - 1) << v174);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v300 << SLOBYTE(dword_140404A6C[289301093]);
        v301 = 8 - dword_140404A6C[289301093];
        v144 = dword_140404A6C[289301092];
        if ( v299 < 8 - dword_140404A6C[289301093] )
          break;
        v174 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v299 == v301 )
        {
          v144 = ++dword_140404A6C[289301092];
          goto LABEL_503;
        }
        v144 = dword_140404A6C[289301092] + 1;
        v300 >>= v301;
        v299 -= v301;
        ++dword_140404A6C[289301092];
        if ( v299 <= 0 )
          goto LABEL_503;
      }
      v174 = v299 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v299;
    }
LABEL_503:
    v302 = 10;
    v303 = 10;
    if ( v144 < 0x10000 )
    {
      v304 = v261 & 0x3FF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v303) - 1) << v174);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v304 << SLOBYTE(dword_140404A6C[289301093]);
        v305 = 8 - dword_140404A6C[289301093];
        v144 = dword_140404A6C[289301092];
        if ( v303 < 8 - dword_140404A6C[289301093] )
          break;
        v174 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v303 == v305 )
        {
          v144 = ++dword_140404A6C[289301092];
          goto LABEL_512;
        }
        v144 = dword_140404A6C[289301092] + 1;
        v304 >>= v305;
        v303 -= v305;
        ++dword_140404A6C[289301092];
        if ( v303 <= 0 )
          goto LABEL_512;
      }
      v174 = v303 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v303;
    }
  }
LABEL_512:
  dword_140404A6C[179992051] += v144 - v317;
  v306 = v329;
  if ( (int)dword_140404A6C[225391228] <= 0 )
    v307 = 0;
  else
    v307 = *(signed int *)((char *)&dword_140404A6C[438887426] + (_QWORD)v329) % (signed int)dword_140404A6C[225391228];
  if ( v144 < 0x10000 )
  {
    v308 = v307 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v302) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v308 << SLOBYTE(dword_140404A6C[289301093]);
      v309 = 8 - dword_140404A6C[289301093];
      if ( v302 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v302 == v309 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_523;
      }
      v302 -= v309;
      v144 = dword_140404A6C[289301092] + 1;
      v308 >>= v309;
      ++dword_140404A6C[289301092];
      v174 = 0;
      if ( v302 <= 0 )
        goto LABEL_523;
    }
    dword_140404A6C[289301093] += v302;
  }
LABEL_523:
  v310 = 34LL * v307;
  sub_140115D90(&dword_140404A6C[v310 + 225391250], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391251], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391252], 2);
  sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v310 * 4 + 905778368), 2);
  ++*(unsigned int *)((char *)&dword_140404A6C[438887426] + (_QWORD)v306);
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;
// 160FB59A0: using guessed type unsigned int;
// 160FB5DA4: using guessed type unsigned int;
// 160FB61A8: using guessed type unsigned int;
// 160FC37B4: using guessed type unsigned int;
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;
// 165D84970: using guessed type unsigned int;
// 16B2A2248: using guessed type unsigned int;
// 16B2A2EC8: using guessed type unsigned int;
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (0000000140114D40) ----------------------------------------------------
__int64            sub_140114D40(_DWORD *a1, float *a2)
{
  double v3; // xmm1_8
  double v4; // xmm4_8
  double v5; // xmm2_8
  bool v6; // cf
  bool v7; // zf
  double v8; // xmm3_8
  double v9; // xmm1_8
  __int64 v10; // rdx
  bool v11; // cc
  double v12; // xmm4_8
  __int64 v13; // rax
  __int64 v14; // rcx
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

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140301DC8: using guessed type int dword_140301DC8;
// 140301DCC: using guessed type int dword_140301DCC;
// 140301DD0: using guessed type int dword_140301DD0;
// 140301DD4: using guessed type int dword_140301DD4;

//----- (0000000140114E90) ----------------------------------------------------
__int64            sub_140114E90(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // rbx
  double v5; // xmm6_8
  double v6; // xmm1_8
  double v7; // xmm4_8
  double v8; // xmm2_8
  bool v9; // cf
  bool v10; // zf
  double v11; // xmm3_8
  double v12; // xmm1_8
  __int64 v13; // rcx
  bool v14; // cc
  double v15; // xmm4_8
  __int64 v16; // rax
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

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140301DE8: using guessed type int dword_140301DE8;
// 140301DEC: using guessed type int dword_140301DEC;
// 140301DF0: using guessed type int dword_140301DF0;
// 140301DF4: using guessed type int dword_140301DF4;

//----- (00000001401150E0) ----------------------------------------------------
void            sub_1401150E0(__int64 a1, float *a2, float a3, signed int a4)
{
  signed int v5; // ebp
  float *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  float v9; // xmm1_4
  unsigned int v10; // eax
  int v11[4]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (unsigned int)(1 << a4) >> 1;
  v6 = a2;
  v7 = a1 - (_QWORD)a2;
  v8 = 3;
  do
  {
    v9 = *(float *)((char *)v6 + v7) - *v6;
    v10 = (int)(float)(fabs(v9) * (float)((float)v5 / a3));
    v11[0] = v10;
    if ( v10 > v5 - 1 )
    {
      v11[0] = v5 - 1;
      v10 = v5 - 1;
    }
    if ( v9 < 0.0 )
      v11[0] = v5 | v10;
    sub_140115D90(v11, a4);
    ++v6;
    --v8;
  }
  while ( v8 );
}


//----- (00000001401151C0) ----------------------------------------------------
double            sub_1401151C0(float *a1, float a2, char a3)
{
  signed int v3; // edx
  float v4; // xmm3_4
  unsigned int v5; // eax
  double result; // xmm0_8
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned int)(1 << a3) >> 1;
  v4 = *a1;
  v5 = (int)(float)(fabs(*a1) * (float)((float)v3 / a2));
  v7 = v5;
  if ( v5 > v3 - 1 )
  {
    v7 = v3 - 1;
    v5 = v3 - 1;
  }
  result = 0.0;
  if ( v4 < 0.0 )
    v7 = v3 | v5;
  sub_140115D90(&v7, a3);
  return result;
}


//----- (0000000140115230) ----------------------------------------------------
__int64            sub_140115230(_DWORD *a1, float *a2, char a3)
{
  __int64 v3; // r9
  __int64 v5; // r11
  double v6; // xmm1_8
  int v7; // ecx
  __int64 result; // rax

  v3 = 1;
  v5 = fabs(a2[1]) > fabs(*a2);
  if ( fabs(a2[2]) > fabs(a2[v5]) )
    v5 = 2;
  *a1 = v5;
  if ( a2[v5] < 0.0 )
    *a1 = v5 | 4;
  v6 = (double)((1 << a3) - 1);
  if ( (_DWORD)v5 )
  {
    v7 = 2 * (int)(fabs(*a2 / a2[v5]) * v6);
    a1[1] = v7;
    if ( *a2 < 0.0 )
      a1[1] = v7 | 1;
    v3 = 2;
  }
  if ( (_DWORD)v5 == 1 )
    goto LABEL_13;
  result = (unsigned int)(int)(fabs(a2[1] / a2[v5]) * v6);
  a1[v3] = 2 * result;
  if ( a2[1] < 0.0 )
    a1[v3] = (2 * result) | 1;
  ++v3;
  if ( (_DWORD)v5 != 2 )
  {
LABEL_13:
    result = (unsigned int)(int)(fabs(a2[2] / a2[v5]) * v6);
    a1[v3] = 2 * result;
    if ( a2[2] < 0.0 )
      a1[v3] = (2 * result) | 1;
  }
  return result;
}


//----- (0000000140115360) ----------------------------------------------------
__int64 sub_140115360()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  return sub_1400A5400((__int64)&dword_140404A6C[293512559]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (0000000140115410) ----------------------------------------------------
__int64 sub_140115410()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  sub_14015B070((__int64)&dword_140404A6C[293512559], "%I64u", &v6);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

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
  signed int v2; // r9d
  char v3; // r11
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // eax

  v2 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000
    || (signed int)(dword_140404A6C[289317484] + (a2 >> 3)) > (int)dword_140404A6C[289317483] )
  {
    return 0;
  }
  v3 = 0;
  v4 = 0;
  if ( a2 > 0 )
  {
    v5 = dword_140404A6C[289317485];
    while ( 1 )
    {
      v6 = 8 - v5;
      v4 |= (~(-1 << a2)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v2) >> SLOBYTE(dword_140404A6C[289317485]))) << v3;
      if ( a2 < 8 - v5 )
        break;
      if ( a2 == v6 )
      {
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v2 + 1;
        goto LABEL_11;
      }
      ++v2;
      v5 = 0;
      a2 -= v6;
      dword_140404A6C[289317484] = v2;
      v3 += v6;
      dword_140404A6C[289317485] = 0;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289317485] = a2 + v5;
  }
LABEL_11:
  *a1 = v4;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140115BD0) ----------------------------------------------------
__int64            sub_140115BD0(int *a1, int a2)
{
  char v3; // bl
  int v4; // edx
  int v6; // [rsp+38h] [rbp+10h] BYREF

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
  signed int v3; // r9d
  char v4; // r11
  int v5; // ebx
  unsigned int v6; // r10d
  unsigned int v7; // eax

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000
    || (signed int)(dword_140404A6C[289317484] + (a2 >> 3)) > (int)dword_140404A6C[289317483] )
  {
    return 0;
  }
  v4 = 0;
  v5 = 0;
  if ( a2 > 0 )
  {
    v6 = dword_140404A6C[289317485];
    while ( 1 )
    {
      v7 = 8 - v6;
      v5 |= (~(-1 << a2)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v4;
      if ( a2 < 8 - v6 )
        break;
      if ( a2 == v7 )
      {
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v3 + 1;
        goto LABEL_11;
      }
      ++v3;
      v6 = 0;
      a2 -= v7;
      dword_140404A6C[289317484] = v3;
      v4 += v7;
      dword_140404A6C[289317485] = 0;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289317485] = a2 + v6;
  }
LABEL_11:
  *a1 = a3 * v5;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140115D20) ----------------------------------------------------
__int64            sub_140115D20(int *a1, int a2)
{
  char v3; // di
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

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
  signed int v2; // eax
  unsigned int v4; // r9d
  char v5; // r10
  unsigned int v6; // ecx

  v2 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  v4 = *a1 & ~(-1 << a2);
  if ( a2 > 0 )
  {
    v5 = dword_140404A6C[289301093];
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v2) &= ~(((1 << a2) - 1) << v5);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v4 << SLOBYTE(dword_140404A6C[289301093]);
      v6 = 8 - dword_140404A6C[289301093];
      if ( a2 < 8 - dword_140404A6C[289301093] )
        break;
      if ( a2 == v6 )
      {
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        return 1;
      }
      v5 = 0;
      v2 = dword_140404A6C[289301092] + 1;
      v4 >>= v6;
      a2 -= v6;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      if ( a2 <= 0 )
        return 1;
    }
    dword_140404A6C[289301093] += a2;
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (0000000140115E60) ----------------------------------------------------
__int64            sub_140115E60(_DWORD *a1, signed int a2)
{
  sub_140115D90(a1, a2);
  return 1;
}


//----- (0000000140115E80) ----------------------------------------------------
__int64            sub_140115E80(_DWORD *a1, int a2, unsigned int a3)
{
  signed int v3; // r10d
  signed int v4; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // r8d
  unsigned int v8; // ecx

  v3 = dword_140404A6C[289301092];
  v4 = a2;
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  v6 = ~(-1 << a2) & (*a1 / a3);
  if ( a2 > 0 )
  {
    v7 = dword_140404A6C[289301093];
    while ( 1 )
    {
      if ( v7 )
        *((_BYTE *)&dword_140404A6C[289301094] + v3) |= (_BYTE)v6 << v7;
      else
        *((_BYTE *)&dword_140404A6C[289301094] + v3) = v6;
      v8 = 8 - dword_140404A6C[289301093];
      if ( v4 < 8 - dword_140404A6C[289301093] )
        break;
      if ( v4 == v8 )
      {
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        return 1;
      }
      v7 = 0;
      v3 = dword_140404A6C[289301092] + 1;
      v6 >>= v8;
      v4 -= v8;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      if ( v4 <= 0 )
        return 1;
    }
    dword_140404A6C[289301093] += v4;
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (0000000140115F70) ----------------------------------------------------
__int64            sub_140115F70(_DWORD *a1, signed int a2)
{
  sub_140115D90(a1, a2);
  return 1;
}


//----- (0000000140116210) ----------------------------------------------------
void sub_140116210()
{
  extern void physics_tick(void);
  /* src/engine/physics_tick.c; the debug console's tick markers stay here. */
  SR_DEBUG_TICK_BEGIN();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "before physics tick");
  physics_tick();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after physics tick");
  SR_DEBUG_TICK_END();
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA9278: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 1A4BF0900: using guessed type unsigned int;
// 1A4BF0920: using guessed type unsigned int;
// 1A4CF0924: using guessed type unsigned int;

//----- (00000001401164B0) ----------------------------------------------------
__int64            sub_1401164B0(int a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int *v7; // r12
       __m128i *v8; // r15
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned int *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int *v16; // rbx
  __int64 v17; // [rsp+60h] [rbp+18h]

  v2 = a1;
  if ( dword_140404A6C[283831448] == 3 )
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
  v7 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v6 + v3);
  v8 = (     __m128i *)((char *)&dword_140404A6C[71856372] + v6 + v3);
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
          result = sub_140051480(2u, v8, v13, *(unsigned int *)((char *)&dword_140404A6C[71856369] + v6 + v3));
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v2; // rbx
  __int64 v3; // rax
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  double v7; // xmm9_8
  float v8; // xmm8_4
  float v9; // xmm9_4
  signed int v10; // eax
  __int64 v11; // rdx
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
  if ( (int)dword_140404A6C[v2 + 71856276] < (int)dword_140404A6C[284022493] )
  {
    v3 = (int)dword_140404A6C[v2 + 71856286];
    if ( (unsigned int)v3 > 5 )
    {
      v8 = *(float *)&dword_140404A6C[179992855];
      v9 = *(float *)&dword_140404A6C[179992857];
      v15 = *(float *)&dword_140404A6C[179992856];
      v14 = v8
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992858] - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      v16 = v9
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992860] - 2.0) * (float)(unsigned __int8)rand())
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC8: using guessed type unsigned int;
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;

//----- (0000000140116A40) ----------------------------------------------------
__int64            sub_140116A40(int a1,      __m128i *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = -1;
  do
    ++v2;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[v2] );
  v3 = v2 & 0x3F;
  v4 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856367 + v4] = 1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856368 + v4] = v3;
  sub_1401FC920((__m128i *)&dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856372 + v4], a2, v3);
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856369 + v4] = dword_140404A6C[283785910];
  result = ((unsigned __int8)dword_140404A6C[v4 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v4 + 71856362] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E93544: using guessed type unsigned int;

//----- (0000000140116B00) ----------------------------------------------------
__int64            sub_140116B00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 result; // rax

  v4 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856367 + v4] = 3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856368 + v4] = a2;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856369 + v4] = a3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856370 + v4] = a4;
  result = ((unsigned __int8)dword_140404A6C[v4 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v4 + 71856362] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140116CA0) ----------------------------------------------------
unsigned int *           sub_140116CA0(int a1)
{
  unsigned int *result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r10
  unsigned int *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  result = (unsigned int *)a1;
  v2 = 3597LL * a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v3 != -1 )
  {
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    result = &dword_140404A6C[280658140];
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140117020) ----------------------------------------------------
__int64            sub_140117020(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r15
  unsigned int v4; // r12d
  int v5; // ebp
  unsigned int *v6; // r13
  float v7; // xmm1_4
  signed int v8; // esi
  int *v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  signed int v13; // eax
  unsigned int v14; // edi
  signed int v15; // eax
  signed int v16; // eax
  __int64 v17; // rdi
  int v18; // r9d
  unsigned int *v19; // rdx
  __int64 v20; // r8
  signed int v21; // eax
  __int64 v22; // rdx
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
    result = (__int64)&dword_140404A6C[280651440];
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
              if ( dword_140404A6C[283831312] == 4 )
              {
                v16 = sr_CreateItem(27, v23, nullptr, (float *)v24);
                v17 = v16;
                sub_1400E35D0(v16, -1, v3, v5);
                result = dword_140404A6C[179992861];
                if ( (int)dword_140404A6C[179992861] > 0 )
                {
                  v18 = *v9;
                  v19 = &dword_140404A6C[179992864];
                  v20 = dword_140404A6C[179992861];
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140117820) ----------------------------------------------------
void            sub_140117820(unsigned int a1)
{
  __int64 v1; // r9
  bool v2; // zf
  int v3; // edx
  unsigned int *v4; // rax
  signed int v5; // ecx
  signed int v6; // edx
  unsigned int v7; // r8d
  unsigned int *v8; // rax

  if ( a1 <= 0xFF )
  {
    v1 = (int)a1;
    v2 = dword_140404A6C[a1 + 284023074] == 1;
    dword_140404A6C[a1 + 284023074] ^= 1u;
    if ( v2 )
    {
      v5 = dword_140404A6C[284023330];
      v6 = 0;
      if ( (int)dword_140404A6C[284023330] > 0 )
      {
        v7 = dword_140404A6C[3597 * v1 + 71856265];
        v8 = &dword_140404A6C[284023331];
        do
        {
          if ( *v8 == v7 )
          {
            dword_140404A6C[284023330] = v5 - 1;
            *v8 = dword_140404A6C[v5 + 284023330];
            v5 = dword_140404A6C[284023330];
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
      if ( (int)dword_140404A6C[284023330] <= 0 )
      {
LABEL_7:
        if ( (int)dword_140404A6C[284023330] < 1024 )
        {
          dword_140404A6C[dword_140404A6C[284023330] + 284023331] = dword_140404A6C[3597 * a1 + 71856265];
          ++dword_140404A6C[284023330];
        }
      }
      else
      {
        v4 = &dword_140404A6C[284023331];
        while ( *v4 != dword_140404A6C[3597 * a1 + 71856265] )
        {
          ++v3;
          ++v4;
          if ( v3 >= (int)dword_140404A6C[284023330] )
            goto LABEL_7;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7B2F4: using guessed type unsigned int;

//----- (00000001401189F0) ----------------------------------------------------
__int64            sub_1401189F0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // r9
  float v7; // xmm0_4
  float v8; // xmm1_4

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011AF80) ----------------------------------------------------
__int64            sub_14011AF80(int a1, int a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  signed int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r10
  float v8; // xmm2_4
  unsigned int *v9; // rcx
  int v10; // r8d
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  signed int v15; // eax
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // r8d
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // r8d
  int v25; // r8d
  int v26; // r9d
  int v27; // eax
  int v28; // r8d
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // r8d
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  int v36; // r8d
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  float v40; // xmm3_4
  __m128i v41; // xmm1

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
      if ( dword_140404A6C[283831312] == 3 )
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011B7F0) ----------------------------------------------------
__int64            sub_14011B7F0(int a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r10d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B7F0[576];
#define v7 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[512])(void *)(sr_frame_14011B7F0 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 560)) /* [rsp+230h] */

  if ( (unsigned int)a1 <= 0xFF )
  {
    v4 = 3597LL * a1;
    if ( !dword_140404A6C[v4 + 71856277] && a2 > 0 && dword_140404A6C[283831312] - 4 > 1 )
    {
      sub_140158AB0(
        v8,
        "%s(%d) team damage: %d",
        (     char *)&dword_140404A6C[v4 + 71856254],
        dword_140404A6C[v4 + 71856265],
        a2);
      v5 = dword_140404A6C[v4 + 71856292];
      if ( v5 != -1 )
        sub_1400A9760(v5, 3u, 0, (signed int)(a2 * dword_140404A6C[283831455]) / 100);
      sub_140051DC0(a1);
      sub_140051F50(a1);
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v7
#undef v8
#undef v9

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;

//----- (000000014011B8F0) ----------------------------------------------------
_BOOL8            sub_14011B8F0(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  _BOOL8 result; // rax

  v3 = 5873LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)&dword_140404A6C[v3 + 283831485] - a3)
    && *a1 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831488]) )
  {
    v4 = a1[2];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 283831487] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831490]) )
    {
      return true;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011B960) ----------------------------------------------------
_BOOL8            sub_14011B960(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 5873LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)&dword_140404A6C[v3 + 283831491] - a3)
    && *a1 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831494]) )
  {
    v4 = a1[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 283831492] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831495]) )
    {
      v5 = a1[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 283831493] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831496]) )
      {
        return true;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011B9F0) ----------------------------------------------------
_BOOL8            sub_14011B9F0(int a1, float *a2, float a3)
{
  __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 14019LL * a1;
  result = false;
  if ( *a2 >= (float)(*(float *)&dword_140404A6C[v3 + 225641219] - a3)
    && *a2 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641222]) )
  {
    v4 = a2[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 225641220] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641223]) )
    {
      v5 = a2[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 225641221] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641224]) )
      {
        return true;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011BAD0) ----------------------------------------------------
_BOOL8            sub_14011BAD0(float *a1)
{
  float v1; // xmm5_4
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm10_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  _BOOL8 result; // rax

  v1 = *a1 - *(float *)&dword_140404A6C[284024502];
  v2 = a1[1] - *(float *)&dword_140404A6C[284024503];
  v3 = a1[2] - *(float *)&dword_140404A6C[284024504];
  result = false;
  if ( (float)((float)((float)(v2 * *(float *)&dword_140404A6C[284024512])
                     + (float)(v1 * *(float *)&dword_140404A6C[284024511]))
             + (float)(v3 * *(float *)&dword_140404A6C[284024513])) <= 0.0 )
  {
    v4 = *(float *)&dword_140404A6C[284024511] * 0.70709997;
    v5 = *(float *)&dword_140404A6C[284024512] * 0.70709997;
    v6 = *(float *)&dword_140404A6C[284024513] * 0.70709997;
    if ( (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024511] * 0.70709997)
                                       - (float)(*(float *)&dword_140404A6C[284024505] * 0.70709997))
                               * v1)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024512] * 0.70709997)
                                       - (float)(*(float *)&dword_140404A6C[284024506] * 0.70709997))
                               * v2))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024513] * 0.70709997)
                               - (float)(*(float *)&dword_140404A6C[284024507] * 0.70709997))
                       * v3)) <= 0.0
      && (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024506] * 0.70709997) + v5) * v2)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024505] * 0.70709997) + v4) * v1))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024507] * 0.70709997) + v6) * v3)) <= 0.0
      && (float)((float)((float)((float)(v4 - (float)(*(float *)&dword_140404A6C[284024508] * 0.70709997)) * v1)
                       + (float)((float)(v5 - (float)(*(float *)&dword_140404A6C[284024509] * 0.70709997)) * v2))
               + (float)((float)(v6 - (float)(*(float *)&dword_140404A6C[284024510] * 0.70709997)) * v3)) <= 0.0
      && (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024509] * 0.70709997) + v5) * v2)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024508] * 0.70709997) + v4) * v1))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024510] * 0.70709997) + v6) * v3)) <= 0.0 )
    {
      return true;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011BD10) ----------------------------------------------------
__int64 sub_14011BD10(     char *a1, ...)
{
  char *v2; // rbx
  __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  v2 = sub_14020B528(1u);
  v3 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v3, (__int64)v2, (__int64)a1, 0, (__int64)va);
}

// 14011BD10: using guessed type __int64 sub_14011BD10(const char *a1, ...);

//----- (000000014011BD70) ----------------------------------------------------
__int64            sub_14011BD70(signed int a1)
{
  int v2; // ebp
  char v3; // r14
  int v4; // eax
  signed int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  signed int v9; // edx
  unsigned int v10; // r8d

  sub_1401FC920((__m128i *)&dword_140404A6C[291021665], (     __m128i *)&dword_140404A6C[289317486], a1);
  v2 = BYTE2(dword_140404A6C[291021666]);
  v3 = HIBYTE(dword_140404A6C[291021666]);
  dword_140404A6C[291021664] = 1;
  *(_QWORD *)&dword_140404A6C[291021661] = 8;
  dword_140404A6C[291021663] = a1;
  if ( BYTE2(dword_140404A6C[291021666]) >= 0x10u || HIBYTE(dword_140404A6C[291021666]) > 0x10u )
    return 0;
  v4 = dword_140404A6C[289333871];
  v5 = -1;
  while ( v4 != dword_140404A6C[289333872] )
  {
    if ( dword_140404A6C[16387 * v4 + 289333873] == LOWORD(dword_140404A6C[291021666]) )
      v5 = v4;
    else
      v4 = ((_BYTE)v4 + 1) & 0x3F;
    if ( v5 != -1 )
      goto LABEL_12;
  }
  v6 = 16387LL * (int)dword_140404A6C[289333872];
  v5 = dword_140404A6C[289333872];
  dword_140404A6C[v6 + 289333873] = LOWORD(dword_140404A6C[291021666]);
  *(_QWORD *)&dword_140404A6C[v6 + 289333874] = 0;
  dword_140404A6C[289333872] = (LOBYTE(dword_140404A6C[289333872]) + 1) & 0x3F;
  if ( dword_140404A6C[289333871] == dword_140404A6C[289333872] )
    dword_140404A6C[289333871] = (LOBYTE(dword_140404A6C[289333871]) + 1) & 0x3F;
LABEL_12:
  v7 = 16387LL * v5;
  v8 = a1 - 8;
  sub_1401FC920(
    (__m128i *)((char *)&dword_140404A6C[v7 + 289333876] + (unsigned int)(v2 << 10)),
    (     __m128i *)&dword_140404A6C[291021667],
    v8);
  v9 = v8 + (v2 << 10);
  if ( (int)dword_140404A6C[v7 + 289333875] < v9 )
    dword_140404A6C[v7 + 289333875] = v9;
  v10 = dword_140404A6C[v7 + 289333874] | (1 << v2);
  dword_140404A6C[v7 + 289333874] = v10;
  if ( (((1 << v3) - 1) & v10) != (1 << v3) - 1 )
    return 0;
  *(_QWORD *)&dword_140404A6C[289317484] = 4;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[289317486],
    (     __m128i *)&dword_140404A6C[v7 + 289333876],
    (int)dword_140404A6C[v7 + 289333875]);
  return dword_140404A6C[v7 + 289333875];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853BD428: using guessed type unsigned int;
// 1853BD42C: using guessed type unsigned int;
// 185A2D7E8: using guessed type unsigned int;
// 185A2D7EC: using guessed type unsigned int;

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
  double v3; // xmm0_8

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
  double v4; // xmm0_8
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4

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
  float v3; // xmm5_4

  v3 = (float)((float)(a1[1] * a2[1]) + (float)(*a1 * *a2)) + (float)(a1[2] * a2[2]);
  return fsqrt(
           (float)(a3 * a3)
         - (float)((float)((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]))
                 - (float)(v3 * v3)))
       - v3;
}


//----- (000000014011C6B0) ----------------------------------------------------
__m128            sub_14011C6B0(__int64 a1, float *a2, float a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm6

  v3 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4))));
  SR_VEC_LANES(128, v3, f32)[0] = (float)((float)(SR_VEC_LANES(128, v3, f32)[0] * a2[1]) + (float)(*(float *)a1 * *a2))
                 + (float)(*(float *)(a1 + 8) * a2[2]);
  v4 = _mm_xor_ps(v3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  SR_VEC_LANES(128, v4, f32)[0] = SR_VEC_LANES(128, v4, f32)[0]
                 - fsqrt(
                     (float)(a3 * a3)
                   - (float)((float)((float)((float)(*(float *)a1 * *(float *)a1)
                                           + (float)(*(float *)(a1 + 4) * *(float *)(a1 + 4)))
                                   + (float)(*(float *)(a1 + 8) * *(float *)(a1 + 8)))
                           - (float)(SR_VEC_LANES(128, v4, f32)[0] * SR_VEC_LANES(128, v4, f32)[0])));
  return v4;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014011C730) ----------------------------------------------------
__int64            sub_14011C730(__int64 a1, __int64 a2, __int64 a3)
{
  if ( dword_140404A6C[283831484] )
    sub_140198F0B(1, a2, a3);
  sub_14013D1B0();
  return render_cache_camera_uniforms_candidate();
}

// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140199007: using guessed type __int64 __fastcall ntohs(_QWORD);
// 140199013: using guessed type __int64 __fastcall recvfrom(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1402B2658: using guessed type int dword_1402B2658;
// 1402B26C3: using guessed type char byte_1402B26C3;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD404: using guessed type unsigned int;
// 1853AD408: using guessed type unsigned int;
// 1853AD410: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;

//----- (000000014011C950) ----------------------------------------------------
double sub_14011C950()
{
  __int64 v0; // r8
  __int64 v1; // r8
  unsigned int *v2; // rdi
  __int64 i; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  double result; // xmm0_8

  if ( !dword_140404A6C[315570516] && !dword_140404A6C[325308780] )
  {
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    qword_1404042E0(dword_140404A6C[71738225]);
    qword_140404378(dword_140404A6C[71738230], 1, 0, &dword_140404A6C[431564517]);
    qword_140404378(dword_140404A6C[71738231], 1, 0, &dword_140404A6C[431564565]);
    qword_140404378(dword_140404A6C[71738234], 1, 0, &dword_140404A6C[431564485]);
    qword_140404378(dword_140404A6C[71738235], 1, 0, &dword_140404A6C[431564501]);
    qword_140404338(dword_140404A6C[71738232], 1, &dword_140404A6C[284550403]);
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], v0);
    qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791466] + 283793813], v1);
    qword_140404238(0);
    v2 = &dword_140404A6C[83194358];
    for ( i = 0; i < 98304; i += 24 )
    {
      if ( *(v2 - 1) )
      {
        /* sr_item_shadow_uniform: original MAXSS/DIVSS/CVTDQ2PS/MULSS order. */
        __m128 sr_shadow_denom=_mm_max_ss(_mm_set_ss(*(float *)&dword_140404A6C[284550404]),_mm_set_ss(0.125f));
        __m128 sr_shadow_recip=_mm_div_ss(_mm_set_ss(8.0f),sr_shadow_denom);
        int32_t sr_shadow_age=(int32_t)(v2[6150]+1u);
        __m128 sr_shadow_value=_mm_cvtepi32_ps(_mm_setr_epi32(sr_shadow_age,0,0,0));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,_mm_set_ss(*(float *)&dword_140404A6C[111579653+263004*(int64_t)(int32_t)*v2]));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,sr_shadow_recip);
        ((void (*)(int,float))unk_1404042E8)((int)dword_140404A6C[71738233],_mm_cvtss_f32(sr_shadow_value));
        /* sr_item_shadow_uniform_end */
        ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[312324436+3074*((int64_t)(int32_t)dword_140404A6C[i/4+315472211])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+315472211)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+315472211])*dword_140404A6C[312324432])));
        (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*v2[6154]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[322062700+3074*((int64_t)(int32_t)dword_140404A6C[i/4+325210475])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+325210475)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+325210475])*dword_140404A6C[322062696])));
      }
      v2 += 6930;
    }
    qword_140404230(0);
    qword_140404170(34963, 0, v4);
    return qword_140404170(34962, 0, v5);
  }
  return result;
}

// 14011CAA9: variable 'v0' is possibly undefined
// 14011CAC2: variable 'v1' is possibly undefined
// 14011CBF2: variable 'v4' is possibly undefined
// 14011CBFF: variable 'v5' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 1404042E8: using guessed type __int64 (__fastcall *unk_1404042E8)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014011CC30) ----------------------------------------------------
__int64            sub_14011CC30(int a1)
{
  unsigned int v1; // eax
  float v2; // xmm9_4
  float v3; // xmm13_4
  unsigned int *v4; // rbx
  float v5; // xmm14_4
  __int64 v6; // r13
  float v7; // xmm15_4
  unsigned int *v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // r15
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  __int64 v18; // rax
  unsigned int *v19; // r12
  signed int i; // r15d
  signed int v21; // edi
  _BYTE *v22; // rbx
  char *v23; // r13
  float v24; // xmm7_4
  unsigned int *v25; // r8
  float v26; // xmm4_4
  float v27; // xmm5_4
  int v28; // r9d
  float v29; // xmm9_4
  unsigned int v30; // r10d
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  int *v38; // rsi
  int *v39; // rbx
  int v40; // r14d
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  float v45; // xmm1_4
  float v46; // xmm0_4
  int v47; // r12d
  _DWORD *v48; // r9
  __int64 v49; // r15
  __int64 v50; // r10
  __int64 v51; // rdi
  __int64 v52; // r11
  __int64 v53; // rax
  unsigned int *v54; // r8
  __int64 v55; // r10
  int v56; // edx
  __int64 v57; // kr00_8
  int v58; // ebx
  int v59; // r14d
  unsigned int *v60; // rcx
  float *v61; // rdx
  __int64 v62; // r8
  float v63; // xmm1_4
  __int64 v64; // rcx
  __int64 v65; // rax
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
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[40714349]), 0, 0x400u);
  dword_140404A6C[70074733] = 0;
  dword_140404A6C[70087022] = 0;
  v1 = sub_140198F9B();
  v2 = *(float *)&dword_140404A6C[111579653];
  v3 = *(float *)&dword_140404A6C[284024504];
  v4 = &dword_140404A6C[83201284];
  v5 = *(float *)&dword_140404A6C[284024503];
  v6 = 4096;
  v7 = *(float *)&dword_140404A6C[284024502];
  v8 = &dword_140404A6C[83200507];
  v9 = dword_140404A6C[284024893];
  v10 = 4096;
  v76 = &dword_140404A6C[83200507];
  dword_140404A6C[70087023] = v1;
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
  v19 = &dword_140404A6C[83194357];
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
  v24 = *(float *)&dword_140404A6C[111579653];
  v25 = &dword_140404A6C[83200503];
  v26 = *(float *)&dword_140404A6C[284024504];
  v27 = *(float *)&dword_140404A6C[284024503];
  v28 = 0;
  v29 = *(float *)&dword_140404A6C[284024502];
  v30 = dword_140404A6C[70074733];
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
        *(float *)&dword_140404A6C[2 * dword_140404A6C[70074733] + 70078831] = fsqrt(
                                                                                 (float)((float)((float)(v27 - v37)
                                                                                               * (float)(v27 - v37))
                                                                                       + (float)((float)(v29 - v68)
                                                                                               * (float)(v29 - v68)))
                                                                               + (float)((float)(v26 - (float)(v36 * v24))
                                                                                       * (float)(v26 - (float)(v36 * v24))));
        v30 = ++dword_140404A6C[70074733];
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
  v39 = (int *)&dword_140404A6C[315472211];
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
                        + (int)(v51 * dword_140404A6C[315570520]
                              + dword_140404A6C[3074 * v51 + 315570524 + 3 * v39[3246089]])
                        / 4
                        + 2 * v48[1];
                    dword_140404A6C[v55 + 53297517 + (int)*v54] = v56;
                    dword_140404A6C[v55 + 53297517 + (int)*v54] *= 4;
                    *(_QWORD *)&dword_140404A6C[2 * v55 + 44908909 + 2 * (int)*v54] = 4 * v56;
                    *(_QWORD *)&dword_140404A6C[2 * v55 + 57491821 + 2 * (int)*v54] = dword_140404A6C[v55 + 53297517 + (int)*v54];
                    v57 = (int)(v52 * dword_140404A6C[312324432] + dword_140404A6C[3074 * v52 + 312324436 + 3 * v39[1]]);
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
  v58 = dword_140404A6C[70074733];
  v59 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v60 = &dword_140404A6C[437192782];
    v61 = (float *)&dword_140404A6C[70078831];
    v62 = dword_140404A6C[70074733];
    do
    {
      v63 = *v61 * 256.0;
      v61 += 2;
      *v60++ = (int)(float)(16777216.0 - v63);
      --v62;
    }
    while ( v62 );
  }
  dword_140404A6C[436668493] = v58;
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
    while ( v59 < (int)dword_140404A6C[70074733] );
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F55020: using guessed type unsigned int;
// 150F61024: using guessed type unsigned int;
// 150F61028: using guessed type unsigned int;
// 15ADA9280: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 183F7CB60: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (000000014011E730) ----------------------------------------------------
double            sub_14011E730(int a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = a1;
  v3 = a2;
  qword_1404042E0(dword_140404A6C[71737925]);
  qword_140404238(0);
  qword_140404238(1);
  qword_140404238(2);
  qword_140404238(4);
  qword_140404238(5);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v3 + 283791190] + 283793813], v4);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(0));
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(12));
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(20));
  unk_140404560(4, 4, 5124, 4 * dword_140404A6C[196707 * v3 + 160858070], 32, 20);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(5, 4, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*v3+160858070]),(const void *)(intptr_t)(48));
  qword_140404338(dword_140404A6C[71737938], 16, &dword_140404A6C[240 * v2 + 23875685]);
  qword_140404338(dword_140404A6C[71737939], 16, &dword_140404A6C[240 * v2 + 23875733]);
  unk_140404370(dword_140404A6C[71737940], 16, 0, &dword_140404A6C[240 * v2 + 23875781]);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(35977);
  unk_140404518(0);
  qword_140302FF8(0, 0, dword_140404A6C[196707 * v3 + 160858069]);
  unk_140404520(v6, v5);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(35977);
  qword_140404230(0);
  qword_140404230(1);
  qword_140404230(2);
  qword_140404230(4);
  qword_140404230(5);
  qword_140404170(34962, 0, v7);
  return qword_1404042E0(0);
}

// 14011E7A7: variable 'v4' is possibly undefined
// 14011E912: variable 'v6' is possibly undefined
// 14011E912: variable 'v5' is possibly undefined
// 14011E95E: variable 'v7' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404370: using guessed type __int64 (__fastcall *unk_140404370)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404518: using guessed type __int64 (__fastcall *unk_140404518)(_QWORD);
// 140404520: using guessed type __int64 (__fastcall *unk_140404520)(_QWORD, _QWORD);
// 140404560: using guessed type __int64 (__fastcall *unk_140404560)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (000000014011E9B0) ----------------------------------------------------
__int64 sub_14011E9B0()
{
  __int64 v0; // r8
  int v1; // r14d
  int i; // ebx
  int j; // ebx
  int v4; // edi
  float *v5; // rsi
  __int64 v6; // rbx
  int v7; // edi
  float *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int *v11; // r12
  unsigned int *v12; // r13
  unsigned int *v13; // rdi
  float *v14; // rsi
  unsigned int *v15; // rbx
  __int64 v16; // r15
  int v17; // r8d
  float v18; // xmm1_4
  float v19; // xmm3_4
  __int128 v20; // xmm0
  int v21; // edi
  unsigned int *v22; // rbx
  unsigned int v23; // xmm0_4
  float v24; // xmm0_4
  unsigned int *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r8
  unsigned int *v28; // rbx
  __int64 v29; // rdi
  float *v30; // rbx
  __int64 v31; // rsi
  int v32; // edi
  __int64 v33; // rsi
  unsigned int v34; // eax
  float v35; // xmm2_4
  float v36; // xmm5_4
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm5_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  __int64 v48; // rdx
  unsigned int *v49; // rcx
  __int64 v50; // r8
  signed int v51; // r13d
  signed int v52; // eax
  unsigned int *v53; // r12
  __int64 v54; // r15
  signed int v55; // edi
  __int64 v56; // rsi
  unsigned int *v57; // rbx
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // rdx
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm4_4
  float v64; // xmm2_4
  float v65; // xmm3_4
  float v66; // xmm9_4
  float v67; // xmm6_4
  float v68; // xmm5_4
  float v69; // xmm0_4
  float v70; // xmm7_4
  float v71; // xmm8_4
  float v72; // xmm9_4
  float v73; // xmm3_4
  float v74; // xmm7_4
  float v75; // xmm8_4
  float v76; // xmm9_4
  float v77; // xmm7_4
  float v78; // xmm0_4
  unsigned int v79; // xmm7_4
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  float *v87; // rdi
  __int64 v88; // r9
  __int64 v89; // r15
  float v90; // xmm8_4
  float v91; // xmm7_4
  float *v92; // r10
  float v93; // xmm9_4
  float v94; // xmm13_4
  float v95; // xmm14_4
  float v96; // xmm15_4
  __int64 v97; // r11
  __int64 v98; // rax
  float v99; // xmm6_4
  float v100; // xmm2_4
  float v101; // xmm5_4
  float v102; // xmm6_4
  float v103; // xmm4_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm6_4
  float v107; // xmm5_4
  float v108; // xmm1_4
  float v109; // xmm6_4
  float v110; // xmm2_4
  float v111; // xmm0_4
  float v112; // xmm2_4
  float v113; // xmm1_4
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm4_4
  float v117; // xmm3_4
  float v118; // xmm0_4
  float v119; // xmm6_4
  float v120; // xmm5_4
  float v121; // xmm1_4
  float v122; // xmm6_4
  float v123; // xmm3_4
  float v124; // xmm1_4
  float v125; // xmm4_4
  float v126; // xmm5_4
  float v127; // xmm3_4
  float v128; // xmm1_4
  float v129; // xmm2_4
  float v130; // xmm3_4
  float v131; // xmm6_4
  float v132; // xmm4_4
  float v133; // xmm5_4
  float v134; // xmm6_4
  float v135; // xmm4_4
  float v136; // xmm1_4
  float v137; // xmm1_4
  float v138; // xmm2_4
  float v139; // xmm8_4
  float v140; // xmm7_4
  float v141; // xmm9_4
  float v142; // xmm13_4
  float v143; // xmm14_4
  float v144; // xmm15_4
  __int64 v145; // rax
  float v146; // xmm1_4
  float v147; // xmm6_4
  float v148; // xmm2_4
  float v149; // xmm3_4
  float v150; // xmm4_4
  float v151; // xmm5_4
  float v152; // xmm6_4
  float v153; // xmm4_4
  float v154; // xmm1_4
  float v155; // xmm1_4
  float v156; // xmm2_4
  signed int v157; // esi
  unsigned int *v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  unsigned int *v176; // rbx
  signed int v177; // esi
  float *v178; // rdi
  unsigned int v179; // xmm0_4
  double v180; // xmm2_8
  __int128 v181; // xmm1
  float v182; // xmm0_4
  __int128 v183; // xmm1
  unsigned int *v184; // rdx
  unsigned int *v185; // rcx
  __int64 v186; // rax
  signed int v187; // edi
  __int64 v188; // rbx
  __int64 v189; // rdx
  unsigned int v190; // eax
  __int64 v191; // rcx
  unsigned int v192; // xmm1_4
  float v193; // xmm0_4
  __int64 v194; // rcx
  unsigned int v195; // xmm1_4
  float v196; // xmm0_4
  __int64 v197; // rdx
  __int64 v198; // r8
  signed int v199; // eax
  signed int v200; // r12d
  unsigned int *v201; // rsi
  signed int v202; // edi
  __int64 v203; // rbx
  __int64 v204; // rdx
  __int64 v205; // r8
  unsigned int *v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // r8
  unsigned int *v210; // rdi
  unsigned int v211; // xmm1_4
  unsigned int v212; // xmm0_4
  __int64 v213; // rdx
  __int64 v214; // r8
  unsigned int *v215; // rbx
  __int64 v216; // rsi
  unsigned int *v217; // rdi
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

  qword_140404050(3553, dword_140404A6C[451221642]);
  v1 = 0;
  for ( i = 0; i < (int)dword_140404A6C[179930436]; ++i )
  {
    ((void (*)(unsigned,float,float,float))unk_1404043F8)(2, 1.0f, 0.0f, 0.5f); /* native XMM1-3 */
    sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * i + 723935104), 4.0, 2);
  }
  if ( dword_140404A6C[179668287] )
  {
    ((void (*)(unsigned,float,float,float))unk_1404043F8)(2, 1.0f, 1.0f, 0.0f); /* native XMM1-3 */
    for ( j = 0; j < (int)dword_140404A6C[112631653]; ++j )
      sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 20LL * j + 454739976), 1.0, 1);
  }
  v4 = 0;
  if ( (int)dword_140404A6C[179815746] > 0 )
  {
    v5 = (float *)&dword_140404A6C[179815753];
    do
    {
      v6 = 7LL * v4;
      unk_140404400(2, &dword_140404A6C[v6 + 179815750]);
      sub_140125670(&dword_140404A6C[v6 + 179815747], *v5, 2);
      ++v4;
      v5 += 7;
    }
    while ( v4 < (int)dword_140404A6C[179815746] );
  }
  v7 = 0;
  if ( (int)dword_140404A6C[179873091] > 0 )
  {
    v8 = (float *)&dword_140404A6C[179873098];
    do
    {
      v9 = 7LL * v7;
      unk_140404400(2, &dword_140404A6C[v9 + 179873095]);
      sub_140125670(&dword_140404A6C[v9 + 179873092], *v8, 2);
      ++v7;
      v8 += 7;
    }
    while ( v7 < (int)dword_140404A6C[179873091] );
  }
  v10 = 256;
  v11 = &dword_140404A6C[280651457];
  v227 = 256;
  v12 = &dword_140404A6C[280651440];
  do
  {
    if ( *(v11 - 154) )
    {
      v13 = &dword_140404A6C[282486068];
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
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v22 = &dword_140404A6C[132400643];
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
      if ( v21 == dword_140404A6C[179992045] )
        sub_14007E010(&v224, &v229, 1.0, 2.0, 2.0, 0x3F800000u, 0x3F800000u, 0);
      ++v21;
      v22 += 383;
    }
    while ( v21 < (int)dword_140404A6C[132792829] );
  }
  v25 = &dword_140404A6C[283831485];
  v26 = 6;
  do
  {
    sub_14007DDF0((float *)v25, (float *)(v25 + 3));
    sub_14007DDF0((float *)(v25 + 6), (float *)(v25 + 9));
    v25 += 5873;
    --v26;
  }
  while ( v26 );
  v28 = &dword_140404A6C[487148756];
  v29 = 8;
  do
  {
    v220 = 1065353216;
    ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
    sub_140125670(v28, 1.0, 2);
    v28 += 19;
    --v29;
  }
  while ( v29 );
  v30 = (float *)&dword_140404A6C[278845898];
  do
  {
    if ( *((_DWORD *)v30 - 5) )
    {
      v31 = *(int *)v30;
      v220 = 1061158912;
      ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.8000000000000p-1f);
      if ( *((_DWORD *)v30 - 4) )
      {
        v220 = 1061158912;
        ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x0.0p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.8000000000000p-1f);
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
  while ( (__int64)v30 < (__int64)&dword_140404A6C[280648138] );
  qword_140404050(3553, dword_140404A6C[451221642]);
  v51 = 0;
  v52 = dword_140404A6C[421506973];
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  LODWORD(v227) = 0;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279650;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v49 = &dword_140404A6C[358300589];
    v53 = &dword_140404A6C[358300579];
    v54 = 0;
    v228 = &dword_140404A6C[358300589];
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
          v77 = (float)((float)(v74 * *(float *)&dword_140404A6C[284550403])
                      + (float)(v75 * *(float *)&dword_140404A6C[284550404]))
              + (float)(v76 * *(float *)&dword_140404A6C[284550405]);
          if ( v77 <= 0.0 )
            v77 = 0.0;
          dword_140404A6C[456807036] = 1065353216;
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
          dword_140404A6C[456807035] = v79;
          dword_140404A6C[456807034] = v79;
          *(float *)&dword_140404A6C[456807033] = v78;
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v58 + v56) + 1437403384), v60, v59);
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v56 + (int)*v57) + 1437403384), v80, v81);
          sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v56 + (int)v57[1]) + 1437403384), v82, v83);
          ++v55;
          v57 += 3;
        }
        while ( v55 < (int)*v53 );
        v52 = dword_140404A6C[421506973];
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
  v87 = (float *)&dword_140404A6C[129716721];
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402794A0;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
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
  while ( (__int64)v87 < (__int64)&dword_140404A6C[132384241] );
  sub_14006E0D0(v85, v84, v86);
  v176 = &dword_140404A6C[129716728];
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
          if ( dword_140404A6C[179955874] )
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
  while ( (__int64)v176 < (__int64)&dword_140404A6C[132384248] );
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279550;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( dword_140404A6C[179668287] )
  {
    if ( dword_140404A6C[179992045] != -1 )
    {
      v174 = 383LL * (int)dword_140404A6C[179992045];
      v187 = 0;
      if ( (int)dword_140404A6C[v174 + 132400671] > 0 )
      {
        v188 = 0;
        while ( 1 )
        {
          v189 = v174 * 4 + v188 * 4;
          v190 = dword_140404A6C[v174 + 132400681 + v188];
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402794E0;
          if ( v190 == -1 )
            goto LABEL_87;
          if ( v190 == 1 )
            break;
LABEL_88:
          v191 = 34LL
               * (int)dword_140404A6C[396 * *(unsigned int *)((char *)&dword_140404A6C[132400672] + v189) + 225426056];
          v192 = dword_140404A6C[v191 + 225391235];
          v224 = dword_140404A6C[v191 + 225391233];
          v193 = *(float *)&dword_140404A6C[v191 + 225391234];
          LODWORD(v226) = v192;
          v225 = v193 + 4.0;
          sub_14007D520(&v224, v189, v175);
          v194 = 34LL
               * (int)dword_140404A6C[396 * dword_140404A6C[383 * (int)dword_140404A6C[179992045] + 132400672 + v188]
                                    + 225426057];
          v195 = dword_140404A6C[v194 + 225391235];
          v224 = dword_140404A6C[v194 + 225391233];
          v196 = *(float *)&dword_140404A6C[v194 + 225391234];
          LODWORD(v226) = v195;
          v225 = v196 + 4.0;
          sub_14007D520(&v224, v197, v198);
          ++v187;
          v174 = 383LL * (int)dword_140404A6C[179992045];
          v188 += 5;
          if ( v187 >= (int)dword_140404A6C[v174 + 132400671] )
            goto LABEL_89;
        }
        dword_140404A6C[456807033] = 0;
LABEL_87:
        dword_140404A6C[456807035] = 1065353216;
        goto LABEL_88;
      }
    }
LABEL_89:
    v199 = dword_140404A6C[225426046];
    v200 = 0;
    if ( (int)dword_140404A6C[225426046] > 0 )
    {
      v201 = &dword_140404A6C[225426061];
      do
      {
        v202 = 0;
        if ( (int)*v201 > 0 )
        {
          do
          {
            *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279660;
            v203 = 1584LL * v200 + 28LL * v202;
            sub_14007D520((unsigned int *)((char *)&dword_140404A6C[225426063] + v203), v173, v175);
            sub_14007D520((unsigned int *)((char *)&dword_140404A6C[225426066] + v203), v204, v205);
            ++v202;
          }
          while ( v202 < (int)*v201 );
          v199 = dword_140404A6C[225426046];
        }
        ++v200;
        v201 += 396;
      }
      while ( v200 < v199 );
    }
    v206 = &dword_140404A6C[486149254];
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279550;
    do
    {
      if ( *(v206 - 1) && !*v206 )
      {
        v207 = (int)v206[5];
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279550;
        sub_14007D520(&dword_140404A6C[60 * v207 + 73007026], v173, v175);
        sub_14007D520(&dword_140404A6C[60 * v206[6] + 73007026], v208, v209);
      }
      v206 += 61;
    }
    while ( (__int64)v206 < (__int64)&dword_140404A6C[487148678] );
    if ( (int)dword_140404A6C[179668289] > 0 )
    {
      v210 = &dword_140404A6C[179668298];
      do
      {
        v211 = *(v210 - 1);
        dword_140404A6C[456807033] = *(v210 - 2);
        v212 = *v210;
        dword_140404A6C[456807034] = v211;
        dword_140404A6C[456807035] = v212;
        dword_140404A6C[456807036] = 1065353216;
        sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v1 + 722886516), v173, v175);
        sub_14007D520((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v1++ + 722886528), v213, v214);
        v210 += 9;
      }
      while ( v1 < (int)dword_140404A6C[179668289] );
    }
  }
  sub_14006E0D0(v174 * 4, v173, v175);
  v215 = &dword_140404A6C[18215710];
  v216 = 0x2000;
  v217 = &dword_140404A6C[18215715];
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
