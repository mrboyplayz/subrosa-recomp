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
  _DWORD v24[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+20h] [rbp-18h]

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
  float v58; // [rsp+0h] [rbp-E8h] BYREF
  float v59; // [rsp+4h] [rbp-E4h]
  float v60; // [rsp+8h] [rbp-E0h]
  float v61; // [rsp+Ch] [rbp-DCh]
  float v62; // [rsp+10h] [rbp-D8h]
  float v63; // [rsp+14h] [rbp-D4h]
  _DWORD v64[8]; // [rsp+18h] [rbp-D0h]
  __int64 v65; // [rsp+38h] [rbp-B0h]

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
  return sub_1401F8B20((unsigned __int64)&v58 ^ v65);
}

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
  __int64 v84; // [rsp+8h] [rbp-100h] BYREF
  __int64 v85; // [rsp+28h] [rbp-E0h]
  _DWORD sr_extrude_position[3];
  unsigned int v88; // [rsp+48h] [rbp-C0h]
  unsigned int v89; // [rsp+4Ch] [rbp-BCh]
  unsigned int v90; // [rsp+50h] [rbp-B8h]
  unsigned int v91; // [rsp+54h] [rbp-B4h]
  unsigned int v92; // [rsp+58h] [rbp-B0h]
  _DWORD v93[8]; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v94; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v95; // [rsp+80h] [rbp-88h]
  unsigned int v96; // [rsp+84h] [rbp-84h]
  __int64 v97; // [rsp+88h] [rbp-80h]

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
  sub_1400FFCE0(dword_140404A6C[160292943], 1, *(double *)&v30);
  return sub_1401F8B20((unsigned __int64)&v84 ^ v97);
}

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
  _DWORD v46[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+20h] [rbp-58h]

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
  return sub_1401F8B20((unsigned __int64)v46 ^ v47);
}

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
  __int64 v24; // [rsp+20h] [rbp-48h]
  int Buffer; // [rsp+88h] [rbp+20h] BYREF

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
  __int64 v74; // [rsp+20h] [rbp-48h]
  __int64 Buffer; // [rsp+80h] [rbp+18h] BYREF
  __int64 v77; // [rsp+88h] [rbp+20h]

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

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16684E3D0: using guessed type unsigned int;
// 16688E3D4: using guessed type unsigned int;
// 1669A3CB8: using guessed type unsigned int;

//----- (0000000140103D50) ----------------------------------------------------
double            sub_140103D50(int a1, char *a2)
{
  double result; // xmm0_8
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // xmm0_4
  float v7; // xmm6_4
  int v8; // ebp
  float v9; // xmm7_4
  float v10; // xmm8_4
  unsigned int *v11; // r12
  int v12; // ebx
  int v13; // esi
  int v14; // r8d
  int v15; // r15d
  unsigned int *v16; // r14
  signed int v17; // esi
  __int64 v18; // rcx
  float *v19; // r15
  float v20; // xmm2_4
  float v21; // xmm3_4
  float *v22; // rax
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  unsigned int *v26; // r14
  unsigned int *v27; // r9
  unsigned int *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r11
  unsigned int *v31; // rcx
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int v35; // r9d
  int v36; // r13d
  signed int v37; // esi
  __int64 v38; // rcx
  unsigned __int64 v39; // r12
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float *v43; // rax
  float v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // r10
  unsigned int *v47; // r8
  __int64 v48; // rcx
  unsigned int *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r14
  unsigned int v52; // xmm0_4
  int v53; // ebx
  int v54; // esi
  int v55; // r12d
  unsigned int *v56; // r14
  signed int v57; // esi
  bool v58; // cc
  int v59; // eax
  float v60; // xmm2_4
  int v61; // ecx
  float v62; // xmm1_4
  float v63; // xmm1_4
  float v64; // xmm2_4
  __int64 v65; // rax
  signed int *v66; // rbx
  unsigned __int64 v67; // [rsp+20h] [rbp-88h]
  __int64 v68; // [rsp+28h] [rbp-80h]
  __int64 v69; // [rsp+30h] [rbp-78h]
  __int64 v70; // [rsp+30h] [rbp-78h]
  __int64 v71; // [rsp+38h] [rbp-70h]
  int v72; // [rsp+C0h] [rbp+18h] BYREF
  int Buffer; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = sub_14020B8D8(a2, "rb");
  v5 = v4;
  if ( v4 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v4));
    if ( Buffer == 2 )
    {
      v72 = 1;
      fread_sr((void *)(uintptr_t)(&v72), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( v72 == 1 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857229]), 4, 3, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857232]), 4, 3, (FILE *)(uintptr_t)(v5));
      }
      v6 = dword_140404A6C[160857232];
      v7 = *(float *)&dword_140404A6C[160857229];
      v8 = 0;
      v9 = *(float *)&dword_140404A6C[160857230];
      v10 = *(float *)&dword_140404A6C[160857231];
      v72 = 2;
      v67 = 180288 * v3;
      dword_140404A6C[45072 * v3 + 335200382] = 0;
      v68 = 24944 * v3;
      dword_140404A6C[v68 + 346732629] = v6;
      dword_140404A6C[v68 + 346732630] = dword_140404A6C[160857233];
      dword_140404A6C[v68 + 346732631] = dword_140404A6C[160857234];
      fread_sr((void *)(uintptr_t)(&v72), 4, 1, (FILE *)(uintptr_t)(v5));
      v11 = &dword_140404A6C[160573019];
      if ( v72 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v5));
        v12 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v13 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v13 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v12++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
            v13 += 3;
          }
          while ( v12 < (int)dword_140404A6C[160507481] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v5));
        v14 = dword_140404A6C[160573018];
        v15 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v16 = &dword_140404A6C[160573019];
          do
          {
            v69 = 56LL * v15;
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v69 + 646505432), 4, 1, (FILE *)(uintptr_t)(v5));
            v17 = 0;
            if ( (int)*v16 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v15 + 160573020 + v17]), 4, 1, (FILE *)(uintptr_t)(v5));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v15 + 160573024 + 2 * v17++]), 4, 2, (FILE *)(uintptr_t)(v5));
              }
              while ( v17 < (int)*v16 );
              v8 = 0;
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v69 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
            v14 = dword_140404A6C[160573018];
            ++v15;
            v16 += 14;
          }
          while ( v15 < (int)dword_140404A6C[160573018] );
          v11 = &dword_140404A6C[160573019];
        }
      }
      else
      {
        v14 = dword_140404A6C[160573018];
      }
      v18 = dword_140404A6C[160507481];
      v19 = (float *)&dword_140404A6C[160507484];
      dword_140404A6C[v67 / 4 + 335161466] = dword_140404A6C[160507481];
      if ( (int)v18 > 0 )
      {
        v20 = *(float *)&dword_140404A6C[160857229];
        v21 = *(float *)&dword_140404A6C[160857230];
        v22 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344859232);
        v23 = *(float *)&dword_140404A6C[160857231];
        do
        {
          v24 = *(float *)((uintptr_t)v22
                         + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                         - (uintptr_t)&dword_140404A6C[335161469])
              - v21;
          *(v22 - 2) = *(float *)((uintptr_t)v22
                                + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                - (uintptr_t)&dword_140404A6C[335161469])
                     - v20;
          v25 = *(float *)((uintptr_t)v22
                         + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                         - (uintptr_t)&dword_140404A6C[335161469])
              - v23;
          *(v22 - 1) = v24;
          *v22 = v25;
          v22 += 3;
          --v18;
        }
        while ( v18 );
      }
      dword_140404A6C[v67 / 4 + 335164539] = v14;
      v26 = &dword_140404A6C[160573021];
      if ( v14 > 0 )
      {
        v27 = &dword_140404A6C[160573019];
        v28 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344871520);
        v29 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344871528;
        v30 = (unsigned int)v14;
        v31 = &dword_140404A6C[160573021];
        do
        {
          v29 += 24;
          *v28 = *v27;
          v28 += 6;
          v27 += 14;
          *(_DWORD *)(v29 - 28) = *(v31 - 1);
          v32 = *v31;
          v31 += 14;
          *(_DWORD *)(v29 - 24) = v32;
          *(_DWORD *)(v29 - 20) = *(v31 - 13);
          *(_DWORD *)(v29 - 16) = *(v31 - 12);
          --v30;
        }
        while ( v30 );
      }
      v72 = 2;
      fread_sr((void *)(uintptr_t)(&v72), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( v72 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v5));
        v33 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v34 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v34 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v33++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
            v34 += 3;
          }
          while ( v33 < (int)dword_140404A6C[160507481] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v5));
        v35 = dword_140404A6C[160573018];
        v36 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          do
          {
            v71 = 56LL * v36;
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v71 + 646505432), 4, 1, (FILE *)(uintptr_t)(v5));
            v37 = 0;
            if ( (int)*v11 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v36 + 160573020 + v37]), 4, 1, (FILE *)(uintptr_t)(v5));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v36 + 160573024 + 2 * v37++]), 4, 2, (FILE *)(uintptr_t)(v5));
              }
              while ( v37 < (int)*v11 );
              v8 = 0;
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v71 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
            v35 = dword_140404A6C[160573018];
            ++v36;
            v11 += 14;
          }
          while ( v36 < (int)dword_140404A6C[160573018] );
          v19 = (float *)&dword_140404A6C[160507484];
          v26 = &dword_140404A6C[160573021];
        }
      }
      else
      {
        v35 = dword_140404A6C[160573018];
      }
      v38 = dword_140404A6C[160507481];
      v39 = v67;
      dword_140404A6C[v67 / 4 + 335170684] = dword_140404A6C[160507481];
      if ( (int)v38 > 0 )
      {
        v40 = *(float *)&dword_140404A6C[160857229];
        v41 = *(float *)&dword_140404A6C[160857230];
        v42 = *(float *)&dword_140404A6C[160857231];
        v43 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344896104);
        do
        {
          v44 = *(float *)((uintptr_t)v43
                         + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                         - (uintptr_t)&dword_140404A6C[335170687])
              - v41;
          *(v43 - 2) = *(float *)((uintptr_t)v43
                                + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                - (uintptr_t)&dword_140404A6C[335170687])
                     - v40;
          v45 = *(float *)((uintptr_t)v43
                         + (uintptr_t)&dword_140404A6C[v67 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                         - (uintptr_t)&dword_140404A6C[335170687])
              - v42;
          *(v43 - 1) = v44;
          *v43 = v45;
          v43 += 3;
          --v38;
        }
        while ( v38 );
      }
      dword_140404A6C[v67 / 4 + 335173757] = v35;
      if ( v35 > 0 )
      {
        v46 = (unsigned int)v35;
        v47 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344908392);
        v48 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1344908400;
        v49 = &dword_140404A6C[160573019];
        do
        {
          v48 += 104;
          *v47 = *v49;
          v49 += 14;
          v47 += 26;
          *(_DWORD *)(v48 - 108) = *(v26 - 1);
          v50 = *v26;
          v26 += 14;
          *(_DWORD *)(v48 - 104) = v50;
          *(_DWORD *)(v48 - 100) = *(v26 - 13);
          *(_DWORD *)(v48 - 96) = *(v26 - 12);
          --v46;
        }
        while ( v46 );
      }
      v72 = 1;
      fread_sr((void *)(uintptr_t)(&v72), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( v72 == 1 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857229]), 4, 3, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857232]), 4, 3, (FILE *)(uintptr_t)(v5));
      }
      v51 = v68 * 4;
      v52 = dword_140404A6C[160857232];
      v72 = 2;
      dword_140404A6C[v68 + 346732636] = 1120403456;
      dword_140404A6C[v68 + 346732637] = v52;
      dword_140404A6C[v68 + 346732638] = dword_140404A6C[160857233];
      dword_140404A6C[v68 + 346732639] = dword_140404A6C[160857234];
      fread_sr((void *)(uintptr_t)(&v72), 4, 1, (FILE *)(uintptr_t)(v5));
      if ( v72 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v5));
        v53 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v54 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v54 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v5));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v53++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v5));
            v54 += 3;
          }
          while ( v53 < (int)dword_140404A6C[160507481] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v5));
        v55 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v56 = &dword_140404A6C[160573019];
          do
          {
            v70 = 56LL * v55;
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v70 + 646505432), 4, 1, (FILE *)(uintptr_t)(v5));
            v57 = 0;
            if ( (int)*v56 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v55 + 160573020 + v57]), 4, 1, (FILE *)(uintptr_t)(v5));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v55 + 160573024 + 2 * v57++]), 4, 2, (FILE *)(uintptr_t)(v5));
              }
              while ( v57 < (int)*v56 );
              v8 = 0;
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v70 + 646505484), 4, 1, (FILE *)(uintptr_t)(v5));
            ++v55;
            v56 += 14;
          }
          while ( v55 < (int)dword_140404A6C[160573018] );
          v51 = v68 * 4;
          v19 = (float *)&dword_140404A6C[160507484];
        }
        v39 = v67;
      }
      v58 = (signed int)dword_140404A6C[160507481] <= 0;
      v59 = 0;
      v60 = *(float *)&dword_140404A6C[160857229];
      v61 = 0;
      v62 = *(float *)&dword_140404A6C[160857230] - v9;
      dword_140404A6C[349900653] = 0;
      dword_140404A6C[349902702] = 0;
      *(float *)((char *)&dword_140404A6C[346732633] + v51) = *(float *)&dword_140404A6C[160857229] - v7;
      *(_QWORD *)&result = dword_140404A6C[160857231];
      *(float *)&result = *(float *)&dword_140404A6C[160857231] - v10;
      *(float *)((char *)&dword_140404A6C[346732634] + v51) = v62;
      dword_140404A6C[349907311] = 0;
      *(_QWORD *)&dword_140404A6C[349908849] = 0;
      dword_140404A6C[349908851] = 0;
      *(unsigned int *)((char *)&dword_140404A6C[346732635] + v51) = LODWORD(result);
      dword_140404A6C[349908848] = 1;
      if ( !v58 )
      {
        while ( 1 )
        {
          *(_QWORD *)&result = *((unsigned int *)v19 - 2);
          *(float *)&result = *(float *)&result - v60;
          *(v19 - 2) = *(float *)&result;
          v63 = *(v19 - 1) - *(float *)&dword_140404A6C[160857230];
          *(v19 - 1) = v63;
          v64 = *v19 - *(float *)&dword_140404A6C[160857231];
          *v19 = v64;
          if ( v59 < 512 )
          {
            v65 = 2LL * v59;
            dword_140404A6C[2 * v65 + 349900654] = LODWORD(result);
            *(float *)&dword_140404A6C[2 * v65 + 349900655] = v63;
            *(float *)&dword_140404A6C[2 * v65 + 349900656] = v64;
            dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
            v59 = ++dword_140404A6C[349900653];
          }
          ++v61;
          v19 += 3;
          if ( v61 >= (int)dword_140404A6C[160507481] )
            break;
          v60 = *(float *)&dword_140404A6C[160857229];
        }
      }
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v66 = (signed int *)&dword_140404A6C[160573019];
        do
        {
          sub_140048BA0(*v66, &dword_140404A6C[14 * v8++ + 160573020]);
          v66 += 14;
        }
        while ( v8 < (int)dword_140404A6C[160573018] );
      }
      sub_14004A670(((intptr_t)dword_140404A6C - 0x404a6cLL) + v39 + 1345022496);
      *(unsigned int *)((char *)&dword_140404A6C[346732632] + v51) = 1;
      sub_14020B9E8(v5);
    }
  }
  return result;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16684E3D0: using guessed type unsigned int;
// 16688E3D4: using guessed type unsigned int;
// 1669A3CA0: using guessed type unsigned int;
// 1669A3CA4: using guessed type unsigned int;
// 1669A3CA8: using guessed type unsigned int;
// 1669A3CAC: using guessed type unsigned int;
// 1669A3CB0: using guessed type unsigned int;
// 1669A3CB4: using guessed type unsigned int;
// 193AC8820: using guessed type unsigned int;
// 193ACA824: using guessed type unsigned int;
// 193ACF028: using guessed type unsigned int;
// 193AD082C: using guessed type unsigned int;
// 193AD0830: using guessed type unsigned int;
// 193AD0838: using guessed type unsigned int;

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
  _OWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

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
  return sub_1401F8B20((unsigned __int64)v14 ^ v16);
}


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
  _OWORD v15[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

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


//----- (0000000140105930) ----------------------------------------------------
_UNKNOWN **           sub_140105930(float *a1, float *a2, float *a3)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm11_4
  float v11; // xmm12_4
  float v12; // xmm3_4
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v4 = *a2;
  v5 = a3[3];
  v6 = *a3;
  v7 = a3[1];
  v8 = a2[1];
  v9 = a3[2];
  v10 = a2[2];
  v11 = a2[3];
  v12 = (float)(v7 * v11) - (float)(v9 * *a2);
  *a1 = (float)((float)((float)(*a3 * v11) + (float)(*a2 * v5)) + (float)(v9 * v8)) - (float)(v7 * v10);
  a1[1] = (float)(v12 + (float)(v8 * v5)) + (float)(v10 * v6);
  a1[2] = (float)((float)((float)(v9 * v11) + (float)(v7 * v4)) - (float)(v8 * v6)) + (float)(v10 * v5);
  a1[3] = (float)((float)((float)(v11 * v5) - (float)(v6 * v4)) - (float)(v7 * v8)) - (float)(v10 * v9);
  return &retaddr;
}

// 140105930: returning address of temporary local variable '%__return_address'

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
  __int64 result; // rax
  unsigned int *v1; // r9
  unsigned int *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r8
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm10_4
  float v8; // xmm5_4
  float v9; // xmm11_4
  float v10; // xmm4_4
  float v11; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm15_4
  unsigned int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  __int64 v22; // rdx
  __int64 v23; // rcx
  float v24; // xmm13_4
  float *v25; // rax
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm10_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm1_4
  signed int v40; // r14d
  signed int i; // ebp
  signed int j; // edi
  unsigned int v43; // esi
  signed int v44; // ebx
  __int64 v45; // r15
  int v46; // r12d
  __int64 v47; // rcx
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF
  unsigned int *v49; // [rsp+100h] [rbp+8h]

  result = (__int64)&retaddr;
  v1 = &dword_140404A6C[129716753];
  v2 = &dword_140404A6C[129716739];
  v49 = &dword_140404A6C[129716753];
  do
  {
    if ( *(v2 - 30) )
    {
      v3 = (int)*(v2 - 29);
      *(v2 - 16) = *(v2 - 19);
      *(v2 - 15) = *(v2 - 18);
      *(v2 - 14) = *(v2 - 17);
      *(v2 - 4) = *(v2 - 13);
      *(v2 - 3) = *(v2 - 12);
      *(v2 - 2) = *(v2 - 11);
      *(v2 - 1) = *(v2 - 10);
      *v2 = *(v2 - 9);
      v2[1] = *(v2 - 8);
      v2[2] = *(v2 - 7);
      v2[3] = *(v2 - 6);
      v2[4] = *(v2 - 5);
      v4 = 47LL * (int)*(v2 - 20);
      v3 *= 99776;
      v5 = *(float *)&dword_140404A6C[v4 + 18215727];
      v6 = *(float *)&dword_140404A6C[v4 + 18215730];
      v7 = *(float *)&dword_140404A6C[v4 + 18215728];
      v8 = *(float *)&dword_140404A6C[v4 + 18215731];
      v9 = *(float *)&dword_140404A6C[v4 + 18215729];
      v10 = *(float *)&dword_140404A6C[v4 + 18215732];
      v11 = *(float *)((char *)&dword_140404A6C[346732626] + v3);
      v12 = *(float *)((char *)&dword_140404A6C[346732627] + v3);
      v13 = *(float *)((char *)&dword_140404A6C[346732628] + v3);
      v14 = *(float *)&dword_140404A6C[v4 + 18215724];
      v15 = *(float *)&dword_140404A6C[v4 + 18215725];
      v16 = *(float *)&dword_140404A6C[v4 + 18215726];
      v17 = dword_140404A6C[v4 + 18215718];
      v18 = (float)((float)(v15 * v11) + *(float *)&dword_140404A6C[v4 + 18215716]) + (float)(v7 * v12);
      *((float *)v2 - 19) = (float)((float)((float)(v14 * v11) + *(float *)&dword_140404A6C[v4 + 18215715])
                                  + (float)(v5 * v12))
                          + (float)(v6 * v13);
      v19 = (float)(v16 * v11) + *(float *)&dword_140404A6C[v4 + 18215717];
      *((float *)v2 - 18) = v18 + (float)(v8 * v13);
      *((float *)v2 - 17) = (float)(v19 + (float)(v9 * v12)) + (float)(v10 * v13);
      *((float *)v2 - 13) = v14;
      *((float *)v2 - 12) = v15;
      *((float *)v2 - 11) = v16;
      *((float *)v2 - 10) = v5;
      *((float *)v2 - 9) = v7;
      *((float *)v2 - 8) = v9;
      *((float *)v2 - 7) = v6;
      *((float *)v2 - 6) = v8;
      *((float *)v2 - 5) = v10;
      v20 = 65536.0;
      v2[5] = v17;
      v21 = -65536.0;
      v2[6] = dword_140404A6C[v4 + 18215719];
      v2[7] = dword_140404A6C[v4 + 18215720];
      v2[11] = dword_140404A6C[v4 + 18215736];
      v2[12] = dword_140404A6C[v4 + 18215737];
      v2[13] = dword_140404A6C[v4 + 18215738];
      *v1 = 1199570944;
      v1[3] = -947912704;
      v1[1] = 1199570944;
      v1[4] = -947912704;
      v1[2] = 1199570944;
      v1[5] = -947912704;
      v22 = 45072LL * (int)*(v2 - 29);
      v23 = (int)dword_140404A6C[v22 + 335170684];
      if ( v23 > 0 )
      {
        v24 = 65536.0;
        v25 = (float *)&dword_140404A6C[v22 + 335170686];
        v26 = -65536.0;
        v27 = 65536.0;
        v28 = -65536.0;
        v29 = 65536.0;
        v30 = -65536.0;
        do
        {
          v31 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 13)) + *((float *)v2 - 19))
                      + (float)(*v25 * *((float *)v2 - 10)))
              + (float)(v25[1] * *((float *)v2 - 7));
          v32 = v25[1];
          v20 = v31;
          v21 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 11)) + *((float *)v2 - 17))
                      + (float)(*v25 * *((float *)v2 - 8)))
              + (float)(v32 * *((float *)v2 - 5));
          v33 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 12)) + *((float *)v2 - 18))
                      + (float)(*v25 * *((float *)v2 - 9)))
              + (float)(v32 * *((float *)v2 - 6));
          if ( v24 <= v31 )
          {
            v20 = *(float *)v1;
          }
          else
          {
            *(float *)v1 = v31;
            v24 = v31;
          }
          if ( v26 < v31 )
          {
            *((float *)v1 + 3) = v31;
            v26 = v31;
          }
          if ( v27 > v33 )
          {
            *((float *)v1 + 1) = v33;
            v27 = v33;
          }
          if ( v28 < v33 )
          {
            *((float *)v1 + 4) = v33;
            v28 = v33;
          }
          if ( v29 > v21 )
          {
            *((float *)v1 + 2) = v21;
            v29 = v21;
          }
          if ( v30 >= v21 )
          {
            v21 = *((float *)v1 + 5);
          }
          else
          {
            *((float *)v1 + 5) = v21;
            v30 = v21;
          }
          v25 += 3;
          --v23;
        }
        while ( v23 );
      }
      v34 = *((float *)v1 + 3) * 0.25;
      v35 = *((float *)v1 + 1) * 0.25;
      v1[6] = (int)(float)(v20 * 0.25);
      v36 = (int)v34;
      v37 = *((float *)v1 + 4);
      v1[9] = v36;
      v38 = (int)v35;
      v39 = *((float *)v1 + 2);
      v1[7] = v38;
      v1[10] = (int)(float)(v37 * 0.25);
      v1[8] = (int)(float)(v39 * 0.25);
      result = (unsigned int)(int)(float)(v21 * 0.25);
      v1[11] = result;
      v40 = v2[21];
      if ( v40 <= (int)v2[24] )
      {
        do
        {
          for ( i = v2[22]; i <= (int)v2[25]; ++i )
          {
            for ( j = v2[20]; j <= (int)v2[23]; ++j )
            {
              result = sub_140016870(0, j, v40, i);
              v43 = result;
              if ( (_DWORD)result )
              {
                result = sub_1400169B0(0, j, v40, i);
                v44 = 0;
                v45 = 948LL * (v43 & 0x3FF);
                v46 = result;
                if ( (int)dword_140404A6C[v45 + 272299416] > 0 )
                {
                  do
                  {
                    if ( !_bittest(&v46, v44) )
                    {
                      result = sub_1400CDBD0(v43, v44, 0, j, v40, i);
                      if ( (_DWORD)result != -1 )
                      {
                        result = (int)result;
                        v47 = 1760LL * (int)result;
                        dword_140404A6C[v47 + 278845895] = 1;
                        dword_140404A6C[v47 + 278845894] = 1;
                      }
                    }
                    ++v44;
                  }
                  while ( v44 < (int)dword_140404A6C[v45 + 272299416] );
                }
              }
            }
          }
          ++v40;
        }
        while ( v40 <= (int)v2[24] );
        v1 = v49;
      }
    }
    v1 += 5210;
    v2 += 5210;
    v49 = v1;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[132384259] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140106FD0) ----------------------------------------------------
__int64            sub_140106FD0(int a1)
{
  __int64 v1; // r13
  float *v2; // rax
  __int64 v3; // rcx
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 i; // r15
  __int64 v16; // rbx
  float v17; // xmm6_4
  __int64 v18; // rdi
  float v19; // xmm2_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm10_4
  float v35; // xmm8_4
  float v36; // xmm13_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm8_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  __int64 v47; // rdx
  float v48; // xmm0_4
  float v49; // xmm10_4
  float v50; // xmm13_4
  float v51; // xmm0_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm5_4
  float v55; // xmm0_4
  double v56; // xmm2_8
  float v57; // xmm3_4
  float v58; // xmm1_4
  float v59; // xmm4_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm6_4
  int v64; // ebp
  float v65; // xmm8_4
  float v66; // xmm2_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  float v69; // xmm9_4
  float v70; // xmm0_4
  float v71; // xmm12_4
  float v72; // xmm13_4
  float v73; // xmm7_4
  int v74; // esi
  float v75; // xmm0_4
  double v76; // xmm6_8
  double v77; // xmm0_8
  float v78; // xmm2_4
  float v79; // xmm6_4
  float v80; // xmm4_4
  float v81; // xmm5_4
  float v82; // xmm3_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  float v89; // xmm7_4
  float v90; // xmm6_4
  float v91; // xmm5_4
  float v92; // xmm2_4
  float v93; // xmm4_4
  unsigned int v94; // xmm0_4
  float v95; // xmm2_4
  unsigned int v96; // xmm1_4
  __int64 v97; // rcx
  __int64 result; // rax
  float v99; // xmm7_4
  float v100; // xmm6_4
  float v101; // xmm5_4
  float v102; // xmm3_4
  float v103; // xmm4_4
  unsigned int v104; // xmm0_4
  float v105; // xmm2_4
  unsigned int v106; // xmm1_4
  float *v107; // rcx
  unsigned __int64 v108; // r8
  __int64 v109; // rdx
  float v110; // xmm3_4
  float v111; // xmm4_4
  float v112; // xmm5_4
  float v113; // xmm6_4
  float v114; // xmm9_4
  float v115; // xmm8_4
  float v116; // xmm7_4
  float v117; // xmm6_4
  float v118; // xmm6_4
  float v119; // xmm3_4
  float v120; // xmm4_4
  float v121; // xmm2_4
  float v122; // xmm4_4
  float v123; // xmm0_4
  float v124; // [rsp+20h] [rbp-128h]
  __int64 v125; // [rsp+28h] [rbp-120h]
  float v126[2]; // [rsp+30h] [rbp-118h] BYREF
  float v127; // [rsp+38h] [rbp-110h]
  float v128; // [rsp+40h] [rbp-108h] BYREF
  float v129; // [rsp+44h] [rbp-104h]
  float v130; // [rsp+48h] [rbp-100h]
  __m128 v131; // [rsp+50h] [rbp-F8h]
  __m128d v132; // [rsp+60h] [rbp-E8h]
  float v133; // [rsp+158h] [rbp+10h]
  float v134; // [rsp+158h] [rbp+10h]
  float v135; // [rsp+160h] [rbp+18h]
  float v136; // [rsp+168h] [rbp+20h]

  v1 = a1;
  v125 = a1;
  v2 = (float *)&dword_140404A6C[5210 * a1 + 129721821];
  v3 = 2;
  do
  {
    v4 = *(v2 - 8);
    *(v2 - 11) = (float)(v4 * 0.03125) + *(v2 - 11);
    v5 = *(v2 - 7);
    *(v2 - 10) = (float)(v5 * 0.03125) + *(v2 - 10);
    v6 = *(v2 - 6);
    *(v2 - 9) = (float)(v6 * 0.03125) + *(v2 - 9);
    *(v2 - 7) = v5 - 0.000085069449;
    *(v2 - 3) = v6;
    *(v2 - 5) = v4;
    *(v2 - 4) = v5 - 0.000085069449;
    v7 = v2[1];
    *(v2 - 2) = (float)(v7 * 0.03125) + *(v2 - 2);
    v8 = v2[2];
    *(v2 - 1) = (float)(v8 * 0.03125) + *(v2 - 1);
    v9 = v2[3];
    *v2 = (float)(v9 * 0.03125) + *v2;
    v2[2] = v8 - 0.000085069449;
    v2[4] = v7;
    v2[5] = v8 - 0.000085069449;
    v2[6] = v9;
    v10 = v2[10];
    v2[7] = (float)(v10 * 0.03125) + v2[7];
    v11 = v2[11];
    v2[8] = (float)(v11 * 0.03125) + v2[8];
    v12 = v2[12];
    v2[9] = (float)(v12 * 0.03125) + v2[9];
    v2[11] = v11 - 0.000085069449;
    v2[13] = v10;
    v2[14] = v11 - 0.000085069449;
    v2[15] = v12;
    v2 += 27;
    --v3;
  }
  while ( v3 );
  v13 = 0;
  v14 = 0;
  for ( i = 0; i < 72; i += 36 )
  {
    if ( v14 < 2 )
    {
      v16 = 5210 * v1;
      v17 = *(float *)&dword_140404A6C[5210 * v1 + 129721847];
      v18 = 20840 * v1 + i;
      v19 = *(float *)&dword_140404A6C[5210 * v1 + 129721848];
      v20 = *(float *)&dword_140404A6C[5210 * v1 + 129721846];
      v21 = *(float *)((char *)&dword_140404A6C[129721811] + v18) - v17;
      v22 = v17 - *(float *)&dword_140404A6C[5210 * v1 + 129721856];
      v23 = *(float *)((char *)&dword_140404A6C[129721812] + v18) - v19;
      v24 = v19 - *(float *)&dword_140404A6C[5210 * v1 + 129721857];
      v25 = *(float *)((char *)&dword_140404A6C[129721810] + v18) - v20;
      v26 = v20 - *(float *)&dword_140404A6C[5210 * v1 + 129721855];
      v27 = (float)(v24 * v21) - (float)(v22 * v23);
      v28 = (float)(v26 * v23) - (float)(v24 * v25);
      v29 = (float)(v22 * v25) - (float)(v26 * v21);
      v30 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29));
      if ( v30 == 0.0 )
      {
        v31 = 0.0;
        v32 = 0.0;
        v33 = 0.0;
      }
      else
      {
        v31 = v27 * (float)(1.0 / v30);
        v32 = v28 * (float)(1.0 / v30);
        v33 = v29 * (float)(1.0 / v30);
      }
      *(float *)((char *)&dword_140404A6C[129721813] + v18) = (float)(v31 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721813] + v18);
      *(float *)((char *)&dword_140404A6C[129721814] + v18) = (float)(v32 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721814] + v18);
      *(float *)((char *)&dword_140404A6C[129721815] + v18) = (float)(v33 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721815] + v18);
      v34 = *(float *)&dword_140404A6C[v16 + 129721846];
      v35 = *(float *)((char *)&dword_140404A6C[129721812] + v18) - *(float *)&dword_140404A6C[v16 + 129721848];
      v36 = *(float *)&dword_140404A6C[v16 + 129721847];
      v37 = *(float *)((char *)&dword_140404A6C[129721810] + v18) - v34;
      v38 = *(float *)((char *)&dword_140404A6C[129721811] + v18) - v36;
      v133 = *(float *)&dword_140404A6C[v16 + 129721848];
      v39 = fsqrt((float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)(v35 * v35));
      if ( v39 == 0.0 )
      {
        v127 = 0.0;
        v41 = 0.0;
        v42 = 0.0;
        v40 = 0.0;
      }
      else
      {
        v40 = v35 * (float)(1.0 / v39);
        v41 = v37 * (float)(1.0 / v39);
        v127 = v40;
        v42 = v38 * (float)(1.0 / v39);
      }
      v126[1] = v42;
      v43 = v40 * *(float *)&dword_140404A6C[v16 + 129716728];
      v44 = v41 * *(float *)&dword_140404A6C[v16 + 129716732];
      v45 = v40 * *(float *)&dword_140404A6C[v16 + 129716734];
      v46 = (float)(v42 * *(float *)&dword_140404A6C[v16 + 129716727])
          + (float)(v41 * *(float *)&dword_140404A6C[v16 + 129716726]);
      v126[0] = v41;
      v48 = sub_14023F704(
              -(float)(v46 + v43),
              (float)((float)(v42 * *(float *)&dword_140404A6C[v16 + 129716733]) + v44) + v45);
      v49 = v34 - *(float *)&dword_140404A6C[v16 + 129721855];
      v50 = v36 - *(float *)&dword_140404A6C[v16 + 129721856];
      v124 = v48;
      v51 = v133 - *(float *)&dword_140404A6C[v16 + 129721857];
      v52 = (float)(v40 * v50) - (float)(v42 * v51);
      v53 = (float)(v41 * v51) - (float)(v40 * v49);
      v54 = (float)(v42 * v49) - (float)(v41 * v50);
      v55 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v54 * v54));
      if ( v55 == 0.0 )
      {
        v56 = 0.0;
        v57 = 0.0;
        v58 = 0.0;
      }
      else
      {
        HIDWORD(v56) = 0;
        *(float *)&v56 = (float)(1.0 / v55) * v52;
        v57 = (float)(1.0 / v55) * v53;
        v58 = (float)(1.0 / v55) * v54;
      }
      v59 = (float)(v58 * v42) - (float)(v57 * v40);
      v60 = (float)(*(float *)&v56 * v40) - (float)(v58 * v41);
      v61 = (float)(v57 * v41) - (float)(*(float *)&v56 * v42);
      *(float *)&v56 = (float)((float)(v60 * v60) + (float)(v59 * v59)) + (float)(v61 * v61);
      v62 = fsqrt(*(float *)&v56);
      if ( v62 == 0.0 )
      {
        v136 = 0.0;
        v63 = 0.0;
        v135 = 0.0;
      }
      else
      {
        v136 = (float)(1.0 / v62) * v60;
        v63 = (float)(1.0 / v62) * v59;
        v135 = (float)(1.0 / v62) * v61;
      }
      v64 = 0;
      v134 = v63;
      v131 = _mm_castpd_ps(sub_1401F8A50(v124, v47, v56));
      v132 = _mm_shuffle_pd((__m128d)v131, (__m128d)v131, 1);
      do
      {
        v65 = (float)((float)v64 * 0.125) + 0.0625;
        v66 = (float)((float)(1.0 - v65) * *(float *)&dword_140404A6C[v16 + 129721852])
            + (float)(v65 * *(float *)((char *)&dword_140404A6C[129721816] + v18));
        v67 = (float)((float)(1.0 - v65) * *(float *)&dword_140404A6C[v16 + 129721853])
            + (float)(v65 * *(float *)((char *)&dword_140404A6C[129721817] + v18));
        v68 = (float)((float)(1.0 - v65) * *(float *)&dword_140404A6C[v16 + 129721854])
            + (float)(v65 * *(float *)((char *)&dword_140404A6C[129721818] + v18));
        v69 = (float)((float)(v67 * v67) + (float)(v66 * v66)) + (float)(v68 * v68);
        v70 = fsqrt(v69);
        if ( v70 == 0.0 )
        {
          v71 = 0.0;
          v72 = 0.0;
          v73 = 0.0;
        }
        else
        {
          v71 = (float)(1.0 / v70) * v67;
          v72 = (float)(1.0 / v70) * v66;
          v73 = (float)(1.0 / v70) * v68;
        }
        v74 = 0;
        do
        {
          v129 = v136;
          v128 = v63;
          v130 = v135;
          if ( !v74 )
            sub_14007B4D0(&v128, v126, sr_export_float_lane_container(1070141403));
          v75 = *(float *)&dword_140404A6C[v16 + 129720168];
          v76 = (float)((float)((float)(v75 * 0.0625) * 3.14159265359 + 0.04908738521234375)
                      - sub_14023EDE4(*(float *)&dword_140404A6C[v16 + 129720165] * *(double *)SR_VEC_LANES(128, v131, u64), 1.0)
                      * 0.25);
          v77 = sub_14023EDE4(*(float *)&dword_140404A6C[v16 + 129720167] * SR_VEC_LANES(128, v132, f64)[0], 1.0);
          sub_14007B4D0(&v128, v126, v76 + v77 * 0.25);
          if ( v74 )
            v78 = 0.15625;
          else
            v78 = 0.015625;
          v79 = v129;
          v80 = v128;
          v81 = v130;
          ++v74;
          v82 = (float)((float)((float)((float)((float)(v71 * v129) + (float)(v72 * v128)) + (float)(v73 * v130)) * v78)
                      * v69)
              * -2.0;
          v83 = (float)(v82 * v65) * 0.0009765625;
          v84 = v129 * v83;
          *(float *)((char *)&dword_140404A6C[129721813] + v18) = (float)(v128 * v83)
                                                                + *(float *)((char *)&dword_140404A6C[129721813] + v18);
          *(float *)((char *)&dword_140404A6C[129721814] + v18) = v84
                                                                + *(float *)((char *)&dword_140404A6C[129721814] + v18);
          v85 = (float)((float)(1.0 - v65) * v82) * 0.00048828125;
          *(float *)((char *)&dword_140404A6C[129721815] + v18) = (float)(v81 * v83)
                                                                + *(float *)((char *)&dword_140404A6C[129721815] + v18);
          *(float *)&dword_140404A6C[v16 + 129721849] = (float)(v80 * v85) + *(float *)&dword_140404A6C[v16 + 129721849];
          *(float *)&dword_140404A6C[v16 + 129721850] = (float)(v79 * v85) + *(float *)&dword_140404A6C[v16 + 129721850];
          v63 = v134;
          *(float *)&dword_140404A6C[v16 + 129721851] = (float)(v81 * v85) + *(float *)&dword_140404A6C[v16 + 129721851];
        }
        while ( v74 < 2 );
        ++v64;
      }
      while ( v64 < 8 );
      v1 = v125;
    }
    ++v14;
  }
  v86 = 5210 * v1;
  v87 = (int)dword_140404A6C[5210 * v1 + 129716789];
  v88 = 60 * v87;
  v87 *= 32;
  v89 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721846]
                              - *(float *)&dword_140404A6C[v88 + 73007026])
                      * 0.03125)
              - (float)(*(float *)((char *)flt_140384000 + v87) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721852] * 0.125);
  v90 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721847]
                              - *(float *)&dword_140404A6C[v88 + 73007027])
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[1] + v87) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721853] * 0.125);
  v91 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721848]
                              - *(float *)&dword_140404A6C[v88 + 73007028])
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[2] + v87) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721854] * 0.125);
  v92 = (float)(1.0 / (float)(*(float *)&dword_140404A6C[v88 + 73007023] + 64.0)) * 64.0;
  v93 = -(float)(*(float *)&dword_140404A6C[v88 + 73007023]
               * (float)(1.0 / (float)(*(float *)&dword_140404A6C[v88 + 73007023] + 64.0)));
  *(float *)((char *)&flt_140384000[4] + v87) = (float)(v92 * v89) + *(float *)((char *)&flt_140384000[4] + v87);
  *(float *)&v94 = (float)(v93 * v89) + *(float *)&dword_140404A6C[5210 * v1 + 129721849];
  *(float *)((char *)&flt_140384000[5] + v87) = (float)(v92 * v90) + *(float *)((char *)&flt_140384000[5] + v87);
  v95 = (float)(v92 * v91) + *(float *)((char *)&flt_140384000[6] + v87);
  dword_140404A6C[v86 + 129721849] = v94;
  *(float *)&v96 = (float)(v93 * v90) + *(float *)&dword_140404A6C[5210 * v1 + 129721850];
  *(float *)((char *)&flt_140384000[6] + v87) = v95;
  dword_140404A6C[v86 + 129721850] = v96;
  *(float *)&dword_140404A6C[v86 + 129721851] = (float)(v93 * v91) + *(float *)&dword_140404A6C[5210 * v1 + 129721851];
  v97 = (int)dword_140404A6C[5210 * v1 + 129716790];
  result = 240 * v97;
  v97 *= 32;
  v99 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721855]
                              - *(float *)((char *)&dword_140404A6C[73007026] + result))
                      * 0.03125)
              - (float)(*(float *)((char *)flt_140384000 + v97) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721861] * 0.125);
  v100 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721856]
                               - *(float *)((char *)&dword_140404A6C[73007027] + result))
                       * 0.03125)
               - (float)(*(float *)((char *)&flt_140384000[1] + v97) * 0.125))
       + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721862] * 0.125);
  v101 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v1 + 129721857]
                               - *(float *)((char *)&dword_140404A6C[73007028] + result))
                       * 0.03125)
               - (float)(*(float *)((char *)&flt_140384000[2] + v97) * 0.125))
       + (float)(*(float *)&dword_140404A6C[5210 * v1 + 129721863] * 0.125);
  v102 = 1.0 / (float)(*(float *)((char *)&dword_140404A6C[73007023] + result) + 64.0);
  v103 = -(float)(*(float *)((char *)&dword_140404A6C[73007023] + result) * v102);
  *(float *)((char *)&flt_140384000[4] + v97) = (float)((float)(v102 * 64.0) * v99)
                                              + *(float *)((char *)&flt_140384000[4] + v97);
  *(float *)&v104 = (float)(v103 * v99) + *(float *)&dword_140404A6C[5210 * v1 + 129721858];
  *(float *)((char *)&flt_140384000[5] + v97) = (float)((float)(v102 * 64.0) * v100)
                                              + *(float *)((char *)&flt_140384000[5] + v97);
  v105 = (float)((float)(v102 * 64.0) * v101) + *(float *)((char *)&flt_140384000[6] + v97);
  dword_140404A6C[v86 + 129721858] = v104;
  *(float *)&v106 = (float)(v103 * v100) + *(float *)&dword_140404A6C[5210 * v1 + 129721859];
  *(float *)((char *)&flt_140384000[6] + v97) = v105;
  v107 = (float *)&dword_140404A6C[5210 * v1 + 129721813];
  dword_140404A6C[v86 + 129721859] = v106;
  *(float *)&dword_140404A6C[v86 + 129721860] = (float)(v103 * v101) + *(float *)&dword_140404A6C[5210 * v1 + 129721860];
  do
  {
    v108 = v13++;
    v109 = v13;
    if ( v13 < 6 )
    {
      result = (__int64)(v107 + 8);
      do
      {
        v110 = *(float *)(result - 8) - *(v107 - 3);
        v111 = *(float *)(result - 4) - *(v107 - 2);
        v112 = *(float *)result - *(v107 - 1);
        v113 = fsqrt((float)((float)(v110 * v110) + (float)(v111 * v111)) + (float)(v112 * v112));
        v114 = (float)(1.0 / v113) * v110;
        v115 = (float)(1.0 / v113) * v111;
        v116 = (float)(1.0 / v113) * v112;
        if ( v108 >= 2 )
        {
          if ( v108 >= 4 )
            goto LABEL_45;
          if ( v109 >= 4 )
          {
            if ( v109 < 5 )
            {
LABEL_45:
              v117 = v113 + -1.0;
              goto LABEL_46;
            }
            v117 = v113 + -1.4142135;
          }
          else
          {
            v117 = v113 + -2.0;
          }
        }
        else if ( v109 >= 2 )
        {
          if ( v109 == 4 )
            v117 = v113 + -4.0;
          else
            v117 = v113 - 4.123105625617661;
        }
        else
        {
          v117 = v113 + -8.0;
        }
LABEL_46:
        v118 = (float)((float)(v117 * 0.125)
                     - (float)((float)((float)((float)(v115 * v107[4]) + (float)(v114 * v107[3]))
                                     + (float)(v116 * v107[5]))
                             * 0.125))
             + (float)((float)((float)((float)(v115 * *(float *)(result + 20)) + (float)(v114 * *(float *)(result + 16)))
                             + (float)(v116 * *(float *)(result + 24)))
                     * 0.125);
        if ( v108 >= 4 )
          v119 = 64.0;
        else
          v119 = 32.0;
        if ( v109 >= 4 )
          v120 = 64.0;
        else
          v120 = 32.0;
        ++v109;
        v121 = 1.0 / (float)(v120 + v119);
        v122 = (float)(v120 * v121) * v118;
        *v107 = (float)(v122 * v114) + *v107;
        v107[1] = (float)(v115 * v122) + v107[1];
        v107[2] = (float)(v116 * v122) + v107[2];
        v123 = -(float)((float)(v119 * v121) * v118);
        *(float *)(result + 4) = (float)(v123 * v114) + *(float *)(result + 4);
        *(float *)(result + 8) = (float)(v115 * v123) + *(float *)(result + 8);
        *(float *)(result + 12) = (float)(v116 * v123) + *(float *)(result + 12);
        result += 36;
      }
      while ( v109 < 6 );
    }
    v107 += 9;
  }
  while ( v13 < 6 );
  return result;
}

// 14010759E: variable 'v47' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140384000: using guessed type float flt_140384000[131092];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140107ED0) ----------------------------------------------------
void sub_140107ED0()
{
  unsigned int v0; // r9d
  float *v1; // r12
  __int64 v2; // r13
  __int64 v3; // rbx
  int v4; // ecx
  float *v5; // rax
  int v6; // edx
  signed int v7; // r8d
  __int64 v8; // rcx
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  signed int v14; // r14d
  __int64 v15; // rdi
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __int64 v19; // rsi
  double v20; // xmm2_8
  __int64 v21; // rcx
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm7_4
  unsigned int v27; // eax
  double v28; // xmm0_8
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm6_4
  double v40; // xmm1_8
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  int v46; // r15d
  float v47; // xmm12_4
  unsigned int v48; // edi
  unsigned int *v49; // rsi
  __int64 v50; // rax
  float v51; // xmm2_4
  unsigned int v52; // xmm1_4
  __int64 v53; // r14
  float v54; // xmm2_4
  float v55; // xmm12_4
  unsigned int *v56; // r13
  signed int v57; // r15d
  float v58; // xmm13_4
  __int64 v59; // rsi
  unsigned int v60; // xmm8_4
  unsigned int v61; // xmm9_4
  unsigned int v62; // xmm10_4
  __int64 v63; // rdi
  float v64; // xmm11_4
  float v65; // xmm7_4
  float v66; // xmm1_4
  __int64 v67; // r14
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm14_4
  float v71; // xmm15_4
  float v72; // xmm6_4
  float v73; // xmm14_4
  float v74; // xmm15_4
  float v75; // xmm2_4
  float v76; // xmm7_4
  float v77; // xmm6_4
  float v78; // xmm6_4
  unsigned int v79; // xmm1_4
  float v80; // xmm0_4
  float v81; // xmm13_4
  double v82; // xmm1_8
  double v83; // xmm0_8
  float v84; // [rsp+28h] [rbp-A9h] BYREF
  float v85; // [rsp+2Ch] [rbp-A5h]
  float v86; // [rsp+30h] [rbp-A1h]
  float v87; // [rsp+138h] [rbp+67h]
  unsigned int v88; // [rsp+140h] [rbp+6Fh]
  __int64 v89; // [rsp+148h] [rbp+77h]

  v0 = dword_140404A6C[179955874];
  v1 = (float *)&dword_140404A6C[129716729];
  v2 = 512;
  v3 = 0;
  v89 = 512;
  v88 = dword_140404A6C[179955874];
  do
  {
    if ( !dword_140404A6C[v3 + 129716709]
      || dword_140404A6C[v3 + 129716710] == 12
      || (int)dword_140404A6C[v3 + 129720373] <= 0 )
    {
      goto LABEL_78;
    }
    if ( v0 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = *(float *)&dword_140404A6C[v3 + 129716726];
        v17 = *(float *)&dword_140404A6C[v3 + 129716727];
        v18 = *(float *)&dword_140404A6C[v3 + 129716728];
        v84 = v16;
        v85 = v17;
        v86 = v18;
        v19 = v3 * 4 + 172 * v15;
        if ( !v15 )
          break;
        if ( v15 == 1 )
        {
          *(_QWORD *)&v20 = dword_140404A6C[v3 + 129720435];
          goto LABEL_27;
        }
LABEL_28:
        v21 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v19);
        v22 = (float)((float)(v17 * *(float *)&dword_140404A6C[v21 + 18215737])
                    + (float)(v16 * *(float *)&dword_140404A6C[v21 + 18215736]))
            + (float)(v18 * *(float *)&dword_140404A6C[v21 + 18215738]);
        *(float *)((char *)&dword_140404A6C[129720390] + v19) = v22;
        v23 = *(float *)&dword_140404A6C[v3 + 129720346];
        if ( v15 < 2 )
        {
          if ( v23 > 1.0 )
            v24 = 0.0;
          else
            v24 = v23 * 0.0083333338;
        }
        else
        {
          v24 = v23 * 0.016666668;
        }
        if ( v22 >= (float)-v24 )
        {
          if ( v22 <= v24 )
            v24 = -v22;
          else
            v24 = -v24;
        }
        v25 = v24 * *(float *)&dword_140404A6C[v21 + 18215742];
        ++v14;
        ++v15;
        *(float *)&dword_140404A6C[v21 + 18215739] = (float)(v16 * v25) + *(float *)&dword_140404A6C[v21 + 18215739];
        *(float *)&dword_140404A6C[v21 + 18215740] = (float)(v17 * v25) + *(float *)&dword_140404A6C[v21 + 18215740];
        *(float *)&dword_140404A6C[v21 + 18215741] = (float)(v18 * v25) + *(float *)&dword_140404A6C[v21 + 18215741];
        if ( v14 >= (int)dword_140404A6C[v3 + 129720373] )
        {
          v0 = v88;
          goto LABEL_39;
        }
      }
      *(_QWORD *)&v20 = dword_140404A6C[v3 + 129720392];
LABEL_27:
      sub_14007B4D0(&v84, v1, v20);
      v16 = v84;
      v17 = v85;
      v18 = v86;
      goto LABEL_28;
    }
    v4 = 0;
    v5 = (float *)&dword_140404A6C[v3 + 129720390];
    do
    {
      ++v4;
      *v5 = (float)(*(v5 - 2) * *(v5 - 1)) + *v5;
      v5 += 43;
      v6 = dword_140404A6C[v3 + 129720373];
    }
    while ( v4 < v6 );
    v7 = 0;
    v8 = 0;
    if ( v6 > 0 )
    {
      v9 = (float *)&dword_140404A6C[v3 + 129720390];
      do
      {
        v10 = *(float *)&dword_140404A6C[v3 + 129720346];
        if ( v8 < 2 )
        {
          if ( v10 > 1.0 )
            v11 = 0.0;
          else
            v11 = v10 * 0.0083333338;
        }
        else
        {
          v11 = v10 * 0.016666668;
        }
        v12 = *v9;
        if ( *v9 >= (float)-v11 )
        {
          if ( v12 <= v11 )
            v13 = 0.0;
          else
            v13 = v12 - v11;
        }
        else
        {
          v13 = v12 + v11;
        }
        *v9 = v13;
        ++v7;
        v9 += 43;
        ++v8;
      }
      while ( v7 < (int)dword_140404A6C[v3 + 129720373] );
    }
LABEL_39:
    v26 = *(float *)&dword_140404A6C[v3 + 129720331];
    v27 = dword_140404A6C[v3 + 129716710];
    if ( v27 == 9 )
      v28 = 0.00003183098861837697;
    else
      v28 = 0.00002273642044169784;
    v29 = v28 * (float)(v26 * 3600.0);
    if ( v29 <= 1.0 )
    {
      v31 = fminf(fmaxf(v29, 0.0), 1.0);
      v32 = v31
          * (float)((float)((float)((float)((float)(1.0 - v31) * 2.625) + v31) * v31)
                  + (float)((float)((float)(1.0 - v31) * 1.875) * (float)(1.0 - v31)));
      v33 = 1.0 - v32;
      if ( v27 == 9 )
      {
        v34 = (float)(v33 + v33) + (float)(v32 * 0.25);
        v35 = (float)((float)(1.0 - v32) * 0.75) * (float)(1.0 - v32);
      }
      else
      {
        if ( v27 == 7 )
        {
          v36 = v33 * 2.5;
          v35 = (float)(1.0 - v32) * (float)(1.0 - v32);
        }
        else
        {
          v36 = v33 + v33;
          v35 = (float)((float)(1.0 - v32) * 0.75) * (float)(1.0 - v32);
        }
        v34 = v36 + (float)(v32 * 0.625);
      }
      v30 = (float)(v34 * v32) + v35;
    }
    else
    {
      v30 = 0.0;
    }
    v37 = *(float *)&dword_140404A6C[v3 + 129720332];
    dword_140404A6C[v3 + 129720330] = 0;
    v38 = *(float *)&dword_140404A6C[v3 + 129720333];
    dword_140404A6C[v3 + 129720335] = 1090519040;
    v39 = *(float *)&dword_140404A6C[v3 + 129720337];
    dword_140404A6C[v3 + 129720336] = 1115684864;
    v40 = (float)(1.125 - v37);
    v41 = (float)((float)((float)(v38 * 0.00027777778) * (float)(v37 * v30))
                / (float)(v39 * *(float *)&dword_140404A6C[v3 + 129720339]))
        * 0.03125;
    v42 = *(float *)&dword_140404A6C[v3 + 129720343] * 0.035714287;
    v43 = (float)(v41 - fabs((float)(v26 * 0.005859375)) * (float)(v26 * 0.005859375) * v40) + v26;
    if ( *(float *)&dword_140404A6C[v3 + 129720343] != 0.0 )
    {
      v44 = 1.0 / (float)(v39 + 8.0);
      v45 = (float)((float)((float)(v43 * 0.125) - (float)(*(float *)&dword_140404A6C[v3 + 129720334] * v42))
                  * *(float *)&dword_140404A6C[v3 + 129720345])
          * 0.25;
      v43 = v43 - (float)((float)(v45 * v44) * *(float *)&dword_140404A6C[v3 + 129720338]);
      *(float *)&dword_140404A6C[v3 + 129720334] = (float)((float)((float)(v44 * v39) * v45) * (float)(v42 * 64.0))
                                                 + *(float *)&dword_140404A6C[v3 + 129720334];
    }
    v46 = dword_140404A6C[v3 + 129720349];
    v47 = 0.0;
    *(float *)&dword_140404A6C[v3 + 129720331] = v43;
    v48 = 0;
    if ( v46 <= 0 )
    {
      v58 = 0.0;
    }
    else
    {
      v49 = &dword_140404A6C[v3 + 129720350];
      do
      {
        v50 = v3 * 4 + 172LL * (int)*v49;
        if ( v0 )
        {
          v52 = dword_140404A6C[v3 + 129716727];
          v53 = *(int *)((char *)&dword_140404A6C[129720374] + v50);
          v84 = *(float *)&dword_140404A6C[v3 + 129716726];
          v86 = *(float *)&dword_140404A6C[v3 + 129716728];
          v85 = *(float *)&v52;
          if ( v48 <= 1 )
          {
            sub_14007B4D0(
              &v84,
              v1,
              sr_export_float_lane_container((unsigned __int64)*(unsigned int *)((char *)&dword_140404A6C[129720392] + v50)));
            v0 = v88;
          }
          v51 = (float)((float)(v85 * *(float *)&dword_140404A6C[47 * v53 + 18215737])
                      + (float)(v84 * *(float *)&dword_140404A6C[47 * v53 + 18215736]))
              + (float)(v86 * *(float *)&dword_140404A6C[47 * v53 + 18215738]);
        }
        else
        {
          v51 = *(float *)((char *)&dword_140404A6C[129720390] + v50);
        }
        v54 = v51 + v47;
        ++v48;
        ++v49;
        v47 = v54;
      }
      while ( (int)v48 < v46 );
      v55 = v54 * 0.5;
      v56 = &dword_140404A6C[v3 + 129720350];
      v57 = 0;
      v58 = 0.0;
      do
      {
        v59 = (int)*v56;
        v60 = dword_140404A6C[v3 + 129716726];
        v61 = dword_140404A6C[v3 + 129716727];
        v62 = dword_140404A6C[v3 + 129716728];
        v84 = *(float *)&v60;
        v85 = *(float *)&v61;
        v86 = *(float *)&v62;
        v63 = v3 * 4 + 172 * v59;
        v64 = *(float *)((char *)&dword_140404A6C[129720390] + v63);
        if ( (unsigned int)v59 <= 1 )
        {
          sub_14007B4D0(
            &v84,
            v1,
            sr_export_float_lane_container((unsigned __int64)*(unsigned int *)((char *)&dword_140404A6C[129720392] + v63)));
          v0 = v88;
        }
        v65 = *(float *)&dword_140404A6C[v3 + 129720335];
        v66 = *(float *)((char *)&dword_140404A6C[129720386] + v63);
        v67 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v63);
        v68 = (float)((float)(v55 - v64) * *(float *)&dword_140404A6C[v67 + 18215742]) * 0.0009765625;
        v69 = v86 * v68;
        v70 = v84 * v68;
        v71 = v85 * v68;
        v72 = *(float *)&dword_140404A6C[v3 + 129720334];
        v73 = v70 + *(float *)&dword_140404A6C[v67 + 18215739];
        *(float *)&dword_140404A6C[v67 + 18215739] = v73;
        v74 = v71 + *(float *)&dword_140404A6C[v67 + 18215740];
        *(float *)&dword_140404A6C[v67 + 18215740] = v74;
        v87 = v69 + *(float *)&dword_140404A6C[v67 + 18215741];
        *(float *)&dword_140404A6C[v67 + 18215741] = v87;
        v75 = 1.0 / (float)(v65 + v66);
        v76 = v65 * v75;
        v77 = (float)(v72 * 0.03125) - (float)(v55 * 0.109375);
        v58 = v58
            + (float)((float)((float)(v75 * v66) * v77) * (float)(*(float *)&dword_140404A6C[v3 + 129720336] * -0.125));
        if ( v0 )
        {
          v84 = *(float *)&v60;
          v85 = *(float *)&v61;
          v86 = *(float *)&v62;
          if ( (unsigned int)v59 <= 1 )
          {
            sub_14007B4D0(
              &v84,
              v1,
              sr_export_float_lane_container((unsigned __int64)*(unsigned int *)((char *)&dword_140404A6C[129720392] + v63)));
            v0 = v88;
          }
          v78 = (float)(v77 * v76) * 0.4375;
          *(float *)&v79 = (float)(v85 * v78) + v74;
          *(float *)&dword_140404A6C[v67 + 18215739] = (float)(v84 * v78) + v73;
          v80 = v86 * v78;
          dword_140404A6C[v67 + 18215740] = v79;
          *(float *)&dword_140404A6C[v67 + 18215741] = v80 + v87;
        }
        else
        {
          *(float *)((char *)&dword_140404A6C[129720390] + v63) = (float)((float)(v77
                                                                                * *(float *)((char *)&dword_140404A6C[129720388]
                                                                                           + v63))
                                                                        * (float)(v76 * 0.4375))
                                                                + v64;
        }
        ++v57;
        ++v56;
      }
      while ( v57 < (int)dword_140404A6C[v3 + 129720349] );
      v2 = v89;
    }
    v81 = v58 + *(float *)&dword_140404A6C[v3 + 129720334];
    v82 = fabs(*(float *)&dword_140404A6C[v3 + 129720331]);
    *(float *)&dword_140404A6C[v3 + 129720334] = v81;
    if ( v82 > 0.0 && v82 < 0.0000152587890625 )
      dword_140404A6C[v3 + 129720331] = 0;
    v83 = fabs(v81);
    if ( v83 > 0.0 && v83 < 0.0000152587890625 )
      dword_140404A6C[v3 + 129720334] = 0;
LABEL_78:
    v1 += 5210;
    v3 += 5210;
    v89 = --v2;
  }
  while ( v2 );
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848F4: using guessed type unsigned int;
// 16B2A2EA0: using guessed type unsigned int;
// 183E9361C: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183F7CBEC: using guessed type unsigned int;
// 1873DE440: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014010AA70) ----------------------------------------------------
__int64            sub_14010AA70(int a1)
{
  __int64 v1; // rbx
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned int v4; // r8d
  float v5; // xmm0_4
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm0_4
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  float v13; // xmm0_4
  int v14; // eax
  unsigned int v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  unsigned int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  unsigned int v22; // xmm10_4
  float v23; // xmm8_4
  double v24; // xmm6_8
  float v25; // xmm0_4
  float v26; // xmm1_4
  int v27; // ecx
  int v28; // edx
  __int64 result; // rax

  v1 = 5210LL * a1;
  v2 = *(float *)&dword_140404A6C[v1 + 129720168];
  if ( v2 <= 0.0 )
  {
    v3 = *(float *)&dword_140404A6C[v1 + 129720332];
    if ( v3 <= 0.125 )
      dword_140404A6C[v1 + 129720332] = 0;
    else
      *(float *)&dword_140404A6C[v1 + 129720332] = v3 - 0.125;
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 129720332] = fabs(v2);
  }
  v4 = dword_140404A6C[v1 + 129720173];
  v5 = *(float *)&dword_140404A6C[v1 + 129720345];
  dword_140404A6C[v1 + 129720370] = 0;
  if ( (v4 & 2) != 0 )
  {
    if ( v5 <= 0.125 )
      dword_140404A6C[v1 + 129720345] = 0;
    else
      *(float *)&dword_140404A6C[v1 + 129720345] = v5 - 0.125;
  }
  else if ( v5 >= 0.875 )
  {
    dword_140404A6C[v1 + 129720345] = 1065353216;
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 129720345] = v5 + 0.125;
  }
  v6 = *(float *)&dword_140404A6C[v1 + 129720167];
  v7 = 0;
  if ( v6 >= -0.5 )
  {
    if ( v6 <= 0.5 )
    {
      dword_140404A6C[v1 + 129720345] = 0;
      dword_140404A6C[v1 + 129720340] = 0;
    }
    else
    {
      v9 = *(float *)&dword_140404A6C[v1 + 129720165];
      if ( v9 >= 0.5 )
      {
        v10 = -1;
        if ( v9 < 1.5 )
          v10 = 4;
        dword_140404A6C[v1 + 129720340] = v10;
      }
      else
      {
        dword_140404A6C[v1 + 129720340] = 2;
      }
    }
  }
  else
  {
    v8 = *(float *)&dword_140404A6C[v1 + 129720165];
    if ( v8 >= 0.5 )
    {
      if ( v8 >= 1.5 )
      {
        dword_140404A6C[v1 + 129720370] = 1;
        v7 = 1;
      }
      else
      {
        dword_140404A6C[v1 + 129720340] = 3;
      }
    }
    else
    {
      dword_140404A6C[v1 + 129720340] = 1;
    }
  }
  if ( v7 )
  {
    v11 = dword_140404A6C[v1 + 129720340];
    if ( v11 < 1 )
    {
      v11 = 1;
      dword_140404A6C[v1 + 129720340] = 1;
    }
    v12 = dword_140404A6C[v1 + 129720371];
    if ( v12 <= 0 )
    {
      if ( (unsigned int)v11 > 1 && *(float *)&dword_140404A6C[v1 + 129720331] < 4.363323129986111 )
      {
        --v11;
        dword_140404A6C[v1 + 129720371] = 30;
        dword_140404A6C[v1 + 129720340] = v11;
      }
      v13 = 10.471975;
      if ( dword_140404A6C[v1 + 129716710] == 9 )
        v13 = 7.8539815;
      if ( v11 < 4 && v13 < *(float *)&dword_140404A6C[v1 + 129720331] )
      {
        dword_140404A6C[v1 + 129720371] = 30;
        dword_140404A6C[v1 + 129720340] = v11 + 1;
      }
    }
    else
    {
      dword_140404A6C[v1 + 129720371] = v12 - 1;
    }
  }
  v14 = dword_140404A6C[v1 + 129720340];
  if ( v14 >= -1 )
  {
    if ( v14 > 4 )
    {
      v14 = 4;
      dword_140404A6C[v1 + 129720340] = 4;
    }
  }
  else
  {
    v14 = -1;
    dword_140404A6C[v1 + 129720340] = -1;
  }
  dword_140404A6C[v1 + 129720346] = 0;
  if ( v4 == -1 )
  {
    v14 = 0;
    *(float *)&v15 = *(float *)&dword_140404A6C[v1 + 129720331] * 0.9375;
    dword_140404A6C[v1 + 129720346] = 1065353216;
    dword_140404A6C[v1 + 129720340] = 0;
    dword_140404A6C[v1 + 129720331] = v15;
  }
  if ( !v7 && v14 != dword_140404A6C[v1 + 129720341] )
  {
    if ( v14 )
    {
      v16 = 0.75;
      v17 = 1.0;
    }
    else
    {
      v17 = 0.75;
      v16 = 1.0;
    }
    sub_1400515E0(dword_140404A6C[283786009], &dword_140404A6C[v1 + 129716720], v17, v16);
  }
  v18 = dword_140404A6C[v1 + 129720340];
  if ( v18 )
  {
    switch ( v18 )
    {
      case 1u:
        dword_140404A6C[v1 + 129720343] = 1093507481;
        break;
      case 2u:
        dword_140404A6C[v1 + 129720343] = 1089889895;
        break;
      case 3u:
        dword_140404A6C[v1 + 129720343] = 1084751872;
        break;
      case 4u:
        dword_140404A6C[v1 + 129720343] = 1080033280;
        break;
      case 0xFFFFFFFF:
        dword_140404A6C[v1 + 129720343] = -1054343168;
        break;
    }
  }
  else
  {
    dword_140404A6C[v1 + 129720343] = 0;
  }
  v19 = *(float *)&dword_140404A6C[v1 + 129720168];
  if ( v19 < 0.0 )
    *(float *)&dword_140404A6C[v1 + 129720346] = -v19;
  if ( (dword_140404A6C[v1 + 129720173] & 4) != 0 )
    dword_140404A6C[v1 + 129720346] = 0x40000000;
  v20 = *(float *)&dword_140404A6C[v1 + 129720343];
  if ( v20 == 0.0 )
    v21 = 0.0;
  else
    v21 = 1.0 / v20;
  *(float *)&dword_140404A6C[v1 + 129720344] = v21;
  v22 = dword_140404A6C[v1 + 129720166];
  dword_140404A6C[v1 + 129720372] = v22;
  v23 = fabs(*(float *)&v22);
  if ( v23 <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v24 = *(float *)&dword_140404A6C[v1 + 129721883];
    v25 = tan(1.570796326795 - v23) * v24 + *(float *)&dword_140404A6C[v1 + 129721882];
    v26 = 1.570796326795 - sub_14023EDE4(v25, v24);
  }
  if ( *(float *)&v22 <= 0.0 )
  {
    *(float *)&dword_140404A6C[v1 + 129720435] = -v26;
    v26 = -v23;
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 129720435] = v23;
  }
  *(float *)&dword_140404A6C[v1 + 129720392] = v26;
  if ( (int)dword_140404A6C[v1 + 129716712] <= 0 || dword_140404A6C[v1 + 129716717] )
    dword_140404A6C[v1 + 129720331] = 0;
  v27 = 0;
  v28 = dword_140404A6C[v1 + 129720340];
  if ( (int)((float)(*(float *)&dword_140404A6C[v1 + 129720331] * 3600.0) * 0.1591549430918849) >= 0 )
    v27 = (int)((float)(*(float *)&dword_140404A6C[v1 + 129720331] * 3600.0) * 0.1591549430918849);
  result = (unsigned int)v27;
  if ( v28 <= 0 || v27 >= 1 )
  {
    if ( v27 > 0x1FFF )
      result = 0x1FFF;
    dword_140404A6C[v1 + 129720369] = result;
  }
  else
  {
    dword_140404A6C[v1 + 129720369] = 1;
  }
  if ( *(float *)&dword_140404A6C[v1 + 129720168] > 0.0 )
  {
    dword_140404A6C[v1 + 129720168] = 0;
    v28 = dword_140404A6C[v1 + 129720340];
  }
  dword_140404A6C[v1 + 129720341] = v28;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010AF90) ----------------------------------------------------
void            sub_14010AF90(int a1)
{
  int v1; // edi
  unsigned int *v2; // rax
  __int64 v3; // rsi
  unsigned int *v4; // rcx
  unsigned int *v5; // r8
  int v6; // edx
  int v7; // eax
  unsigned int v8; // xmm1_4
  double v9; // xmm3_8
  double v10; // xmm3_8
  float v11; // xmm3_4
  __m128d v12; // xmm1
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  __int64 v20; // rdx
  double v21; // xmm0_8
  __int64 v22; // rbx
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  __int64 v26; // rcx
  float v27; // xmm8_4
  float v28; // xmm3_4
  unsigned int v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm8_4
  __int64 v33; // rcx
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm2_4
  unsigned int v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  unsigned int v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  __int64 v57; // rdi
  float v58; // xmm1_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  unsigned int v63; // xmm0_4
  float v64; // xmm2_4
  double v65; // xmm0_8
  double v66; // xmm2_8
  __m128 v67; // xmm0
  float v68; // xmm3_4
  float v69; // xmm6_4
  float v70; // xmm5_4
  float v71; // xmm7_4
  float v72; // xmm4_4
  float v73; // xmm8_4
  float v74; // xmm2_4
  float v75; // xmm11_4
  float v76; // xmm10_4
  float v77; // xmm15_4
  float v78; // xmm11_4
  float v79; // xmm10_4
  float v80; // xmm12_4
  float v81; // xmm2_4
  float v82; // xmm14_4
  float v83; // xmm13_4
  float v84; // xmm12_4
  float v85; // xmm14_4
  float v86; // xmm3_4
  float v87; // xmm13_4
  float v88; // xmm14_4
  float v89; // xmm12_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm8_4
  float v94; // xmm6_4
  float v95; // xmm7_4
  float v96; // xmm0_4
  double v97; // xmm0_8
  float v98; // xmm4_4
  float v99; // xmm2_4
  float v100; // xmm0_4
  float v101; // xmm3_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm3_4
  float v105; // xmm4_4
  float v106; // xmm12_4
  float v107; // xmm13_4
  float v108; // xmm2_4
  float v109; // xmm3_4
  float v110; // xmm4_4
  float v111; // xmm1_4
  float v112; // xmm3_4
  float v113; // xmm1_4
  float v114; // xmm4_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  float v117; // xmm6_4
  float v118; // xmm1_4
  float v119; // xmm7_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  float v122; // xmm6_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm1_4
  float v126; // xmm11_4
  float v127; // xmm0_4
  float v128; // xmm10_4
  float v129; // [rsp+20h] [rbp-158h]
  float v130; // [rsp+24h] [rbp-154h]
  float v131; // [rsp+28h] [rbp-150h]
  float v132; // [rsp+2Ch] [rbp-14Ch]
  float v133; // [rsp+30h] [rbp-148h]
  float v134; // [rsp+34h] [rbp-144h]
  __m128d v135; // [rsp+40h] [rbp-138h] BYREF
  double v136; // [rsp+60h] [rbp-118h]
  double v137; // [rsp+68h] [rbp-110h]
  __m128d v138; // [rsp+70h] [rbp-108h]
  float v139[12]; // [rsp+80h] [rbp-F8h] BYREF
  float v140; // [rsp+180h] [rbp+8h]
  float v141; // [rsp+188h] [rbp+10h]
  float v142; // [rsp+190h] [rbp+18h]
  float v143; // [rsp+198h] [rbp+20h]

  v1 = 0;
  v2 = &dword_140404A6C[280651313];
  do
  {
    if ( *(v2 - 10) && *v2 == a1 && !v2[1] )
      v1 = 1;
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[282485809] );
  v3 = 5210LL * a1;
  if ( (int)dword_140404A6C[v3 + 129716712] <= 0 || dword_140404A6C[v3 + 129716717] )
  {
    v1 = 0;
    v4 = &dword_140404A6C[v3 + 129720369];
    v5 = &dword_140404A6C[v3 + 129720369];
    v6 = dword_140404A6C[v3 + 129720369];
  }
  else
  {
    v4 = &dword_140404A6C[v3 + 129720369];
    v5 = &dword_140404A6C[v3 + 129720369];
    v6 = dword_140404A6C[v3 + 129720369];
    if ( v1 )
    {
      if ( v6 > 1990 )
      {
        v7 = 2000;
        *v4 = 2000;
      }
      else
      {
        v7 = v6 + 10;
        *v4 = v6 + 10;
      }
      goto LABEL_17;
    }
  }
  v7 = v6 - 10;
  if ( v6 < 10 )
    v7 = 0;
  *v5 = v7;
LABEL_17:
  *(float *)&v8 = (float)((float)v7 + (float)v7) * 0.0008726646259972221 + *(float *)&dword_140404A6C[v3 + 129720391];
  v9 = *(float *)&v8;
  dword_140404A6C[v3 + 129720391] = v8;
  *(float *)&dword_140404A6C[v3 + 129720434] = *(float *)&v8
                                             - (float)((float)((float)(int)*v4 * 0.125)
                                                     + (float)((float)(int)*v4 * 0.125))
                                             * 0.0008726646259972221;
  if ( *(float *)&v8 <= 3.14159265359 )
  {
    if ( v9 >= -3.14159265359 )
      goto LABEL_22;
    v10 = v9 + 6.28318530718;
  }
  else
  {
    v10 = v9 - 6.28318530718;
  }
  *(float *)&dword_140404A6C[v3 + 129720391] = v10;
LABEL_22:
  sub_14007AE70(
    v139,
    (float *)&dword_140404A6C[47 * dword_140404A6C[v3 + 129721807] + 18215724],
    (float *)&dword_140404A6C[47 * dword_140404A6C[v3 + 129716719] + 18215724]);
  sub_14010E370((float *)&v135, v139);
  v11 = *((float *)&SR_VEC_LANES(128, v135, f64)[1] + 1);
  if ( *((float *)&SR_VEC_LANES(128, v135, f64)[1] + 1) < 0.0 )
  {
    v12 = (__m128d)_mm_xor_ps((__m128)v135, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps((__m128)v12, (__m128)v12, 255), f32)[0];
    v135 = v12;
  }
  v13 = -*(float *)SR_VEC_LANES(128, v135, f64);
  v14 = -*((float *)SR_VEC_LANES(128, v135, f64) + 1);
  v15 = -*(float *)&SR_VEC_LANES(128, v135, f64)[1];
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v13 * (float)(1.0 / v16);
    v18 = v14 * (float)(1.0 / v16);
    v19 = v15 * (float)(1.0 / v16);
  }
  v21 = acos(fminf(fmaxf(v11, -1.0), 1.0));
  v22 = 47LL * (int)dword_140404A6C[v3 + 129721807];
  v23 = v21 + v21;
  v24 = v18 * v23;
  v25 = v17 * v23;
  v26 = 18LL * (int)dword_140404A6C[v3 + 129721808];
  v27 = v19 * v23;
  v28 = v24 * *(float *)&dword_140404A6C[v22 + 18215728];
  *(float *)&v21 = v25 * *(float *)&dword_140404A6C[v22 + 18215725];
  *(float *)&v29 = (float)((float)(v24 * *(float *)&dword_140404A6C[v22 + 18215727])
                         + (float)(v25 * *(float *)&dword_140404A6C[v22 + 18215724]))
                 + (float)(v27 * *(float *)&dword_140404A6C[v22 + 18215730]);
  v30 = v27 * *(float *)&dword_140404A6C[v22 + 18215731];
  v31 = (float)(v24 * *(float *)&dword_140404A6C[v22 + 18215729])
      + (float)(v25 * *(float *)&dword_140404A6C[v22 + 18215726]);
  v32 = v27 * *(float *)&dword_140404A6C[v22 + 18215732];
  dword_140404A6C[2 * v26 + 485543033] = v29;
  *(float *)&dword_140404A6C[2 * v26 + 485543035] = v31 + v32;
  *(float *)&dword_140404A6C[2 * v26 + 485543034] = (float)(v28 + *(float *)&v21) + v30;
  if ( v1 && (int)dword_140404A6C[v3 + 129716712] > 0 )
  {
    v33 = 47LL * (int)dword_140404A6C[v3 + 129716719];
    v34 = *(float *)&dword_140404A6C[v33 + 18215718];
    v35 = *(float *)&dword_140404A6C[v33 + 18215719];
    v36 = *(float *)&dword_140404A6C[v33 + 18215720];
    v37 = (float)(v35 * v35) + (float)(v34 * v34);
    v38 = fsqrt((float)(v36 * v36) + v37);
    if ( v38 == 0.0 )
    {
      v39 = 0.0;
      v40 = 0.0;
      v41 = 0.0;
    }
    else
    {
      v39 = (float)(1.0 / v38) * v34;
      v40 = (float)(1.0 / v38) * v35;
      v41 = (float)(1.0 / v38) * v36;
    }
    v42 = (float)((float)((float)(v36 + v36) * v36) + v37) + v37;
    v43 = (float)((float)((float)((float)(v40 * *(float *)&dword_140404A6C[v33 + 18215725])
                                + (float)(v39 * *(float *)&dword_140404A6C[v33 + 18215724]))
                        + (float)(v41 * *(float *)&dword_140404A6C[v33 + 18215726]))
                * v42)
        * -0.00075000001;
    *(float *)&v44 = (float)(*(float *)&dword_140404A6C[v3 + 129716727] * v43) + v35;
    *(float *)&dword_140404A6C[v33 + 18215718] = (float)(*(float *)&dword_140404A6C[v3 + 129716726] * v43) + v34;
    v45 = *(float *)&dword_140404A6C[v3 + 129716728];
    dword_140404A6C[v33 + 18215719] = v44;
    *(float *)&dword_140404A6C[v33 + 18215720] = (float)(v45 * v43) + v36;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    if ( v38 == 0.0 )
    {
      v46 = 0.0;
      v47 = 0.0;
      v48 = 0.0;
    }
    else
    {
      v46 = v34 * (float)(1.0 / v38);
      v47 = v35 * (float)(1.0 / v38);
      v48 = v36 * (float)(1.0 / v38);
    }
    v49 = (float)((float)((float)((float)(v47 * *(float *)&dword_140404A6C[v33 + 18215728])
                                + (float)(v46 * *(float *)&dword_140404A6C[v33 + 18215727]))
                        + (float)(v48 * *(float *)&dword_140404A6C[v33 + 18215729]))
                * v42)
        * -0.0015;
    v50 = v49 * *(float *)&dword_140404A6C[v3 + 129716730];
    *(float *)&v51 = (float)(v49 * *(float *)&dword_140404A6C[v3 + 129716729])
                   + *(float *)&dword_140404A6C[v33 + 18215718];
    v52 = v49 * *(float *)&dword_140404A6C[v3 + 129716731];
    dword_140404A6C[v33 + 18215718] = v51;
    *(float *)&dword_140404A6C[v33 + 18215719] = v50 + *(float *)&dword_140404A6C[v33 + 18215719];
    v53 = v52 + *(float *)&dword_140404A6C[v33 + 18215720];
    *(float *)&dword_140404A6C[v33 + 18215720] = v53;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    if ( v38 == 0.0 )
    {
      v54 = 0.0;
      v55 = 0.0;
      v56 = 0.0;
    }
    else
    {
      v54 = v34 * (float)(1.0 / v38);
      v55 = v35 * (float)(1.0 / v38);
      v56 = v36 * (float)(1.0 / v38);
    }
    v57 = 16;
    v58 = *(float *)&dword_140404A6C[v3 + 129716733];
    v59 = (float)((float)(v55 * *(float *)&dword_140404A6C[v33 + 18215731])
                + (float)(v54 * *(float *)&dword_140404A6C[v33 + 18215730]))
        + (float)(v56 * *(float *)&dword_140404A6C[v33 + 18215732]);
    v60 = 0.0;
    v130 = 0.0;
    v61 = (float)(v59 * v42) * -0.0001875;
    *(float *)&dword_140404A6C[v33 + 18215718] = (float)(*(float *)&dword_140404A6C[v3 + 129716732] * v61)
                                               + *(float *)&dword_140404A6C[v33 + 18215718];
    v62 = *(float *)&dword_140404A6C[v3 + 129716734] * v61;
    *(float *)&dword_140404A6C[v33 + 18215719] = (float)(v58 * v61) + *(float *)&dword_140404A6C[v33 + 18215719];
    *(float *)&v63 = v62 + v53;
    v64 = *(float *)&dword_140404A6C[v3 + 129720166] * 0.0044444446;
    dword_140404A6C[v33 + 18215720] = v63;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    v140 = *(float *)&dword_140404A6C[v22 + 18215718];
    v141 = *(float *)&dword_140404A6C[v22 + 18215719];
    v142 = *(float *)&dword_140404A6C[v22 + 18215720];
    *(float *)&dword_140404A6C[v22 + 18215733] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215727])
                                               + *(float *)&dword_140404A6C[v22 + 18215733];
    v65 = (float)(*(float *)&dword_140404A6C[v3 + 129720167] * 0.0078125);
    *(float *)&dword_140404A6C[v22 + 18215734] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215728])
                                               + *(float *)&dword_140404A6C[v22 + 18215734];
    *(float *)&dword_140404A6C[v22 + 18215735] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215729])
                                               + *(float *)&dword_140404A6C[v22 + 18215735];
    v66 = 3.141592653589793;
    v136 = v65 * 3.141592653589793;
    *(float *)&v65 = (float)(*(float *)&dword_140404A6C[v3 + 129720168] * 0.03125) * 3.141592653589793
                   + 0.1472621556370313;
    v131 = *(float *)&v65;
    v137 = (float)(*(float *)&dword_140404A6C[v3 + 129720165] * 0.015625) * 3.141592653589793;
    do
    {
      v67 = _mm_castpd_ps(sub_1401F8A50(v60, v20, v66));
      v68 = *(float *)&dword_140404A6C[v22 + 18215732];
      v69 = *(float *)&dword_140404A6C[v22 + 18215724];
      v70 = *(float *)&dword_140404A6C[v22 + 18215730];
      v71 = *(float *)&dword_140404A6C[v22 + 18215725];
      v72 = *(float *)&dword_140404A6C[v22 + 18215731];
      v73 = *(float *)&dword_140404A6C[v22 + 18215726];
      v135 = (__m128d)v67;
      v138 = _mm_shuffle_pd((__m128d)v67, (__m128d)v67, 1);
      v74 = SR_VEC_LANES(128, v138, f64)[0] * -4.0;
      v75 = *(double *)SR_VEC_LANES(128, v67, u64) * -4.0;
      v76 = v75;
      v77 = (float)(v75 * v70) + (float)(v74 * v69);
      v78 = (float)(v75 * v68) + (float)(v74 * v73);
      v79 = (float)(v76 * v72) + (float)(v74 * v71);
      v80 = *(double *)SR_VEC_LANES(128, v67, u64) * -2.932153224945068;
      v81 = SR_VEC_LANES(128, v138, f64)[0] * -2.932153224945068;
      v82 = v80;
      v83 = (float)(v80 * v70) + (float)(v81 * v69);
      v84 = (float)(v80 * v68) + (float)(v81 * v73);
      v85 = (float)(v82 * v72) + (float)(v81 * v71);
      v86 = fsqrt((float)((float)(v85 * v85) + (float)(v83 * v83)) + (float)(v84 * v84));
      if ( v86 == 0.0 )
      {
        v87 = 0.0;
        v88 = 0.0;
        v89 = 0.0;
      }
      else
      {
        v87 = v83 * (float)(1.0 / v86);
        v88 = v85 * (float)(1.0 / v86);
        v89 = v84 * (float)(1.0 / v86);
      }
      v90 = *(float *)&dword_140404A6C[v22 + 18215738];
      v91 = *(float *)&dword_140404A6C[v22 + 18215737];
      v92 = *(float *)&dword_140404A6C[v22 + 18215736];
      v93 = (float)((float)(v79 * v90) - (float)(v78 * v91)) + v140;
      v94 = (float)((float)(v78 * v92) - (float)(v77 * v90)) + v141;
      v95 = (float)((float)(v77 * v91) - (float)(v79 * v92)) + v142;
      v96 = SR_VEC_LANES(128, v138, f64)[0] * v136 + v131;
      v97 = sin((float)(v96 - SR_VEC_LANES(128, v135, f64)[0] * v137));
      v98 = *(float *)&dword_140404A6C[v22 + 18215729];
      v99 = v97 * -4.0;
      v143 = *(float *)&dword_140404A6C[v22 + 18215727];
      v129 = *(float *)&dword_140404A6C[v22 + 18215728];
      v132 = (float)(v99 * v143) + v93;
      v133 = (float)(v99 * v129) + v94;
      v134 = (float)(v99 * v98) + v95;
      v100 = fsqrt((float)((float)(v133 * v133) + (float)(v132 * v132)) + (float)(v134 * v134));
      if ( v100 == 0.0 )
      {
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
      }
      else
      {
        v101 = (float)(1.0 / v100) * v132;
        v102 = (float)(1.0 / v100) * v133;
        v103 = (float)(1.0 / v100) * v134;
      }
      v104 = (float)((float)((float)((float)((float)(v101 * v143) + (float)(v129 * v102)) + (float)(v98 * v103))
                           - (float)((float)((float)((float)(v140 * v87) + (float)(v141 * v88)) + (float)(v142 * v89))
                                   * 0.03125))
                   * (float)((float)((float)(v133 * v133) + (float)(v132 * v132)) + (float)(v134 * v134)))
           * -0.0024414062;
      v105 = v98 * v104;
      *(float *)&dword_140404A6C[v22 + 18215718] = (float)(v143 * v104) + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = (float)(v129 * v104) + *(float *)&dword_140404A6C[v22 + 18215719];
      *(float *)&dword_140404A6C[v22 + 18215720] = v105 + *(float *)&dword_140404A6C[v22 + 18215720];
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)((float)((float)(v129 * v104) * v78) - (float)(v105 * v79))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&dword_140404A6C[v22 + 18215734] = (float)((float)(v105 * v77) - (float)((float)(v143 * v104) * v78))
                                                 + *(float *)&dword_140404A6C[v22 + 18215734];
      v106 = (float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95);
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)((float)((float)(v143 * v104) * v79)
                                                         - (float)((float)(v129 * v104) * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      v107 = fsqrt(v106);
      if ( v107 == 0.0 )
      {
        v109 = 0.0;
        v108 = 0.0;
        v110 = 0.0;
      }
      else
      {
        v108 = v94 * (float)(1.0 / v107);
        v109 = (float)(1.0 / v107) * v93;
        v110 = v95 * (float)(1.0 / v107);
      }
      v111 = *(float *)&dword_140404A6C[v3 + 129716726] * v109;
      v112 = *(float *)&dword_140404A6C[v3 + 129716727];
      v113 = (float)((float)((float)(v111 + (float)(v108 * v112))
                           + (float)(*(float *)&dword_140404A6C[v3 + 129716728] * v110))
                   * v106)
           * -0.00024414062;
      v114 = *(float *)&dword_140404A6C[v3 + 129716726] * v113;
      v115 = *(float *)&dword_140404A6C[v3 + 129716728] * v113;
      v116 = v112 * v113;
      *(float *)&dword_140404A6C[v22 + 18215718] = v114 + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = v116 + *(float *)&dword_140404A6C[v22 + 18215719];
      *(float *)&dword_140404A6C[v22 + 18215720] = v115 + *(float *)&dword_140404A6C[v22 + 18215720];
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)((float)(v116 * v78) - (float)(v115 * v79))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&dword_140404A6C[v22 + 18215734] = (float)((float)(v115 * v77) - (float)(v114 * v78))
                                                 + *(float *)&dword_140404A6C[v22 + 18215734];
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)((float)(v114 * v79) - (float)(v116 * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      if ( v107 == 0.0 )
      {
        v118 = 0.0;
        v117 = 0.0;
        v119 = 0.0;
      }
      else
      {
        v117 = v94 * (float)(1.0 / v107);
        v118 = (float)(1.0 / v107) * v93;
        v119 = v95 * (float)(1.0 / v107);
      }
      v120 = *(float *)&dword_140404A6C[v3 + 129716733];
      v121 = *(float *)&dword_140404A6C[v3 + 129716732];
      *(_QWORD *)&v66 = dword_140404A6C[v3 + 129716734];
      v122 = (float)((float)((float)((float)(v117 * v120) + (float)(v118 * v121))
                           + (float)(v119 * *(float *)&dword_140404A6C[v3 + 129716734]))
                   * v106)
           * -0.00018310547;
      v123 = v121 * v122;
      *(float *)&v66 = *(float *)&v66 * v122;
      v124 = v120 * v122;
      *(float *)&dword_140404A6C[v22 + 18215718] = v123 + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = v124 + *(float *)&dword_140404A6C[v22 + 18215719];
      v125 = v78 * v124;
      v126 = v78 * v123;
      *(float *)&dword_140404A6C[v22 + 18215720] = *(float *)&v66 + *(float *)&dword_140404A6C[v22 + 18215720];
      v127 = v79;
      v128 = v79 * v123;
      v60 = v130 + 0.39269909;
      v130 = v130 + 0.39269909;
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)(v125 - (float)(v127 * *(float *)&v66))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&v66 = (float)((float)(*(float *)&v66 * v77) - v126) + *(float *)&dword_140404A6C[v22 + 18215734];
      dword_140404A6C[v22 + 18215734] = LODWORD(v66);
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)(v128 - (float)(v124 * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      --v57;
    }
    while ( v57 );
  }
}

// 14010B72B: variable 'v20' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010BE50) ----------------------------------------------------
void sub_14010BE50()
{
  __int64 v0; // r11
  unsigned int *v1; // r10
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int i; // edx
  int v5; // ecx
  int v6; // eax
  int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm2_4

  v0 = dword_140404A6C[132792829];
  v1 = &dword_140404A6C[129716716];
  v2 = dword_140404A6C[456202453];
  v3 = dword_140404A6C[283831474];
  for ( i = 0; i < 512; ++i )
  {
    if ( *(v1 - 7) )
    {
      v5 = *v1;
      if ( (int)*v1 < 0xFFFF )
        *v1 = --v5;
      if ( v5 <= 0 && (unsigned int)i <= 0x1FF )
      {
        v6 = v1[52];
        if ( v6 > 0 )
        {
          v7 = (int *)(v1 + 53);
          v8 = (unsigned int)v6;
          do
          {
            v9 = *v7++;
            dword_140404A6C[60 * v9 + 73007022] = 0;
            --v8;
          }
          while ( v8 );
        }
        v10 = &dword_140404A6C[280651313];
        do
        {
          if ( *(v10 - 10) && *v10 == i )
            *v10 = -1;
          if ( v10[7156] && v10[7166] == i )
            v10[7166] = -1;
          if ( v10[14322] && v10[14332] == i )
            v10[14332] = -1;
          if ( v10[21488] && v10[21498] == i )
            v10[21498] = -1;
          v10 += 28664;
        }
        while ( (__int64)v10 < (__int64)&dword_140404A6C[282485809] );
        if ( (int)v0 > 0 )
        {
          v11 = &dword_140404A6C[132400639];
          v12 = v0;
          do
          {
            if ( *v11 == i )
              *v11 = -1;
            v11 += 383;
            --v12;
          }
          while ( v12 );
        }
        v13 = v1[3657];
        *(v1 - 7) = 0;
        if ( v13 > 0 )
        {
          v14 = (int *)(v1 + 3658);
          v15 = (unsigned int)v13;
          do
          {
            v16 = *v14;
            if ( (unsigned int)v16 < 0x2000 )
              dword_140404A6C[47 * v16 + 18215709] = 0;
            v14 += 43;
            --v15;
          }
          while ( v15 );
        }
        v17 = (int)v1[3];
        if ( (unsigned int)v17 < 0x2000 )
          dword_140404A6C[47 * v17 + 18215709] = 0;
        v18 = &dword_140404A6C[278845898];
        do
        {
          if ( *(v18 - 5) && *v18 == 27 && v18[155] == i )
          {
            v18[2] = 0;
            v18[155] = -1;
          }
          v18 += 1760;
        }
        while ( (__int64)v18 < (__int64)&dword_140404A6C[280648138] );
        if ( v2 )
        {
          v19 = dword_140404A6C[308307070];
          v20 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v20) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v20) = v3;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v20) = i;
          *(_QWORD *)((char *)&dword_140404A6C[297756294] + v20) = 3;
          if ( v1 == (unsigned int *)-16LL )
          {
            v21 = 0;
            v22 = 0;
            v23 = 0;
          }
          else
          {
            v21 = v1[6];
            v22 = v1[5];
            v23 = v1[4];
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v20) = v23;
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v20) = v22;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v20) = v21;
          dword_140404A6C[308307070] = v19 + 1;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v20) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v20) = 0;
        }
      }
    }
    v1 += 5210;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;

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
  __int64 v58; // [rsp+20h] [rbp-18488h]
  unsigned __int64 v59; // [rsp+28h] [rbp-18480h]
  __int64 v60; // [rsp+30h] [rbp-18478h]
  int v61; // [rsp+38h] [rbp-18470h]
  __int64 v62; // [rsp+40h] [rbp-18468h]
  char *v63; // [rsp+48h] [rbp-18460h]
  float v64[4]; // [rsp+50h] [rbp-18458h] BYREF
  unsigned int v65[4]; // [rsp+60h] [rbp-18448h] BYREF
  float sr_train_track_hit[12];
  int v68[12356]; // [rsp+A0h] [rbp-18408h] BYREF
  __int64 v69; // [rsp+C1B0h] [rbp-C2F8h]

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

// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3528: using guessed type int dword_1402B3528;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EA0: using guessed type unsigned int;

//----- (000000014010C850) ----------------------------------------------------
unsigned int *           sub_14010C850(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  unsigned int *result; // rax
  int v8; // ecx

  v4 = 24944LL * a1;
  v5 = 0;
  v6 = (int)dword_140404A6C[v4 + 346708250];
  if ( (int)v6 <= 0 )
  {
LABEL_8:
    dword_140404A6C[3 * v6 + 346708251 + v4] = a2;
    dword_140404A6C[3 * (int)dword_140404A6C[v4 + 346708250] + 346708252 + v4] = a3;
    result = (unsigned int *)(v4 * 4 + 12LL * (int)dword_140404A6C[v4 + 346708250]);
    *(unsigned int *)((char *)&dword_140404A6C[346708253] + (_QWORD)result) = a4;
    ++dword_140404A6C[v4 + 346708250];
  }
  else
  {
    result = &dword_140404A6C[v4 + 346708253];
    while ( 1 )
    {
      v8 = *(result - 1);
      if ( a3 == v8 && a4 == *result )
        break;
      if ( a3 == *result && a4 == v8 )
        break;
      ++v5;
      result += 3;
      if ( v5 >= (int)v6 )
        goto LABEL_8;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010C900) ----------------------------------------------------
__int64            sub_14010C900(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 result; // rax

  v8 = 24944LL * a1;
  v9 = 1559LL * a1;
  dword_140404A6C[16 * v9 + 346709020 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a2;
  dword_140404A6C[16 * v9 + 346709021 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a3;
  dword_140404A6C[16 * v9 + 346709022 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a4;
  dword_140404A6C[16 * v9 + 346709023 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a5;
  dword_140404A6C[16 * v9 + 346709024 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a6;
  dword_140404A6C[16 * v9 + 346709025 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709026 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709027 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709028 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709033 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a7;
  result = (v9 + (int)dword_140404A6C[v8 + 346709019]) << 6;
  *(unsigned int *)((char *)&dword_140404A6C[346709034] + result) = a8;
  ++dword_140404A6C[v8 + 346709019];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010CAC0) ----------------------------------------------------
__int64            sub_14010CAC0(
        int a1,
        unsigned int a2,
        signed int a3,
        unsigned int a4,
        float *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        float a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v12; // r11
  __int64 v13; // r8
  float v14; // xmm4_4
  float v15; // xmm2_4
  float *v16; // rdx
  float v17; // xmm5_4
  __int64 v18; // rcx
  float v19; // xmm6_4
  __int64 result; // rax

  v12 = 24944LL * a1;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731812 + v12] = a2;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731813 + v12] = a3;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731814 + v12] = a4;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731815 + v12] = *(_DWORD *)a5;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731816 + v12] = *((_DWORD *)a5 + 1);
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731818 + v12] = a6;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731817 + v12] = a7;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731819 + v12] = a8;
  *(float *)&dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731823 + v12] = a9;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731824 + v12] = a10;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731825 + v12] = a11;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731826 + v12] = a12;
  v13 = v12 * 4 + 20LL * a3;
  v14 = a5[1];
  v15 = *(float *)((char *)&dword_140404A6C[346707736] + v13);
  v16 = (float *)&dword_140404A6C[5 * (int)a4 + 346707735 + v12];
  v17 = v16[1];
  v18 = v12 * 4 + 80LL * (int)dword_140404A6C[v12 + 346731811];
  v19 = (float)(v16[2] - *(float *)((char *)&dword_140404A6C[346707737] + v13)) * v14;
  *(float *)((char *)&dword_140404A6C[346731820] + v18) = (float)((float)(*v16
                                                                        - *(float *)((char *)&dword_140404A6C[346707735]
                                                                                   + v13))
                                                                * v14)
                                                        + *(float *)((char *)&dword_140404A6C[346707735] + v13);
  *(float *)((char *)&dword_140404A6C[346731821] + v18) = (float)((float)(v17 - v15) * v14)
                                                        + *(float *)((char *)&dword_140404A6C[346707736] + v13);
  *(float *)((char *)&dword_140404A6C[346731822] + v18) = v19 + *(float *)((char *)&dword_140404A6C[346707737] + v13);
  result = (int)dword_140404A6C[v12 + 346731811];
  *(float *)&dword_140404A6C[20 * result + 346731821 + v12] = a9
                                                            + *(float *)&dword_140404A6C[20 * result + 346731821 + v12];
  ++dword_140404A6C[v12 + 346731811];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  float v42; // [rsp+B0h] [rbp+8h]
  float v43; // [rsp+C0h] [rbp+18h]

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

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EA0: using guessed type unsigned int;

//----- (000000014010D610) ----------------------------------------------------
void sub_14010D610()
{
  __int64 v0; // rsi
  __int64 v1; // r12
  unsigned int *v2; // rcx
  int v3; // edx
  int v4; // r8d
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r15
  float *v8; // r14
  float v9; // xmm15_4
  __int64 v10; // rcx
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 v13; // rbx
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm1_4
  float v25; // xmm14_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  float v30; // xmm5_4
  float v31; // xmm9_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm15_4
  float v36; // xmm3_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm10_4
  float v47; // xmm12_4
  float v48; // xmm11_4
  double v49; // xmm2_8
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm10_4
  float v61; // [rsp+20h] [rbp-128h]
  float v62; // [rsp+28h] [rbp-120h]
  float v63; // [rsp+2Ch] [rbp-11Ch]
  float v64; // [rsp+30h] [rbp-118h] BYREF
  float v65; // [rsp+34h] [rbp-114h]
  float v66; // [rsp+38h] [rbp-110h]
  float v67; // [rsp+150h] [rbp+8h]
  float v68; // [rsp+150h] [rbp+8h]
  float v69; // [rsp+158h] [rbp+10h]
  float v70; // [rsp+158h] [rbp+10h]
  float v71; // [rsp+160h] [rbp+18h]
  float v72; // [rsp+160h] [rbp+18h]
  float v73; // [rsp+168h] [rbp+20h]

  v0 = 0;
  v1 = 512;
  do
  {
    if ( dword_140404A6C[v0 + 129716709] )
    {
      if ( dword_140404A6C[v0 + 129716710] != 12 && (int)dword_140404A6C[v0 + 129720373] > 0 )
      {
        dword_140404A6C[v0 + 129720330] = 0;
        v2 = &dword_140404A6C[v0 + 129720397];
        v3 = 0;
        do
        {
          *(v2 - 8) = 0;
          ++v3;
          *(v2 - 1) = v2[2];
          *v2 = v2[3];
          v2[1] = v2[4];
          v2 += 43;
          v4 = dword_140404A6C[v0 + 129720373];
        }
        while ( v3 < v4 );
        v5 = 0;
        if ( v4 > 0 )
        {
          v6 = 47LL * (int)dword_140404A6C[v0 + 129716719];
          v7 = (unsigned int)v4;
          v8 = (float *)&dword_140404A6C[v6 + 18215727];
          while ( 1 )
          {
            v9 = v8[2];
            v69 = *(float *)&dword_140404A6C[v6 + 18215714];
            v71 = *(float *)&dword_140404A6C[v6 + 18215737];
            v61 = v8[1];
            v10 = v0 * 4 + 172 * v5;
            v11 = *(float *)((char *)&dword_140404A6C[129720385] + v10);
            v12 = *(float *)((char *)&dword_140404A6C[129720403] + v10)
                + *(float *)((char *)&dword_140404A6C[129720384] + v10);
            v13 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v10);
            v14 = *(float *)&dword_140404A6C[v13 + 18215715];
            v15 = *(float *)&dword_140404A6C[v13 + 18215714];
            v16 = *(float *)&dword_140404A6C[v13 + 18215717];
            v67 = *(float *)&dword_140404A6C[v13 + 18215716];
            v17 = *(float *)((char *)&dword_140404A6C[129720383] + v10);
            v18 = *(float *)&dword_140404A6C[v6 + 18215738];
            v19 = (float)((float)(*v8 * v12) + (float)(v17 * *(float *)&dword_140404A6C[v6 + 18215724]))
                + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215730]);
            v20 = (float)((float)(v17 * *(float *)&dword_140404A6C[v6 + 18215725]) + (float)(v61 * v12))
                + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215731]);
            v21 = (float)(v17 * *(float *)&dword_140404A6C[v6 + 18215726]) + (float)(v9 * v12);
            v22 = *(float *)((char *)&dword_140404A6C[129720404] + v10);
            v23 = v21 + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215732]);
            v24 = *(float *)((char *)&dword_140404A6C[129720405] + v10);
            v25 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215715] + v19) - v14) * v22;
            v63 = v14 - *(float *)&dword_140404A6C[v6 + 18215715];
            v26 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215716] + v20) - v67) * v22;
            v27 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215717] + v23) - v16) * v22;
            v62 = v16 - *(float *)&dword_140404A6C[v6 + 18215717];
            v68 = v67 - *(float *)&dword_140404A6C[v6 + 18215716];
            v28 = *(float *)&dword_140404A6C[v6 + 18215736];
            v29 = (float)((float)((float)((float)(v18 * v20) - (float)(v71 * v23))
                                + *(float *)&dword_140404A6C[v6 + 18215718])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215718]);
            v30 = v27
                + (float)((float)((float)((float)((float)(v71 * v19) - (float)(v28 * v20))
                                        + *(float *)&dword_140404A6C[v6 + 18215720])
                                * v24)
                        + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215720]));
            v72 = (float)((float)((float)((float)(v71 * v19) - (float)(v28 * v20))
                                + *(float *)&dword_140404A6C[v6 + 18215720])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215720]);
            v31 = (float)((float)((float)((float)(v28 * v23) - (float)(v18 * v19))
                                + *(float *)&dword_140404A6C[v6 + 18215719])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215719]);
            v32 = -(float)((float)((float)(v61 * (float)(v26 + v31)) + (float)(*v8 * (float)(v29 + v25)))
                         + (float)(v9 * v30));
            v33 = *v8 * v32;
            v34 = v61 * v32;
            v35 = (float)(v9 * v32) + v30;
            v36 = 1.0 / (float)(v69 + v15);
            v37 = v33 + (float)(v29 + v25);
            v38 = v34 + (float)(v26 + v31);
            v70 = v69 * v36;
            v73 = -(float)(v36 * v15);
            *(float *)&dword_140404A6C[v13 + 18215721] = (float)(v70 * v37) + *(float *)&dword_140404A6C[v13 + 18215721];
            *(float *)&dword_140404A6C[v13 + 18215722] = (float)(v70 * v38) + *(float *)&dword_140404A6C[v13 + 18215722];
            *(float *)&dword_140404A6C[v13 + 18215723] = (float)(v35 * v70) + *(float *)&dword_140404A6C[v13 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215721] = (float)(v37 * v73) + *(float *)&dword_140404A6C[v6 + 18215721];
            *(float *)&dword_140404A6C[v6 + 18215722] = (float)(v38 * v73) + *(float *)&dword_140404A6C[v6 + 18215722];
            *(float *)&dword_140404A6C[v6 + 18215723] = (float)(v35 * v73) + *(float *)&dword_140404A6C[v6 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)((float)((float)(v62 * v38) - (float)(v68 * v35)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215739];
            v39 = *(float *)((char *)&dword_140404A6C[129720406] + v10);
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)((float)((float)(v63 * v35) - (float)(v37 * v62)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)((float)((float)(v37 * v68) - (float)(v38 * v63)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215741];
            v40 = v8[2];
            v41 = v8[1];
            v42 = (float)((float)((float)((float)((float)(v39 * 0.375) * v31) + (float)(v26 * (float)(v39 * 0.09375)))
                                * v41)
                        + (float)((float)((float)(v29 * (float)(v39 * 0.375)) + (float)(v25 * (float)(v39 * 0.09375)))
                                * *v8))
                + (float)((float)((float)((float)(v39 * 0.375) * v72) + (float)(v27 * (float)(v39 * 0.09375))) * v40);
            v43 = v40 * v42;
            v44 = *v8 * v42;
            v45 = v41 * v42;
            *(float *)&dword_140404A6C[v13 + 18215721] = (float)(v70 * v44) + *(float *)&dword_140404A6C[v13 + 18215721];
            *(float *)&dword_140404A6C[v13 + 18215722] = (float)(v70 * v45) + *(float *)&dword_140404A6C[v13 + 18215722];
            *(float *)&dword_140404A6C[v13 + 18215723] = (float)(v70 * v43) + *(float *)&dword_140404A6C[v13 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215721] = (float)(v73 * v44) + *(float *)&dword_140404A6C[v6 + 18215721];
            *(float *)&dword_140404A6C[v6 + 18215722] = (float)(v73 * v45) + *(float *)&dword_140404A6C[v6 + 18215722];
            *(float *)&dword_140404A6C[v6 + 18215723] = (float)(v43 * v73) + *(float *)&dword_140404A6C[v6 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)((float)((float)(v62 * v45) - (float)(v43 * v68)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215739];
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)((float)((float)(v43 * v63) - (float)(v62 * v44)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)((float)((float)(v68 * v44) - (float)(v63 * v45)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215741];
            v46 = *(float *)&dword_140404A6C[v6 + 18215724];
            v47 = *(float *)&dword_140404A6C[v6 + 18215725];
            v48 = *(float *)&dword_140404A6C[v6 + 18215726];
            v64 = v46;
            v65 = v47;
            v66 = v48;
            if ( !v5 )
              break;
            if ( v5 == 1 )
            {
              *(_QWORD *)&v49 = dword_140404A6C[v0 + 129720435];
              goto LABEL_13;
            }
LABEL_14:
            v50 = *(float *)&dword_140404A6C[v6 + 18215736] - *(float *)&dword_140404A6C[v13 + 18215736];
            v51 = *(float *)&dword_140404A6C[v6 + 18215737] - *(float *)&dword_140404A6C[v13 + 18215737];
            v52 = *(float *)&dword_140404A6C[v13 + 18215726];
            v53 = *(float *)&dword_140404A6C[v13 + 18215725];
            ++v5;
            v54 = *(float *)&dword_140404A6C[v13 + 18215724];
            v55 = *(float *)&dword_140404A6C[v6 + 18215738] - *(float *)&dword_140404A6C[v13 + 18215738];
            v56 = *(float *)&dword_140404A6C[v13 + 18215748];
            v57 = -(float)((float)((float)(v47 * v51) + (float)(v46 * v50)) + (float)(v48 * v55));
            v58 = (float)((float)((float)((float)(v47 * v52) - (float)(v48 * v53)) * 0.25)
                        + (float)((float)((float)(v46 * v57) + v50) * 0.5))
                * v56;
            v59 = (float)((float)((float)((float)(v48 * v54) - (float)(v46 * v52)) * 0.25)
                        + (float)((float)((float)(v47 * v57) + v51) * 0.5))
                * v56;
            v60 = (float)((float)((float)((float)(v46 * v53) - (float)(v47 * v54)) * 0.25)
                        + (float)((float)((float)(v48 * v57) + v55) * 0.5))
                * v56;
            *(float *)&dword_140404A6C[v13 + 18215739] = (float)(v58 * v70) + *(float *)&dword_140404A6C[v13 + 18215739];
            *(float *)&dword_140404A6C[v13 + 18215740] = (float)(v59 * v70) + *(float *)&dword_140404A6C[v13 + 18215740];
            *(float *)&dword_140404A6C[v13 + 18215741] = (float)(v60 * v70) + *(float *)&dword_140404A6C[v13 + 18215741];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)(v58 * v73) + *(float *)&dword_140404A6C[v6 + 18215739];
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)(v59 * v73) + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)(v60 * v73) + *(float *)&dword_140404A6C[v6 + 18215741];
            if ( !--v7 )
              goto LABEL_15;
          }
          *(_QWORD *)&v49 = dword_140404A6C[v0 + 129720392];
LABEL_13:
          sub_14007B4D0(&v64, v8, v49);
          v46 = v64;
          v47 = v65;
          v48 = v66;
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    v0 += 5210;
    --v1;
  }
  while ( v1 );
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __m128 v2; // xmm1
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  double v6; // xmm1_8
  float v7; // xmm0_4
  double v8; // xmm3_8
  float v9; // xmm0_4
  float v10; // xmm0_4
  double v11; // xmm1_8
  float v12; // xmm4_4
  double v13; // xmm3_8
  double v14; // xmm1_8
  float v15; // xmm0_4
  float v16; // xmm0_4
  double v17; // xmm1_8
  float v18; // xmm5_4
  double v19; // xmm4_8
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  double v23; // xmm1_8
  float v24; // xmm4_4
  double v25; // xmm3_8
  float v26; // xmm0_4
  float v27; // xmm0_4

  v2 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)a2)));
  v3 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 4))));
  v5 = v2;
  v4 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 8))));
  SR_VEC_LANES(128, v5, f32)[0] = (float)(SR_VEC_LANES(128, v2, f32)[0] + SR_VEC_LANES(128, v3, f32)[0]) + SR_VEC_LANES(128, v4, f32)[0];
  if ( SR_VEC_LANES(128, v5, f32)[0] < 0.0 )
  {
    if ( SR_VEC_LANES(128, v2, f32)[0] <= SR_VEC_LANES(128, v3, f32)[0] || SR_VEC_LANES(128, v2, f32)[0] <= SR_VEC_LANES(128, v4, f32)[0] )
    {
      if ( SR_VEC_LANES(128, v3, f32)[0] <= SR_VEC_LANES(128, v4, f32)[0] )
      {
        SR_VEC_LANES(128, v4, f32)[0] = fmaxf((float)(SR_VEC_LANES(128, v4, f32)[0] - SR_VEC_LANES(128, v2, f32)[0]) - SR_VEC_LANES(128, v3, f32)[0], -1.0) + 1.0;
        v23 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v4)), f64)[0];
        v24 = v23 + v23;
        if ( v24 <= 0.000015258789 )
          v25 = 0.0;
        else
          v25 = (float)(1.0 / v24);
        v26 = (float)(a2[3] - a2[1]) * v25;
        a1[3] = v26;
        v27 = (float)(a2[6] + a2[2]) * v25;
        *a1 = v27;
        a1[1] = (float)(a2[7] + a2[5]) * v25;
        a1[2] = v24 * 0.25;
      }
      else
      {
        SR_VEC_LANES(128, v3, f32)[0] = fmaxf((float)(SR_VEC_LANES(128, v3, f32)[0] - SR_VEC_LANES(128, v2, f32)[0]) - SR_VEC_LANES(128, v4, f32)[0], -1.0) + 1.0;
        v17 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v3)), f64)[0];
        v18 = v17 + v17;
        if ( v18 <= 0.000015258789 )
          v19 = 0.0;
        else
          v19 = (float)(1.0 / v18);
        v20 = (float)(a2[2] - a2[6]) * v19;
        a1[3] = v20;
        v21 = a2[3] + a2[1];
        a1[1] = v18 * 0.25;
        v22 = v21 * v19;
        *a1 = v22;
        a1[2] = (float)(a2[7] + a2[5]) * v19;
      }
    }
    else
    {
      SR_VEC_LANES(128, v2, f32)[0] = fmaxf((float)(SR_VEC_LANES(128, v2, f32)[0] - SR_VEC_LANES(128, v3, f32)[0]) - SR_VEC_LANES(128, v4, f32)[0], -1.0) + 1.0;
      v11 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v2)), f64)[0];
      v12 = v11 + v11;
      if ( v12 <= 0.000015258789 )
        v13 = 0.0;
      else
        v13 = (float)(1.0 / v12);
      v14 = (float)(a2[7] - a2[5]);
      *a1 = v12 * 0.25;
      v15 = v14 * v13;
      a1[3] = v15;
      v16 = (float)(a2[3] + a2[1]) * v13;
      a1[1] = v16;
      a1[2] = (float)(a2[6] + a2[2]) * v13;
    }
  }
  else
  {
    SR_VEC_LANES(128, v5, f32)[0] = SR_VEC_LANES(128, v5, f32)[0] + 1.0;
    v6 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v5)), f64)[0];
    v7 = v6 + v6;
    if ( v7 <= 0.000015258789 )
      v8 = 0.0;
    else
      v8 = (float)(1.0 / v7);
    a1[3] = v7 * 0.25;
    v9 = (float)(a2[7] - a2[5]) * v8;
    *a1 = v9;
    v10 = (float)(a2[2] - a2[6]) * v8;
    a1[1] = v10;
    a1[2] = (float)(a2[3] - a2[1]) * v8;
  }
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
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp+18h] BYREF

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;

//----- (000000014010EC30) ----------------------------------------------------
__int64            sub_14010EC30(int a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  signed int v7; // r8d
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned int *v14; // rcx
  signed int v15; // edx

  v3 = a3;
  v4 = a2;
  v5 = &dword_140404A6C[47224 * a1 + 438889303 + 5 * a3];
  sub_140115D90(v5, 8);
  v6 = 36 * v3;
  v7 = dword_140404A6C[456202728] - *v5;
  v8 = (unsigned __int8)*v5;
  v9 = 0;
  if ( v7 >= 192 )
    v8 = 0;
  LOBYTE(v9) = v7 < 192;
  v10 = v6 + 318464 * v8;
  v11 = v6 + 318464 * v4;
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v10),
    v9,
    28);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v10),
    v9,
    28);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v10),
    v9,
    28);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[137358018] + v11), 2);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358019] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v10),
    v9,
    14);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358020] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v10),
    v9,
    14);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358021] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v10),
    v9,
    14);
  v12 = 1760 * v3;
  result = dword_140404A6C[1760 * v3 + 278845898];
  switch ( (_DWORD)result )
  {
    case 0x12:
      sub_140115D90(&dword_140404A6C[v12 + 278846062], 4);
      sub_140115D90(&dword_140404A6C[v12 + 278846061], 4);
      v14 = &dword_140404A6C[278846063];
      v15 = 30;
      break;
    case 0x1A:
      v14 = &dword_140404A6C[278846112];
      v15 = 1;
      break;
    case 0x27:
      v14 = &dword_140404A6C[278846113];
      v15 = 12;
      break;
    default:
      return result;
  }
  return sub_140115D90(&v14[v12], v15);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010EE20) ----------------------------------------------------
__int64            sub_14010EE20(int a1)
{
  __int64 v1; // rbx

  v1 = 7166LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 280651305], 8);
  sub_140115D90(&dword_140404A6C[v1 + 280658439], 1);
  sub_140115D90(&dword_140404A6C[v1 + 280658440], 5);
  sub_140115D90(&dword_140404A6C[v1 + 280658441], 3);
  sub_140115D90(&dword_140404A6C[v1 + 280658443], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658444], 3);
  sub_140115D90(&dword_140404A6C[v1 + 280658442], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658445], 5);
  sub_140115D90(&dword_140404A6C[v1 + 280658446], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658447], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658449], 4);
  return sub_140115D90(&dword_140404A6C[v1 + 280658450], 2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v104; // [rsp+0h] [rbp-E8h] BYREF
  _DWORD *v105; // [rsp+20h] [rbp-C8h]
  int v106; // [rsp+28h] [rbp-C0h] BYREF
  char *v107; // [rsp+30h] [rbp-B8h]
  char *v108; // [rsp+38h] [rbp-B0h]
  int v109; // [rsp+40h] [rbp-A8h]
  unsigned int *v110; // [rsp+48h] [rbp-A0h]
  unsigned int *v111; // [rsp+50h] [rbp-98h]
  char *v112; // [rsp+58h] [rbp-90h]
  _DWORD *v113; // [rsp+60h] [rbp-88h]
  __int64 v114; // [rsp+68h] [rbp-80h]
  _DWORD *v115; // [rsp+70h] [rbp-78h]
  unsigned __int64 v116; // [rsp+78h] [rbp-70h] BYREF
  float v117; // [rsp+80h] [rbp-68h]
  __int64 v118; // [rsp+88h] [rbp-60h]

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

// 14010F501: conditional instruction was optimized away because edx.4==2
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (00000001401107F0) ----------------------------------------------------
char            sub_1401107F0(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int *v5; // rbx
  signed int v6; // r13d
  unsigned int v7; // esi
  signed int v8; // eax
  signed int v9; // r8d
  char v10; // r10
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  char v17; // r8
  __int64 v18; // r15
  signed int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  int v25; // eax
  signed int v26; // r9d
  unsigned int v27; // r10d
  unsigned int v28; // ecx
  signed int v29; // r9d
  unsigned int v30; // r10d
  unsigned int v31; // ecx

  v3 = a3;
  v4 = a2;
  v5 = &dword_140404A6C[47224 * a1 + 438888535 + 3 * a3];
  sub_140115D90(v5, 8);
  v6 = dword_140404A6C[456202728] - *v5;
  v7 = (unsigned __int8)*v5;
  if ( v6 >= 192 )
    v7 = 0;
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280651313], 8);
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280651314], 4);
  v8 = dword_140404A6C[289301092];
  v9 = 1;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v10 = dword_140404A6C[289301093];
    v11 = (int)dword_140404A6C[7166 * v3 + 280651318] > 0;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v8) &= ~(((1 << v9) - 1) << v10);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v11 << SLOBYTE(dword_140404A6C[289301093]);
      v12 = 8 - dword_140404A6C[289301093];
      if ( v9 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v9 == v12 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_11;
      }
      v9 -= v12;
      v8 = dword_140404A6C[289301092] + 1;
      v11 >>= v12;
      ++dword_140404A6C[289301092];
      v10 = 0;
      if ( v9 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289301093] += v9;
  }
LABEL_11:
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280658301], 1);
  v13 = v7;
  v14 = 318464LL * v7;
  v15 = 318464 * v4 + 484 * v3;
  v16 = 484 * v3 + v14;
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297855] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297855] + v16),
    v6 < 192,
    28);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297856] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297856] + v16),
    v6 < 192,
    28);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297857] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297857] + v16),
    v6 < 192,
    28);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[137297858] + v15), 2);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297859] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297859] + v16),
    v6 < 192,
    14);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297860] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297860] + v16),
    v6 < 192,
    14);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297861] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297861] + v16),
    v6 < 192,
    14);
  v17 = dword_140404A6C[289301093];
  v18 = 318464 * v4 + 16;
  v19 = dword_140404A6C[289301092];
  v20 = v13 - v4;
  v21 = 484 * v3;
  v22 = (unsigned int *)((char *)&dword_140404A6C[137297914] + v15);
  v23 = 79616 * v20;
  v24 = 15;
  do
  {
    if ( v6 < 192
      && *v22 == v22[v23]
      && v22[1] == v22[v23 + 1]
      && v22[2] == v22[v23 + 2]
      && (v25 = v22[v23 + 3], v22[3] == v25) )
    {
      v26 = 1;
      if ( v19 < 0x10000 )
      {
        v27 = 0;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v19) &= ~(((1 << v26) - 1) << v17);
          LOBYTE(v25) = (_BYTE)v27 << SLOBYTE(dword_140404A6C[289301093]);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v27 << SLOBYTE(dword_140404A6C[289301093]);
          v28 = 8 - dword_140404A6C[289301093];
          v19 = dword_140404A6C[289301092];
          if ( v26 < 8 - dword_140404A6C[289301093] )
            break;
          v17 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v26 == v28 )
          {
            v19 = ++dword_140404A6C[289301092];
            goto LABEL_34;
          }
          v19 = dword_140404A6C[289301092] + 1;
          v27 >>= v28;
          v26 -= v28;
          ++dword_140404A6C[289301092];
          if ( v26 <= 0 )
            goto LABEL_34;
        }
        v17 = v26 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v26;
      }
    }
    else
    {
      v29 = 1;
      if ( v19 < 0x10000 )
      {
        v30 = 1;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v19) &= ~(((1 << v29) - 1) << v17);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
          v31 = 8 - dword_140404A6C[289301093];
          if ( v29 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v29 == v31 )
          {
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            goto LABEL_33;
          }
          v17 = 0;
          v19 = dword_140404A6C[289301092] + 1;
          v30 >>= v31;
          v29 -= v31;
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          if ( v29 <= 0 )
            goto LABEL_33;
        }
        dword_140404A6C[289301093] += v29;
      }
LABEL_33:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[137297910] + v18 + v21), 2);
      sub_14010E9B0((unsigned int *)((char *)&dword_140404A6C[137297911] + v18 + v21), v22[v23 + 1], v6 < 192, 12);
      sub_14010E9B0((unsigned int *)((char *)&dword_140404A6C[137297912] + v18 + v21), v22[v23 + 2], v6 < 192, 12);
      LOBYTE(v25) = sub_14010E9B0(
                      (unsigned int *)((char *)&dword_140404A6C[137297913] + v18 + v21),
                      v22[v23 + 3],
                      v6 < 192,
                      12);
      v17 = dword_140404A6C[289301093];
      v19 = dword_140404A6C[289301092];
    }
LABEL_34:
    v18 += 16;
    v22 += 4;
    --v24;
  }
  while ( v24 );
  return v25;
}

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
  int v311; // [rsp+50h] [rbp-148h]
  int v312; // [rsp+50h] [rbp-148h]
  __int64 v313; // [rsp+50h] [rbp-148h]
  unsigned int v314; // [rsp+58h] [rbp-140h]
  unsigned int v315; // [rsp+5Ch] [rbp-13Ch]
  signed int v316; // [rsp+5Ch] [rbp-13Ch]
  signed int v317; // [rsp+5Ch] [rbp-13Ch]
  unsigned int *v318; // [rsp+60h] [rbp-138h]
  unsigned int *v319; // [rsp+60h] [rbp-138h]
  __int64 v320; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v321; // [rsp+70h] [rbp-128h]
  __int64 v322; // [rsp+78h] [rbp-120h]
  __int64 v323; // [rsp+80h] [rbp-118h]
  __int64 v324; // [rsp+88h] [rbp-110h]
  unsigned int *v325; // [rsp+90h] [rbp-108h]
  unsigned int *v326; // [rsp+98h] [rbp-100h]
  __int64 v327; // [rsp+A0h] [rbp-F8h]
  __int64 v328; // [rsp+A8h] [rbp-F0h]
  unsigned int *v329; // [rsp+B0h] [rbp-E8h]
  __int64 v330; // [rsp+B8h] [rbp-E0h]

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

//----- (0000000140114330) ----------------------------------------------------
double            sub_140114330(float *a1, signed int a2)
{
  int v2; // r8d
  bool v5; // cc
  __int64 v6; // rax
  double result; // xmm0_8
  int v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // rcx
  __int128 v11; // xmm5
  int v12; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // rax
  __int128 v15; // xmm12
  __int128 v16; // xmm13
  __int128 v17; // xmm14
  int v18; // ecx
  int v19; // edx
  float v20; // xmm3_4
  float v21; // xmm4_4
  __int128 v22; // xmm15
  float v23; // xmm14_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  __int128 v26; // xmm9
  __int128 v27; // xmm10
  __int128 v28; // xmm11
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm5_4
  float v37; // xmm7_4
  float v38; // xmm1_4
  float v39; // xmm4_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm7_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // [rsp+20h] [rbp-C8h]
  float v49; // [rsp+24h] [rbp-C4h]
  unsigned int v50; // [rsp+28h] [rbp-C0h]
  int v51; // [rsp+2Ch] [rbp-BCh]
  float v52; // [rsp+30h] [rbp-B8h]
  unsigned int v53; // [rsp+34h] [rbp-B4h]
  unsigned int v54; // [rsp+38h] [rbp-B0h]
  unsigned int v55; // [rsp+3Ch] [rbp-ACh]
  float v56; // [rsp+F0h] [rbp+8h]
  int v57; // [rsp+F8h] [rbp+10h] BYREF
  float v58; // [rsp+100h] [rbp+18h]
  unsigned int v59; // [rsp+108h] [rbp+20h]

  v2 = 0;
  v5 = *a1 >= 0.0;
  v57 = 0;
  v6 = 0;
  if ( !v5 )
  {
    v2 = 1;
    v57 = 1;
    v6 = 1;
  }
  if ( a1[2] < 0.0 )
  {
    v2 = v6 | 2;
    v57 = v6 | 2;
    v6 = (unsigned int)v6 | 2;
  }
  if ( a1[1] < 0.0 )
  {
    v2 = v6 | 4;
    v57 = v6 | 4;
    v6 = (unsigned int)v6 | 4;
  }
  *(_QWORD *)&result = (unsigned int)dword_1402B2610[3 * dword_1402B2660[3 * v6]];
  v8 = dword_1402B2614[3 * dword_1402B2660[3 * v6]];
  v9 = dword_1402B2618[3 * dword_1402B2660[3 * v6]];
  v10 = 3LL * dword_1402B2664[3 * v6];
  v59 = LODWORD(result);
  v11 = (unsigned int)dword_1402B2610[v10];
  v12 = dword_1402B2614[v10];
  v13 = dword_1402B2618[v10];
  v14 = dword_1402B2668[3 * v6];
  dword_140404A6C[349900629] = LODWORD(result);
  v48 = *(float *)&v8;
  dword_140404A6C[349900630] = v8;
  v49 = v9;
  v15 = (unsigned int)dword_1402B2610[3 * v14];
  v16 = (unsigned int)dword_1402B2614[3 * v14];
  v17 = LODWORD(dword_1402B2618[3 * v14]);
  v18 = 3;
  *(float *)&dword_140404A6C[349900631] = v9;
  v50 = v11;
  dword_140404A6C[349900632] = v11;
  v51 = v12;
  dword_140404A6C[349900633] = v12;
  v52 = v13;
  *(float *)&dword_140404A6C[349900634] = v13;
  v53 = v15;
  dword_140404A6C[349900635] = v15;
  v54 = v16;
  dword_140404A6C[349900636] = v16;
  v55 = v17;
  dword_140404A6C[349900637] = v17;
  if ( a2 > 3 )
  {
    v19 = 8;
    while ( 1 )
    {
      v22 = v11;
      v20 = *(float *)&v12 + *(float *)&v8;
      v21 = v13 + v9;
      v26 = v15;
      *(float *)&v22 = *(float *)&v11 + *(float *)&result;
      v28 = v17;
      v23 = *(float *)&v17 + v9;
      v27 = v16;
      v24 = *(float *)&v15 + *(float *)&result;
      v25 = *(float *)&v16 + *(float *)&v8;
      *(float *)&v26 = *(float *)&v26 + *(float *)&v11;
      *(float *)&v27 = *(float *)&v27 + *(float *)&v12;
      *(float *)&v28 = *(float *)&v28 + v13;
      v29 = fsqrt((float)((float)(v20 * v20) + (float)(*(float *)&v22 * *(float *)&v22)) + (float)(v21 * v21));
      if ( v29 == 0.0 )
      {
        *(_QWORD *)&dword_140404A6C[349900638] = 0;
        v22 = 0;
        dword_140404A6C[349900640] = 0;
        v30 = 0.0;
        v31 = 0.0;
      }
      else
      {
        *(float *)&v22 = *(float *)&v22 * (float)(1.0 / v29);
        v30 = v20 * (float)(1.0 / v29);
        v31 = v21 * (float)(1.0 / v29);
        dword_140404A6C[349900638] = v22;
        *(float *)&dword_140404A6C[349900639] = v30;
        *(float *)&dword_140404A6C[349900640] = v31;
      }
      v58 = v31;
      v56 = v30;
      v32 = fsqrt(
              (float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(*(float *)&v26 * *(float *)&v26))
            + (float)(*(float *)&v28 * *(float *)&v28));
      if ( v32 == 0.0 )
      {
        *(_QWORD *)&dword_140404A6C[349900641] = 0;
        v26 = 0;
        dword_140404A6C[349900643] = 0;
        v27 = 0;
        v28 = 0;
      }
      else
      {
        *(float *)&v26 = *(float *)&v26 * (float)(1.0 / v32);
        *(float *)&v27 = *(float *)&v27 * (float)(1.0 / v32);
        *(float *)&v28 = *(float *)&v28 * (float)(1.0 / v32);
        dword_140404A6C[349900641] = v26;
        dword_140404A6C[349900642] = v27;
        dword_140404A6C[349900643] = v28;
      }
      v33 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v23 * v23));
      if ( v33 == 0.0 )
      {
        *(_QWORD *)&dword_140404A6C[349900644] = 0;
        v15 = 0;
        dword_140404A6C[349900646] = 0;
        v16 = 0;
        v17 = 0;
      }
      else
      {
        *(float *)&v15 = v24 * (float)(1.0 / v33);
        *(float *)&v16 = v25 * (float)(1.0 / v33);
        *(float *)&v17 = v23 * (float)(1.0 / v33);
        dword_140404A6C[349900644] = v15;
        dword_140404A6C[349900645] = v16;
        dword_140404A6C[349900646] = v17;
      }
      v34 = v30 - *(float *)&v16;
      v35 = a1[2] - *(float *)&v17;
      v36 = a1[1] - *(float *)&v16;
      v37 = *a1 - *(float *)&v15;
      v38 = v31 - *(float *)&v17;
      v39 = v34 * v35;
      v40 = (float)(*(float *)&v22 - *(float *)&v15) * v35;
      v41 = a1[1];
      v42 = (float)((float)(v39 - (float)(v38 * v36)) * *a1) + (float)((float)((float)(v38 * v37) - v40) * v41);
      v43 = a1[2];
      if ( (float)(v42
                 + (float)((float)((float)((float)(*(float *)&v22 - *(float *)&v15) * v36) - (float)(v34 * v37)) * v43)) > 0.0 )
        break;
      v44 = a1[1];
      if ( (float)((float)((float)((float)((float)((float)(*(float *)&v27 - v56) * (float)(v43 - v58))
                                         - (float)((float)(*(float *)&v28 - v58) * (float)(v41 - v56)))
                                 * *a1)
                         + (float)((float)((float)((float)(*(float *)&v28 - v58) * (float)(*a1 - *(float *)&v22))
                                         - (float)((float)(*(float *)&v26 - *(float *)&v22) * (float)(v43 - v58)))
                                 * v44))
                 + (float)((float)((float)((float)(*(float *)&v26 - *(float *)&v22) * (float)(v41 - v56))
                                 - (float)((float)(*(float *)&v27 - v56) * (float)(*a1 - *(float *)&v22)))
                         * a1[2])) <= 0.0 )
      {
        v45 = *a1 - *(float *)&v26;
        v46 = (float)(*(float *)&v17 - *(float *)&v28) * v45;
        v47 = (float)(*(float *)&v16 - *(float *)&v27) * v45;
        v13 = *(float *)&v28;
        v11 = v26;
        v12 = v27;
        if ( (float)((float)((float)((float)((float)((float)(*(float *)&v16 - *(float *)&v27)
                                                   * (float)(a1[2] - *(float *)&v28))
                                           - (float)((float)(*(float *)&v17 - *(float *)&v28)
                                                   * (float)(v44 - *(float *)&v27)))
                                   * *a1)
                           + (float)((float)(v46
                                           - (float)((float)(*(float *)&v15 - *(float *)&v26)
                                                   * (float)(a1[2] - *(float *)&v28)))
                                   * a1[1]))
                   + (float)((float)((float)((float)(*(float *)&v15 - *(float *)&v26) * (float)(v44 - *(float *)&v27))
                                   - v47)
                           * a1[2])) > 0.0 )
        {
          result = *(double *)&v15;
          v8 = v16;
          v15 = v53;
          v9 = *(float *)&v17;
          v16 = v54;
          v17 = v55;
          v2 |= 2 << v18;
          v59 = LODWORD(result);
          v57 = v2;
          dword_140404A6C[349900629] = LODWORD(result);
          v48 = *(float *)&v8;
          dword_140404A6C[349900630] = v8;
          v49 = v9;
          *(float *)&dword_140404A6C[349900631] = v9;
LABEL_26:
          v50 = v11;
          dword_140404A6C[349900632] = v11;
          v51 = v12;
          dword_140404A6C[349900633] = v12;
          v52 = v13;
          *(float *)&dword_140404A6C[349900634] = v13;
          goto LABEL_27;
        }
        *(float *)&v8 = v56;
        result = *(double *)&v22;
        v9 = v58;
        v2 |= 3 << v18;
        v59 = v22;
        v57 = v2;
        dword_140404A6C[349900629] = v22;
        v48 = v56;
        *(float *)&dword_140404A6C[349900630] = v56;
        v49 = v58;
        *(float *)&dword_140404A6C[349900631] = v58;
LABEL_25:
        dword_140404A6C[349900637] = v17;
        v55 = v17;
        dword_140404A6C[349900636] = v16;
        v54 = v16;
        dword_140404A6C[349900635] = v15;
        v53 = v15;
        goto LABEL_26;
      }
      *(float *)&v8 = v56;
      result = *(double *)&v22;
      v9 = v58;
      v2 |= v19;
      v11 = v50;
      v15 = v26;
      v12 = v51;
      v16 = v27;
      v13 = v52;
      v17 = v28;
      v59 = v22;
      dword_140404A6C[349900629] = v22;
      v48 = v56;
      *(float *)&dword_140404A6C[349900630] = v56;
      v49 = v58;
      *(float *)&dword_140404A6C[349900631] = v58;
      v57 = v2;
      v53 = v26;
      dword_140404A6C[349900635] = v26;
      v54 = v27;
      dword_140404A6C[349900636] = v27;
      v55 = v28;
      dword_140404A6C[349900637] = v28;
LABEL_27:
      v18 += 2;
      v19 = __ROL4__(v19, 2);
      if ( v18 >= a2 )
        goto LABEL_28;
    }
    *(float *)&v12 = v56;
    v11 = v22;
    v13 = v58;
    *(_QWORD *)&result = v59;
    *(float *)&v8 = v48;
    v9 = v49;
    goto LABEL_25;
  }
LABEL_28:
  sub_140115D90(&v57, a2);
  return result;
}

// 1402B2610: using guessed type int dword_1402B2610[];
// 1402B2614: using guessed type int dword_1402B2614[];
// 1402B2618: using guessed type float dword_1402B2618[16];
// 1402B2660: using guessed type int dword_1402B2660[];
// 1402B2664: using guessed type int dword_1402B2664[];
// 1402B2668: using guessed type int dword_1402B2668[22];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 193AC87C0: using guessed type unsigned int;
// 193AC87C4: using guessed type unsigned int;
// 193AC87C8: using guessed type unsigned int;
// 193AC87CC: using guessed type unsigned int;
// 193AC87D0: using guessed type unsigned int;
// 193AC87D4: using guessed type unsigned int;
// 193AC87D8: using guessed type unsigned int;
// 193AC87DC: using guessed type unsigned int;
// 193AC87E0: using guessed type unsigned int;
// 193AC87E4: using guessed type unsigned int;
// 193AC87E8: using guessed type unsigned int;
// 193AC87EC: using guessed type unsigned int;
// 193AC87F0: using guessed type unsigned int;
// 193AC87F4: using guessed type unsigned int;
// 193AC87F8: using guessed type unsigned int;
// 193AC87FC: using guessed type unsigned int;
// 193AC8800: using guessed type unsigned int;
// 193AC8804: using guessed type unsigned int;

//----- (0000000140114AF0) ----------------------------------------------------
__int64            sub_140114AF0(float *a1)
{
  float v1; // xmm7_4
  float v2; // xmm5_4
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm6_8
  float v6; // xmm3_4
  int v7; // ebx
  signed int v8; // r8d
  double v9; // xmm0_8
  __int64 v10; // rax
  float v11; // xmm6_4
  unsigned int v12; // esi
  signed int v13; // eax
  char v14; // r9
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  unsigned int *v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __m128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]

  sub_14010E370(SR_VEC_LANES(128, v20, f32), a1);
  v1 = SR_VEC_LANES(128, v20, f32)[1];
  v2 = SR_VEC_LANES(128, v20, f32)[0];
  v3 = fabs(SR_VEC_LANES(128, v20, f32)[0]);
  v4 = fabs(SR_VEC_LANES(128, v20, f32)[1]);
  v5 = v3;
  if ( v3 < v4 )
    v3 = v4;
  v6 = SR_VEC_LANES(128, v20, f32)[2];
  v7 = 0;
  v8 = 2;
  v9 = fabs(SR_VEC_LANES(128, v20, f32)[2]);
  v10 = v4 > v5;
  if ( v3 < v9 )
  {
    v10 = 2;
    v3 = v9;
  }
  v11 = SR_VEC_LANES(128, v20, f32)[3];
  if ( fabs(SR_VEC_LANES(128, v20, f32)[3]) > v3 )
    v10 = 3;
  v12 = v10;
  if ( SR_VEC_LANES(128, v20, f32)[v10] < 0.0 )
  {
    v20 = _mm_xor_ps(v20, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v6 = SR_VEC_LANES(128, v20, f32)[2];
    v1 = SR_VEC_LANES(128, v20, f32)[1];
    v2 = SR_VEC_LANES(128, v20, f32)[0];
    v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v20, v20, 255), f32)[0];
  }
  dword_140404A6C[349900621] = v10;
  if ( (!(_DWORD)v10 || (dword_140404A6C[349900622] = (int)(v2 * 5791.911644699011), (unsigned int)v10 != 1))
    && (dword_140404A6C[349900623] = (int)(v1 * 5791.911644699011), (unsigned int)v10 == 2)
    || (dword_140404A6C[349900624] = (int)(v6 * 5791.911644699011), (unsigned int)v10 != 3) )
  {
    dword_140404A6C[349900625] = (int)(v11 * 5791.911644699011);
  }
  v13 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v14 = dword_140404A6C[289301093];
    v15 = v12;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v13) &= ~(((1 << v8) - 1) << v14);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v15 << SLOBYTE(dword_140404A6C[289301093]);
      v16 = 8 - dword_140404A6C[289301093];
      if ( v8 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v8 == v16 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_22;
      }
      v8 -= v16;
      v13 = dword_140404A6C[289301092] + 1;
      v15 >>= v16;
      ++dword_140404A6C[289301092];
      v14 = 0;
      if ( v8 <= 0 )
        goto LABEL_22;
    }
    dword_140404A6C[289301093] += v8;
  }
LABEL_22:
  v17 = &dword_140404A6C[349900622];
  do
  {
    if ( v7 != v12 )
      sub_140115D90(v17, 14);
    ++v7;
    ++v17;
  }
  while ( v7 < 4 );
  return sub_1401F8B20((unsigned __int64)&v19 ^ v21);
}

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 193AC87A0: using guessed type unsigned int;

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
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __m128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

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
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __m128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]

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
  return sub_1401F8B20((unsigned __int64)&v18 ^ v20);
}

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
  signed int v0; // r9d
  int v1; // r10d
  unsigned int v2; // r8d
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 result; // rax
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm2_4
  unsigned int *v30; // rcx
  __int64 v31; // rdx
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm2_4

  v0 = dword_140404A6C[73990061];
  v1 = 0;
  if ( (int)dword_140404A6C[73990061] < 4 )
  {
    if ( (int)dword_140404A6C[73990061] <= 0 )
      return result;
    v2 = dword_140404A6C[179955874];
    v6 = 0;
    goto LABEL_16;
  }
  v2 = dword_140404A6C[179955874];
  v3 = &dword_140404A6C[73007027];
  v4 = ((dword_140404A6C[73990061] - 4) >> 2) + 1;
  v5 = v4;
  v1 = 4 * v4;
  v6 = 4LL * v4;
  do
  {
    v3[2] = *(v3 - 1);
    result = *v3;
    v3[3] = result;
    v8 = *((float *)v3 + 1);
    *((float *)v3 + 4) = v8;
    v9 = *((float *)v3 + 5);
    *((float *)v3 - 1) = v9 + *((float *)v3 - 1);
    v10 = *((float *)v3 + 6);
    *(float *)v3 = v10 + *(float *)v3;
    v11 = *((float *)v3 + 7);
    *((float *)v3 + 1) = v11 + v8;
    *((float *)v3 + 8) = v9;
    *((float *)v3 + 9) = v10;
    *((float *)v3 + 10) = v11;
    if ( !v2 )
      *((float *)v3 + 6) = v10 - *((float *)v3 - 3);
    v12 = *((float *)v3 + 59);
    *((float *)v3 + 62) = v12;
    v13 = *((float *)v3 + 60);
    *((float *)v3 + 63) = v13;
    v14 = *((float *)v3 + 61);
    *((float *)v3 + 64) = v14;
    v15 = *((float *)v3 + 65);
    *((float *)v3 + 59) = v15 + v12;
    v16 = *((float *)v3 + 66);
    *((float *)v3 + 60) = v16 + v13;
    v17 = *((float *)v3 + 67);
    *((float *)v3 + 61) = v17 + v14;
    *((float *)v3 + 68) = v15;
    *((float *)v3 + 69) = v16;
    *((float *)v3 + 70) = v17;
    if ( !v2 )
      *((float *)v3 + 66) = v16 - *((float *)v3 + 57);
    v18 = *((float *)v3 + 119);
    *((float *)v3 + 122) = v18;
    v19 = *((float *)v3 + 120);
    *((float *)v3 + 123) = v19;
    v20 = *((float *)v3 + 121);
    *((float *)v3 + 124) = v20;
    v21 = *((float *)v3 + 125);
    *((float *)v3 + 119) = v21 + v18;
    v22 = *((float *)v3 + 126);
    *((float *)v3 + 120) = v22 + v19;
    v23 = *((float *)v3 + 127);
    *((float *)v3 + 121) = v23 + v20;
    *((float *)v3 + 128) = v21;
    *((float *)v3 + 129) = v22;
    *((float *)v3 + 130) = v23;
    if ( !v2 )
      *((float *)v3 + 126) = v22 - *((float *)v3 + 117);
    v24 = *((float *)v3 + 179);
    *((float *)v3 + 182) = v24;
    v25 = *((float *)v3 + 180);
    *((float *)v3 + 183) = v25;
    v26 = *((float *)v3 + 181);
    *((float *)v3 + 184) = v26;
    v27 = *((float *)v3 + 185);
    *((float *)v3 + 179) = v27 + v24;
    v28 = *((float *)v3 + 186);
    *((float *)v3 + 180) = v28 + v25;
    v29 = *((float *)v3 + 187);
    *((float *)v3 + 181) = v29 + v26;
    *((float *)v3 + 188) = v27;
    *((float *)v3 + 189) = v28;
    *((float *)v3 + 190) = v29;
    if ( !v2 )
      *((float *)v3 + 186) = v28 - *((float *)v3 + 177);
    v3 += 240;
    --v5;
  }
  while ( v5 );
  if ( v1 < v0 )
  {
LABEL_16:
    v30 = &dword_140404A6C[60 * v6 + 73007027];
    v31 = (unsigned int)(v0 - v1);
    do
    {
      v30[2] = *(v30 - 1);
      result = *v30;
      v30[3] = result;
      v32 = *((float *)v30 + 1);
      *((float *)v30 + 4) = v32;
      v33 = *((float *)v30 + 5);
      *((float *)v30 - 1) = v33 + *((float *)v30 - 1);
      v34 = *((float *)v30 + 6);
      *(float *)v30 = v34 + *(float *)v30;
      v35 = *((float *)v30 + 7);
      *((float *)v30 + 1) = v35 + v32;
      *((float *)v30 + 8) = v33;
      *((float *)v30 + 9) = v34;
      *((float *)v30 + 10) = v35;
      if ( !v2 )
        *((float *)v30 + 6) = v34 - *((float *)v30 - 3);
      v30 += 60;
      --v31;
    }
    while ( v31 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;
// 16B27ECF4: using guessed type unsigned int;

//----- (0000000140115830) ----------------------------------------------------
void sub_140115830()
{
  signed int v0; // edi
  int v1; // ebx
  __int64 v2; // r12
  unsigned int *v3; // r15
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rsi
  unsigned int *v7; // r14
  unsigned int *v8; // rax
  __int128 v9; // xmm1
  int v10; // eax
  int *v11; // r8
  __int64 v12; // r9
  signed int v13; // ecx
  __int64 v14; // rdx
  unsigned int *v15; // rax
  int v16; // eax
  int *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  signed int v20; // ecx
  unsigned int *v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rax

  v0 = dword_140404A6C[73990061];
  v1 = 0;
  if ( (int)dword_140404A6C[73990061] > 0 )
  {
    v2 = 0;
    v3 = &dword_140404A6C[73007022];
    while ( 1 )
    {
      v4 = *v3;
      if ( (int)*v3 < 0x10000 )
        *v3 = --v4;
      if ( v4 > 0 )
      {
        ++v1;
        v2 += 60;
        v3 += 60;
      }
      else if ( v1 >= 0 )
      {
        if ( v1 >= v0 )
          goto LABEL_45;
        v5 = v3[19] - 1;
        v6 = v5;
        if ( v5 >= 0 )
        {
          v7 = &dword_140404A6C[v2 + 73007042 + v5];
          do
          {
            sub_14007F370(*v7);
            --v6;
            --v7;
          }
          while ( v6 >= 0 );
        }
        if ( v1 == --v0 )
        {
LABEL_45:
          dword_140404A6C[73990061] = v0;
          return;
        }
        v8 = &dword_140404A6C[60 * v0 + 73007021];
        *(_OWORD *)(v3 - 1) = *(_OWORD *)v8;
        *(_OWORD *)(v3 + 3) = *((_OWORD *)v8 + 1);
        *(_OWORD *)(v3 + 7) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(v3 + 11) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(v3 + 15) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(v3 + 19) = *((_OWORD *)v8 + 5);
        *(_OWORD *)(v3 + 23) = *((_OWORD *)v8 + 6);
        v9 = *((_OWORD *)v8 + 7);
        v8 += 32;
        *(_OWORD *)(v3 + 27) = v9;
        *(_OWORD *)(v3 + 31) = *(_OWORD *)v8;
        *(_OWORD *)(v3 + 35) = *((_OWORD *)v8 + 1);
        *(_OWORD *)(v3 + 39) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(v3 + 43) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(v3 + 47) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(v3 + 51) = *((_OWORD *)v8 + 5);
        *(_OWORD *)(v3 + 55) = *((_OWORD *)v8 + 6);
        v10 = v3[19];
        if ( v10 > 0 )
        {
          v11 = (int *)(v3 + 20);
          v12 = (unsigned int)v10;
          do
          {
            v13 = 0;
            v14 = 61LL * *v11;
            if ( (int)dword_140404A6C[v14 + 486149258] > 0 )
            {
              v15 = &dword_140404A6C[v14 + 486149259];
              do
              {
                if ( *v15 == v0 )
                  *v15 = v1;
                ++v13;
                ++v15;
              }
              while ( v13 < (int)dword_140404A6C[v14 + 486149258] );
            }
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = v3[52];
        if ( v16 > 0 )
        {
          v17 = (int *)(v3 + 53);
          v18 = (unsigned int)v16;
          do
          {
            v19 = *v17;
            v20 = 0;
            v21 = &dword_140404A6C[5210 * v19 + 129716768];
            if ( (int)*v21 > 0 )
            {
              v22 = 5210 * v19;
              do
              {
                if ( dword_140404A6C[v22 + 129716769] == v0 )
                  dword_140404A6C[v22 + 129716769] = v1;
                ++v20;
                ++v22;
              }
              while ( v20 < (int)*v21 );
            }
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v23 = &dword_140404A6C[280651312];
        do
        {
          if ( *(v23 - 9) && *v23 == v0 )
            *v23 = v1;
          if ( v23[7157] && v23[7166] == v0 )
            v23[7166] = v1;
          if ( v23[14323] && v23[14332] == v0 )
            v23[14332] = v1;
          if ( v23[21489] )
          {
            if ( v23[21498] == v0 )
              v23[21498] = v1;
          }
          v23 += 28664;
        }
        while ( (__int64)v23 < (__int64)&dword_140404A6C[282485808] );
      }
      if ( v1 >= v0 )
        goto LABEL_45;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;

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

//----- (0000000140116210) ----------------------------------------------------
void sub_140116210()
{
  SR_DEBUG_TICK_BEGIN();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "before body integration");
  unsigned int *v0; // rax
  int v1; // r12d
  float *v2; // rdi
  float *v3; // rbx
  __int64 v4; // rsi
  float v5; // xmm1_4
  signed int v6; // edx
  signed int v7; // r9d
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  unsigned int *v13; // rdi
  int i; // r15d
  signed int j; // r14d
  signed int k; // esi
  int m; // ebx
  unsigned int *v18; // rbx
  int v19; // ecx

  v0 = &dword_140404A6C[280658334];
  v1 = 0;
  do
  {
    *v0 = 0;
    v0 += 7166;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[282492830] );
  v2 = (float *)&dword_140404A6C[18215736];
  v3 = (float *)&dword_140404A6C[18215716];
  v4 = 0x2000;
  do
  {
    if ( *((_DWORD *)v3 - 7) && !*((_DWORD *)v3 - 5) )
    {
      v5 = v3[3] - 0.0027222224;
      v3[3] = v5;
      *(v3 - 1) = v3[2] + *(v3 - 1);
      *v3 = v5 + *v3;
      v3[1] = v3[4] + v3[1];
      sub_14012B2D0((unsigned int *)v2 - 12, v2 - 3, v2, v2 + 9);
    }
    v2 += 47;
    v3 += 47;
    --v4;
  }
  while ( v4 );
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after body integration");
  SR_DEBUG_TICK_STAGE("Physics: update vehicle spatial bounds (0x1069C0)");
  sub_1401069C0();
  SR_DEBUG_TICK_STAGE("Physics: update human spatial bounds (0x0B95E0)");
  sub_1400B95E0();
  SR_DEBUG_TICK_STAGE("Physics: update item spatial bounds (0x0C9D20)");
  sub_1400C9D20();
  v6 = dword_140404A6C[111579651];
  v7 = 0;
  dword_140404A6C[421506989] = 0;
  if ( (int)dword_140404A6C[111579651] > 0 )
  {
    v8 = dword_140404A6C[111579652];
    v9 = dword_140404A6C[111579650];
    do
    {
      v10 = 0;
      if ( v8 > 0 )
      {
        do
        {
          v11 = 0;
          if ( v9 > 0 )
          {
            do
            {
              v12 = v11 + v9 * (v10 + v7 * v8);
              ++v11;
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421506981] + 4LL * v12) = -1;
              v9 = dword_140404A6C[111579650];
              v8 = dword_140404A6C[111579652];
            }
            while ( v11 < (int)dword_140404A6C[111579650] );
          }
          ++v10;
        }
        while ( v10 < v8 );
        v6 = dword_140404A6C[111579651];
      }
      ++v7;
    }
    while ( v7 < v6 );
  }
  dword_140404A6C[421769134] = 0;
  v13 = &dword_140404A6C[278845967];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v13 - 74) )
    {
      if ( dword_140404A6C[1268 * *(v13 - 69) + 278521288] )
      {
        for ( j = *(v13 - 2); j <= (int)v13[1]; ++j )
        {
          for ( k = *(v13 - 1); k <= (int)v13[2]; ++k )
          {
            for ( m = *(v13 - 3); m <= (int)*v13; ++m )
              sub_140037DE0(0, m, j, k, i | 0x8000);
          }
        }
      }
    }
    v13 += 1760;
  }
  SR_DEBUG_TICK_STAGE("Physics: prepare collision and contact work (0x1154D0)");
  sub_1401154D0();
  sub_140108930();
  SR_DEBUG_TICK_STAGE("Physics: update humans and their pose targets (0x0BE010)");
  sub_1400BE010();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after human update");
  sub_1400CE370();
  sub_1400CC610();
  SR_DEBUG_TICK_STAGE("Physics: solve body/joint constraints (0x01D080)");
  sub_14001D080();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after constraint solving");
  v18 = &dword_140404A6C[278845900];
  do
  {
    if ( *(v18 - 7) )
    {
      v19 = *v18;
      if ( (int)*v18 < 0xFFFF )
        *v18 = --v19;
      if ( v19 <= 0 )
        sub_14007F970(v1);
    }
    ++v1;
    v18 += 1760;
  }
  while ( v1 < 1024 );
  SR_DEBUG_TICK_STAGE("Physics: process broadphase/contact work (0x10BE50, 0x115830)");
  sub_14010BE50();
  sub_140115830();
  SR_DEBUG_TICK_STAGE("Physics: clean up expired joints (0x01FB90)");
  sub_14001FB90();
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
  __int64 v13; // [rsp+8h] [rbp-49h] BYREF
  float v14; // [rsp+28h] [rbp-29h] BYREF
  float v15; // [rsp+2Ch] [rbp-25h]
  float v16; // [rsp+30h] [rbp-21h]
  __int128 v17; // [rsp+38h] [rbp-19h] BYREF
  __int128 v18; // [rsp+48h] [rbp-9h]
  float v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+60h] [rbp+Fh]

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
      sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, v7);
      v14 = (float)(v4 - (float)(*((float *)&v18 + 2) * 4.0)) + (float)(*(float *)&v17 * 18.0);
      v15 = (float)((float)(v5 - 0.5) - (float)(*((float *)&v18 + 3) * 4.0)) + (float)(*((float *)&v17 + 1) * 18.0);
      v16 = (float)(v6 - (float)(v19 * 4.0)) + (float)(*((float *)&v17 + 2) * 18.0);
    }
    v19 = 1.0;
    v17 = xmmword_140278D30;
    v18 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, v7);
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

//----- (0000000140116D80) ----------------------------------------------------
void            sub_140116D80(int a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  float v8; // xmm6_4
  __int64 v9; // rax
  unsigned int v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // rbp
  float *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  float v18; // xmm6_4
  int v19; // eax
  int v20; // eax

  if ( a1 == -1 )
    return;
  if ( a2 == -1 )
    return;
  if ( a1 == a2 )
    return;
  v4 = 3597LL * a1;
  if ( dword_140404A6C[v4 + 71856292] == -1 )
    return;
  v5 = 3597LL * a2;
  v6 = (int)dword_140404A6C[v5 + 71856292];
  if ( (_DWORD)v6 == -1
    || dword_140404A6C[v4 + 71859139]
    || dword_140404A6C[v5 + 71859139]
    || dword_140404A6C[283831312] != 4 )
  {
    return;
  }
  v7 = dword_140404A6C[v4 + 71856286];
  v8 = (float)(int)dword_140404A6C[284022486];
  if ( v7 == 17 )
  {
    v9 = (int)dword_140404A6C[7166 * v6 + 280651315];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = dword_140404A6C[5210 * v9 + 129716718];
      if ( v10 != -1 && v10 == a1 )
        return;
    }
    if ( dword_140404A6C[v5 + 71856286] == 17 )
      goto LABEL_27;
    v11 = _mm_cvtsi32_si128(dword_140404A6C[284022487]);
LABEL_26:
    v8 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v11), f32)[0];
    goto LABEL_27;
  }
  if ( v7 <= 5 )
  {
    v12 = 7166 * v6;
    v13 = (float *)&dword_140404A6C[7166 * v6 + 280651440];
    if ( sub_14011B8F0(v13, v7, 0.0) )
      return;
    v14 = (int)dword_140404A6C[v12 + 280651315];
    if ( (_DWORD)v14 != -1 )
    {
      v15 = (int)dword_140404A6C[5210 * v14 + 129716718];
      if ( (_DWORD)v15 != -1 && dword_140404A6C[3597 * v15 + 71856253] && dword_140404A6C[3597 * v15 + 71856286] == v7 )
        return;
    }
    v16 = dword_140404A6C[v5 + 71856286];
    if ( v16 == 17 )
    {
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022488]);
    }
    else
    {
      v8 = (float)(int)dword_140404A6C[284022489];
      if ( v16 > 5 || !sub_14011B8F0(v13, v16, 0.0) )
        goto LABEL_27;
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022490]);
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = dword_140404A6C[v5 + 71856276];
  v18 = v8 * 0.0099999998;
  if ( v17 > 0 )
    v18 = v18 * (float)(1.0 - fminf(fmaxf(fminf((float)v17 * 0.0099999998, 1.0), 0.0), 1.0));
  v19 = (int)(float)((float)a3 * v18);
  if ( v19 > 0 )
    dword_140404A6C[v4 + 71856276] += v19;
  v20 = dword_140404A6C[v4 + 71856276];
  if ( v20 > 1023 )
  {
    v20 = 1023;
    dword_140404A6C[v4 + 71856276] = 1023;
  }
  if ( v20 >= (int)dword_140404A6C[284022494] )
    dword_140404A6C[7166 * dword_140404A6C[v4 + 71856292] + 280651318] = 0;
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
  float v23[4]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+50h] [rbp-38h]
  unsigned int v26; // [rsp+90h] [rbp+8h]

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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140117340) ----------------------------------------------------
__int64            sub_140117340(int a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  int *v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // r13d
  unsigned int *v7; // r12
  __int64 v8; // rbp
  unsigned int *v9; // rdi
  signed int v10; // r12d
  __int64 v11; // r10
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // cc
  int v17; // ebx
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r15d
  unsigned int v23; // r14d
  __int64 v24; // rcx
  unsigned int *v25; // rcx
  unsigned int *v26; // rcx
  unsigned int *v27; // rcx
  unsigned int *v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // [rsp+40h] [rbp+8h]
  unsigned int *v31; // [rsp+48h] [rbp+10h]

  v1 = a1;
  result = 14388LL * a1;
  v3 = (int *)((char *)&dword_140404A6C[71857786] + result);
  *(unsigned int *)((char *)&dword_140404A6C[71857811] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857836] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857861] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857886] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857911] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857936] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857786] + result) = 0;
  v4 = *(int *)((char *)&dword_140404A6C[71856292] + result);
  if ( (_DWORD)v4 == -1 )
    return result;
  v5 = 0;
  v6 = dword_140404A6C[283831312];
  v7 = &dword_140404A6C[7166 * v4 + 280658140];
  result = dword_140404A6C[179992861];
  v31 = v7;
  v30 = dword_140404A6C[179992861];
  do
  {
    v8 = (int)*(v7 - 1);
    if ( v8 <= 0 )
      goto LABEL_22;
    v9 = v7;
    v10 = v30;
    do
    {
      result = (int)*v9;
      v11 = 1760 * result;
      v12 = dword_140404A6C[1760 * result + 278845898];
      if ( v12 > 14 )
      {
        if ( v12 == 27 )
        {
          v18 = (int)dword_140404A6C[v11 + 278846053];
          if ( (_DWORD)v18 != -1 )
          {
            v19 = 5210 * v18;
            if ( (int)dword_140404A6C[5210 * v18 + 129716712] > 0 )
            {
              v20 = 1199 * v1;
              v21 = v5 * 4 + 14388 * v1;
              dword_140404A6C[3597 * v1 + 71857787 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v21) + v5] = 27;
              v22 = dword_140404A6C[v19 + 129716715];
              v23 = dword_140404A6C[v19 + 129716710];
              v24 = v5 * 4 + 12 * (1199 * v1 + *(int *)((char *)&dword_140404A6C[71857786] + v21));
              if ( v6 == 4 )
              {
                *(unsigned int *)((char *)&dword_140404A6C[71857788] + v24) = v18;
                ++*(unsigned int *)((char *)&dword_140404A6C[71857786] + v21);
                dword_140404A6C[16 * (__int64)v10 + 179992862] = v23;
                dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992863] = v22;
                dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992865] = v18;
                v25 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992866];
                *v25 = dword_140404A6C[v19 + 129716720];
                v25[1] = dword_140404A6C[v19 + 129716721];
                v25[2] = dword_140404A6C[v19 + 129716722];
                v26 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992869];
                *v26 = dword_140404A6C[v19 + 129716726];
                v26[1] = dword_140404A6C[v19 + 129716727];
                v26[2] = dword_140404A6C[v19 + 129716728];
                v27 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992872];
                *v27 = dword_140404A6C[v19 + 129716729];
                v27[1] = dword_140404A6C[v19 + 129716730];
                v27[2] = dword_140404A6C[v19 + 129716731];
                v28 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992875];
                *v28 = dword_140404A6C[v19 + 129716732];
                v28[1] = dword_140404A6C[v19 + 129716733];
                result = dword_140404A6C[v19 + 129716734];
                v28[2] = result;
                v10 = ++dword_140404A6C[179992861];
              }
              else
              {
                *(unsigned int *)((char *)&dword_140404A6C[71857788] + v24) = v23;
                result = 3 * (v20 + *(int *)((char *)&dword_140404A6C[71857786] + v21));
                dword_140404A6C[3 * v20
                              + 71857789
                              + 3 * (int)(*(unsigned int *)((char *)&dword_140404A6C[71857786] + v21))++
                              + v5] = v22;
              }
            }
          }
        }
        else if ( v12 == 18 )
        {
          v29 = v5 * 4 + 14388 * v1;
          dword_140404A6C[3597 * v1 + 71857787 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v29) + v5] = 18;
          dword_140404A6C[3597 * v1 + 71857788 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v29) + v5] = dword_140404A6C[v11 + 278846062];
          result = dword_140404A6C[v11 + 278846063];
          dword_140404A6C[3597 * v1
                        + 71857789
                        + 3 * (int)(*(unsigned int *)((char *)&dword_140404A6C[71857786] + v29))++
                        + v5] = result;
        }
      }
      else
      {
        v13 = 1199 * v1;
        dword_140404A6C[3597 * v1 + 71857787 + 3 * *v3 + v5] = v12;
        dword_140404A6C[3597 * v1 + 71857788 + 3 * *v3 + v5] = 0;
        dword_140404A6C[3597 * v1 + 71857789 + 3 * *v3 + v5] = 0;
        v14 = v5 * 4 + 12 * (1199 * v1 + *v3);
        if ( (int)dword_140404A6C[v11 + 278845906] <= 0 )
        {
          result = dword_140404A6C[v11 + 278845974];
          *(unsigned int *)((char *)&dword_140404A6C[71857789] + v14) = result;
        }
        else
        {
          v15 = 1760LL * (int)dword_140404A6C[v11 + 278845907];
          *(unsigned int *)((char *)&dword_140404A6C[71857788] + v14) = 1;
          v16 = (int)dword_140404A6C[v11 + 278845974] <= 0;
          v17 = dword_140404A6C[v15 + 278845974];
          result = 3 * (v13 + *v3);
          dword_140404A6C[3 * v13 + 71857789 + 3 * *v3 + v5] = v17;
          if ( !v16 )
          {
            result = dword_140404A6C[1268 * dword_140404A6C[v15 + 278845898] + 278521294] + 1;
            if ( v17 < (int)result )
            {
              result = 3 * (v13 + *v3);
              ++dword_140404A6C[3 * v13 + 71857789 + 3 * (*v3)++ + v5];
              goto LABEL_20;
            }
          }
        }
        ++*v3;
      }
LABEL_20:
      ++v9;
      --v8;
    }
    while ( v8 );
    v30 = v10;
    v7 = v31;
LABEL_22:
    v7 += 10;
    v5 += 25;
    v3 += 25;
    v31 = v7;
  }
  while ( v5 < 175 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EE0: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;

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

//----- (00000001401178F0) ----------------------------------------------------
__int64            sub_1401178F0(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned int *v11; // rbx
  char v12; // al
  __int64 v13; // r13
  double v14; // xmm2_8
  double v15; // xmm7_8
  unsigned int v16; // xmm6_4
  float v17; // xmm1_4
  double v18; // xmm13_8
  double v19; // xmm6_8
  signed int v20; // ebx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm8_4
  float v25; // xmm3_4
  float v26; // xmm7_4
  double v27; // xmm0_8
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rdx
  __int64 v32; // rax
  double v33; // xmm0_8
  __m128 v34; // xmm1
  float v35; // xmm7_4
  __m128 v36; // xmm6
  float v37; // xmm8_4
  float v38; // xmm10_4
  double v39; // xmm0_8
  float *v40; // rbx
  float v41; // xmm2_4
  float v42; // xmm1_4
  int v43; // ebp
  __int64 v44; // rax
  float v45; // xmm7_4
  float v46; // xmm1_4
  bool v47; // cc
  bool v48; // zf
  __int64 v49; // rbx
  __int64 v50; // rcx
  float v51; // xmm0_4
  __int64 v52; // rax
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm4_4
  unsigned int v56; // xmm3_4
  float v57; // xmm2_4
  int v58; // eax
  unsigned int v59; // ecx
  double v60; // xmm6_8
  double v61; // xmm11_8
  __int64 v62; // rax
  float v63; // xmm2_4
  float v64; // xmm3_4
  __m128 v65; // xmm9
  float v66; // xmm13_4
  float v67; // xmm0_4
  float v68; // xmm12_4
  float v69; // xmm10_4
  __m128 v70; // xmm7
  float v71; // xmm8_4
  double v72; // xmm0_8
  __int64 v73; // rcx
  float v74; // xmm3_4
  float v75; // xmm2_4
  float v76; // xmm4_4
  float *v77; // rbx
  float *v78; // r15
  int v79; // ebp
  __int64 v80; // rax
  float v81; // xmm0_4
  __int64 v83; // [rsp+0h] [rbp-128h] BYREF
  int v84; // [rsp+20h] [rbp-108h]
  float v85; // [rsp+28h] [rbp-100h] BYREF
  float v86; // [rsp+2Ch] [rbp-FCh]
  float v87; // [rsp+30h] [rbp-F8h]
  _OWORD v88[2]; // [rsp+40h] [rbp-E8h] BYREF
  int v89; // [rsp+60h] [rbp-C8h]
  __int64 v90; // [rsp+68h] [rbp-C0h]

  v1 = a1;
  v2 = 3597LL * a1;
  v3 = 3597LL * a1;
  v4 = 0;
  v84 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856293] = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 71856295] = 0;
  v5 = dword_140404A6C[v3 + 71859665];
  dword_140404A6C[v3 + 71856325] = 0;
  if ( v5 > 0 )
  {
    dword_140404A6C[v3 + 71859665] = v5 - 1;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v6 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v6 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v7 = 7166 * v6;
  if ( dword_140404A6C[7166 * v6 + 280658335] == -1 && (int)dword_140404A6C[v7 + 280658139] > 0 )
  {
    v8 = 1760LL * (int)dword_140404A6C[v7 + 280658140];
    if ( dword_140404A6C[v8 + 278845974] )
      goto LABEL_27;
    if ( !dword_140404A6C[v8 + 278845906] )
    {
      if ( (int)dword_140404A6C[v7 + 280658149] <= 0 )
      {
        v10 = 4;
        v4 = 4;
        v11 = &dword_140404A6C[v7 + 280658170];
        do
        {
          if ( (int)*(v11 - 1) > 0
            && dword_140404A6C[1268 * dword_140404A6C[1760 * *v11 + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845898]]
            && (rand() & 1) == 0 )
          {
            dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
            dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = v10;
            dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
            dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
            dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
          }
          ++v10;
          v11 += 10;
          --v4;
        }
        while ( v4 );
        goto LABEL_27;
      }
      if ( (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658150] + 278845974] <= 0 )
      {
        if ( (rand() & 0x1F) != 0 )
          goto LABEL_27;
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 2;
        goto LABEL_12;
      }
      if ( (rand() & 0x1F) == 0 )
      {
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
LABEL_12:
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856369 + v9] = 1;
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856370 + v9] = 0;
        dword_140404A6C[v9 + 71856362] = ((unsigned __int8)dword_140404A6C[v9 + 71856362] + 1) & 0x3F;
      }
LABEL_27:
      a1 = v84;
      goto LABEL_28;
    }
    if ( (int)dword_140404A6C[1760 * dword_140404A6C[v8 + 278845907] + 278845974] <= 0 )
    {
      if ( (rand() & 0x1F) == 0 )
      {
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
        dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
      }
      goto LABEL_27;
    }
    v12 = rand();
    a1 = v84;
    if ( (v12 & 0x1F) == 0 )
      dword_140404A6C[3597 * v1 + 71856325] |= 0x1000u;
  }
LABEL_28:
  v13 = (int)dword_140404A6C[v7 + 280651313];
  if ( (_DWORD)v13 == -1 )
  {
    sub_140008440(a1, v6);
    *(_QWORD *)&v14 = dword_140404A6C[v7 + 280651341];
    HIDWORD(v15) = 0;
    dword_140404A6C[v3 + 71856339] = 1;
    v88[0] = xmmword_140278D30;
    v89 = 1065353216;
    v88[1] = xmmword_140278D30;
    sub_14007B2A0((__int64)v88, (float *)&dword_1402F6188, v14);
    v16 = dword_140404A6C[v7 + 280651357];
    v17 = *(float *)&dword_140404A6C[v3 + 71856297]
        - SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v16), *(float *)&dword_140404A6C[v3 + 71856301]), f32)[0];
    dword_140404A6C[v3 + 71856301] = v16;
    *(float *)&dword_140404A6C[v3 + 71856297] = v17;
    if ( v17 >= -2.74889357189125 )
    {
      if ( v17 > 2.74889357189125 )
        dword_140404A6C[v3 + 71856297] = 1076882911;
    }
    else
    {
      dword_140404A6C[v3 + 71856297] = -1070600737;
    }
    *(_QWORD *)&v18 = dword_140404A6C[v3 + 71859143];
    if ( *(float *)&dword_140404A6C[v7 + 280651456] < 0.89999998 )
    {
      if ( (dword_140404A6C[283831474] & 0x7F) > 0x40 )
        dword_140404A6C[v3 + 71856325] |= 8u;
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    LODWORD(v19) = 0;
    if ( (int)dword_140404A6C[v3 + 71859146] < (int)dword_140404A6C[v3 + 71859147] )
    {
      dword_140404A6C[v3 + 71856296] = 1065353216;
      v20 = dword_140404A6C[v3 + 71859146];
      v21 = v3 * 4 + 32LL * v20;
      v22 = *(float *)((char *)&dword_140404A6C[71859148] + v21) - *(float *)&dword_140404A6C[v7 + 280651335];
      v23 = *(float *)((char *)&dword_140404A6C[71859150] + v21) - *(float *)&dword_140404A6C[v7 + 280651337];
      v24 = (float)(v23 * v23) + (float)(v22 * v22);
      v25 = fsqrt(v24);
      if ( v25 == 0.0 )
      {
        v27 = 0.0;
        v26 = 0.0;
      }
      else
      {
        *(float *)&v15 = 1.0 / v25;
        v27 = v15;
        v26 = (float)(1.0 / v25) * v23;
        *(float *)&v27 = *(float *)&v27 * v22;
      }
      *(float *)&v27 = sub_14023F704(*(float *)&v27, -v26);
      v18 = v27;
      if ( v24 < 4.0 )
      {
        v28 = v20 + 1;
        if ( v20 + 1 >= (int)dword_140404A6C[v3 + 71859147] )
          v28 = 0;
        dword_140404A6C[v3 + 71859146] = v28;
      }
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_70;
    v29 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v29) < 2.0
      && fabs(*(float *)((char *)&dword_140404A6C[71859672] + v29) - *(float *)&dword_140404A6C[v7 + 280651336]) < 2.0
      && (rand() & 0x1F) == 0 )
    {
      v30 = (int)dword_140404A6C[v3 + 71859669];
      *(_QWORD *)&dword_140404A6C[v3 + 71859146] = 0;
      v31 = &dword_140404A6C[6 * v30 + 71859671 + v3];
      dword_140404A6C[v3 + 71859148] = *v31;
      dword_140404A6C[v3 + 71859149] = v31[1];
      dword_140404A6C[v3 + 71859150] = v31[2];
      ++dword_140404A6C[v3 + 71859147];
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_70;
    v32 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v32) <= 12.0 )
      goto LABEL_70;
    *(_QWORD *)&v33 = *(unsigned int *)((char *)&dword_140404A6C[71859671] + v32);
    *(float *)&v33 = *(float *)&v33 - *(float *)&dword_140404A6C[v7 + 280651986];
    v34 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&dword_140404A6C[71859673] + v32))));
    SR_VEC_LANES(128, v34, f32)[0] = SR_VEC_LANES(128, v34, f32)[0] - *(float *)&dword_140404A6C[v7 + 280651988];
    v35 = *(float *)&v33 * *(float *)&v33;
    v36 = v34;
    v37 = (float)(*(float *)((char *)&dword_140404A6C[71859672] + v32) - *(float *)&dword_140404A6C[v7 + 280651987])
        - 0.25;
    v38 = (float)((float)(v37 * v37) + (float)(*(float *)&v33 * *(float *)&v33))
        + (float)(SR_VEC_LANES(128, v34, f32)[0] * SR_VEC_LANES(128, v34, f32)[0]);
    *(float *)&v33 = sub_14023F704(*(float *)&v33, -SR_VEC_LANES(128, v34, f32)[0]);
    SR_VEC_LANES(128, v36, f32)[0] = (float)(SR_VEC_LANES(128, v34, f32)[0] * SR_VEC_LANES(128, v34, f32)[0]) + v35;
    v18 = v33;
    v39 = sub_14023EDE4((float)-v37, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v36)), f64)[0]);
    HIDWORD(v19) = 0;
    *(float *)&v19 = v39;
    if ( dword_140404A6C[v3 + 71859140] == 1
      && (dword_140404A6C[v3 + 71856296] = 1065353216, dword_140404A6C[v3 + 71859140] == 1)
      || v38 >= 1024.0 )
    {
      if ( v38 >= 4096.0 )
      {
LABEL_70:
        v45 = *(float *)&dword_140404A6C[v3 + 71856297];
        v46 = (float)(*(float *)&dword_140404A6C[v7 + 280651365] + *(float *)&dword_140404A6C[v7 + 280651341]) + v45;
        if ( v46 < -3.14159265359 )
          v46 = v46 + 6.28318530718;
        if ( v46 > 3.14159265359 )
          v46 = v46 - 6.28318530718;
        *(float *)&dword_140404A6C[v3 + 71856297] = (float)(SR_VEC_READ_LANES(128, sub_14000B5F0(v18, v46), f32)[0] * 0.5) + v45;
        *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(*(float *)&v19
                                                                  - *(float *)&dword_140404A6C[v3 + 71856298])
                                                          * 0.0625)
                                                  + *(float *)&dword_140404A6C[v3 + 71856298];
        v47 = (int)dword_140404A6C[v3 + 71859668] <= 0;
        dword_140404A6C[v3 + 71856330] = 1;
        if ( !v47 && *(float *)&dword_140404A6C[v3 + 71859674] > 8.0 )
          dword_140404A6C[v3 + 71856330] = 0;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
    }
    else
    {
      dword_140404A6C[v3 + 71856296] = 0;
    }
    if ( fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v18, *(float *)&dword_140404A6C[v7 + 280651341]), f32)[0]) < 0.125
      && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v19, *(float *)&dword_140404A6C[v3 + 71856298]), f32)[0]) < 0.125 )
    {
      v40 = (float *)&dword_140404A6C[280651676];
      v41 = *(float *)&dword_140404A6C[v7 + 280652159] * 64.0;
      v42 = *(float *)&dword_140404A6C[v7 + 280652158] * 64.0;
      v43 = 0;
      v85 = *(float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v7 * 4 + 1126821924) - (float)(*(float *)&dword_140404A6C[v7 + 280652157] * 64.0);
      v86 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v7 * 4 + 1126821924) - v42;
      v87 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v7 * 4 + 1126821924) - v41;
      while ( 1 )
      {
        if ( *((_DWORD *)v40 - 373) )
        {
          if ( v43 != (_DWORD)v6 )
          {
            v44 = *((int *)v40 - 371);
            if ( (_DWORD)v44 != -1
              && dword_140404A6C[3597 * v44 + 71856286] == dword_140404A6C[v3 + 71856286]
              && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v40 - 1))
                                       * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v40 - 1)))
                               + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v40 - 2))
                                       * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v40 - 2))))
                       + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v40)
                               * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v40))) < 16384.0
              && sub_1400DB060(v43, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v7 * 4 + 1126821924), &v85, 0.25) )
            {
              break;
            }
          }
        }
        ++v43;
        v40 += 7166;
        if ( v43 >= 256 )
        {
          if ( (int)dword_140404A6C[v7 + 280658139] > 0
            && (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845974] > 0
            && (rand() & 3) == 0 )
          {
            dword_140404A6C[v3 + 71856325] |= 1u;
          }
          goto LABEL_70;
        }
      }
    }
    goto LABEL_70;
  }
  v48 = dword_140404A6C[v7 + 280651314] == 0;
  dword_140404A6C[v3 + 71856339] = 2;
  if ( v48 )
  {
    if ( dword_140404A6C[283831448] == 1 )
    {
      dword_140404A6C[v3 + 71856296] = -1082130432;
    }
    else
    {
      v49 = 5210 * v13;
      v50 = (int)dword_140404A6C[5210 * v13 + 129720183];
      if ( (_DWORD)v50 != -1 )
      {
        dword_140404A6C[383 * v50 + 132400669] = 1;
        sub_140009E30(v50);
        v51 = *(float *)&dword_140404A6C[v49 + 129716744] * *(float *)&dword_140404A6C[v49 + 129716732];
        v52 = (int)dword_140404A6C[v49 + 129720183];
        v53 = *(float *)&dword_140404A6C[v49 + 129716745] * *(float *)&dword_140404A6C[v49 + 129716733];
        dword_140404A6C[v3 + 71856293] = 0x40000000;
        v54 = *(float *)&dword_140404A6C[v49 + 129716746] * *(float *)&dword_140404A6C[v49 + 129716734];
        dword_140404A6C[v3 + 71856295] = -1082130432;
        v55 = *(float *)&dword_140404A6C[383 * v52 + 132400658];
        v56 = dword_140404A6C[383 * v52 + 132400657];
        dword_140404A6C[v3 + 71856294] = v56;
        v57 = (float)((float)(v53 + v51) + (float)(v54 + v55)) * 8.0;
        if ( v57 > 1.0 )
          v57 = 1.0;
        *(float *)&dword_140404A6C[v3 + 71856296] = v57 / (float)(fabs(*(float *)&v56) + 1.0);
        if ( v55 < 0.050000001 )
          dword_140404A6C[v3 + 71856296] = -1082130432;
        v58 = dword_140404A6C[383 * v52 + 132401001];
        dword_140404A6C[v3 + 71856325] = 0;
        if ( v58 >= 180 )
        {
          dword_140404A6C[v3 + 71856296] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v3 + 71856293] = 0x40000000;
          dword_140404A6C[v3 + 71856295] = 1065353216;
          if ( v58 >= 280 )
            dword_140404A6C[v3 + 71856296] = -1082130432;
        }
      }
    }
  }
  else
  {
    sub_140008440(a1, v6);
    v59 = dword_140404A6C[v7 + 280651314];
    LODWORD(v60) = 0;
    LODWORD(v61) = 0;
    if ( v59 == 1 )
    {
      LODWORD(v61) = 1061752795;
    }
    else if ( ((v59 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v59 - 3) & 0xFFFFFFFD) == 0 )
        LODWORD(v61) = 1075235812;
    }
    else
    {
      LODWORD(v61) = -1072247836;
    }
    if ( (int)dword_140404A6C[v3 + 71859668] > 0 )
    {
      v62 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
      if ( *(float *)((char *)&dword_140404A6C[71859674] + v62) > 8.0 )
      {
        v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&dword_140404A6C[71859672] + v62))));
        v63 = *(float *)((char *)&dword_140404A6C[71859671] + v62) - *(float *)&dword_140404A6C[v7 + 280652142];
        v64 = *(float *)((char *)&dword_140404A6C[71859673] + v62) - *(float *)&dword_140404A6C[v7 + 280652144];
        SR_VEC_LANES(128, v65, f32)[0] = (float)(SR_VEC_LANES(128, v65, f32)[0] - *(float *)&dword_140404A6C[v7 + 280652143]) - 0.25;
        v66 = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * SR_VEC_LANES(128, v65, f32)[0]) + (float)(v63 * v63)) + (float)(v64 * v64);
        v67 = fsqrt(v66);
        if ( v67 == 0.0 )
        {
          v68 = 0.0;
          v65 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
          v69 = 0.0;
        }
        else
        {
          SR_VEC_LANES(128, v65, f32)[0] = SR_VEC_LANES(128, v65, f32)[0] * (float)(1.0 / v67);
          v68 = (float)(1.0 / v67) * v63;
          v69 = (float)(1.0 / v67) * v64;
        }
        v70 = v65;
        v71 = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * *(float *)&dword_140404A6C[5210 * v13 + 129716727])
                    + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716726]))
            + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716728]);
        HIDWORD(v72) = SR_VEC_LANES(128, v65, i32)[1];
        SR_VEC_LANES(128, v70, f32)[0] = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * *(float *)&dword_140404A6C[5210 * v13 + 129716733])
                                + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716732]))
                        + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716734]);
        *(float *)&v72 = sub_14023F704(v71, -SR_VEC_LANES(128, v70, f32)[0]);
        v61 = v72;
        SR_VEC_LANES(128, v70, f32)[0] = (float)(SR_VEC_LANES(128, v70, f32)[0] * SR_VEC_LANES(128, v70, f32)[0]) + (float)(v71 * v71);
        HIDWORD(v60) = 0;
        *(float *)&v60 = sub_14023EDE4(
                           (float)-(float)((float)((float)(SR_VEC_LANES(128, v65, f32)[0]
                                                         * *(float *)&dword_140404A6C[5210 * v13 + 129716730])
                                                 + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716729]))
                                         + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716731])),
                           SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v70)), f64)[0]);
        if ( v66 < 1024.0
          && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v61, *(float *)&dword_140404A6C[v3 + 71856297]), f32)[0]) < 0.125
          && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v60, *(float *)&dword_140404A6C[v3 + 71856298]), f32)[0]) < 0.125 )
        {
          v73 = 1760LL * (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845907];
          v74 = *(float *)&dword_140404A6C[v73 + 278845941];
          v75 = *(float *)&dword_140404A6C[v73 + 278845940];
          v76 = *(float *)&dword_140404A6C[v73 + 278845942];
          if ( (float)((float)((float)(v68 * v75) + (float)(SR_VEC_LANES(128, v65, f32)[0] * v74)) + (float)(v69 * v76)) < -0.9975 )
          {
            v77 = (float *)&dword_140404A6C[280651676];
            v78 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v73 * 4 + 1119597020);
            v79 = 0;
            v85 = *v78 - (float)(v75 * 64.0);
            v86 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v73 * 4 + 1119597020) - (float)(v74 * 64.0);
            v87 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v73 * 4 + 1119597020) - (float)(v76 * 64.0);
            while ( 1 )
            {
              if ( *((_DWORD *)v77 - 373) )
              {
                if ( v4 != v6 )
                {
                  v80 = *((int *)v77 - 371);
                  if ( (_DWORD)v80 != -1
                    && dword_140404A6C[3597 * v80 + 71856286] == dword_140404A6C[v3 + 71856286]
                    && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v77 - 1))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v77 - 1)))
                                     + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v77 - 2))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v77 - 2))))
                             + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v77)
                                     * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v77))) < 4096.0
                    && sub_1400DB060(v79, v78, &v85, 0.25) )
                  {
                    break;
                  }
                }
              }
              ++v79;
              ++v4;
              v77 += 7166;
              if ( v79 >= 256 )
              {
                if ( (!(unsigned int)sub_1400DC940(v13, v78, &v85, 0)
                   || dword_140404A6C[73006993] == -1
                   || dword_140404A6C[73006992] == 1)
                  && (int)dword_140404A6C[v7 + 280658139] > 0
                  && (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845974] > 0 )
                {
                  dword_140404A6C[v3 + 71856325] |= 1u;
                }
                break;
              }
            }
          }
        }
      }
    }
    v81 = *(float *)&dword_140404A6C[v3 + 71856298];
    *(float *)&dword_140404A6C[v3 + 71856297] = (float)((float)(*(float *)&v61
                                                              - *(float *)&dword_140404A6C[v3 + 71856297])
                                                      * 0.0625)
                                              + *(float *)&dword_140404A6C[v3 + 71856297];
    *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(*(float *)&v60 - v81) * 0.0625) + v81;
  }
  if ( (int)dword_140404A6C[5210 * v13 + 129716712] > 0 )
  {
    dword_140404A6C[v3 + 71859667] = 0;
  }
  else if ( (int)++dword_140404A6C[v3 + 71859667] >= 180 )
  {
    dword_140404A6C[v3 + 71856325] |= 0x800u;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140118B70) ----------------------------------------------------
void            sub_140118B70(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ecx
  __int64 v3; // rdi
  unsigned int v4; // edx
  bool v5; // cc
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // r8d
  int *v9; // rdx
  char *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned int *v15; // rbx
  unsigned int v16; // eax
  unsigned int *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax

  v1 = a1;
  v2 = dword_140404A6C[280649838];
  v3 = 3597 * v1;
  v4 = dword_140404A6C[3597 * v1 + 71856342];
  if ( v4 - 1 <= 1 )
    v2 = 1;
  dword_140404A6C[280649838] = v2;
  if ( !v4 )
  {
    dword_140404A6C[280649838] = 0;
    return;
  }
  if ( v2 )
  {
    if ( v4 == 1 )
    {
      sub_1400755F0(240.0, 32.0);
      v5 = dword_140404A6C[v3 + 71856286] <= 5;
      dword_140404A6C[70087067] = 1136918528;
      dword_140404A6C[70087068] = 1134034944;
      if ( v5 )
      {
        v6 = dword_140404A6C[70087076];
        if ( (int)dword_140404A6C[v3 + 71856291] > 0 )
          v6 = 1;
        dword_140404A6C[70087076] = v6;
        if ( (unsigned int)sr_DrawMenuButton("Respawn at Base") )
          dword_140404A6C[v3 + 71856345] = 2;
      }
      v7 = dword_140404A6C[70087076];
      v5 = (int)dword_140404A6C[v3 + 71856291] <= 0;
      dword_140404A6C[70087074] = 30;
      if ( !v5 )
        v7 = 1;
      dword_140404A6C[70087076] = v7;
      if ( (unsigned int)sr_DrawMenuButton("Enter City") )
        dword_140404A6C[v3 + 71856345] = 1;
      sub_1400753C0();
      v4 = dword_140404A6C[v3 + 71856342];
    }
    if ( v4 >= 0xE )
    {
      if ( v4 <= 0x1A )
      {
        if ( dword_140404A6C[283831312] == 4 )
          sub_140119F70(v1);
        else
          sub_140119220(v1);
      }
      return;
    }
    switch ( v4 )
    {
      case 2u:
        sub_14011ACC0(v1);
        return;
      case 9u:
        dword_140404A6C[70087067] = 1082130432;
        dword_140404A6C[70087068] = 1124073472;
        if ( (int)dword_140404A6C[70317962] < 16 )
        {
          dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
          dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
        }
        dword_140404A6C[70087069] = 1132199936;
        dword_140404A6C[70087070] = 1107296256;
        sr_DrawMenuButtonSelectable("Buy", (int *)&dword_140404A6C[v3 + 71856345], 1);
        sr_DrawMenuButtonSelectable("Sell", (int *)&dword_140404A6C[v3 + 71856345], 2);
        v8 = 0;
        v9 = (int *)&dword_140404A6C[280649838];
        v10 = "Done";
LABEL_53:
        *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
LABEL_54:
        sr_DrawMenuButtonSelectable((unsigned __int8 *)v10, v9, v8);
        v18 = dword_140404A6C[70317962];
        if ( (int)dword_140404A6C[70317962] > 0 )
        {
          --dword_140404A6C[70317962];
          v19 = v18 - 1;
          dword_140404A6C[70087069] = dword_140404A6C[2 * v19 + 70317963];
          dword_140404A6C[70087070] = dword_140404A6C[2 * v19 + 70317964];
        }
        return;
      case 0xAu:
        sub_14011A330(v1);
        return;
    }
    if ( v4 != 11 )
    {
      if ( v4 - 12 > 1 )
        return;
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1124073472;
      if ( (int)dword_140404A6C[70317962] < 16 )
      {
        dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
        dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
      }
      v15 = &dword_140404A6C[v3 + 71856345];
      dword_140404A6C[70087069] = 1132199936;
      dword_140404A6C[70087070] = 1107296256;
      sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v3 + 71856345], 7);
      sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v3 + 71856345], 1);
      sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v3 + 71856345], 2);
      sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v3 + 71856345], 3);
      sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v3 + 71856345], 4);
      sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v3 + 71856345], 5);
      sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v3 + 71856345], 6);
      v16 = dword_140404A6C[v3 + 71856342];
      v17 = &dword_140404A6C[280649838];
      if ( v16 == 12 )
        v17 = v15;
      v8 = 0;
      if ( v16 == 12 )
        v8 = 16;
      v10 = "Done";
      if ( v16 == 12 )
        v10 = "Back";
      v9 = (int *)v17;
      goto LABEL_53;
    }
    if ( (_DWORD)v1 == -1 )
      return;
    v11 = (int)dword_140404A6C[v3 + 71856343];
    if ( (_DWORD)v11 == -1 )
      return;
    dword_140404A6C[70087067] = 1082130432;
    dword_140404A6C[70087068] = 1124073472;
    sub_1400755F0(252.0, 32.0);
    v12 = 14019 * v11;
    v13 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 291638736);
    v14 = dword_140404A6C[v12 + 225641203];
    if ( v14 == 3 )
    {
      sr_DrawMenuButtonSelectable("Sell Car", v13, 1);
      v14 = dword_140404A6C[v12 + 225641203];
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
      if ( v14 == 3 )
        goto LABEL_38;
    }
    else
    {
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    }
    v13 = (int *)&dword_140404A6C[280649838];
LABEL_38:
    v8 = 0;
    if ( v14 == 3 )
      v8 = 16;
    v10 = "Done";
    if ( v14 == 3 )
      v10 = "Back";
    v9 = v13;
    goto LABEL_54;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;

//----- (0000000140119050) ----------------------------------------------------
__int64            sub_140119050(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int *v3; // rdx
  int v4; // r8d
  char *v5; // rcx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v1 = 3597LL * a1;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v1 + 71856345], 7);
  sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v1 + 71856345], 1);
  sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v1 + 71856345], 2);
  sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v1 + 71856345], 3);
  sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v1 + 71856345], 4);
  sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v1 + 71856345], 5);
  sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v1 + 71856345], 6);
  v2 = dword_140404A6C[v1 + 71856342];
  v3 = &dword_140404A6C[280649838];
  if ( v2 == 12 )
    v3 = &dword_140404A6C[v1 + 71856345];
  v4 = 0;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  if ( v2 == 12 )
    v4 = 16;
  v5 = "Done";
  if ( v2 == 12 )
    v5 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v5, (int *)v3, v4);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140119220) ----------------------------------------------------
__int64            sub_140119220(int a1)
{
  unsigned int v1; // xmm2_4
  unsigned int v2; // xmm3_4
  signed int v3; // edi
  __int64 v4; // rbx
  signed int v5; // ecx
  unsigned int v6; // xmm1_4
  unsigned int v7; // xmm8_4
  float v8; // xmm6_4
  unsigned int v9; // eax
  signed int v10; // r14d
  unsigned int *v11; // r15
  unsigned int *v12; // rcx
  unsigned __int8 *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  int v16; // r8d
  int *v17; // r14
  unsigned int *v18; // rcx
  unsigned __int8 *v19; // rdx
  char v20; // al
  unsigned int v21; // eax
  __int64 v23; // [rsp+8h] [rbp-100h] BYREF
  char v24[512]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 v25[512]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v26; // [rsp+438h] [rbp+330h]

  v1 = 1082130432;
  v2 = 1115684864;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1115684864;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    v2 = dword_140404A6C[70087068];
    v1 = dword_140404A6C[70087067];
  }
  v3 = 0;
  v4 = 3597LL * a1;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087084] = v1;
  dword_140404A6C[70087085] = v2;
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087083] = 0;
  sr_DrawMenuButtonSelectable("Weapons", (int *)&dword_140404A6C[v4 + 71856345], 128);
  sr_DrawMenuButtonSelectable("Ammo", (int *)&dword_140404A6C[v4 + 71856345], 129);
  sr_DrawMenuButtonSelectable("Equipment", (int *)&dword_140404A6C[v4 + 71856345], 130);
  if ( dword_140404A6C[283831312] != 7 )
  {
    sr_DrawMenuButtonSelectable("Vehicles", (int *)&dword_140404A6C[v4 + 71856345], 131);
    sr_DrawMenuButtonSelectable("Stocks", (int *)&dword_140404A6C[v4 + 71856345], 132);
  }
  if ( dword_140404A6C[v4 + 71856289] )
    sr_DrawMenuButtonSelectable("Manager", (int *)&dword_140404A6C[v4 + 71856345], 133);
  if ( !dword_140404A6C[70087083] )
  {
    dword_140404A6C[70087067] = dword_140404A6C[70087084];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087086] + *(float *)&dword_140404A6C[70087085];
    if ( dword_140404A6C[70326263] )
    {
      ++dword_140404A6C[70326521];
      dword_140404A6C[70326520] = 0;
    }
  }
  v5 = dword_140404A6C[70317962];
  dword_140404A6C[70087083] = 1;
  if ( (int)dword_140404A6C[70317962] <= 0 )
  {
    v6 = dword_140404A6C[70087069];
  }
  else
  {
    v5 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v5;
    v6 = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087069] = v6;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
  }
  v7 = 1107296256;
  v8 = 128.0;
  dword_140404A6C[70087067] = 1107296256;
  dword_140404A6C[70087068] = 1124073472;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = v6;
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  v9 = dword_140404A6C[v4 + 71856342];
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  if ( v9 == 14 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278535234]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278530162]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278522554]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278525090]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278532698]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 15 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278536502]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm Magazine", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278531430]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278523822]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278526358]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278533966]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi Magazine", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 16 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278539038]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Bandage", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278540306]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Briefcase", (int *)&dword_140404A6C[v4 + 71856345], 7);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278537770]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Grenade", (int *)&dword_140404A6C[v4 + 71856345], 6);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 17 )
  {
    v10 = 0;
    if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
    {
      v11 = &dword_140404A6C[v4 + 71858004];
      do
      {
        if ( v10 == 4 )
        {
          v7 = 1140850688;
          v8 = 128.0;
        }
        dword_140404A6C[70087067] = v7;
        *(float *)&dword_140404A6C[70087068] = v8;
        v12 = &dword_140404A6C[18 * v10 + 71857988 + v4];
        v13 = (unsigned __int8 *)(v25 - (unsigned __int8 *)v12);
        do
        {
          v14 = *(_BYTE *)v12;
          *((_BYTE *)v12 + (_QWORD)v13) = *(_BYTE *)v12;
          v12 = (unsigned int *)((char *)v12 + 1);
        }
        while ( v14 );
        sub_140158AB0(v24, "$%d", *v11);
        sub_1400764B0(
          v24,
          (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
          (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
          12.0,
          10);
        v15 = dword_140404A6C[70087076];
        v16 = *(v11 - 17);
        if ( (int)*v11 > (int)dword_140404A6C[v4 + 71856272] )
          v15 = 1;
        dword_140404A6C[70087076] = v15;
        sr_DrawMenuButtonSelectable(v25, (int *)&dword_140404A6C[v4 + 71856345], v16);
        ++v10;
        v8 = v8 + 44.0;
        v11 += 18;
      }
      while ( v10 < (int)dword_140404A6C[v4 + 71857986] );
      v9 = dword_140404A6C[v4 + 71856342];
      v5 = dword_140404A6C[70317962];
    }
  }
  if ( v9 == 18 )
  {
    dword_140404A6C[70087067] = v7;
    *(float *)&dword_140404A6C[70087068] = v8;
    sr_DrawMenuButtonSelectable("Buy 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sr_DrawMenuButtonSelectable("Buy 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sr_DrawMenuButtonSelectable("Buy 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sr_DrawMenuButtonSelectable("Buy 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 3);
    dword_140404A6C[70087067] = 1140850688;
    dword_140404A6C[70087068] = 1124073472;
    v7 = 1140850688;
    v8 = 128.0;
    sr_DrawMenuButtonSelectable("Sell 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 4);
    sr_DrawMenuButtonSelectable("Sell 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 5);
    sr_DrawMenuButtonSelectable("Sell 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 6);
    sr_DrawMenuButtonSelectable("Sell 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 7);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 != 19 )
    goto LABEL_47;
  dword_140404A6C[70087067] = v7;
  *(float *)&dword_140404A6C[70087068] = v8;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  dword_140404A6C[70087070] = 1102053376;
  dword_140404A6C[70087069] = 1132199936;
  if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
  {
    v17 = (int *)&dword_140404A6C[v4 + 71857987];
    do
    {
      if ( v3 == 10 )
      {
        dword_140404A6C[70087067] = 1140850688;
        dword_140404A6C[70087068] = 1124073472;
      }
      v18 = &dword_140404A6C[18 * v3 + 71857988 + v4];
      v19 = (unsigned __int8 *)(v25 - (unsigned __int8 *)v18);
      do
      {
        v20 = *(_BYTE *)v18;
        *((_BYTE *)v18 + (_QWORD)v19) = *(_BYTE *)v18;
        v18 = (unsigned int *)((char *)v18 + 1);
      }
      while ( v20 );
      sr_DrawMenuButtonSelectable(v25, (int *)&dword_140404A6C[v4 + 71856345], *v17);
      ++v3;
      v17 += 18;
    }
    while ( v3 < (int)dword_140404A6C[v4 + 71857986] );
    v5 = dword_140404A6C[70317962];
  }
  if ( v5 > 0 )
  {
    dword_140404A6C[70317962] = --v5;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
LABEL_47:
    if ( v5 > 0 )
    {
      dword_140404A6C[70317962] = --v5;
      dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
    }
  }
  dword_140404A6C[70087068] = 1138491392;
  dword_140404A6C[70087067] = 1107296256;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  v21 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v21 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v21 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (0000000140119F70) ----------------------------------------------------
__int64            sub_140119F70(int a1)
{
  char v1; // bp
  __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // xmm1_4
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // edx
  int *v8; // rsi
  int v9; // r8d
  unsigned int *v10; // rcx
  unsigned __int8 *v11; // rdx
  char v12; // al
  signed int v13; // ebx
  int *v14; // rsi
  int v15; // r8d
  unsigned int *v16; // rcx
  unsigned __int8 *v17; // rdx
  char v18; // al
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-258h] BYREF
  unsigned __int8 v23[512]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v24; // [rsp+220h] [rbp-38h]

  v1 = 0;
  v2 = a1;
  v3 = dword_140404A6C[70317962];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087068] = 1115684864;
  dword_140404A6C[70087084] = 1098907648;
  dword_140404A6C[70087085] = 1115684864;
  dword_140404A6C[70087083] = 0;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v3 = ++dword_140404A6C[70317962];
  }
  v4 = 1126170624;
  v5 = 0;
  v6 = 3597 * v2;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  v7 = dword_140404A6C[3597 * v2 + 71857986];
  if ( v7 > 0 )
  {
    v8 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v9 = *v8;
      if ( (*v8 & 0x1000000) != 0 )
      {
        v10 = &dword_140404A6C[18 * v5 + 71857988 + v6];
        v11 = (unsigned __int8 *)(v23 - (unsigned __int8 *)v10);
        do
        {
          v12 = *(_BYTE *)v10;
          *((_BYTE *)v10 + (_QWORD)v11) = *(_BYTE *)v10;
          v10 = (unsigned int *)((char *)v10 + 1);
        }
        while ( v12 );
        sr_DrawMenuButtonSelectable(v23, (int *)&dword_140404A6C[v6 + 71856345], v9);
      }
      v7 = dword_140404A6C[v6 + 71857986];
      ++v5;
      v8 += 18;
    }
    while ( v5 < v7 );
    v3 = dword_140404A6C[70317962];
    v4 = dword_140404A6C[70087069];
  }
  if ( v3 > 0 )
  {
    dword_140404A6C[70317962] = --v3;
    v4 = dword_140404A6C[2 * v3 + 70317963];
    dword_140404A6C[70087069] = v4;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v3 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087083] = 1;
  dword_140404A6C[70087068] = 1124073472;
  if ( v3 < 16 )
  {
    dword_140404A6C[2 * v3 + 70317963] = v4;
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v13 = 0;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1108344832;
  if ( v7 > 0 )
  {
    v14 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v15 = *v14;
      if ( (*v14 & 0x1000000) == 0 )
      {
        v16 = &dword_140404A6C[18 * v13 + 71857988 + v6];
        v17 = (unsigned __int8 *)(v23 - (unsigned __int8 *)v16);
        do
        {
          v18 = *(_BYTE *)v16;
          *((_BYTE *)v16 + (_QWORD)v17) = *(_BYTE *)v16;
          v16 = (unsigned int *)((char *)v16 + 1);
        }
        while ( v18 );
        v19 = dword_140404A6C[70087076];
        if ( (v15 & 0x100) != 0 )
          v19 = 1;
        dword_140404A6C[70087076] = v19;
        sr_DrawMenuButtonSelectable(v23, (int *)&dword_140404A6C[v6 + 71856345], v15);
        if ( (v1 & 7) == 7 )
        {
          dword_140404A6C[70087068] = 1124073472;
          *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 284.0;
        }
        ++v1;
      }
      ++v13;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 71857986] );
  }
  dword_140404A6C[70087068] = 1139802112;
  dword_140404A6C[70087067] = 1098907648;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (000000014011A330) ----------------------------------------------------
void            sub_14011A330(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // r13
  __int64 v5; // r15
  signed int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rdx
  char v11; // al
  _WORD *v12; // rcx
  char *v13; // rcx
  unsigned int v14; // ecx
  int *v15; // r14
  unsigned int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int *v22; // rbx
  char *v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // ecx
  int *v28; // rdx
  char *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-100h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  char v34[504]; // [rsp+40h] [rbp-C8h] BYREF
  char v35[512]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v36; // [rsp+438h] [rbp+330h]

  if ( a1 != -1 )
  {
    v1 = 3597LL * a1;
    v2 = (int)dword_140404A6C[v1 + 71856343];
    if ( (_DWORD)v2 != -1 )
    {
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1115684864;
      sub_1400755F0(252.0, 28.0);
      v3 = 0;
      v4 = v2;
      v5 = 14019 * v2;
      v6 = 0;
      if ( (int)dword_140404A6C[14019 * v2 + 225654128] > 0 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( dword_140404A6C[v5 + 225641203] == 3 )
          {
            LOBYTE(v33) = 0;
            v8 = (int)dword_140404A6C[14019 * v4 + 225654131 + 3 * v7];
            if ( (int)v8 < 6 )
            {
              v9 = off_1402B23E0[v8];
              v10 = (char *)((char *)&v33 - v9);
              do
              {
                v11 = *v9;
                v10[(_QWORD)v9] = *v9;
                ++v9;
              }
              while ( v11 );
            }
            v12 = (_WORD *)((char *)&v32 + 7);
            do
            {
              v21 = *((_BYTE *)v12 + 1) == 0;
              v12 = (_WORD *)((char *)v12 + 1);
            }
            while ( !v21 );
            *v12 = 32;
            v13 = (char *)&v32 + 7;
            do
              v21 = *++v13 == 0;
            while ( !v21 );
            strcpy(
              v13,
              (     char *)&dword_140404A6C[24944 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 346707722]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v14 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v14 = 1;
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v14;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          }
          else
          {
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
          }
          v16 = dword_140404A6C[v5 + 225641203];
          if ( v16 != 5 )
            goto LABEL_44;
          if ( v6 )
          {
            switch ( v6 )
            {
              case 1:
                v17 = 0x7469755320646552LL;
                v34[0] = 0;
                break;
              case 2:
                v17 = 0x7553206574696857LL;
                strcpy(v34, "it");
                break;
              case 3:
                v17 = 0x6563616C6B63654ELL;
                v34[0] = 0;
                break;
              case 4:
                v17 = 0x63654E2068736143LL;
                strcpy(v34, "klace");
                break;
              default:
                goto LABEL_29;
            }
          }
          else
          {
            v17 = 0x6975532065756C42LL;
            strcpy(v34, "t");
          }
          v33 = v17;
LABEL_29:
          v18 = v7 + 4673 * v4;
          v19 = 3 * v18;
          sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v18 + 225654130]);
          sub_1400764B0(
            v35,
            (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
            (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
            12.0,
            10);
          v20 = dword_140404A6C[70087076];
          if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v19 + 225654130] )
            v20 = 1;
          dword_140404A6C[70087076] = v20;
          switch ( v6 )
          {
            case 0:
              v21 = dword_140404A6C[v1 + 71859822] == 3;
              goto LABEL_41;
            case 1:
              v21 = dword_140404A6C[v1 + 71859822] == 8;
              goto LABEL_41;
            case 2:
              v21 = dword_140404A6C[v1 + 71859822] == 7;
              goto LABEL_41;
            case 3:
              v21 = dword_140404A6C[v1 + 71859826] == 1;
              goto LABEL_41;
            case 4:
              v21 = dword_140404A6C[v1 + 71859826] == 2;
LABEL_41:
              if ( v21 )
                dword_140404A6C[70087076] = 1;
              break;
          }
          v15 = (int *)&dword_140404A6C[v1 + 71856345];
          sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          v16 = dword_140404A6C[v5 + 225641203];
LABEL_44:
          v22 = (unsigned int *)v15;
          if ( v16 == 8 )
          {
            LOBYTE(v33) = 0;
            v23 = (char *)&v32 + 7;
            do
              v21 = *++v23 == 0;
            while ( !v21 );
            strcpy(
              v23,
              (     char *)&dword_140404A6C[1268 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 278521297]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v24 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v24 = 1;
            v22 = &dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v24;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
            v16 = dword_140404A6C[v5 + 225641203];
          }
          if ( v16 == 9 )
          {
            v25 = v7 + 4673 * v4;
            v26 = 3 * v25;
            sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v25 + 225654130]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v27 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v26 + 225654130] )
              v27 = 1;
            dword_140404A6C[70087076] = v27;
            sr_DrawMenuButtonSelectable("Burger", v15, v6 + 1);
            v22 = (unsigned int *)v15;
          }
          ++v6;
          ++v7;
          if ( v6 >= (int)dword_140404A6C[v5 + 225654128] )
          {
            v3 = 0;
            goto LABEL_57;
          }
        }
      }
      v22 = &dword_140404A6C[v1 + 71856345];
LABEL_57:
      v28 = (int *)&dword_140404A6C[280649838];
      if ( dword_140404A6C[v5 + 225641203] == 3 )
      {
        v28 = (int *)v22;
        v3 = 16;
      }
      v29 = "Done";
      if ( dword_140404A6C[v5 + 225641203] == 3 )
        v29 = "Back";
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 28.0;
      sr_DrawMenuButtonSelectable((unsigned __int8 *)v29, v28, v3);
      v30 = dword_140404A6C[70317962];
      if ( (int)dword_140404A6C[70317962] > 0 )
      {
        --dword_140404A6C[70317962];
        dword_140404A6C[70087069] = dword_140404A6C[2 * (v30 - 1) + 70317963];
        dword_140404A6C[70087070] = dword_140404A6C[2 * (v30 - 1) + 70317964];
      }
    }
    sub_1401F8B20((unsigned __int64)&v31 ^ v36);
  }
}

// 1402B23E0: using guessed type char *off_1402B23E0[6];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011AA20) ----------------------------------------------------
__int64            sub_14011AA20(int a1)
{
  int *v1; // rbx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  v1 = (int *)&dword_140404A6C[3597 * a1 + 71856345];
  sr_DrawMenuButtonSelectable("Buy", v1, 1);
  sr_DrawMenuButtonSelectable("Sell", v1, 2);
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011AB60) ----------------------------------------------------
void            sub_14011AB60(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdi
  int *v4; // rbx
  unsigned int v5; // eax
  int v6; // r8d
  char *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax

  if ( a1 == -1 )
    return;
  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856343];
  if ( (_DWORD)v2 == -1 )
    return;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  sub_1400755F0(252.0, 32.0);
  v3 = 14019 * v2;
  v4 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 * 4 + 291638736);
  v5 = dword_140404A6C[v3 + 225641203];
  if ( v5 == 3 )
  {
    sr_DrawMenuButtonSelectable("Sell Car", v4, 1);
    v5 = dword_140404A6C[v3 + 225641203];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    if ( v5 == 3 )
      goto LABEL_8;
  }
  else
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  }
  v4 = (int *)&dword_140404A6C[280649838];
LABEL_8:
  v6 = 0;
  if ( v5 == 3 )
    v6 = 16;
  v7 = "Done";
  if ( v5 == 3 )
    v7 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v7, v4, v6);
  v8 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    v9 = v8 - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v9 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v9 + 70317964];
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011ACC0) ----------------------------------------------------
__int64            sub_14011ACC0(int a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // r8d
  char *v5; // rcx
  signed int v6; // ecx
  __int64 result; // rax

  v1 = a1;
  if ( dword_140404A6C[283831312] == 2 || dword_140404A6C[283831312] == 5 )
  {
    v6 = dword_140404A6C[70317962];
    goto LABEL_22;
  }
  dword_140404A6C[70087084] = dword_140404A6C[70087067];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087085] = dword_140404A6C[70087068];
  dword_140404A6C[70087083] = 0;
  sub_1400755F0(248.0, 32.0);
  v2 = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1119879168;
  v3 = 3597 * v1;
  do
  {
    if ( dword_140404A6C[v3 + 71856286] != 17 )
      goto LABEL_12;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        dword_140404A6C[70087074] = 31;
        v4 = 2;
        v5 = "Join Monsota";
      }
      else
      {
        if ( dword_140404A6C[283831312] == 7 )
          goto LABEL_12;
        dword_140404A6C[70087074] = v2 + 30;
        v4 = v2 + 1;
        v5 = "Join OXS";
      }
    }
    else
    {
      dword_140404A6C[70087074] = 30;
      v4 = 1;
      v5 = "Join Goldmen";
    }
    sr_DrawMenuButtonSelectable((unsigned __int8 *)v5, (int *)&dword_140404A6C[v3 + 71856345], v4);
LABEL_12:
    ++v2;
  }
  while ( v2 < 3 );
  if ( dword_140404A6C[v3 + 71856286] != 17 )
  {
    dword_140404A6C[70087067] = 1144717312;
    dword_140404A6C[70087074] = 33;
    sr_DrawMenuButtonSelectable("Observer", (int *)&dword_140404A6C[v3 + 71856345], 4);
  }
  v6 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    v6 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v6;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v6 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v6 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087083] = 1;
LABEL_22:
  dword_140404A6C[70087067] = 1146028032;
  dword_140404A6C[70087068] = 1107296256;
  if ( v6 < 16 )
  {
    dword_140404A6C[2 * v6 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087074] = 21;
  sr_DrawMenuButtonSelectable("Ready", (int *)&dword_140404A6C[3597 * v1 + 71856345], 5);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

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

//----- (000000014011B2A0) ----------------------------------------------------
void sub_14011B2A0()
{
  unsigned int v0; // r9d
  unsigned int *v1; // r14
  int v2; // ebx
  unsigned int *v3; // r12
  unsigned int v4; // r11d
  unsigned int v5; // r13d
  __int64 v6; // r10
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int *v15; // r15
  int v16; // eax
  unsigned int *v17; // rbp
  int v18; // eax
  unsigned int *v19; // r8
  unsigned int *v20; // r11
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // r9
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // [rsp+30h] [rbp+8h]

  v0 = dword_140404A6C[284022502];
  v1 = &dword_140404A6C[71856339];
  v2 = dword_140404A6C[283831451];
  v3 = &dword_140404A6C[71856302];
  v4 = dword_140404A6C[283831441];
  v5 = dword_140404A6C[283831312];
  v6 = 256;
  v7 = 0;
  v36 = 256;
  do
  {
    if ( !*(v1 - 86) )
      goto LABEL_48;
    v8 = *(v1 - 48);
    if ( v8 > 0 )
      *(v1 - 48) = v8 - 1;
    v9 = (int)*(v1 - 47);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      v11 = (int)*(v1 - 47);
      v12 = dword_140404A6C[7166 * v9 + 280651313] == -1;
      dword_140404A6C[7166 * v9 + 280651307] = *(v1 - 51);
      if ( !v12 )
        goto LABEL_13;
      if ( *v1 == 1 )
      {
        v13 = 7166 * v11;
        dword_140404A6C[v13 + 280651377] = *(v3 - 9);
        dword_140404A6C[v13 + 280651378] = *(v3 - 8);
        dword_140404A6C[v13 + 280651379] = *(v3 - 7);
        dword_140404A6C[v13 + 280651380] = *(v3 - 6);
        dword_140404A6C[v13 + 280651381] = *(v3 - 5);
        dword_140404A6C[v13 + 280651382] = *(v3 - 4);
        dword_140404A6C[v13 + 280651383] = *(v3 - 3);
        dword_140404A6C[v13 + 280651384] = *(v3 - 2);
        dword_140404A6C[v13 + 280651385] = *(v3 - 1);
        dword_140404A6C[v13 + 280651386] = *v3;
        dword_140404A6C[v13 + 280651387] = v3[1];
        dword_140404A6C[v13 + 280651388] = v3[2];
        dword_140404A6C[v13 + 280651389] = v3[3];
        dword_140404A6C[v13 + 280651390] = v3[4];
        dword_140404A6C[v13 + 280651391] = v3[5];
        dword_140404A6C[v13 + 280651392] = v3[6];
        dword_140404A6C[v13 + 280651393] = v3[7];
        dword_140404A6C[v13 + 280651394] = v3[8];
        dword_140404A6C[v13 + 280651395] = v3[9];
        dword_140404A6C[v13 + 280651396] = v3[10];
        if ( v5 == 7 && v2 < (int)(60 * v0) )
        {
          dword_140404A6C[v10 + 280651378] = 0;
          dword_140404A6C[v10 + 280651380] = 0;
        }
      }
      else
      {
        dword_140404A6C[v10 + 280651381] = dword_140404A6C[v10 + 280651341];
        dword_140404A6C[v10 + 280651382] = dword_140404A6C[v10 + 280651342];
      }
      if ( dword_140404A6C[v10 + 280651313] != -1 )
      {
LABEL_13:
        if ( *v1 - 2 <= 1 )
        {
          v14 = 7166 * v11;
          dword_140404A6C[v14 + 280651377] = *(v3 - 9);
          dword_140404A6C[v14 + 280651378] = *(v3 - 8);
          dword_140404A6C[v14 + 280651379] = *(v3 - 7);
          dword_140404A6C[v14 + 280651380] = *(v3 - 6);
          dword_140404A6C[v14 + 280651381] = *(v3 - 5);
          dword_140404A6C[v14 + 280651382] = *(v3 - 4);
          dword_140404A6C[v14 + 280651383] = *(v3 - 3);
          dword_140404A6C[v14 + 280651384] = *(v3 - 2);
        }
      }
      dword_140404A6C[v10 + 280651436] = *(v1 - 14);
      v15 = v1 + 1376;
      dword_140404A6C[v10 + 280651327] = *(v1 - 9);
      v16 = dword_140404A6C[v10 + 280651318];
      if ( v16 < 0 )
        v16 = 0;
      v17 = &dword_140404A6C[v10 + 280658140];
      v1[1372] = v16;
      do
      {
        v18 = *(v17 - 1);
        *(v15 - 1) = v18;
        if ( v18 > 0 )
        {
          v19 = v15;
          v20 = v17;
          v21 = (unsigned int)v18;
          do
          {
            v22 = 1760LL * (int)*v20;
            v23 = (int)dword_140404A6C[v22 + 278845898];
            *v19 = v23;
            v24 = v23;
            if ( (unsigned int)v7 < 2 )
            {
              if ( dword_140404A6C[1268 * v23 + 278521289] )
              {
                if ( (int)dword_140404A6C[v22 + 278845906] > 0 )
                {
                  v24 = v23 | 0x100;
                  v25 = 1760LL * (int)dword_140404A6C[v22 + 278845907];
                  *v19 = v23 | 0x100;
                  if ( !dword_140404A6C[v25 + 278845974] )
                  {
                    v24 = v23 | 0x300;
                    *v19 = v23 | 0x300;
                  }
                }
              }
              if ( (_DWORD)v23 == 16 && (int)dword_140404A6C[v22 + 278845906] > 0 )
              {
                v24 |= 0x100u;
                *v19 = v24;
              }
              if ( (int)dword_140404A6C[1268 * v23 + 278521294] > 0 )
                *v19 = v24 | (dword_140404A6C[v22 + 278845974] << 8);
            }
            ++v20;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        ++v7;
        v15 += 9;
        v17 += 10;
      }
      while ( v7 < 7 );
      v5 = dword_140404A6C[283831312];
      v6 = v36;
      v7 = 0;
      v4 = dword_140404A6C[283831441];
      v2 = dword_140404A6C[283831451];
    }
    if ( v5 == 4 )
    {
      v26 = (int)*(v1 - 53);
      if ( (unsigned int)v26 > 5 )
      {
        v27 = 0;
        v28 = 0;
      }
      else
      {
        v27 = dword_140404A6C[5 * v26 + 188872238];
        v28 = dword_140404A6C[5 * v26 + 188872237];
      }
      *(v1 - 66) = v28;
      *(v1 - 65) = v27;
      v29 = (int)*(v1 - 71);
      if ( (_DWORD)v29 == -1 )
        goto LABEL_47;
      v30 = *(v1 - 67);
      if ( (unsigned int)v26 <= 5 )
        v30 = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v26 + 335047062] * 0.94999999)
                                 * (float)(int)*(v1 - 51))
                         + (float)v30);
      v31 = 28 * v29;
      dword_140404A6C[v31 + 134050374] = v30;
      dword_140404A6C[v31 + 134050375] = *(v1 - 64);
      dword_140404A6C[v31 + 134050376] = *(v1 - 63);
      dword_140404A6C[v31 + 134050377] = *(v1 - 48);
    }
    if ( v5 == 3 && v4 != 1 )
    {
      v32 = (int)*(v1 - 71);
      if ( (_DWORD)v32 != -1 )
      {
        v33 = (int)*(v1 - 53);
        v34 = *(v1 - 67);
        v35 = 28 * v32;
        if ( (_DWORD)v33 == -1 )
          dword_140404A6C[v35 + 134050374] = v34;
        else
          dword_140404A6C[v35 + 134050374] = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v33 + 335047062]
                                                                        * 0.98000002)
                                                                * (float)(int)*(v1 - 51))
                                                        + (float)v34);
      }
    }
LABEL_47:
    v0 = dword_140404A6C[284022502];
    *(v1 - 13) = *(v1 - 14);
LABEL_48:
    v3 += 3597;
    v1 += 3597;
    v36 = --v6;
  }
  while ( v6 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCB0: using guessed type unsigned int;
// 183EBFCD8: using guessed type unsigned int;
// 183F7A604: using guessed type unsigned int;

//----- (000000014011B7F0) ----------------------------------------------------
__int64            sub_14011B7F0(int a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r10d
  __int64 v7; // [rsp+0h] [rbp-258h] BYREF
  _BYTE v8[512]; // [rsp+30h] [rbp-228h] BYREF
  __int64 v9; // [rsp+230h] [rbp-28h]

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
__int64            sub_14011BF40(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4; // r11d
  __int64 result; // rax
  float *v7; // rcx
  __int64 v8; // r8
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm10_4
  float v12; // xmm8_4
  float v13; // xmm11_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm6_4

  v4 = 0;
  result = a1;
  if ( *(int *)a2 > 0 )
  {
    v7 = (float *)(a1 + 8);
    v8 = -8 - result;
    do
    {
      ++v4;
      v9 = a4[4];
      result = v8 + *(_QWORD *)(a2 + 8);
      v10 = a4[7];
      v11 = a4[5];
      v12 = *(float *)((char *)v7 + result);
      v13 = *(float *)((char *)v7 + result + 4);
      v14 = *(float *)((char *)v7 + result + 8);
      v15 = a4[8];
      v16 = a4[1] * v12;
      v17 = a4[2] * v12;
      *(v7 - 2) = (float)((float)(v12 * *a4) + (float)(v14 * a4[6])) + (float)((float)(v13 * a4[3]) + *a3);
      *(v7 - 1) = (float)((float)(v10 * v14) + v16) + (float)((float)(v9 * v13) + a3[1]);
      *v7 = (float)((float)(v15 * v14) + v17) + (float)((float)(v11 * v13) + a3[2]);
      v7 += 3;
    }
    while ( v4 < *(_DWORD *)a2 );
  }
  return result;
}


//----- (000000014011C080) ----------------------------------------------------
_UNKNOWN **           sub_14011C080(float *a1, float *a2, float *a3)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm11_4
  float v11; // xmm14_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm10_4
  float v15; // xmm15_4
  float v16; // xmm6_4
  float v17; // [rsp+0h] [rbp-B8h]
  float v18; // [rsp+4h] [rbp-B4h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  float v20; // [rsp+C0h] [rbp+8h]
  float v21; // [rsp+C8h] [rbp+10h]
  float v22; // [rsp+D0h] [rbp+18h]
  float v23; // [rsp+D8h] [rbp+20h]

  v4 = a3[1];
  v5 = a3[2];
  v21 = a2[5];
  v20 = a2[7];
  v22 = a2[6];
  v23 = a2[8];
  v6 = *a3;
  v7 = a3[4];
  v8 = a3[3];
  v9 = a3[5];
  v10 = a2[1];
  v11 = *a2;
  v12 = a2[2];
  v13 = a2[4];
  v14 = a2[3];
  v15 = a3[7];
  v17 = a3[6];
  v18 = a3[8];
  v16 = (float)(*a3 * v22) + (float)(v4 * v20);
  *a1 = (float)((float)(v4 * v10) + (float)(*a3 * *a2)) + (float)(v5 * v12);
  a1[2] = v16 + (float)(v5 * v23);
  a1[1] = (float)((float)(v6 * v14) + (float)(v4 * v13)) + (float)(v5 * v21);
  a1[3] = (float)((float)(v11 * v8) + (float)(v10 * v7)) + (float)(v12 * v9);
  a1[4] = (float)((float)(v8 * v14) + (float)(v7 * v13)) + (float)(v9 * v21);
  a1[5] = (float)((float)(v8 * v22) + (float)(v7 * v20)) + (float)(v9 * v23);
  a1[6] = (float)((float)(v11 * v17) + (float)(v10 * v15)) + (float)(v12 * v18);
  a1[8] = (float)((float)(v17 * v22) + (float)(v15 * v20)) + (float)(v18 * v23);
  a1[7] = (float)((float)(v17 * v14) + (float)(v15 * v13)) + (float)(v18 * v21);
  return &retaddr;
}

// 14011C080: returning address of temporary local variable '%__return_address'

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
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm5_4
  float v6; // xmm9_4
  float v7; // xmm4_4
  float v8; // xmm11_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v3 = a2[1];
  v4 = a2[3];
  v5 = (float)(a2[2] * *a2) + (float)(a2[2] * *a2);
  v6 = (float)(*a2 * *a2) + (float)(*a2 * *a2);
  v7 = (float)(v3 * *a2) + (float)(v3 * *a2);
  v8 = (float)(*a2 * v4) + (float)(*a2 * v4);
  v9 = (float)(v3 * v4) + (float)(v3 * v4);
  v10 = (float)(a2[2] * v4) + (float)(a2[2] * v4);
  v11 = a2[2] * a2[2];
  v12 = (float)(v3 * v3) + (float)(v3 * v3);
  v13 = (float)(a2[2] * v3) + (float)(a2[2] * v3);
  *a1 = 1.0 - (float)((float)(v11 + v11) + v12);
  a1[1] = v7 - v10;
  a1[3] = v7 + v10;
  a1[2] = v5 + v9;
  a1[5] = v13 - v8;
  a1[6] = v5 - v9;
  a1[7] = v13 + v8;
  a1[4] = 1.0 - (float)((float)(v11 + v11) + v6);
  a1[8] = 1.0 - (float)(v12 + v6);
  return &retaddr;
}

// 14011C340: returning address of temporary local variable '%__return_address'

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


//----- (000000014011C510) ----------------------------------------------------
void            sub_14011C510(int a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rax

  if ( a2 >= 0 )
  {
    v4 = 263004LL * a1;
    if ( a2 < (int)(dword_140404A6C[v4 + 111579650] << 6)
      && a3 >= 0
      && a3 < (int)(dword_140404A6C[v4 + 111579651] << 6)
      && a4 >= 0
      && a4 < (int)(dword_140404A6C[v4 + 111579652] << 6) )
    {
      v5 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                  + 4LL
                  * (int)(((unsigned int)a2 >> 6)
                        + dword_140404A6C[v4 + 111579650]
                        * (((unsigned int)a4 >> 6) + dword_140404A6C[v4 + 111579652] * ((unsigned int)a3 >> 6))));
      if ( (_DWORD)v5 != -1 )
      {
        v6 = (int)dword_140404A6C[263004 * a1
                                + 111579985
                                + 513 * v5
                                + (int)((((unsigned int)a2 >> 3) & 7)
                                      + 8 * ((((unsigned int)a4 >> 3) & 7) + 8 * (((unsigned int)a3 >> 3) & 7)))];
        if ( (_DWORD)v6 != -1 )
        {
          dword_140404A6C[6930 * v6 + 83201282] = 1;
          dword_140404A6C[6930 * v6 + 83201283 + ((unsigned __int64)(a3 & 6) >> 1)] = 1;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v67; // [rsp+8h] [rbp-100h] BYREF
  float v68; // [rsp+28h] [rbp-E0h] BYREF
  float v69; // [rsp+2Ch] [rbp-DCh]
  float v70; // [rsp+30h] [rbp-D8h]
  int v71; // [rsp+38h] [rbp-D0h]
  float v72; // [rsp+40h] [rbp-C8h] BYREF
  float v73; // [rsp+44h] [rbp-C4h]
  __int64 v74; // [rsp+48h] [rbp-C0h]
  __int64 v75; // [rsp+50h] [rbp-B8h]
  unsigned int *v76; // [rsp+58h] [rbp-B0h]
  _BYTE v77[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+70h] [rbp-98h]

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

//----- (000000014011D470) ----------------------------------------------------
__int64 sub_14011D470()
{
  float v0; // xmm2_4
  unsigned int v1; // edx
  int v2; // ecx
  unsigned int v3; // r8d
  __int64 result; // rax
  float v5; // xmm9_4
  int v6; // ecx
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  int v10; // r9d
  int v11; // r10d
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm7_4
  int v18; // ebx
  int v19; // r13d
  int v20; // edi
  int v21; // ebp
  float v22; // xmm4_4
  int v23; // ecx
  int v24; // eax
  int v25; // r9d
  int v26; // ebx
  int v27; // esi
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned int v35; // edx
  unsigned int v36; // edx
  int v37; // [rsp+20h] [rbp-108h]
  int v38; // [rsp+24h] [rbp-104h]
  int v39; // [rsp+28h] [rbp-100h]
  int v40; // [rsp+2Ch] [rbp-FCh]
  int v41; // [rsp+30h] [rbp-F8h]
  int v42; // [rsp+34h] [rbp-F4h]
  int v43; // [rsp+130h] [rbp+8h]
  int v44; // [rsp+138h] [rbp+10h]
  int v45; // [rsp+140h] [rbp+18h]
  int v46; // [rsp+148h] [rbp+20h]

  v0 = *(float *)&dword_140404A6C[111579654];
  v1 = dword_140404A6C[111579652];
  v2 = 0;
  v3 = dword_140404A6C[111579650];
  v39 = 0;
  do
  {
    LODWORD(result) = 0;
    v38 = 0;
    v5 = (float)v2;
    v6 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024502]) * 256.0);
    v40 = v6;
    v7 = v5 - 30.0;
    v8 = v7 * v7;
    v9 = v7 * 0.010416667;
    v10 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024503]) * 256.0);
    v11 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024504]) * 256.0);
    v41 = v10;
    v42 = v11;
    do
    {
      v12 = (float)(int)result - 48.0;
      v13 = fsqrt((float)((float)((float)(v12 * v12) + v8) * 0.00010850695) + 0.25);
      if ( v13 == 0.0 )
      {
        v14 = 0.0;
        v16 = 0.0;
        v15 = 0.0;
      }
      else
      {
        v14 = v9 * (float)(1.0 / v13);
        v15 = (float)(1.0 / v13) * -0.34999999;
        v16 = (float)(v12 * (float)(1.0 / v13)) * 0.0072916667;
      }
      v17 = v14 * 0.69999999;
      v18 = v10;
      v19 = v6;
      v20 = v11;
      v46 = v10;
      v21 = 0;
      v37 = v11;
      v22 = (float)(result & 7) + 248.0;
      v44 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024509])
                                       + (float)(*(float *)&dword_140404A6C[284024506] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024512]))
                       * v22);
      v23 = v44;
      v43 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024508])
                                       + (float)(*(float *)&dword_140404A6C[284024505] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024511]))
                       * v22);
      v45 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024510])
                                       + (float)(*(float *)&dword_140404A6C[284024507] * v16))
                               + (float)(*(float *)&dword_140404A6C[284024513] * v15))
                       * v22);
      v24 = v43;
      v25 = v45;
      do
      {
        v26 = v18 >> 8;
        v27 = v19 >> 8;
        v28 = v20 >> 8;
        if ( v19 >> 8 < 0 )
          goto LABEL_32;
        if ( v27 < (int)(v3 << 6)
          && v26 >= 0
          && v26 < (signed int)(dword_140404A6C[111579651] << 6)
          && v28 >= 0
          && v28 < (int)(v1 << 6) )
        {
          v29 = *(int *)(*(_QWORD *)&dword_140404A6C[111579655]
                       + 4LL * (int)(v3 * ((v28 >> 6) + v1 * (v26 >> 6)) + (v19 >> 14)));
          if ( (_DWORD)v29 != -1 )
          {
            v30 = 513 * v29 + ((v19 >> 11) & 7) + 8 * (((v28 >> 3) & 7) + 8 * ((v26 >> 3) & 7u));
            v31 = (int)dword_140404A6C[v30 + 111579985];
            if ( (_DWORD)v31 != -1 )
            {
              v32 = (int)dword_140404A6C[v30 + 111579985];
              v33 = 6930 * v32;
              dword_140404A6C[6930 * v31 + 83201282] = 1;
              if ( v21 >= 16 )
              {
                dword_140404A6C[6930 * v32 + 83201283] = 1;
                dword_140404A6C[6930 * v32 + 83201284] = 1;
                dword_140404A6C[6930 * v32 + 83201285] = 1;
                dword_140404A6C[6930 * v32 + 83201286] = 1;
              }
              else
              {
                dword_140404A6C[v33 + 83201283 + (((__int64)(unsigned int)v26 >> 1) & 3)] = 1;
                if ( v21 < 2 )
                {
                  sub_14011C510(0, v27, v26 + 1, v28);
                  sub_14011C510(0, v27, v26 + 2, v28);
                  sub_14011C510(0, v27, v26 + 3, v28);
                  goto LABEL_19;
                }
                if ( v21 < 4 )
                {
LABEL_19:
                  sub_14011C510(0, v27 - 8, v26, v28);
                  sub_14011C510(0, v27 + 8, v26, v28);
                  sub_14011C510(0, v27, v26, v28 - 8);
                  sub_14011C510(0, v27, v26, v28 + 8);
                }
              }
              v34 = v33 + (BYTE1(v19) & 7) + 8 * ((v28 & 7) + 8 * (v26 & 7u));
              v35 = dword_140404A6C[v34 + 83194359];
              if ( (v35 & 0xE0000000) == 0xC0000000 )
                sub_14011C510(0, v27 - (unsigned __int8)v35, v26 - BYTE2(v35), v28 - BYTE1(v35));
              v36 = dword_140404A6C[v34 + 83197431];
              if ( v36 )
              {
                if ( (v36 & 0xE0000000) == 0xC0000000 )
                  sub_14011C510(0, v27 - (unsigned __int8)v36, v26 - BYTE2(v36), v28 - BYTE1(v36));
              }
              else if ( (dword_140404A6C[v34 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                break;
              }
              v25 = v45;
            }
            v1 = dword_140404A6C[111579652];
          }
          v23 = v44;
          v3 = dword_140404A6C[111579650];
        }
        v24 = v43;
LABEL_32:
        v19 += v24;
        v18 = v23 + v46;
        v20 = v25 + v37;
        v46 += v23;
        ++v21;
        v37 += v25;
      }
      while ( v21 < 48 );
      v1 = dword_140404A6C[111579652];
      result = (unsigned int)(v38 + 1);
      v3 = dword_140404A6C[111579650];
      v6 = v40;
      v10 = v41;
      v11 = v42;
      v38 = result;
    }
    while ( (int)result < 96 );
    v0 = *(float *)&dword_140404A6C[111579654];
    v2 = v39 + 1;
    v39 = v2;
  }
  while ( v2 < 60 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 15ADA9284: using guessed type unsigned int;

//----- (000000014011DA50) ----------------------------------------------------
void            sub_14011DA50(int a1)
{
  __int64 v1; // r12
  unsigned int *v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  signed int v5; // edi
  int v6; // eax
  unsigned int *v7; // rbx
  float *v8; // rbp
  float *v9; // rsi
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm2_4
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm1_4
  unsigned int *v31; // [rsp+E0h] [rbp+18h]
  __int64 v32; // [rsp+E8h] [rbp+20h]

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
        qword_140404050(
          3553,
          dword_140404A6C[44 * dword_140404A6C[4 * dword_140404A6C[421784429] + 283827814] + 284024944]);
        v4 = 8969 * v3;
        v5 = 0;
        dword_140404A6C[456217207] = 0;
        dword_140404A6C[456217208] = 6;
        if ( (int)dword_140404A6C[8969 * v3 + 73995254] > 0 )
        {
          v6 = dword_140404A6C[284677614];
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
                v23 = 17LL * (int)dword_140404A6C[284677614];
                *(float *)&dword_140404A6C[v23 + 284677618] = v14;
                *(float *)&dword_140404A6C[v23 + 284677619] = v15;
                *(float *)&dword_140404A6C[v23 + 284677620] = v16;
                v24 = 17LL * (int)dword_140404A6C[284677614];
                v25 = (float)((float)((float)(v11 + v15) + v19) + v18) * 0.25;
                v26 = (float)((float)(v14 + v10) + v13) + v17;
                *(float *)&dword_140404A6C[v24 + 284677621] = v13;
                v27 = *(float *)&dword_140404A6C[284024503];
                *(float *)&dword_140404A6C[v24 + 284677622] = v19;
                *(float *)&dword_140404A6C[v24 + 284677623] = v20;
                v28 = 17LL * (int)dword_140404A6C[284677614];
                *(float *)&dword_140404A6C[v28 + 284677624] = v17;
                v29 = *(float *)&dword_140404A6C[284024504];
                *(float *)&dword_140404A6C[v28 + 284677625] = v18;
                v30 = *(float *)&dword_140404A6C[284024502];
                *(float *)&dword_140404A6C[v28 + 284677626] = v21;
                *(float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677630] = fsqrt(
                                                                                            (float)((float)((float)(v27 - v25) * (float)(v27 - v25))
                                                                                                  + (float)((float)(v30 - (float)(v26 * 0.25)) * (float)(v30 - (float)(v26 * 0.25))))
                                                                                          + (float)((float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))
                                                                                                  * (float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))));
                sub_14006EC40(
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 68LL * (int)dword_140404A6C[284677614] + 1142923864),
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677615],
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677618],
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677621]);
                v6 = ++dword_140404A6C[284677614];
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

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011E090) ----------------------------------------------------
void            sub_14011E090(int a1)
{
  __int64 v1; // rbp
  unsigned int *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( !dword_140404A6C[312324428] && !dword_140404A6C[328554868] )
  {
    v1 = 4;
    v2 = &dword_140404A6C[6930 * a1 + 83200503];
    do
    {
      if ( v2[780] )
      {
        v3 = (int)*v2;
        if ( (int)v3 >= 0 )
        {
          v4 = (int)*v2;
          v5 = 6 * v3;
          if ( dword_140404A6C[6 * v3 + 312226123] != -1 )
          {
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*v3+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*v3+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*v3+312226123])*dword_140404A6C[309078344])));
            if ( dword_140404A6C[v5 + 328456563] != -1 )
              (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*v4+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[v5+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(v5+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[v5+328456563])*dword_140404A6C[325308784])));
          }
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}

// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011E210) ----------------------------------------------------
void            sub_14011E210(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // r8
  unsigned int *v7; // r14
  unsigned int *v8; // rsi
  unsigned int *v9; // rbp
  unsigned int *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  if ( dword_140404A6C[315570516] || dword_140404A6C[318816604] )
    return;
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], a3);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791464] + 283793813], v4);
  qword_140404238(0);
  if ( a1 != 1 )
  {
    qword_140404238(1);
    if ( !a1 )
    {
      qword_140404238(2);
      v5 = 0;
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      goto LABEL_7;
    }
  }
  v5 = 0;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
  if ( a1 != 1 )
  {
LABEL_7:
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
    if ( a1 )
    {
      if ( a1 == 2 )
        ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
    }
    else
    {
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
  }
  v7 = &dword_140404A6C[40714349];
  v8 = &dword_140404A6C[283827814];
  v9 = &dword_140404A6C[40714605];
  v10 = &dword_140404A6C[57491821];
  do
  {
    if ( (int)*v7 <= 0 )
      goto LABEL_28;
    if ( a1 )
    {
      if ( a1 != 2 )
        goto LABEL_26;
      qword_1404042E0(dword_140404A6C[451221605]);
      qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
      unk_140404098(33984);
      v15 = dword_140404A6C[44 * *v8 + 284024944];
      v16 = 3553;
    }
    else
    {
      if ( v5 == dword_140404A6C[421784414] )
      {
        qword_1404042E0(dword_140404A6C[71737745]);
        qword_140404338(dword_140404A6C[71737751], 1, &dword_140404A6C[284024502]);
        qword_140404338(dword_140404A6C[71737755], 1, &dword_140404A6C[284550403]);
        qword_140404338(dword_140404A6C[71737760], 1, &dword_140404A6C[284545205]);
        qword_140404338(dword_140404A6C[71737761], 1, &dword_140404A6C[284545209]);
        qword_140404378(dword_140404A6C[71737759], 1, 0, &dword_140404A6C[431564565]);
        v11 = dword_140404A6C[71737766];
      }
      else
      {
        qword_1404042E0(dword_140404A6C[71737685]);
        qword_140404338(dword_140404A6C[71737691], 1, &dword_140404A6C[284024502]);
        qword_140404338(dword_140404A6C[71737695], 1, &dword_140404A6C[284550403]);
        qword_140404338(dword_140404A6C[71737700], 1, &dword_140404A6C[284545205]);
        qword_140404338(dword_140404A6C[71737701], 1, &dword_140404A6C[284545209]);
        qword_140404378(dword_140404A6C[71737699], 1, 0, &dword_140404A6C[431564565]);
        v11 = dword_140404A6C[71737693];
      }
      qword_140404308(v11, 0);
      v12 = 3553;
      if ( v5 == dword_140404A6C[421784414] )
        v12 = 35866;
      qword_140404050(v12, dword_140404A6C[44 * *v8 + 284024944]);
      unk_140404098(33985);
      qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
      if ( v5 == dword_140404A6C[421784414] )
      {
        unk_140404098(33986);
        v13 = dword_140404A6C[44 * v8[1] + 284024944];
        v14 = 35866;
      }
      else
      {
        unk_140404098(33986);
        v13 = dword_140404A6C[44 * v8[1] + 284024944];
        v14 = 3553;
      }
      qword_140404050(v14, v13);
      unk_140404098(33987);
      qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
      unk_140404098(33988);
      qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827820] + 284024944]);
      unk_140404098(33989);
      v15 = dword_140404A6C[44 * dword_140404A6C[283827821] + 284024944];
      v16 = 35866;
    }
    qword_140404050(v16, v15);
LABEL_26:
    unk_140404808(4, v9, 5125, v10, *v7, v9 + 25165824);
    if ( !a1 )
      unk_140404098(33984);
LABEL_28:
    ++v5;
    v9 += 0x4000;
    v10 += 0x8000;
    v8 += 4;
    ++v7;
  }
  while ( v5 < 256 );
  qword_140404170(34963, 0, v6);
  qword_140404170(34962, 0, v17);
  if ( a1 == 1 || (qword_140404230(1), a1) )
  {
    qword_140404230(0);
  }
  else
  {
    qword_140404230(2);
    qword_140404230(0);
    qword_1404042E0(0);
  }
}

// 14011E71A: conditional instruction was optimized away because edi.4!=0
// 14011E285: variable 'v4' is possibly undefined
// 14011E6A7: variable 'v6' is possibly undefined
// 14011E6B4: variable 'v17' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v219; // [rsp+8h] [rbp-100h] BYREF
  int v220; // [rsp+28h] [rbp-E0h]
  int v221; // [rsp+30h] [rbp-D8h]
  int v222; // [rsp+38h] [rbp-D0h]
  int v223; // [rsp+40h] [rbp-C8h]
  unsigned int v224; // [rsp+48h] [rbp-C0h] BYREF
  float v225; // [rsp+4Ch] [rbp-BCh]
  __int64 v226; // [rsp+50h] [rbp-B8h]
  __int64 v227; // [rsp+58h] [rbp-B0h]
  unsigned int *v228; // [rsp+60h] [rbp-A8h]
  __int128 v229; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v230; // [rsp+78h] [rbp-90h]
  float v231; // [rsp+88h] [rbp-80h]
  _DWORD v232[2]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v233[766]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v234; // [rsp+C98h] [rbp+B90h]

  qword_140404050(3553, dword_140404A6C[451221642]);
  v1 = 0;
  for ( i = 0; i < (int)dword_140404A6C[179930436]; ++i )
  {
    unk_1404043F8(2);
    sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * i + 723935104), 4.0, 2);
  }
  if ( dword_140404A6C[179668287] )
  {
    unk_1404043F8(2);
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
    sub_14007DDF0((__int64)v25, (__int64)(v25 + 3), v0);
    sub_14007DDF0((__int64)(v25 + 6), (__int64)(v25 + 9), v27);
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
