#include "shared_client.h"


//----- (0000000140002D00) ----------------------------------------------------
__int64            sub_140002D00(float *a1, float a2, float a3, float a4)
{
  unsigned int v5; // ecx
  unsigned int v8; // r10d
  float v9; // xmm4_4
  float v10; // xmm5_4
  int v11; // r8d
  unsigned int v12; // eax
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // xmm1_4
  unsigned int v33; // xmm0_4
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  unsigned int v40; // xmm1_4
  unsigned int v41; // xmm0_4
  __int64 v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // edx
  unsigned int v52; // edx
  __int64 result; // rax

  v5 = dword_140404A6C[177167565];
  v8 = dword_140404A6C[177167565];
  v9 = -a2;
  v10 = -a3;
  v11 = 2;
  do
  {
    v12 = ((_BYTE)v11 - 2) & 3;
    if ( (((_BYTE)v11 - 2) & 3) == 0 || v12 == 3 )
      v13 = v9;
    else
      v13 = a2;
    if ( v11 - 2 >= 4 )
      v14 = a3;
    else
      v14 = v10;
    if ( v12 < 2 )
      v15 = -a4;
    else
      v15 = a4;
    *(float *)&v16 = v14 + a1[1];
    *(float *)&v17 = v15 + a1[2];
    v18 = (int)(3 * v5);
    *(float *)&dword_140404A6C[v18 + 177167567] = v13 + *a1;
    dword_140404A6C[v18 + 177167568] = v16;
    dword_140404A6C[v18 + 177167569] = v17;
    v19 = ++dword_140404A6C[177167565];
    v20 = ((_BYTE)v11 - 1) & 3;
    if ( (((_BYTE)v11 - 1) & 3) == 0 || v20 == 3 )
      v21 = v9;
    else
      v21 = a2;
    if ( v11 - 1 >= 4 )
      v22 = a3;
    else
      v22 = v10;
    if ( v20 < 2 )
      v23 = -a4;
    else
      v23 = a4;
    *(float *)&v24 = v22 + a1[1];
    *(float *)&v25 = v23 + a1[2];
    v26 = (int)(3 * v19);
    *(float *)&dword_140404A6C[v26 + 177167567] = v21 + *a1;
    dword_140404A6C[v26 + 177167568] = v24;
    dword_140404A6C[v26 + 177167569] = v25;
    v27 = ++dword_140404A6C[177167565];
    v28 = v11 & 3;
    if ( (v11 & 3) == 0 || v28 == 3 )
      v29 = v9;
    else
      v29 = a2;
    if ( v11 >= 4 )
      v30 = a3;
    else
      v30 = v10;
    if ( v28 < 2 )
      v31 = -a4;
    else
      v31 = a4;
    *(float *)&v32 = v30 + a1[1];
    *(float *)&v33 = v31 + a1[2];
    v34 = (int)(3 * v27);
    *(float *)&dword_140404A6C[v34 + 177167567] = v29 + *a1;
    dword_140404A6C[v34 + 177167568] = v32;
    dword_140404A6C[v34 + 177167569] = v33;
    v35 = ++dword_140404A6C[177167565];
    v36 = ((_BYTE)v11 + 1) & 3;
    if ( (((_BYTE)v11 + 1) & 3) == 0 || v36 == 3 )
      v37 = v9;
    else
      v37 = a2;
    if ( v11 + 1 >= 4 )
      v38 = a3;
    else
      v38 = v10;
    if ( v36 < 2 )
      v39 = -a4;
    else
      v39 = a4;
    *(float *)&v40 = v38 + a1[1];
    *(float *)&v41 = v39 + a1[2];
    v11 += 4;
    v42 = (int)(3 * v35);
    *(float *)&dword_140404A6C[v42 + 177167567] = v37 + *a1;
    dword_140404A6C[v42 + 177167568] = v40;
    dword_140404A6C[v42 + 177167569] = v41;
    v5 = ++dword_140404A6C[177167565];
  }
  while ( v11 - 2 < 8 );
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v8 + dword_1402B36C0;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B36C4;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B36C8;
  v43 = v8 + dword_1402B36CC;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v43;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B36D0;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B36D4;
  v44 = v8 + dword_1402B36D8;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v44;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B36DC;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B36E0;
  v45 = v8 + dword_1402B36E4;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v45;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B36E8;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B36EC;
  v46 = v8 + dword_1402B36F0;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v46;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B36F4;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B36F8;
  v47 = v8 + dword_1402B36FC;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v47;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B3700;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B3704;
  v48 = v8 + dword_1402B3708;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B370C;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B3710;
  v49 = v8 + dword_1402B3714;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B3718;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B371C;
  v50 = v8 + dword_1402B3720;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v50;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B3724;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B3728;
  v51 = v8 + dword_1402B372C;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B3730;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B3734;
  v52 = v8 + dword_1402B3738;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v52;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B373C;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B3740;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v8 + dword_1402B3744;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8 + dword_1402B3748;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8 + dword_1402B374C;
  result = (int)dword_140404A6C[177495247];
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  return result;
}

// 1402B36C0: using guessed type int dword_1402B36C0;
// 1402B36C4: using guessed type int dword_1402B36C4;
// 1402B36C8: using guessed type int dword_1402B36C8;
// 1402B36CC: using guessed type int dword_1402B36CC;
// 1402B36D0: using guessed type int dword_1402B36D0;
// 1402B36D4: using guessed type int dword_1402B36D4;
// 1402B36D8: using guessed type int dword_1402B36D8;
// 1402B36DC: using guessed type int dword_1402B36DC;
// 1402B36E0: using guessed type int dword_1402B36E0;
// 1402B36E4: using guessed type int dword_1402B36E4;
// 1402B36E8: using guessed type int dword_1402B36E8;
// 1402B36EC: using guessed type int dword_1402B36EC;
// 1402B36F0: using guessed type int dword_1402B36F0;
// 1402B36F4: using guessed type int dword_1402B36F4;
// 1402B36F8: using guessed type int dword_1402B36F8;
// 1402B36FC: using guessed type int dword_1402B36FC;
// 1402B3700: using guessed type int dword_1402B3700;
// 1402B3704: using guessed type int dword_1402B3704;
// 1402B3708: using guessed type int dword_1402B3708;
// 1402B370C: using guessed type int dword_1402B370C;
// 1402B3710: using guessed type int dword_1402B3710;
// 1402B3714: using guessed type int dword_1402B3714;
// 1402B3718: using guessed type int dword_1402B3718;
// 1402B371C: using guessed type int dword_1402B371C;
// 1402B3720: using guessed type int dword_1402B3720;
// 1402B3724: using guessed type int dword_1402B3724;
// 1402B3728: using guessed type int dword_1402B3728;
// 1402B372C: using guessed type int dword_1402B372C;
// 1402B3730: using guessed type int dword_1402B3730;
// 1402B3734: using guessed type int dword_1402B3734;
// 1402B3738: using guessed type int dword_1402B3738;
// 1402B373C: using guessed type int dword_1402B373C;
// 1402B3740: using guessed type int dword_1402B3740;
// 1402B3744: using guessed type int dword_1402B3744;
// 1402B3748: using guessed type int dword_1402B3748;
// 1402B374C: using guessed type int dword_1402B374C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (0000000140003460) ----------------------------------------------------
__int64            sub_140003460(float *a1, float a2, float a3, float a4)
{
  unsigned int v5; // edx
  int v6; // r8d
  unsigned int v7; // r10d
  float v8; // xmm7_4
  float v10; // xmm6_4
  unsigned int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  unsigned int v16; // xmm2_4
  __int64 v17; // rcx
  unsigned int v18; // xmm1_4
  unsigned int v19; // edx
  unsigned int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  unsigned int v25; // xmm2_4
  __int64 v26; // rcx
  unsigned int v27; // xmm1_4
  unsigned int v28; // ecx
  unsigned int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  unsigned int v34; // xmm2_4
  __int64 v35; // rcx
  unsigned int v36; // xmm1_4
  unsigned int v37; // ecx
  unsigned int v38; // eax
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  unsigned int v43; // xmm2_4
  __int64 v44; // rcx
  unsigned int v45; // xmm1_4
  unsigned int v46; // ecx
  int *v47; // r8
  int v48; // edx
  __int64 result; // rax

  v5 = dword_140404A6C[177167565];
  v6 = 2;
  v7 = dword_140404A6C[177167565];
  v8 = a3 * 0.5;
  v10 = a3 * -0.5;
  do
  {
    v11 = ((_BYTE)v6 - 2) & 3;
    if ( (((_BYTE)v6 - 2) & 3) == 0 || v11 == 3 )
      v12 = -0.5;
    else
      v12 = 0.5;
    v13 = v12 * a2;
    if ( v6 - 2 >= 4 )
      v14 = v8;
    else
      v14 = v10;
    if ( v11 < 2 )
      v15 = -0.5;
    else
      v15 = 0.5;
    *(float *)&v16 = v14 + a1[1];
    v17 = (int)(3 * v5);
    *(float *)&v18 = (float)(v15 * a4) + a1[2];
    *(float *)&dword_140404A6C[v17 + 177167567] = v13 + *a1;
    dword_140404A6C[v17 + 177167568] = v16;
    dword_140404A6C[v17 + 177167569] = v18;
    v19 = ++dword_140404A6C[177167565];
    v20 = ((_BYTE)v6 - 1) & 3;
    if ( (((_BYTE)v6 - 1) & 3) == 0 || v20 == 3 )
      v21 = -0.5;
    else
      v21 = 0.5;
    v22 = v21 * a2;
    if ( v6 - 1 >= 4 )
      v23 = v8;
    else
      v23 = v10;
    if ( v20 < 2 )
      v24 = -0.5;
    else
      v24 = 0.5;
    *(float *)&v25 = v23 + a1[1];
    v26 = (int)(3 * v19);
    *(float *)&v27 = (float)(v24 * a4) + a1[2];
    *(float *)&dword_140404A6C[v26 + 177167567] = v22 + *a1;
    dword_140404A6C[v26 + 177167568] = v25;
    dword_140404A6C[v26 + 177167569] = v27;
    v28 = ++dword_140404A6C[177167565];
    v29 = v6 & 3;
    if ( (v6 & 3) == 0 || v29 == 3 )
      v30 = -0.5;
    else
      v30 = 0.5;
    v31 = v30 * a2;
    if ( v6 >= 4 )
      v32 = v8;
    else
      v32 = v10;
    if ( v29 < 2 )
      v33 = -0.5;
    else
      v33 = 0.5;
    *(float *)&v34 = v32 + a1[1];
    v35 = (int)(3 * v28);
    *(float *)&v36 = (float)(v33 * a4) + a1[2];
    *(float *)&dword_140404A6C[v35 + 177167567] = v31 + *a1;
    dword_140404A6C[v35 + 177167568] = v34;
    dword_140404A6C[v35 + 177167569] = v36;
    v37 = ++dword_140404A6C[177167565];
    v38 = ((_BYTE)v6 + 1) & 3;
    if ( (((_BYTE)v6 + 1) & 3) == 0 || v38 == 3 )
      v39 = -0.5;
    else
      v39 = 0.5;
    v40 = v39 * a2;
    if ( v6 + 1 >= 4 )
      v41 = v8;
    else
      v41 = v10;
    if ( v38 < 2 )
      v42 = -0.5;
    else
      v42 = 0.5;
    *(float *)&v43 = v41 + a1[1];
    v44 = (int)(3 * v37);
    v6 += 4;
    *(float *)&v45 = (float)(v42 * a4) + a1[2];
    *(float *)&dword_140404A6C[v44 + 177167567] = v40 + *a1;
    dword_140404A6C[v44 + 177167568] = v43;
    dword_140404A6C[v44 + 177167569] = v45;
    v5 = ++dword_140404A6C[177167565];
  }
  while ( v6 - 2 < 8 );
  v46 = dword_140404A6C[178322641];
  v47 = dword_1402B3664;
  do
  {
    dword_140404A6C[4 * v46 + 178322642] = v7 + *(v47 - 1);
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v7 + *v47;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v7 + v47[1];
    v48 = v47[2];
    v47 += 4;
    result = 4 * dword_140404A6C[178322641];
    dword_140404A6C[(int)result + 178322645] = v7 + v48;
    v46 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v47 < (__int64)&dword_1402B36C4 );
  return result;
}

// 1402B3664: using guessed type int dword_1402B3664[];
// 1402B36C4: using guessed type int dword_1402B36C4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (0000000140004140) ----------------------------------------------------
__int64            sub_140004140(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // ebx
  __int64 v3; // rbp
  unsigned int v5; // r12d
  __int64 v6; // rsi
  int *v7; // r11
  char v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rdx
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  __int64 v14; // rcx
  float v15; // xmm3_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm5_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  __int64 v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // r14
  int *v36; // r11
  char v37; // bl
  int v38; // r10d
  __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int *v45; // r14
  int v46; // esi
  unsigned int v47; // r13d
  unsigned int v48; // ebp
  int v49; // edi
  int *v50; // r9
  __int64 v51; // r11
  int v52; // r10d
  unsigned int v53; // ebx
  unsigned int v54; // r8d
  unsigned int v55; // r8d
  unsigned int v56; // edx
  int v57; // r10d
  unsigned int v58; // ebx
  int *v59; // r9
  int v60; // edi
  unsigned int v61; // edx
  unsigned int v62; // r8d
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140004140[16];
#define v64 (*(int * (*))(void *)(sr_frame_140004140 + 0)) /* [rsp+E8h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_140004140 + 8)) /* [rsp+F0h] */

  v1 = dword_140404A6C[177167565];
  v2 = 0;
  v3 = 4;
  v5 = dword_140404A6C[177167565];
  v6 = 0;
  v7 = dword_1402B3660;
  v65 = 4;
  do
  {
    v8 = 3;
    v9 = 4;
    do
    {
      v10 = 3 * *(_DWORD *)(a1 + 4LL * *v7);
      v11 = *(float *)&dword_140404A6C[v10 + 177167567];
      v12 = *(float *)&dword_140404A6C[v10 + 177167568];
      v13 = *(float *)&dword_140404A6C[v10 + 177167569];
      v14 = 3 * *(_DWORD *)(a1 + 4LL * dword_1402B3660[v6 + ((v8 - 2) & 3)]);
      v15 = *(float *)&dword_140404A6C[v14 + 177167567] - v11;
      v16 = *(float *)&dword_140404A6C[v14 + 177167568] - v12;
      v17 = *(float *)&dword_140404A6C[v14 + 177167569] - v13;
      v18 = 3 * *(_DWORD *)(a1 + 4LL * dword_1402B3660[v6 + (v8 & 3)]);
      v19 = *(float *)&dword_140404A6C[v18 + 177167567] - v11;
      v20 = *(float *)&dword_140404A6C[v18 + 177167568] - v12;
      v21 = *(float *)&dword_140404A6C[v18 + 177167569] - v13;
      v22 = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17));
      if ( v22 == 0.0 )
      {
        v23 = 0.0;
        v24 = 0.0;
        v25 = 0.0;
      }
      else
      {
        v23 = (float)(1.0 / v22) * v15;
        v24 = (float)(1.0 / v22) * v16;
        v25 = (float)(1.0 / v22) * v17;
      }
      v26 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v26 == 0.0 )
      {
        v27 = 0.0;
        v28 = 0.0;
        v29 = 0.0;
      }
      else
      {
        v27 = (float)(1.0 / v26) * v19;
        v28 = (float)(1.0 / v26) * v20;
        v29 = (float)(1.0 / v26) * v21;
      }
      v30 = (float)((float)(v27 + v23) * 0.0625) + v11;
      v31 = (float)((float)(v28 + v24) * 0.0625) + v12;
      v32 = (float)((float)(v29 + v25) * 0.0625) + v13;
      if ( v2 )
      {
        if ( v2 == 5 )
        {
          v30 = v30 + (float)(*(float *)&dword_1402F6188 * -0.0625);
          v31 = v31 + (float)(*(float *)&dword_1402F618C * -0.0625);
          v32 = v32 + (float)(*(float *)&dword_1402F6190 * -0.0625);
        }
      }
      else
      {
        v30 = v30 - (float)(*(float *)&dword_1402F6188 * 0.375);
        v31 = v31 - (float)(*(float *)&dword_1402F618C * 0.375);
        v32 = v32 - (float)(*(float *)&dword_1402F6190 * 0.375);
      }
      ++v8;
      v33 = (int)(3 * v1);
      ++v7;
      *(float *)&dword_140404A6C[v33 + 177167567] = v30;
      *(float *)&dword_140404A6C[v33 + 177167568] = v31;
      *(float *)&dword_140404A6C[v33 + 177167569] = v32;
      v1 = ++dword_140404A6C[177167565];
      --v9;
    }
    while ( v9 );
    ++v2;
    v6 += 4;
  }
  while ( v2 < 6 );
  v34 = dword_140404A6C[177495247];
  v35 = 0;
  v36 = dword_1402B3660;
  do
  {
    v37 = 1;
    v38 = 1;
    do
    {
      v39 = *v36;
      dword_140404A6C[3 * v34 + 177495248] = *(_DWORD *)(a1 + 4 * v39);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(_DWORD *)(a1
                                                                              + 4LL * dword_1402B3660[v35 + (v37 & 3)]);
      v40 = v5 + 4 * v9 + (v38 & 3);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v40;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
      v41 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v41 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v41 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v41 + 178011349] = 1099169792;
      if ( (_DWORD)v9 == 5 )
      {
        v42 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v42 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v42 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v42 + 178011348] = 1065353216;
        dword_140404A6C[v42 + 178011350] = 1065353216;
      }
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *(_DWORD *)(a1 + 4 * v39);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v40;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v38 + 4 * v9 + v5 - 1;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
      v43 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v43 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v43 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v43 + 178011349] = 1099169792;
      if ( (_DWORD)v9 == 5 )
      {
        v44 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v44 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v44 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v44 + 178011348] = 1065353216;
        dword_140404A6C[v44 + 178011350] = 1065353216;
      }
      ++v37;
      v34 = dword_140404A6C[177495247] + 1;
      ++v38;
      ++v36;
      ++dword_140404A6C[177495247];
      --v3;
    }
    while ( v3 );
    LODWORD(v9) = v9 + 1;
    v35 += 4;
    v3 = 4;
  }
  while ( (int)v9 < 6 );
  v45 = &dword_1402B36B0;
  v46 = 1;
  v64 = &dword_1402B36B0;
  v47 = v5 + 7;
  v48 = v5 + 4;
  do
  {
    v49 = *(v45 - 20);
    v50 = &dword_1402B3678;
    v51 = v46 & 3;
    v52 = 1;
    v53 = v47;
    do
    {
      if ( v49 == v50[1] && dword_1402B3660[v51] == *v50 )
      {
        v54 = v46 + v5 - 1;
        dword_140404A6C[3 * v34 + 177495248] = v54;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + v5;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53 - 1;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v54;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53 - 1;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v54;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v5 + 6 + 4 * (v52 & 3);
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
        v34 = ++dword_140404A6C[177495247];
      }
      ++v52;
      v53 += 4;
      v50 += 4;
    }
    while ( v52 < 5 );
    dword_140404A6C[3 * v34 + 177495248] = v48;
    v55 = v5 + 4 * v51;
    v56 = v55 + 5;
    v55 += 6;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v56;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
    dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v48 + 3;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
    v57 = 1;
    v58 = v5 + 4;
    v59 = &dword_1402B3670;
    v60 = *v64;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
    dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
    v34 = ++dword_140404A6C[177495247];
    do
    {
      if ( v60 == v59[1] && dword_1402B3660[v51 + 20] == *v59 )
      {
        v61 = v46 + v5 + 19;
        dword_140404A6C[3 * v34 + 177495248] = v61;
        v62 = v51 + v5 + 20;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v62;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58 + 1;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v5 + 5 + 4 * (v57 & 3);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
        v34 = ++dword_140404A6C[177495247];
      }
      ++v57;
      v58 += 4;
      v59 += 4;
    }
    while ( v57 < 5 );
    v45 = v64 + 1;
    v47 = v5 + 7;
    ++v46;
    ++v64;
    v48 += 4;
    --v65;
  }
  while ( v65 );
  dword_140404A6C[3 * v34 + 177495248] = v5;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v5 + 2;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v5 + 1;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
  dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 1065353216;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v5;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v5 + 3;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v5 + 2;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
  dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
  result = 6 * dword_140404A6C[177495247];
  dword_140404A6C[result + 178011350] = 1065353216;
  ++dword_140404A6C[177495247];
  return result;
}
#undef v64
#undef v65

// 1402B3660: using guessed type int dword_1402B3660[];
// 1402B3670: using guessed type int dword_1402B3670;
// 1402B3678: using guessed type int dword_1402B3678;
// 1402B36B0: using guessed type int dword_1402B36B0;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (00000001400054F0) ----------------------------------------------------
__int64            sub_1400054F0(float *a1, float *a2, double a3, float a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned int v8; // r15d
  __m128 v9; // xmm9
  __int64 v10; // r14
  float v11; // xmm14_4
  float v12; // xmm15_4
  __m128d v13; // xmm8
  __m128 v14; // xmm0
  int v15; // eax
  float v16; // xmm4_4
  double v17; // xmm7_8
  double v18; // xmm10_8
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  __int64 v23; // rax
  float v24; // xmm4_4
  float v25; // xmm6_4
  double v26; // xmm2_8
  float v27; // xmm5_4
  __m128 v28; // xmm7
  __m128d v29; // xmm9
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __m128 v32; // xmm0
  int v33; // eax
  float v34; // xmm4_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  __int64 v39; // rax
  float v40; // xmm6_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm11_4
  __m128 v44; // xmm0
  int v45; // eax
  double v46; // xmm7_8
  float v47; // xmm5_4
  float v48; // xmm6_4
  float v49; // xmm6_4
  float v50; // xmm1_4
  float v51; // xmm4_4
  __int64 v52; // rax
  float v53; // xmm6_4
  float v54; // xmm4_4
  double v55; // xmm2_8
  float v56; // xmm5_4
  unsigned int v57; // ebx
  __int64 v58; // rdx
  __m128 v59; // xmm0
  int v60; // eax
  double v61; // xmm8_8
  float v62; // xmm5_4
  float v63; // xmm6_4
  float v64; // xmm6_4
  float v65; // xmm1_4
  float v66; // xmm4_4
  __int64 v67; // rax
  float v68; // xmm6_4
  float v69; // xmm4_4
  float v70; // xmm5_4
  float v71; // xmm6_4
  float v72; // xmm4_4
  float v73; // xmm3_4
  __int64 v74; // rcx
  float v75; // xmm5_4
  __int64 v76; // rax
  float v77; // xmm4_4
  float v78; // xmm6_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm5_4
  __int64 v82; // rcx
  float v83; // xmm11_4
  float v84; // xmm0_4
  float v85; // xmm6_4
  float v86; // xmm4_4
  float v87; // xmm5_4
  __int64 result; // rax
  unsigned int v89; // ebp
  unsigned int v90; // r14d
  unsigned int v91; // esi
  __int64 v92; // r12
  unsigned int v93; // edx
  unsigned int v94; // edx
  unsigned int v95; // r8d
  unsigned int v96; // edx
  unsigned int v97; // r9d
  unsigned int v98; // r8d
  unsigned int v99; // edx
  unsigned int v100; // r10d

  v4 = dword_140404A6C[177167565];
  v5 = 8;
  v8 = dword_140404A6C[177167565];
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v10 = 8;
  v11 = 0.0;
  v12 = *(float *)&a3;
  do
  {
    v13 = _mm_cvtps_pd(v9);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], (__int64)a2, a3));
    v15 = 3 * v4;
    v16 = a1[2];
    v17 = *(double *)SR_VEC_LANES(128, v14, u64);
    v18 = v12;
    v19 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0] * v12;
    v20 = v12 * *(double *)SR_VEC_LANES(128, v14, u64);
    v21 = v19 + *a1;
    v22 = a1[1] - v20;
    *(float *)&dword_140404A6C[v15 + 177167567] = (float)((float)(v22 * a2[3]) + (float)(v21 * *a2))
                                                + (float)(v16 * a2[6]);
    *(float *)&dword_140404A6C[v15 + 177167568] = (float)((float)(v22 * a2[4]) + (float)(v21 * a2[1]))
                                                + (float)(v16 * a2[7]);
    *(float *)&dword_140404A6C[v15 + 177167569] = (float)((float)(v22 * a2[5]) + (float)(v21 * a2[2]))
                                                + (float)(v16 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(SR_VEC_LANES(128, v9, f32)[0]);
    SR_VEC_LANES(128, v14, f32)[0] = -v17;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_LANES(128, v14, i32)[0];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v23 = 3 * dword_140404A6C[177167565];
    v24 = *(float *)&dword_140404A6C[v23 + 177249487];
    v25 = *(float *)&dword_140404A6C[v23 + 177249488];
    *(_QWORD *)&v26 = LODWORD(v25);
    v27 = *(float *)&dword_140404A6C[v23 + 177249489];
    *(float *)&v26 = (float)((float)(v25 * a2[3]) + (float)(v24 * *a2)) + (float)(v27 * a2[6]);
    dword_140404A6C[v23 + 177249487] = LODWORD(v26);
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 0.39269908169875;
    v28 = _mm_cvtpd_ps(v13);
    *(float *)&dword_140404A6C[v23 + 177249488] = (float)((float)(v25 * a2[4]) + (float)(v24 * a2[1]))
                                                + (float)(v27 * a2[7]);
    v29 = _mm_cvtps_pd(v28);
    *(float *)&dword_140404A6C[v23 + 177249489] = (float)((float)(v25 * a2[5]) + (float)(v24 * a2[2]))
                                                + (float)(v27 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v30 = dword_140404A6C[177167565];
    v32 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v29, f64)[0], v31, v26));
    v33 = 3 * v30;
    v34 = a1[2];
    *(_QWORD *)&SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v32, u64)[0];
    v35 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v32, (__m128d)v32, 1), f64)[0] * v12;
    v36 = v12 * *(double *)SR_VEC_LANES(128, v32, u64);
    v37 = v35 + *a1;
    v38 = a1[1] - v36;
    *(float *)&dword_140404A6C[v33 + 177167567] = (float)((float)(v38 * a2[3]) + (float)(v37 * *a2))
                                                + (float)(v34 * a2[6]);
    *(float *)&dword_140404A6C[v33 + 177167568] = (float)((float)(v38 * a2[4]) + (float)(v37 * a2[1]))
                                                + (float)(v34 * a2[7]);
    *(float *)&dword_140404A6C[v33 + 177167569] = (float)((float)(v38 * a2[5]) + (float)(v37 * a2[2]))
                                                + (float)(v34 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(SR_VEC_LANES(128, v28, f32)[0]);
    SR_VEC_LANES(128, v32, f32)[0] = -SR_VEC_LANES(128, v13, f64)[0];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_LANES(128, v32, i32)[0];
    SR_VEC_LANES(128, v29, f64)[0] = SR_VEC_LANES(128, v29, f64)[0] + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v9 = _mm_cvtpd_ps(v29);
    v39 = 3 * dword_140404A6C[177167565];
    v40 = *(float *)&dword_140404A6C[v39 + 177249487];
    v41 = *(float *)&dword_140404A6C[v39 + 177249488];
    v42 = *(float *)&dword_140404A6C[v39 + 177249489];
    *(_QWORD *)&a3 = LODWORD(v41);
    *(float *)&a3 = (float)((float)(v41 * a2[3]) + (float)(v40 * *a2)) + (float)(v42 * a2[6]);
    dword_140404A6C[v39 + 177249487] = LODWORD(a3);
    *(float *)&dword_140404A6C[v39 + 177249488] = (float)((float)(v40 * a2[1]) + (float)(v41 * a2[4]))
                                                + (float)(v42 * a2[7]);
    *(float *)&dword_140404A6C[v39 + 177249489] = (float)((float)(v40 * a2[2]) + (float)(v41 * a2[5]))
                                                + (float)(v42 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v10;
  }
  while ( v10 );
  v43 = -a4;
  do
  {
    v44 = _mm_castpd_ps(sub_1401F8A50(v11, (__int64)a2, a3));
    v45 = 3 * v4;
    v46 = *(double *)SR_VEC_LANES(128, v44, u64);
    v47 = a1[2] - a4;
    v48 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v44, (__m128d)v44, 1), f64)[0] * v18;
    v49 = v48 + *a1;
    v50 = *(double *)SR_VEC_LANES(128, v44, u64) * v18;
    v51 = a1[1] - v50;
    *(float *)&dword_140404A6C[v45 + 177167567] = (float)((float)(v51 * a2[3]) + (float)(v49 * *a2))
                                                + (float)(v47 * a2[6]);
    *(float *)&dword_140404A6C[v45 + 177167568] = (float)((float)(v49 * a2[1]) + (float)(v51 * a2[4]))
                                                + (float)(v47 * a2[7]);
    *(float *)&dword_140404A6C[v45 + 177167569] = (float)((float)(v49 * a2[2]) + (float)(v51 * a2[5]))
                                                + (float)(v47 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(v11);
    SR_VEC_LANES(128, v44, f32)[0] = -v46;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_LANES(128, v44, i32)[0];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v52 = 3 * dword_140404A6C[177167565];
    v53 = *(float *)&dword_140404A6C[v52 + 177249487];
    v54 = *(float *)&dword_140404A6C[v52 + 177249488];
    *(_QWORD *)&v55 = LODWORD(v54);
    v56 = *(float *)&dword_140404A6C[v52 + 177249489];
    *(float *)&v55 = (float)((float)(v54 * a2[3]) + (float)(v53 * *a2)) + (float)(v56 * a2[6]);
    dword_140404A6C[v52 + 177249487] = LODWORD(v55);
    *(float *)&v46 = v11 + 0.39269908169875;
    *(float *)&dword_140404A6C[v52 + 177249488] = (float)((float)(v53 * a2[1]) + (float)(v54 * a2[4]))
                                                + (float)(v56 * a2[7]);
    *(float *)&dword_140404A6C[v52 + 177249489] = (float)((float)(v53 * a2[2]) + (float)(v54 * a2[5]))
                                                + (float)(v56 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v57 = dword_140404A6C[177167565];
    v59 = _mm_castpd_ps(sub_1401F8A50(*(float *)&v46, v58, v55));
    v60 = 3 * v57;
    v61 = *(double *)SR_VEC_LANES(128, v59, u64);
    v62 = a1[2] - a4;
    v63 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v59, (__m128d)v59, 1), f64)[0] * v18;
    v64 = v63 + *a1;
    v65 = *(double *)SR_VEC_LANES(128, v59, u64) * v18;
    v66 = a1[1] - v65;
    *(float *)&dword_140404A6C[v60 + 177167567] = (float)((float)(v66 * a2[3]) + (float)(v64 * *a2))
                                                + (float)(v62 * a2[6]);
    *(float *)&dword_140404A6C[v60 + 177167568] = (float)((float)(v64 * a2[1]) + (float)(v66 * a2[4]))
                                                + (float)(v62 * a2[7]);
    *(float *)&dword_140404A6C[v60 + 177167569] = (float)((float)(v64 * a2[2]) + (float)(v66 * a2[5]))
                                                + (float)(v62 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(*(float *)&v46);
    SR_VEC_LANES(128, v59, f32)[0] = -v61;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_LANES(128, v59, i32)[0];
    v11 = *(float *)&v46 + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v67 = 3 * dword_140404A6C[177167565];
    v68 = *(float *)&dword_140404A6C[v67 + 177249487];
    v69 = *(float *)&dword_140404A6C[v67 + 177249488];
    v70 = *(float *)&dword_140404A6C[v67 + 177249489];
    *(_QWORD *)&a3 = LODWORD(v69);
    *(float *)&a3 = (float)((float)(v69 * a2[3]) + (float)(v68 * *a2)) + (float)(v70 * a2[6]);
    dword_140404A6C[v67 + 177249487] = LODWORD(a3);
    *(float *)&dword_140404A6C[v67 + 177249488] = (float)((float)(v68 * a2[1]) + (float)(v69 * a2[4]))
                                                + (float)(v70 * a2[7]);
    *(float *)&dword_140404A6C[v67 + 177249489] = (float)((float)(v68 * a2[2]) + (float)(v69 * a2[5]))
                                                + (float)(v70 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v5;
  }
  while ( v5 );
  v71 = *a1;
  v72 = a1[1];
  v73 = *a1;
  v74 = (int)(3 * v4);
  v75 = a1[2];
  *(float *)&dword_140404A6C[v74 + 177167567] = (float)((float)(v72 * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(v75 * a2[6]);
  *(float *)&dword_140404A6C[v74 + 177167568] = (float)((float)(v73 * a2[1]) + (float)(v72 * a2[4]))
                                              + (float)(v75 * a2[7]);
  *(float *)&dword_140404A6C[v74 + 177167569] = (float)((float)(v71 * a2[2]) + (float)(v72 * a2[5]))
                                              + (float)(v75 * a2[8]);
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 1065353216;
  v76 = 3 * dword_140404A6C[177167565];
  v77 = *(float *)&dword_140404A6C[v76 + 177249487];
  v78 = *(float *)&dword_140404A6C[v76 + 177249488];
  v79 = *(float *)&dword_140404A6C[v76 + 177249489];
  *(float *)&dword_140404A6C[v76 + 177249487] = (float)((float)(v78 * a2[3]) + (float)(v77 * *a2))
                                              + (float)(v79 * a2[6]);
  *(float *)&dword_140404A6C[v76 + 177249488] = (float)((float)(v78 * a2[4]) + (float)(v77 * a2[1]))
                                              + (float)(v79 * a2[7]);
  *(float *)&dword_140404A6C[v76 + 177249489] = (float)((float)(v78 * a2[5]) + (float)(v77 * a2[2]))
                                              + (float)(v79 * a2[8]);
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v80 = *a1;
  v81 = a1[1];
  v82 = 3 * dword_140404A6C[177167565];
  v83 = v43 + a1[2];
  v84 = *a1;
  *(float *)&dword_140404A6C[v82 + 177167567] = (float)((float)(v81 * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(v83 * a2[6]);
  *(float *)&dword_140404A6C[v82 + 177167568] = (float)((float)(v81 * a2[4]) + (float)(v84 * a2[1]))
                                              + (float)(v83 * a2[7]);
  *(float *)&dword_140404A6C[v82 + 177167569] = (float)((float)(v81 * a2[5]) + (float)(v80 * a2[2]))
                                              + (float)(v83 * a2[8]);
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = -1082130432;
  result = 3 * dword_140404A6C[177167565];
  v85 = *(float *)&dword_140404A6C[result + 177249487];
  v86 = *(float *)&dword_140404A6C[result + 177249488];
  v87 = *(float *)&dword_140404A6C[result + 177249489];
  *(float *)&dword_140404A6C[result + 177249487] = (float)((float)(v86 * a2[3]) + (float)(v85 * *a2))
                                                 + (float)(v87 * a2[6]);
  *(float *)&dword_140404A6C[result + 177249488] = (float)((float)(v85 * a2[1]) + (float)(v86 * a2[4]))
                                                 + (float)(v87 * a2[7]);
  *(float *)&dword_140404A6C[result + 177249489] = (float)((float)(v85 * a2[2]) + (float)(v86 * a2[5]))
                                                 + (float)(v87 * a2[8]);
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  LODWORD(result) = dword_140404A6C[177495247];
  v89 = v8 + 32;
  v90 = v8 + 33;
  v91 = v8 + 1;
  v92 = 4;
  do
  {
    v93 = v8 + (((_BYTE)v91 - (_BYTE)v8) & 0xF);
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v91 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v93 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v93 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v93;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v93;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v93 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 16;
    v94 = v8 + ((1 - (_BYTE)v8 + (_BYTE)v91) & 0xF);
    v95 = v94 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v94 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v94 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v94;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v94;
    v96 = v8 + ((2 - (_BYTE)v8 + (_BYTE)v91) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v95;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 16;
    v97 = v96 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 17;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v96 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v96 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v96;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 + 1;
    v98 = v91 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v96;
    v99 = v8 + ((3 - (_BYTE)v8 + (_BYTE)v91) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v97;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 17;
    v100 = v91 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v91 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v99 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v99 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v99;
    v91 += 4;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v98;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v99;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v99 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v100;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    result = ++dword_140404A6C[177495247];
    --v92;
  }
  while ( v92 );
  return result;
}

// 140005598: variable 'a2' is possibly undefined
// 140005783: variable 'v31' is possibly undefined
// 140005B66: variable 'v58' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (00000001400066B0) ----------------------------------------------------
__int64            sub_1400066B0(float *a1, float *a2, float a3, float a4, float a5, int a6)
{
  unsigned int v6; // r8d
  int v7; // r11d
  unsigned int v9; // edi
  int v10; // r9d
  unsigned int v11; // eax
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm4_4
  __int64 v36; // rcx
  unsigned int v37; // r8d
  unsigned int v38; // eax
  float v39; // xmm6_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm6_4
  float v44; // xmm5_4
  __int64 v45; // rcx
  int *v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  unsigned int v49; // r9d
  unsigned int v50; // edx
  unsigned int v51; // r8d
  unsigned int v52; // r9d
  unsigned int v53; // edx
  unsigned int v54; // r8d
  unsigned int v55; // r9d
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // r9d
  unsigned int v59; // edx
  unsigned int v60; // r8d
  unsigned int v61; // r9d
  unsigned int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // r9d
  unsigned int v65; // edx
  __int64 result; // rax

  v6 = dword_140404A6C[177167565];
  v7 = 2;
  v9 = dword_140404A6C[177167565];
  v10 = 2;
  do
  {
    v11 = ((_BYTE)v10 - 2) & 3;
    if ( (((_BYTE)v10 - 2) & 3) == 0 || v11 == 3 )
      v12 = -a3;
    else
      v12 = a3;
    if ( v10 - 2 >= 4 )
      v13 = a4;
    else
      v13 = -a4;
    if ( v11 < 2 )
      v14 = -a5;
    else
      v14 = a5;
    v15 = v13 + a1[1];
    v16 = v12 + *a1;
    v17 = v14 + a1[2];
    v18 = (int)(3 * v6);
    *(float *)&dword_140404A6C[v18 + 177167567] = (float)((float)(v15 * a2[3]) + (float)(v16 * *a2))
                                                + (float)(v17 * a2[6]);
    *(float *)&dword_140404A6C[v18 + 177167568] = (float)((float)(v15 * a2[4]) + (float)(v16 * a2[1]))
                                                + (float)(v17 * a2[7]);
    *(float *)&dword_140404A6C[v18 + 177167569] = (float)((float)(v15 * a2[5]) + (float)(v16 * a2[2]))
                                                + (float)(v17 * a2[8]);
    v19 = ++dword_140404A6C[177167565];
    v20 = ((_BYTE)v10 - 1) & 3;
    if ( (((_BYTE)v10 - 1) & 3) == 0 || v20 == 3 )
      v21 = -a3;
    else
      v21 = a3;
    if ( v10 - 1 >= 4 )
      v22 = a4;
    else
      v22 = -a4;
    if ( v20 < 2 )
      v23 = -a5;
    else
      v23 = a5;
    v24 = v22 + a1[1];
    v25 = v21 + *a1;
    v26 = v23 + a1[2];
    v27 = (int)(3 * v19);
    *(float *)&dword_140404A6C[v27 + 177167567] = (float)((float)(v24 * a2[3]) + (float)(v25 * *a2))
                                                + (float)(v26 * a2[6]);
    *(float *)&dword_140404A6C[v27 + 177167568] = (float)((float)(v24 * a2[4]) + (float)(v25 * a2[1]))
                                                + (float)(v26 * a2[7]);
    *(float *)&dword_140404A6C[v27 + 177167569] = (float)((float)(v24 * a2[5]) + (float)(v25 * a2[2]))
                                                + (float)(v26 * a2[8]);
    v28 = ++dword_140404A6C[177167565];
    v29 = v10 & 3;
    if ( (v10 & 3) == 0 || v29 == 3 )
      v30 = -a3;
    else
      v30 = a3;
    if ( v10 >= 4 )
      v31 = a4;
    else
      v31 = -a4;
    if ( v29 < 2 )
      v32 = -a5;
    else
      v32 = a5;
    v33 = v30 + *a1;
    v34 = v31 + a1[1];
    v35 = v32 + a1[2];
    v36 = (int)(3 * v28);
    *(float *)&dword_140404A6C[v36 + 177167567] = (float)((float)(v34 * a2[3]) + (float)(v33 * *a2))
                                                + (float)(v35 * a2[6]);
    *(float *)&dword_140404A6C[v36 + 177167568] = (float)((float)(v33 * a2[1]) + (float)(v34 * a2[4]))
                                                + (float)(v35 * a2[7]);
    *(float *)&dword_140404A6C[v36 + 177167569] = (float)((float)(v33 * a2[2]) + (float)(v34 * a2[5]))
                                                + (float)(v35 * a2[8]);
    v37 = ++dword_140404A6C[177167565];
    v38 = ((_BYTE)v10 + 1) & 3;
    if ( (((_BYTE)v10 + 1) & 3) == 0 || v38 == 3 )
      v39 = -a3;
    else
      v39 = a3;
    if ( v10 + 1 >= 4 )
      v40 = a4;
    else
      v40 = -a4;
    if ( v38 < 2 )
      v41 = -a5;
    else
      v41 = a5;
    v42 = v40 + a1[1];
    v43 = v39 + *a1;
    v44 = v41 + a1[2];
    v10 += 4;
    v45 = (int)(3 * v37);
    *(float *)&dword_140404A6C[v45 + 177167567] = (float)((float)(v42 * a2[3]) + (float)(v43 * *a2))
                                                + (float)(v44 * a2[6]);
    *(float *)&dword_140404A6C[v45 + 177167568] = (float)((float)(v42 * a2[4]) + (float)(v43 * a2[1]))
                                                + (float)(v44 * a2[7]);
    *(float *)&dword_140404A6C[v45 + 177167569] = (float)((float)(v42 * a2[5]) + (float)(v43 * a2[2]))
                                                + (float)(v44 * a2[8]);
    v6 = ++dword_140404A6C[177167565];
  }
  while ( v10 - 2 < 8 );
  v46 = &dword_1402B36D0;
  v47 = dword_140404A6C[177495247];
  do
  {
    if ( (v7 - 2) >> 1 != a6 )
    {
      v48 = v9 + *(v46 - 4);
      v49 = v9 + *(v46 - 3);
      v50 = v9 + *(v46 - 2);
      dword_140404A6C[3 * v47 + 177495248] = v48;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v49;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v50;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v48;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v50;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v49;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    if ( (v7 - 1) >> 1 != a6 )
    {
      v51 = v9 + *(v46 - 1);
      v52 = v9 + *v46;
      v53 = v9 + v46[1];
      dword_140404A6C[3 * v47 + 177495248] = v51;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v52;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v52;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    if ( v7 >> 1 != a6 )
    {
      v54 = v9 + v46[2];
      v55 = v9 + v46[3];
      v56 = v9 + v46[4];
      dword_140404A6C[3 * v47 + 177495248] = v54;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v54;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v56;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    if ( (v7 + 1) >> 1 != a6 )
    {
      v57 = v9 + v46[5];
      v58 = v9 + v46[6];
      v59 = v9 + v46[7];
      dword_140404A6C[3 * v47 + 177495248] = v57;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    if ( (v7 + 2) >> 1 != a6 )
    {
      v60 = v9 + v46[8];
      v61 = v9 + v46[9];
      v62 = v9 + v46[10];
      dword_140404A6C[3 * v47 + 177495248] = v60;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v62;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v60;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v62;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v61;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    if ( (v7 + 3) >> 1 != a6 )
    {
      v63 = v9 + v46[11];
      v64 = v9 + v46[12];
      v65 = v9 + v46[13];
      dword_140404A6C[3 * v47 + 177495248] = v63;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v65;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v63;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v64;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v47 = ++dword_140404A6C[177495247];
    }
    v7 += 6;
    v46 += 18;
    result = (unsigned int)(v7 - 2);
  }
  while ( (int)result < 12 );
  return result;
}

// 1402B36D0: using guessed type int dword_1402B36D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (0000000140007550) ----------------------------------------------------
__int64            sub_140007550(float *a1, float a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r11
  float v6; // xmm6_4
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // r9d
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  __int64 v17; // rcx
  int v18; // r10d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  __int64 v26; // rcx
  int v27; // r10d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  unsigned int v33; // xmm0_4
  unsigned int v34; // xmm1_4
  __int64 v35; // rcx
  int v36; // r10d
  unsigned int v37; // eax
  unsigned int v38; // ecx
  float v39; // xmm5_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  unsigned int v42; // xmm0_4
  unsigned int v43; // xmm1_4
  __int64 v44; // rcx
  unsigned int v45; // eax
  float v46; // xmm5_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  unsigned int v49; // xmm0_4
  unsigned int v50; // xmm1_4
  __int64 v51; // rcx
  unsigned int v52; // ecx
  int *v53; // r8
  __int64 result; // rax

  v4 = dword_140404A6C[177167565];
  v5 = 0;
  v6 = -a2;
  v9 = dword_140404A6C[177167565];
  v10 = 0;
  do
  {
    v11 = v10 & 3;
    if ( (v10 & 3) == 0 || v11 == 3 )
      v12 = v6;
    else
      v12 = a2;
    v13 = a3;
    if ( v10 < 4 )
      v13 = -a3;
    if ( v11 < 2 )
      v14 = -a4;
    else
      v14 = a4;
    if ( v10 >= 8 )
    {
      v12 = 0.0;
      v13 = a3 * -1.25;
      if ( v10 == 8 )
        v14 = -a4;
      else
        v14 = a4;
    }
    *(float *)&v15 = v13 + a1[1];
    *(float *)&v16 = v14 + a1[2];
    v17 = (int)(3 * v4);
    v18 = v10 + 1;
    *(float *)&dword_140404A6C[v17 + 177167567] = v12 + *a1;
    dword_140404A6C[v17 + 177167568] = v15;
    dword_140404A6C[v17 + 177167569] = v16;
    v19 = ++dword_140404A6C[177167565];
    v20 = ((_BYTE)v10 + 1) & 3;
    if ( (((_BYTE)v10 + 1) & 3) == 0 || v20 == 3 )
      v21 = v6;
    else
      v21 = a2;
    v22 = a3;
    if ( v18 < 4 )
      v22 = -a3;
    if ( v20 < 2 )
      v23 = -a4;
    else
      v23 = a4;
    if ( v18 >= 8 )
    {
      v21 = 0.0;
      v22 = a3 * -1.25;
      if ( v10 == 7 )
        v23 = -a4;
      else
        v23 = a4;
    }
    *(float *)&v24 = v22 + a1[1];
    *(float *)&v25 = v23 + a1[2];
    v26 = (int)(3 * v19);
    v27 = v10 + 2;
    *(float *)&dword_140404A6C[v26 + 177167567] = v21 + *a1;
    dword_140404A6C[v26 + 177167568] = v24;
    dword_140404A6C[v26 + 177167569] = v25;
    v28 = ++dword_140404A6C[177167565];
    v29 = ((_BYTE)v10 + 2) & 3;
    if ( (((_BYTE)v10 + 2) & 3) == 0 || v29 == 3 )
      v30 = v6;
    else
      v30 = a2;
    v31 = a3;
    if ( v27 < 4 )
      v31 = -a3;
    if ( v29 < 2 )
      v32 = -a4;
    else
      v32 = a4;
    if ( v27 >= 8 )
    {
      v30 = 0.0;
      v31 = a3 * -1.25;
      if ( v10 == 6 )
        v32 = -a4;
      else
        v32 = a4;
    }
    *(float *)&v33 = v31 + a1[1];
    *(float *)&v34 = v32 + a1[2];
    v35 = (int)(3 * v28);
    v36 = v10 + 3;
    *(float *)&dword_140404A6C[v35 + 177167567] = v30 + *a1;
    dword_140404A6C[v35 + 177167568] = v33;
    dword_140404A6C[v35 + 177167569] = v34;
    v37 = ++dword_140404A6C[177167565];
    v38 = ((_BYTE)v10 + 3) & 3;
    if ( (((_BYTE)v10 + 3) & 3) == 0 || v38 == 3 )
      v39 = v6;
    else
      v39 = a2;
    v40 = a3;
    if ( v36 < 4 )
      v40 = -a3;
    if ( v38 < 2 )
      v41 = -a4;
    else
      v41 = a4;
    if ( v36 >= 8 )
    {
      v39 = 0.0;
      v40 = a3 * -1.25;
      if ( v10 == 5 )
        v41 = -a4;
      else
        v41 = a4;
    }
    *(float *)&v42 = v40 + a1[1];
    *(float *)&v43 = v41 + a1[2];
    v44 = (int)(3 * v37);
    *(float *)&dword_140404A6C[v44 + 177167567] = v39 + *a1;
    dword_140404A6C[v44 + 177167568] = v42;
    dword_140404A6C[v44 + 177167569] = v43;
    v45 = ++dword_140404A6C[177167565];
    if ( (v10 & 3) == 0 || v11 == 3 )
      v46 = v6;
    else
      v46 = a2;
    v47 = a3;
    if ( v10 + 4 < 4 )
      v47 = -a3;
    if ( v11 < 2 )
      v48 = -a4;
    else
      v48 = a4;
    if ( v10 + 4 >= 8 )
    {
      v46 = 0.0;
      v47 = a3 * -1.25;
      if ( v10 == 4 )
        v48 = -a4;
      else
        v48 = a4;
    }
    *(float *)&v49 = v47 + a1[1];
    *(float *)&v50 = v48 + a1[2];
    v10 += 5;
    v51 = (int)(3 * v45);
    *(float *)&dword_140404A6C[v51 + 177167567] = v46 + *a1;
    dword_140404A6C[v51 + 177167568] = v49;
    dword_140404A6C[v51 + 177167569] = v50;
    v4 = ++dword_140404A6C[177167565];
  }
  while ( v10 < 10 );
  v52 = dword_140404A6C[178322641];
  v53 = dword_1402B3664;
  do
  {
    if ( ((v5 - 2) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && v5 != 3 )
    {
      dword_140404A6C[4 * v52 + 178322642] = v9 + *(v53 - 1);
      dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v9 + *v53;
      dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v9 + v53[1];
      dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v9 + v53[2];
      v52 = ++dword_140404A6C[178322641];
    }
    ++v5;
    v53 += 4;
  }
  while ( (__int64)v53 < (__int64)&dword_1402B36C4 );
  dword_140404A6C[4 * v52 + 178322642] = v9 + 3;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v9 + 9;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v9 + 8;
  dword_140404A6C[4 * dword_140404A6C[178322641]++ + 178322645] = v9;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322642] = v9 + 9;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v9 + 2;
  dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v9 + 1;
  dword_140404A6C[4 * dword_140404A6C[178322641]++ + 178322645] = v9 + 8;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 7;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9 + 9;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 3;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 7;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9 + 6;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 9;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 6;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9 + 2;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 9;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 5;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9 + 8;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 1;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 5;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9 + 4;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 8;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v9 + 4;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v9;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v9 + 8;
  result = (int)dword_140404A6C[177495247];
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  ++dword_140404A6C[177495247];
  return result;
}

// 1402B3664: using guessed type int dword_1402B3664[];
// 1402B36C4: using guessed type int dword_1402B36C4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;

//----- (000000014004CE30) ----------------------------------------------------
double            sub_14004CE30(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx
  __m128i *v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  void *v7; // rcx
  __m128i *v8; // rax
  unsigned int v9; // ecx
  __m128i *v10; // rax
  unsigned int v11; // ecx
  __m128i *v12; // rax
  unsigned int v13; // ecx
  __m128i *v14; // rax
  unsigned int v15; // ecx
  __m128i *v16; // rax
  unsigned int v17; // ecx
  void *v18; // rcx
  __m128i *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8

  v1 = a1;
  v2 = 908LL * a1;
  v3 = *(void **)&dword_140404A6C[v2 + 178527463];
  dword_140404A6C[v2 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v2 + 178527462] = dword_140404A6C[177167566];
  free(v3);
  v4 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177167566] * dword_140404A6C[177495247]);
  v5 = dword_140404A6C[177167566] * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527463] = (uint64)(uintptr_t)(v4);
  sub_1401FC920(v4, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v5));
  v6 = dword_140404A6C[177495247];
  v7 = *(void **)&dword_140404A6C[v2 + 178527467];
  dword_140404A6C[v2 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v2 + 178527475] = v6;
  free(v7);
  v8 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v9 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527467] = (uint64)(uintptr_t)(v8);
  sub_1401FC920(v8, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v9));
  free(*(void **)&dword_140404A6C[v2 + 178527469]);
  v10 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v11 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527469] = (uint64)(uintptr_t)(v10);
  sub_1401FC920(v10, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v11));
  free(*(void **)&dword_140404A6C[v2 + 178527471]);
  v12 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v13 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527471] = (uint64)(uintptr_t)(v12);
  sub_1401FC920(v12, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v13));
  free(*(void **)&dword_140404A6C[v2 + 178527473]);
  v14 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v15 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527473] = (uint64)(uintptr_t)(v14);
  sub_1401FC920(v14, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v15));
  free(*(void **)&dword_140404A6C[v2 + 178527477]);
  v16 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v17 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527477] = (uint64)(uintptr_t)(v16);
  sub_1401FC920(v16, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v17));
  v18 = *(void **)&dword_140404A6C[v2 + 178527481];
  dword_140404A6C[v2 + 178527479] = dword_140404A6C[178519250];
  free(v18);
  v19 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v20 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v2 + 178527481] = (uint64)(uintptr_t)(v19);
  sub_1401FC920(v19, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v20));
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

// 14004D0A0: variable 'v21' is possibly undefined
// 14004D0DD: variable 'v22' is possibly undefined
// 14004D0F7: variable 'v23' is possibly undefined
// 14004D13B: variable 'v24' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A7DBDA4: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004E6E0) ----------------------------------------------------
void            sub_14004E6E0(int a1, float a2, float a3, float a4)
{
  int v5; // edx
  unsigned int *v6; // rax
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004EB60) ----------------------------------------------------
double            sub_14004EB60(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v8; // rsi
  __m128 v9; // xmm0
  __int64 v10; // rdx
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  __m128d v14; // xmm6
  __m128 v15; // xmm0
  double v16; // xmm7_8
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm1_4
  __m128d v19; // xmm6
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __m128 v22; // xmm0
  unsigned int v23; // xmm2_4
  unsigned int v24; // xmm1_4
  __m128d v25; // xmm6
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __m128 v28; // xmm0
  unsigned int v29; // xmm2_4
  unsigned int v30; // xmm1_4
  __m128d v31; // xmm6
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __m128 v34; // xmm0
  unsigned int v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm11_4
  __int64 v38; // rsi
  double v39; // xmm6_8
  __m128 v40; // xmm0
  unsigned int v41; // xmm2_4
  unsigned int v42; // xmm1_4
  double v43; // xmm6_8
  unsigned int v44; // ebx
  __int64 v45; // rdx
  __m128 v46; // xmm0
  unsigned int v47; // xmm2_4
  unsigned int v48; // xmm1_4
  double v49; // xmm6_8
  unsigned int v50; // ebx
  __int64 v51; // rdx
  __m128 v52; // xmm0
  unsigned int v53; // xmm2_4
  unsigned int v54; // xmm1_4
  double v55; // xmm6_8
  unsigned int v56; // ebx
  __int64 v57; // rdx
  __m128 v58; // xmm0
  unsigned int v59; // xmm1_4
  __int64 v60; // rax
  int v61; // esi
  int v62; // r9d
  int v63; // edx
  int v64; // edx
  unsigned int v65; // r8d
  unsigned int v66; // r10d
  int v67; // edx
  unsigned int v68; // r8d
  int v69; // edx
  unsigned int v70; // r9d
  int v71; // ecx
  unsigned int *v72; // rax
  int v73; // edx
  float *v74; // r10
  int v75; // ecx
  unsigned int *v76; // rax
  int v77; // r11d
  float *v78; // r8
  __int64 v79; // r9
  float v80; // xmm4_4
  float v81; // xmm5_4
  float v82; // xmm0_4
  __int64 v83; // rdx
  __int64 v84; // rax
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm7_4
  float v88; // xmm3_4
  float v89; // xmm6_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm7_4
  float v94; // xmm0_4
  float v95; // xmm3_4
  float v96; // xmm5_4
  float v97; // xmm2_4
  __int64 v98; // rax
  __int64 v99; // rax
  float v100; // xmm4_4
  float *v101; // rdx
  float v102; // xmm5_4
  float v103; // xmm3_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm4_4
  float v107; // xmm0_4

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

// 14004EC19: variable 'v10' is possibly undefined
// 14004EC19: variable 'v3' is possibly undefined
// 14004ED05: variable 'v21' is possibly undefined
// 14004EDE9: variable 'v27' is possibly undefined
// 14004EECD: variable 'v33' is possibly undefined
// 14004F0C1: variable 'v45' is possibly undefined
// 14004F1A5: variable 'v51' is possibly undefined
// 14004F289: variable 'v57' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004FDB0) ----------------------------------------------------
void            sub_14004FDB0(int a1)
{
  int v1; // esi
  int v3; // edi
  int v4; // ecx
  unsigned int *v5; // rax
  int v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  unsigned int *v10; // r9
  unsigned int *v11; // r8
  unsigned int *v12; // r10
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140050280) ----------------------------------------------------
double            sub_140050280(int a1, float a2, float a3, float a4)
{
  int v4; // ebx
  float v5; // xmm6_4
  int v7; // r8d
  unsigned int *v8; // rax
  int v9; // edx
  unsigned int *v10; // rcx
  unsigned int v11; // ecx
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D90: using guessed type __int128 xmmword_140278D90;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 140279550: using guessed type __int128 xmmword_140279550;
// 1402796F0: using guessed type __int128 xmmword_1402796F0;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AB13DB0: using guessed type unsigned int;
// 16AB13DC0: using guessed type unsigned int;
// 16AB13DD0: using guessed type unsigned int;
// 16AB13E40: using guessed type unsigned int;
// 16AB13E50: using guessed type unsigned int;
// 16AB13E60: using guessed type unsigned int;
// 16AB13EA0: using guessed type unsigned int;
// 16AB13EB0: using guessed type unsigned int;
// 16AB13EC0: using guessed type unsigned int;
// 16AB13F00: using guessed type unsigned int;
// 16AB13F10: using guessed type unsigned int;
// 16AB13F20: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 183EBB75C: using guessed type unsigned int;

//----- (00000001400504C0) ----------------------------------------------------
double            sub_1400504C0(int a1, float a2, float a3, float a4)
{
  int v4; // ebx
  unsigned int *v5; // rdx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int *v28; // r9
  unsigned int *v29; // r8
  unsigned int *v30; // r10
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

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B3664: using guessed type int dword_1402B3664[];
// 1402B36C4: using guessed type int dword_1402B36C4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A7DBDB4: using guessed type unsigned int;
// 16A7DBDC0: using guessed type unsigned int;
// 16A7DBDC8: using guessed type unsigned int;
// 16A7DBDD4: using guessed type unsigned int;
// 16A7DBDDC: using guessed type unsigned int;
// 16A7DBDE4: using guessed type unsigned int;
// 16A7DBDE8: using guessed type unsigned int;
// 16A7DBDF0: using guessed type unsigned int;
// 16A7DBDF4: using guessed type unsigned int;
// 16A7DBDF8: using guessed type unsigned int;
// 16A7DBE00: using guessed type unsigned int;
// 16A7DBE04: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400521A0) ----------------------------------------------------
double            sub_1400521A0(int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140052240) ----------------------------------------------------
double            sub_140052240(int a1, int a2, double a3)
{
  __int64 v3; // rsi
  __m128 v5; // xmm0
  __int64 v6; // rbp
  float v7; // xmm11_4
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  float v12; // xmm10_4
  __m128d v13; // xmm6
  __m128 v14; // xmm0
  double v15; // xmm7_8
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm1_4
  __m128d v18; // xmm6
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __m128 v21; // xmm0
  unsigned int v22; // xmm2_4
  unsigned int v23; // xmm1_4
  __m128d v24; // xmm6
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __m128 v27; // xmm0
  unsigned int v28; // xmm2_4
  unsigned int v29; // xmm1_4
  __m128d v30; // xmm6
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __m128 v33; // xmm0
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm10_4
  __m128 v36; // xmm0
  unsigned int v37; // xmm2_4
  unsigned int v38; // xmm1_4
  double v39; // xmm6_8
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __m128 v42; // xmm0
  unsigned int v43; // xmm2_4
  unsigned int v44; // xmm1_4
  double v45; // xmm6_8
  unsigned int v46; // ebx
  __int64 v47; // rdx
  __m128 v48; // xmm0
  unsigned int v49; // xmm2_4
  unsigned int v50; // xmm1_4
  double v51; // xmm6_8
  unsigned int v52; // ebx
  __int64 v53; // rdx
  __m128 v54; // xmm0
  unsigned int v55; // xmm1_4
  float v56; // xmm3_4
  int v57; // esi
  unsigned int v58; // eax
  int v59; // edx
  int v60; // edx
  unsigned int v61; // r8d
  unsigned int v62; // r10d
  int v63; // edx
  unsigned int v64; // r8d
  int v65; // edx
  unsigned int v66; // r9d
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm2_4
  int v73; // ecx
  unsigned int *v74; // rax
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
  v12 = *(float *)&dword_140404A6C[6 * v10 + 437914199] + 0.004999999888241291;
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

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140054750) ----------------------------------------------------
__int64            sub_140054750(int a1, double a2, float a3, float a4)
{
  __int64 v4; // rdx
  int v5; // r15d
  float v6; // xmm0_4
  double v7; // xmm2_8
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // ebx
  __int64 v11; // rsi
  float v12; // xmm1_4
  __m128 v13; // xmm0
  double v14; // xmm10_8
  __int64 v15; // rbp
  __m128d v16; // xmm11
  __int64 v17; // rdx
  __m128 v18; // xmm0
  double v19; // xmm2_8
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  int v23; // eax
  unsigned int v24; // edi
  __m128d v25; // xmm11
  __int64 v26; // rdx
  __m128 v27; // xmm0
  double v28; // xmm2_8
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // eax
  unsigned int v33; // edi
  __m128d v34; // xmm11
  __m128 v35; // xmm0
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // ebx
  unsigned int v42; // r11d
  unsigned int v43; // r10d
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  unsigned int v46; // edx
  int v47; // r8d
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  int v56; // r9d
  unsigned int *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ecx
  bool v62; // cc
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // r9d
  unsigned int *v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 result; // rax
  unsigned int *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // [rsp+F8h] [rbp+10h]

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
      SR_VEC_LANES(128, v16, f64)[0] = SR_VEC_LANES(128, v16, f64)[0] + 1.0471975511966667;
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
      SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 1.0471975511966667;
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
      SR_VEC_LANES(128, v34, f64)[0] = SR_VEC_LANES(128, v34, f64)[0] + 1.0471975511966667;
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

// 14005486B: variable 'v4' is possibly undefined
// 140054931: variable 'v17' is possibly undefined
// 1400549F7: variable 'v26' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400555C0) ----------------------------------------------------
double            sub_1400555C0(int a1, __int64 a2, double a3, float a4, float a5)
{
  float v5; // xmm0_4
  int v6; // esi
  unsigned int v8; // edi
  int v9; // ebx
  float v10; // xmm1_4
  __m128 v11; // xmm0
  double v12; // xmm10_8
  __int64 v13; // rbp
  __m128d v14; // xmm11
  __int64 v15; // rdx
  __m128 v16; // xmm0
  float v17; // xmm3_4
  double v18; // xmm2_8
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21; // eax
  unsigned int v22; // edi
  __m128d v23; // xmm11
  __int64 v24; // rdx
  __m128 v25; // xmm0
  float v26; // xmm3_4
  double v27; // xmm2_8
  float v28; // xmm1_4
  float v29; // xmm0_4
  int v30; // eax
  unsigned int v31; // edi
  __m128d v32; // xmm11
  __m128 v33; // xmm0
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  unsigned int v38; // eax
  int v39; // ebx
  unsigned int v40; // r11d
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // r9d
  unsigned int v46; // eax
  unsigned int *v47; // r8
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v53; // [rsp+100h] [rbp+18h]

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
      SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 1.0471975511966667;
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
      SR_VEC_LANES(128, v23, f64)[0] = SR_VEC_LANES(128, v23, f64)[0] + 1.0471975511966667;
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
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 1.0471975511966667;
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

// 1400556DB: variable 'a2' is possibly undefined
// 14005579B: variable 'v15' is possibly undefined
// 14005585B: variable 'v24' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400561C0) ----------------------------------------------------
void            sub_1400561C0(int a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int *v4; // rax
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int *v7; // rax
  unsigned int *v8; // r9
  unsigned int *v9; // r8
  unsigned int *v10; // r10
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005B840) ----------------------------------------------------
double            sub_14005B840(int a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned int *v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // r10
  unsigned int *v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  signed int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014005D4C0) ----------------------------------------------------
double            sub_14005D4C0(int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
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

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F370) ----------------------------------------------------
double            sub_14005F370(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int *v5; // rax
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
    sub_140002D00((float *)&v7, 0.019999999552965164, 0.019999999552965164, 0.019999999552965164);
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F400) ----------------------------------------------------
double            sub_14005F400(int a1)
{
  int v2; // ecx
  unsigned int *v3; // rax
  float v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = -0.04218750074505806;
  v5[1] = 0.0;
  v5[2] = -0.125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v5, 0.03750000149011612, 0.03125, 0.0010000000474974513);
  *(float *)&dword_140404A6C[177167570] = *(float *)&dword_140404A6C[177167570] + -0.00937500037252903;
  *(float *)&dword_140404A6C[177167573] = *(float *)&dword_140404A6C[177167573] + -0.00937500037252903;
  *(float *)&dword_140404A6C[177167576] = *(float *)&dword_140404A6C[177167576] + 0.004687500186264515;
  *(float *)&dword_140404A6C[177167567] = *(float *)&dword_140404A6C[177167567] + 0.004687500186264515;
  v5[0] = 0.04218750074505806;
  sub_140002D00(v5, 0.03750000149011612, 0.03125, 0.0010000000474974513);
  v2 = 0;
  *(float *)&dword_140404A6C[177167591] = *(float *)&dword_140404A6C[177167591] + 0.00937500037252903;
  *(float *)&dword_140404A6C[177167600] = *(float *)&dword_140404A6C[177167600] + 0.00937500037252903;
  *(float *)&dword_140404A6C[177167594] = *(float *)&dword_140404A6C[177167594] + -0.004687500186264515;
  *(float *)&dword_140404A6C[177167597] = *(float *)&dword_140404A6C[177167597] + -0.004687500186264515;
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F5A0) ----------------------------------------------------
double            sub_14005F5A0(int a1, float a2, float a3, float a4)
{
  int v5; // ebx
  float v6; // xmm0_4
  float v7; // xmm0_4
  int v8; // ecx
  unsigned int *v9; // rax
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140066EE0) ----------------------------------------------------
double            sub_140066EE0(int a1, float a2, double a3, float a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // esi
  int v7; // edi
  float v8; // xmm10_4
  __int64 v9; // r12
  float v10; // xmm11_4
  unsigned int v11; // r13d
  unsigned int v12; // xmm0_4
  __int64 v13; // rcx
  __m128 v14; // xmm9
  __int64 v15; // rbp
  unsigned int v16; // ebx
  float v17; // xmm0_4
  __m128d v18; // xmm7
  float v19; // xmm8_4
  __int64 v20; // rdx
  __m128 v21; // xmm0
  double v22; // xmm1_8
  double v23; // xmm6_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  __int64 v26; // rcx
  unsigned int v27; // xmm0_4
  __m128 v28; // xmm0
  __m128 v29; // xmm9
  __int64 v30; // rbp
  unsigned int v31; // xmm8_4
  __m128d v32; // xmm7
  __int64 v33; // rdx
  __m128 v34; // xmm0
  double v35; // xmm1_8
  double v36; // xmm0_8
  __int64 v37; // rcx
  unsigned int v38; // xmm0_4
  __m128 v39; // xmm0
  __int64 v40; // rdx
  __m128 v41; // xmm8
  __int64 v42; // rbp
  unsigned int v43; // xmm7_4
  __m128d v44; // xmm6
  __int64 v45; // rdx
  __m128 v46; // xmm0
  double v47; // xmm1_8
  double v48; // xmm0_8
  unsigned int v49; // xmm3_4
  __int64 v50; // rcx
  unsigned int v51; // xmm0_4
  __m128 v52; // xmm0
  __int64 v53; // r9
  unsigned int v54; // ecx
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rax
  unsigned int v58; // esi
  unsigned int v59; // r10d
  int v60; // r11d
  unsigned int v61; // r8d
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // esi
  unsigned int v67; // r9d
  __int64 v68; // r11
  int v69; // r8d
  unsigned int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // r10d
  unsigned int v74; // r8d
  char v75; // r11
  unsigned int v76; // r9d
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  float v83; // [rsp+120h] [rbp+18h]

  v83 = *(float *)&a3;
  LODWORD(v5) = 0;
  v6 = 0;
  v7 = 0;
  v8 = a2 * 0.5;
  v9 = 16;
  dword_140404A6C[177167565] = 0;
  v10 = a2 * -0.5;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  while ( 1 )
  {
    v11 = v6 - 16;
    v12 = v7 ? LODWORD(v8) : LODWORD(v10);
    v13 = (int)(3 * v6);
    v14 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    dword_140404A6C[v13 + 177167567] = v12;
    *(_QWORD *)&dword_140404A6C[v13 + 177167568] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = -1082130432;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v5;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v5;
    v15 = 8;
    v16 = ++dword_140404A6C[177167565];
    do
    {
      if ( v7 )
        v17 = 0.375;
      else
        v17 = -0.375;
      v18 = _mm_cvtps_pd(v14);
      v19 = a2 * v17;
      v21 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v18, f64)[0], v4, a3));
      v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0];
      HIDWORD(a3) = 0;
      v23 = a4;
      v24 = *(double *)SR_VEC_LANES(128, v21, u64) * a4;
      *(float *)&a3 = v22 * a4 * 0.875;
      if ( v7 )
        v25 = v24 * -0.875;
      else
        v25 = v24 * 0.875;
      v26 = (int)(3 * v16);
      *(float *)&v27 = v25;
      *(float *)&dword_140404A6C[v26 + 177167567] = v19;
      dword_140404A6C[v26 + 177167569] = v27;
      dword_140404A6C[v26 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v28 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v14, u64), v20, a3);
      v4 = 0;
      SR_VEC_LANES(128, v18, f64)[0] = SR_VEC_LANES(128, v18, f64)[0] + 0.7853981633975;
      v14 = _mm_cvtpd_ps(v18);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v28, v28, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v28, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v15;
    }
    while ( v15 );
    v29 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v30 = 16;
    do
    {
      if ( v7 )
        v31 = LODWORD(v8);
      else
        v31 = LODWORD(v10);
      v32 = _mm_cvtps_pd(v29);
      v34 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v32, f64)[0], 0, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
      HIDWORD(a3) = 0;
      v35 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1), f64)[0] * v23;
      v36 = *(double *)SR_VEC_LANES(128, v34, u64) * v23;
      *(float *)&a3 = v35;
      if ( v7 )
        v36 = -v36;
      v37 = (int)(3 * v16);
      *(float *)&v38 = v36;
      dword_140404A6C[v37 + 177167567] = v31;
      dword_140404A6C[v37 + 177167569] = v38;
      dword_140404A6C[v37 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v39 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v29, u64), v33, a3);
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 0.39269908169875;
      v40 = 0;
      v29 = _mm_cvtpd_ps(v32);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v39, v39, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v39, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v30;
    }
    while ( v30 );
    v41 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v42 = 16;
    do
    {
      if ( v7 )
        v43 = LODWORD(v8);
      else
        v43 = LODWORD(v10);
      v44 = _mm_cvtps_pd(v41);
      v46 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v44, f64)[0], v40, a3));
      a3 = v83;
      v47 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v46, (__m128d)v46, 1), f64)[0] * v83;
      v48 = *(double *)SR_VEC_LANES(128, v46, u64) * v83;
      if ( v7 )
        v48 = -v48;
      v50 = (int)(3 * v16);
      *(float *)&v51 = v48;
      dword_140404A6C[v50 + 177167567] = v43;
      dword_140404A6C[v50 + 177167569] = v51;
      *(float *)&v49 = v47;
      dword_140404A6C[v50 + 177167568] = v49;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v52 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v41, u64), v45, a3);
      SR_VEC_LANES(128, v44, f64)[0] = SR_VEC_LANES(128, v44, f64)[0] + 0.39269908169875;
      v41 = _mm_cvtpd_ps(v44);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v52, v52, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v52, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v42;
    }
    while ( v42 );
    v53 = 8;
    v54 = dword_140404A6C[177495247];
    v55 = 1;
    do
    {
      dword_140404A6C[3 * v54 + 177495248] = v6;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55 + v6;
      v56 = (v55++ & 7) + 1;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + v56;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v57 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v57 + 178011345] = 1056964608;
      dword_140404A6C[v57 + 178011346] = 1056964608;
      dword_140404A6C[v57 + 178011347] = 1056964608;
      dword_140404A6C[v57 + 178011348] = 1056964608;
      dword_140404A6C[v57 + 178011349] = 1056964608;
      dword_140404A6C[v57 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v53;
    }
    while ( v53 );
    v58 = v6 + 1;
    v59 = v58;
    v60 = 1;
    v5 = 8;
    do
    {
      v61 = v58 + (v60 & 0xF) + 8;
      dword_140404A6C[3 * v54 + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58 + 7 + v60;
      v62 = v58 + ((1 - (_BYTE)v58 + (_BYTE)v59) & 7);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v61;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v63 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v63 + 178011345] = 1056964608;
      dword_140404A6C[v63 + 178011346] = 1056964608;
      dword_140404A6C[v63 + 178011347] = 1056964608;
      dword_140404A6C[v63 + 178011348] = 1056964608;
      dword_140404A6C[v63 + 178011349] = 1056964608;
      dword_140404A6C[v63 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v62;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v64 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v64 + 178011345] = 1056964608;
      dword_140404A6C[v64 + 178011346] = 1056964608;
      dword_140404A6C[v64 + 178011347] = 1056964608;
      dword_140404A6C[v64 + 178011348] = 1056964608;
      dword_140404A6C[v64 + 178011349] = 1056964608;
      dword_140404A6C[v64 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58 + (((_BYTE)v60 + 1) & 0xF) + 8;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v65 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v65 + 178011345] = 1056964608;
      ++v59;
      dword_140404A6C[v65 + 178011346] = 1056964608;
      v60 += 2;
      dword_140404A6C[v65 + 178011347] = 1056964608;
      dword_140404A6C[v65 + 178011348] = 1056964608;
      dword_140404A6C[v65 + 178011349] = 1056964608;
      dword_140404A6C[v65 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v5;
    }
    while ( v5 );
    v66 = v58 + 8;
    v67 = v66;
    v68 = 16;
    do
    {
      v69 = ((_BYTE)v67 + 1 - (_BYTE)v66) & 0xF;
      dword_140404A6C[3 * v54 + 177495248] = v67;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67 + 16;
      v70 = v69 + v66 + 16;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v71 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v71 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011349] = 0;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v67++;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70;
      v4 = v69 + v66;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v4;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v72 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 0;
      v54 = ++dword_140404A6C[177495247];
      --v68;
    }
    while ( v68 );
    if ( ++v7 >= 2 )
      break;
    v6 = dword_140404A6C[177167565];
  }
  v73 = dword_140404A6C[177167565] - 16;
  v74 = v11;
  v75 = 1 - (LOBYTE(dword_140404A6C[177167565]) - 16);
  v76 = dword_140404A6C[177167565] - 16 + 15;
  do
  {
    dword_140404A6C[3 * v54 + 177495248] = v74;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v73 + (((_BYTE)v76 + v75) & 0xF);
    v77 = v11 + ((1 - (_BYTE)v11 + (_BYTE)v74) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v76;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v78 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v78 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011349] = 0;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v74++;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v76--;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v79 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v79 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011349] = 0;
    v54 = ++dword_140404A6C[177495247];
    --v9;
  }
  while ( v9 );
  return sub_1401449C0(a1, 0);
}

// 14006707C: variable 'v4' is possibly undefined
// 1400670F5: variable 'v20' is possibly undefined
// 14006720A: variable 'v33' is possibly undefined
// 1400672B8: variable 'v40' is possibly undefined
// 14006731F: variable 'v45' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400FF3C0) ----------------------------------------------------
double            sub_1400FF3C0(__int64 a1, int a2)
{
  int v4; // r11d
  __int64 v5; // r8
  unsigned int *v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // r9d
  __int64 v10; // r11
  __int64 v11; // rdx

  dword_140404A6C[177167565] = *(_DWORD *)a1;
  v4 = 0;
  if ( *(int *)a1 > 0 )
  {
    v5 = 0;
    v6 = &dword_140404A6C[177167569];
    do
    {
      v7 = *(_QWORD *)(a1 + 8);
      v5 += 16;
      ++v4;
      v6 += 3;
      *(v6 - 5) = *(_DWORD *)(v5 + v7 - 16);
      *(v6 - 4) = *(_DWORD *)(v5 + v7 - 12);
      *(v6 - 3) = *(_DWORD *)(v5 + v7 - 8);
    }
    while ( v4 < *(_DWORD *)a1 );
  }
  v8 = 0;
  v9 = 0;
  dword_140404A6C[177495247] = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v10 = 0;
    do
    {
      dword_140404A6C[3 * v8 + 177495248] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 8);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 12);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 16);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
      v8 = ++dword_140404A6C[177495247];
      v11 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(v10 + v11 + 4) == 4 )
      {
        dword_140404A6C[3 * v8 + 177495248] = *(_DWORD *)(v10 + v11 + 8);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 16);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 20);
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v8 = ++dword_140404A6C[177495247];
      }
      ++v9;
      v10 += 36;
    }
    while ( v9 < *(_DWORD *)(a1 + 16) );
  }
  return sub_1401449C0(a2, 1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (00000001400FFAE0) ----------------------------------------------------
double            sub_1400FFAE0(int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFAE0[16];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400FFAE0 + 0)) /* [rsp+20h] */
#define v9 (*(int (*))(void *)(sr_frame_1400FFAE0 + 8)) /* [rsp+28h] */

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v8 = 0;
  v9 = 0;
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
  *(_OWORD *)&dword_140404A6C[178011405] = xmmword_1402794B0;
  *(_OWORD *)&dword_140404A6C[178011409] = xmmword_140279410;
  *(_OWORD *)&dword_140404A6C[178011413] = xmmword_140279430;
  *(_OWORD *)&dword_140404A6C[178011345] = xmmword_140279400;
  *(_OWORD *)&dword_140404A6C[178011349] = xmmword_140278D70;
  *(_OWORD *)&dword_140404A6C[178011353] = xmmword_140278E50;
  if ( a1 == dword_140404A6C[283827003] )
  {
    *(_OWORD *)&dword_140404A6C[178011357] = xmmword_1402796F0;
    *(_OWORD *)&dword_140404A6C[178011365] = xmmword_140278D90;
    *(_OWORD *)&dword_140404A6C[178011361] = xmmword_1402794A0;
  }
  return sub_1401449C0(a1, 0);
}
#undef v8
#undef v9

// 140278D70: using guessed type __int128 xmmword_140278D70;
// 140278D90: using guessed type __int128 xmmword_140278D90;
// 140278E50: using guessed type __int128 xmmword_140278E50;
// 140279400: using guessed type __int128 xmmword_140279400;
// 140279410: using guessed type __int128 xmmword_140279410;
// 140279430: using guessed type __int128 xmmword_140279430;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 1402794B0: using guessed type __int128 xmmword_1402794B0;
// 1402796F0: using guessed type __int128 xmmword_1402796F0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AB13DB0: using guessed type unsigned int;
// 16AB13DC0: using guessed type unsigned int;
// 16AB13DD0: using guessed type unsigned int;
// 16AB13DE0: using guessed type unsigned int;
// 16AB13DF0: using guessed type unsigned int;
// 16AB13E00: using guessed type unsigned int;
// 16AB13EA0: using guessed type unsigned int;
// 16AB13EB0: using guessed type unsigned int;
// 16AB13EC0: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400FFCE0) ----------------------------------------------------
__int64            sub_1400FFCE0(int a1, int a2, double a3)
{
  unsigned int *v3; // rdi
  int v4; // esi
  float v5; // xmm6_4
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  float v15; // xmm8_4
  unsigned int v16; // xmm7_4
  float v17; // xmm9_4
  __int64 v18; // rdx
  __m128 v19; // xmm0
  double v20; // xmm2_8
  unsigned int v21; // xmm3_4
  float v22; // xmm6_4
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __m128 v28; // xmm0
  double v29; // xmm2_8
  unsigned int v30; // xmm3_4
  float v31; // xmm6_4
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __m128 v37; // xmm0
  double v38; // xmm2_8
  unsigned int v39; // xmm3_4
  float v40; // xmm6_4
  __int64 v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __m128 v45; // xmm0
  unsigned int v46; // xmm3_4
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edi
  __int64 v50; // rsi
  unsigned int v51; // r10d
  unsigned int v52; // r8d
  unsigned int v53; // edx
  __int64 v54; // rax
  unsigned int v55; // r15d
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ebx
  unsigned int v60; // r11d
  unsigned int v61; // r9d
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r10d
  __int64 v67; // rax
  unsigned int v68; // r8d
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // r9d
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // r13
  unsigned int v79; // eax
  int v80; // r8d
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFCE0[128];
#define v85 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 0)) /* [rsp+8h] */
#define v86 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 32)) /* [rsp+28h] */
#define v87 (*(unsigned __int64 (*))(void *)(sr_frame_1400FFCE0 + 40)) /* [rsp+30h] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 48)) /* [rsp+38h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 52)) /* [rsp+3Ch] */
#define v90 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 56)) /* [rsp+40h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 60)) /* [rsp+44h] */
#define v92 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 64)) /* [rsp+48h] */
#define v93 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 68)) /* [rsp+4Ch] */
#define v94 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 72)) /* [rsp+50h] */
#define v95 (*(_DWORD (*)[3])(void *)(sr_frame_1400FFCE0 + 76)) /* [rsp+54h] */
#define v96 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 88)) /* [rsp+60h] */
#define v97 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 92)) /* [rsp+64h] */
#define v98 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 96)) /* [rsp+68h] */
#define v99 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 112)) /* [rsp+78h] */

  v3 = &v93;
  v4 = 0;
  v5 = 0.0;
  v6 = dword_140404A6C[177167565];
  LODWORD(v86) = a1;
  v87 = 16LL * a1;
  v7 = a2 + 16;
  v8 = dword_140404A6C[v87 / 4 + 178322642];
  v9 = dword_140404A6C[v87 / 4 + 178322644];
  v10 = dword_140404A6C[v87 / 4 + 178322645];
  v89 = dword_140404A6C[v87 / 4 + 178322643];
  v88 = v8;
  v90 = v9;
  v11 = (int)(3 * v89);
  v12 = (int)(3 * v8);
  v13 = (int)(3 * v9);
  v14 = 3 * (int)v10;
  v91 = v10;
  v15 = (float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167567] + *(float *)&dword_140404A6C[v11 + 177167567])
                      + *(float *)&dword_140404A6C[v13 + 177167567])
              + *(float *)&dword_140404A6C[v14 + 177167567])
      * 0.25;
  *(float *)&v16 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167569]
                                                 + *(float *)&dword_140404A6C[v11 + 177167569])
                                         + *(float *)&dword_140404A6C[v13 + 177167569])
                                 + *(float *)&dword_140404A6C[v14 + 177167569])
                         * 0.25)
                 + 0.015625;
  v17 = (float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167568] + *(float *)&dword_140404A6C[v11 + 177167568])
                      + *(float *)&dword_140404A6C[v13 + 177167568])
              + *(float *)&dword_140404A6C[v14 + 177167568])
      * 0.25;
  do
  {
    v19 = _mm_castpd_ps(sub_1401F8A50(v5, v10, a3));
    HIDWORD(v20) = 0;
    *(float *)&v20 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v19, (__m128d)v19, 1), f64)[0] * 0.009765625;
    *(float *)&v21 = *(double *)SR_VEC_LANES(128, v19, u64) * -0.0234375;
    if ( (v4 & 1) != 0 )
      *(float *)&v20 = *(float *)&v20 * 0.875;
    v22 = v5 + 0.7853981852531433;
    dword_140404A6C[2 * v6 + 177216719] = v21;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = LODWORD(v20);
    v23 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v23 + 177167568] = v17 + *(float *)&v20;
    *(float *)&dword_140404A6C[v23 + 177167567] = v15 + *(float *)&v21;
    dword_140404A6C[v23 + 177167569] = v16;
    v24 = dword_140404A6C[177167565];
    v25 = 7LL * (int)dword_140404A6C[177167565];
    *(v3 - 1) = dword_140404A6C[177167565];
    v26 = v24 + 1;
    dword_140404A6C[177167565] = v26;
    dword_140404A6C[v25 + 160235602] = v21;
    dword_140404A6C[v25 + 160235603] = LODWORD(v20);
    dword_140404A6C[v25 + 160235598] = v7;
    dword_140404A6C[v25 + 160235599] = 3;
    dword_140404A6C[v25 + 160235604] = 1015021568;
    v28 = _mm_castpd_ps(sub_1401F8A50(v22, v18, v20));
    HIDWORD(v29) = 0;
    *(float *)&v29 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v28, (__m128d)v28, 1), f64)[0] * 0.009765625;
    *(float *)&v30 = *(double *)SR_VEC_LANES(128, v28, u64) * -0.0234375;
    if ( (((_BYTE)v4 + 3) & 1) != 0 )
      *(float *)&v29 = *(float *)&v29 * 0.875;
    v31 = v22 + 0.7853981852531433;
    dword_140404A6C[2 * v26 + 177216719] = v30;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = LODWORD(v29);
    v32 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v32 + 177167567] = v15 + *(float *)&v30;
    *(float *)&dword_140404A6C[v32 + 177167568] = v17 + *(float *)&v29;
    dword_140404A6C[v32 + 177167569] = v16;
    v33 = dword_140404A6C[177167565];
    v34 = 7LL * (int)dword_140404A6C[177167565];
    *v3 = dword_140404A6C[177167565];
    v35 = v33 + 1;
    dword_140404A6C[177167565] = v35;
    dword_140404A6C[v34 + 160235598] = v7;
    dword_140404A6C[v34 + 160235599] = 3;
    dword_140404A6C[v34 + 160235602] = v30;
    dword_140404A6C[v34 + 160235603] = LODWORD(v29);
    dword_140404A6C[v34 + 160235604] = 1015021568;
    v37 = _mm_castpd_ps(sub_1401F8A50(v31, v27, v29));
    HIDWORD(v38) = 0;
    *(float *)&v38 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v37, (__m128d)v37, 1), f64)[0] * 0.009765625;
    *(float *)&v39 = *(double *)SR_VEC_LANES(128, v37, u64) * -0.0234375;
    if ( (v4 & 1) != 0 )
      *(float *)&v38 = *(float *)&v38 * 0.875;
    v40 = v31 + 0.7853981852531433;
    dword_140404A6C[2 * v35 + 177216719] = v39;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = LODWORD(v38);
    v41 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v41 + 177167567] = v15 + *(float *)&v39;
    *(float *)&dword_140404A6C[v41 + 177167568] = v17 + *(float *)&v38;
    dword_140404A6C[v41 + 177167569] = v16;
    v42 = dword_140404A6C[177167565];
    v43 = 7LL * (int)dword_140404A6C[177167565];
    v3[1] = dword_140404A6C[177167565];
    v44 = v42 + 1;
    dword_140404A6C[177167565] = v44;
    dword_140404A6C[v43 + 160235598] = v7;
    dword_140404A6C[v43 + 160235599] = 3;
    dword_140404A6C[v43 + 160235602] = v39;
    dword_140404A6C[v43 + 160235603] = LODWORD(v38);
    dword_140404A6C[v43 + 160235604] = 1015021568;
    v45 = _mm_castpd_ps(sub_1401F8A50(v40, v36, v38));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v45, (__m128d)v45, 1), f64)[0] * 0.009765625;
    *(float *)&v46 = *(double *)SR_VEC_LANES(128, v45, u64) * -0.0234375;
    if ( (((_BYTE)v4 + 3) & 1) != 0 )
      *(float *)&a3 = *(float *)&a3 * 0.875;
    v5 = v40 + 0.7853981852531433;
    v4 += 4;
    dword_140404A6C[2 * v44 + 177216719] = v46;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = LODWORD(a3);
    v47 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v47 + 177167567] = v15 + *(float *)&v46;
    *(float *)&dword_140404A6C[v47 + 177167568] = v17 + *(float *)&a3;
    dword_140404A6C[v47 + 177167569] = v16;
    v10 = (int)dword_140404A6C[177167565];
    v48 = 7LL * (int)dword_140404A6C[177167565];
    v3[2] = dword_140404A6C[177167565];
    v3 += 4;
    v6 = v10 + 1;
    dword_140404A6C[177167565] = v10 + 1;
    dword_140404A6C[v48 + 160235598] = v7;
    dword_140404A6C[v48 + 160235599] = 3;
    dword_140404A6C[v48 + 160235602] = v46;
    dword_140404A6C[v48 + 160235603] = LODWORD(a3);
    dword_140404A6C[v48 + 160235604] = 1015021568;
  }
  while ( v4 < 8 );
  v49 = v88;
  v50 = 0;
  v51 = v92;
  v52 = v89;
  v53 = v97;
  dword_140404A6C[2 * v6 + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
  v54 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v54 + 177167567] = v15;
  *(float *)&dword_140404A6C[v54 + 177167568] = v17;
  dword_140404A6C[v54 + 177167569] = v16;
  v55 = dword_140404A6C[177167565];
  v56 = 7LL * (int)dword_140404A6C[177167565];
  v98 = dword_140404A6C[177167565]++;
  LODWORD(v54) = dword_140404A6C[177495247];
  dword_140404A6C[v56 + 160235598] = v7;
  dword_140404A6C[v56 + 160235599] = 3;
  *(_QWORD *)&dword_140404A6C[v56 + 160235602] = 0;
  dword_140404A6C[v56 + 160235604] = 1015021568;
  dword_140404A6C[3 * (_DWORD)v54 + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v52;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v51;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v57 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v57 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v57 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v57 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v58 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v58 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v58 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v58 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53;
  v59 = v96;
  v60 = v94;
  v61 = v90;
  v62 = v93;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v96;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v63 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v63 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v63 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v63 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v52;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v64 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v64 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v52;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v62;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v65 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v65 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v65 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v65 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v52;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v62;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v51;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v66 = v95[1];
  v67 = 6 * dword_140404A6C[177495247];
  v68 = v91;
  v69 = v95[0];
  *(_QWORD *)&dword_140404A6C[v67 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v68;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v66;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v70 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v70 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v71 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v71 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v71 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v71 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v72 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  v73 = 2;
  v74 = v95[2];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v68;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v75 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v75 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v75 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v75 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v68;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v76 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v76 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v76 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v76 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v68;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v66;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v77 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v77 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v77 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v77 + 178011349] = 1065353216;
  v78 = v87;
  v79 = ++dword_140404A6C[177495247];
  do
  {
    dword_140404A6C[3 * v79 + 177495248] = *(&v92 + v50);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v92 + (((_BYTE)v73 - 1) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *(&v93 + v50);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v92 + (v73 & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v95[v50 - 1];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v92 + (((_BYTE)v73 + 1) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v95[v50];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v92 + (((_BYTE)v73 + 2) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    v73 += 4;
    v50 += 4;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    v79 = ++dword_140404A6C[177495247];
  }
  while ( v50 < 8 );
  v80 = v86;
  if ( (int)v86 >= 0 )
  {
    v81 = dword_140404A6C[178322641];
    if ( (int)v86 < (int)dword_140404A6C[178322641] )
    {
      --dword_140404A6C[178322641];
      *(unsigned int *)((char *)&dword_140404A6C[178322642] + v78) = dword_140404A6C[4 * (v81 - 1) + 178322642];
      *(unsigned int *)((char *)&dword_140404A6C[178322643] + v78) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322643];
      *(unsigned int *)((char *)&dword_140404A6C[178322644] + v78) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322644];
      *(unsigned int *)((char *)&dword_140404A6C[178322645] + v78) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322645];
      v82 = 8 * dword_140404A6C[178322641];
      v83 = 8 * v80;
      *(_OWORD *)&dword_140404A6C[v83 + 178388178] = *(_OWORD *)&dword_140404A6C[v82 + 178388178];
      *(_OWORD *)&dword_140404A6C[v83 + 178388182] = *(_OWORD *)&dword_140404A6C[v82 + 178388182];
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v99
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

//----- (000000014013F590) ----------------------------------------------------
double            sub_14013F590(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rax
  char *v7; // r11
  char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // r14
  char *v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned int *v24; // r8
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r11
  unsigned int *v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013F590[80];
#define v49 (*(__int64 (*))(void *)(sr_frame_14013F590 + 0)) /* [rsp+20h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_14013F590 + 8)) /* [rsp+28h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14013F590 + 16)) /* [rsp+30h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_14013F590 + 48)) /* [rsp+50h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_14013F590 + 56)) /* [rsp+58h] */
#define v54 (*(__int64 (*))(void *)(sr_frame_14013F590 + 72)) /* [rsp+68h] */

  v2 = 0;
  v3 = 50LL * a1;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  v4 = 0;
  dword_140404A6C[177167565] = dword_140404A6C[v3 + 272248222];
  v5 = (int)dword_140404A6C[177167565];
  v52 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_10;
    v14 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_8;
  }
  v6 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
  v7 = (char *)&dword_140404A6C[177167568] - v6;
  v54 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v8 = (char *)&dword_140404A6C[177167567] - v6;
  v9 = v54 + 20;
  v10 = v6 + 20;
  v11 = (char *)&dword_140404A6C[177167569] - v6;
  v12 = (char *)&dword_140404A6C[177216715] - v54;
  v13 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v53 = 4 * v13;
  do
  {
    v9 += 32;
    *(_DWORD *)&v8[v10 - 20] = *(_DWORD *)(v10 - 20);
    *(_DWORD *)&v7[v10 - 20] = *(_DWORD *)(v10 - 16);
    *(_DWORD *)&v11[v10 - 20] = *(_DWORD *)(v10 - 12);
    v10 += 48;
    *(unsigned int *)((char *)&dword_140404A6C[177216706] + v9 - v54) = *(_DWORD *)(v9 - 52);
    *(_DWORD *)&v12[v9 - 32] = *(_DWORD *)(v9 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177167553] + v10 - v6) = *(_DWORD *)(v10 - 56);
    *(unsigned int *)((char *)&dword_140404A6C[177167554] + v10 - v6) = *(_DWORD *)(v10 - 52);
    *(_DWORD *)&v8[v10 - 48] = *(_DWORD *)(v10 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177216708] + v9 - v54) = *(_DWORD *)(v9 - 44);
    *(unsigned int *)((char *)&dword_140404A6C[177216709] + v9 - v54) = *(_DWORD *)(v9 - 40);
    *(_DWORD *)&v7[v10 - 48] = *(_DWORD *)(v10 - 44);
    *(_DWORD *)&v11[v10 - 48] = *(_DWORD *)(v10 - 40);
    *(unsigned int *)((char *)&dword_140404A6C[177167558] + v10 - v6) = *(_DWORD *)(v10 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216710] + v9 - v54) = *(_DWORD *)(v9 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216711] + v9 - v54) = *(_DWORD *)(v9 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167559] + v10 - v6) = *(_DWORD *)(v10 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167560] + v10 - v6) = *(_DWORD *)(v10 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177167561] + v10 - v6) = *(_DWORD *)(v10 - 24);
    *(unsigned int *)((char *)&dword_140404A6C[177216712] + v9 - v54) = *(_DWORD *)(v9 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177216713] + v9 - v54) = *(_DWORD *)(v9 - 24);
    v12 = (char *)&dword_140404A6C[177216715] - v54;
    --v13;
  }
  while ( v13 );
  v5 = v52;
  v4 = v53;
  v2 = 0;
  v14 = v54;
  if ( v53 < v52 )
  {
LABEL_8:
    v15 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
    v16 = &dword_140404A6C[3 * v4 + 177167569];
    v17 = v15 + 4 * (3 * v4 + 2);
    v18 = v15 - (_QWORD)&dword_140404A6C[177167569];
    v19 = v14 + 8 * v4;
    v20 = v5 - v4;
    do
    {
      v19 += 8;
      *(v16 - 2) = *(unsigned int *)((char *)v16 + v18);
      v16 += 3;
      v21 = *(_DWORD *)(v17 - 4);
      v17 += 12;
      *(v16 - 4) = v21;
      *(v16 - 3) = *(_DWORD *)(v17 - 12);
      *(unsigned int *)((char *)&dword_140404A6C[177216717] + v19 - v14) = *(_DWORD *)(v19 - 8);
      *(unsigned int *)((char *)&dword_140404A6C[177216718] + v19 - v14) = *(_DWORD *)(v19 - 4);
      --v20;
    }
    while ( v20 );
  }
LABEL_10:
  dword_140404A6C[177495247] = dword_140404A6C[v3 + 272248227];
  v22 = (int)dword_140404A6C[177495247];
  v51 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] < 4LL )
  {
    if ( (int)dword_140404A6C[177495247] <= 0 )
      return sub_1401449C0(a2, 1);
    v40 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
    v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_17;
  }
  v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v24 = &dword_140404A6C[178011348];
  v49 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
  v25 = (unsigned int *)(v49 + 8);
  v26 = ((unsigned __int64)((int)dword_140404A6C[177495247] - 4LL) >> 2) + 1;
  v50 = 4 * v26;
  do
  {
    *(unsigned int *)((char *)&dword_140404A6C[177495246] + (_QWORD)v25 - v49) = *(v25 - 2);
    v27 = (int)(2 * *(v25 - 2));
    *(v24 - 3) = *(_DWORD *)(v23 + 4 * v27);
    *(v24 - 2) = *(_DWORD *)(v23 + 4 * v27 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495247] + (_QWORD)v25 - v49) = *(v25 - 1);
    v28 = (int)(2 * *(v25 - 1));
    *(v24 - 1) = *(_DWORD *)(v23 + 4 * v28);
    *v24 = *(_DWORD *)(v23 + 4 * v28 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495248] + (_QWORD)v25 - v49) = *v25;
    v29 = (int)(2 * *v25);
    v24[1] = *(_DWORD *)(v23 + 4 * v29);
    v24[2] = *(_DWORD *)(v23 + 4 * v29 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495249] + (_QWORD)v25 - v49) = v25[1];
    v30 = (int)(2 * v25[1]);
    v24[3] = *(_DWORD *)(v23 + 4 * v30);
    v24[4] = *(_DWORD *)(v23 + 4 * v30 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495250] + (_QWORD)v25 - v49) = v25[2];
    v31 = (int)(2 * v25[2]);
    v24[5] = *(_DWORD *)(v23 + 4 * v31);
    v24[6] = *(_DWORD *)(v23 + 4 * v31 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495251] + (_QWORD)v25 - v49) = v25[3];
    v32 = (int)(2 * v25[3]);
    v24[7] = *(_DWORD *)(v23 + 4 * v32);
    v24[8] = *(_DWORD *)(v23 + 4 * v32 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495252] + (_QWORD)v25 - v49) = v25[4];
    v33 = (int)(2 * v25[4]);
    v24[9] = *(_DWORD *)(v23 + 4 * v33);
    v24[10] = *(_DWORD *)(v23 + 4 * v33 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495253] + (_QWORD)v25 - v49) = v25[5];
    v34 = (int)(2 * v25[5]);
    v24[11] = *(_DWORD *)(v23 + 4 * v34);
    v24[12] = *(_DWORD *)(v23 + 4 * v34 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495254] + (_QWORD)v25 - v49) = v25[6];
    v35 = (int)(2 * v25[6]);
    v24[13] = *(_DWORD *)(v23 + 4 * v35);
    v24[14] = *(_DWORD *)(v23 + 4 * v35 + 4);
    v36 = v25[7];
    v24 += 24;
    v25 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177495243] + (_QWORD)v25 - v49) = v36;
    v37 = (int)(2 * *(v25 - 5));
    *(v24 - 9) = *(_DWORD *)(v23 + 4 * v37);
    *(v24 - 8) = *(_DWORD *)(v23 + 4 * v37 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495244] + (_QWORD)v25 - v49) = *(v25 - 4);
    v38 = (int)(2 * *(v25 - 4));
    *(v24 - 7) = *(_DWORD *)(v23 + 4 * v38);
    *(v24 - 6) = *(_DWORD *)(v23 + 4 * v38 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495245] + (_QWORD)v25 - v49) = *(v25 - 3);
    v39 = (int)(2 * *(v25 - 3));
    *(v24 - 5) = *(_DWORD *)(v23 + 4 * v39);
    *(v24 - 4) = *(_DWORD *)(v23 + 4 * v39 + 4);
    --v26;
  }
  while ( v26 );
  v22 = v51;
  v2 = v50;
  v40 = v49;
  if ( v50 < v51 )
  {
LABEL_17:
    v41 = v40 + 4 * (v2 + 2 * (v2 + 1));
    v42 = v22 - v2;
    v43 = &dword_140404A6C[6 * v2 + 178011348];
    do
    {
      v43 += 6;
      *(unsigned int *)((char *)&dword_140404A6C[177495246] + v41 - v40) = *(_DWORD *)(v41 - 8);
      v44 = *(_DWORD *)(v41 - 8);
      v41 += 12;
      v45 = 2 * v44;
      *(v43 - 9) = *(_DWORD *)(v23 + 4 * v45);
      *(v43 - 8) = *(_DWORD *)(v23 + 4 * v45 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495244] + v41 - v40) = *(_DWORD *)(v41 - 16);
      v46 = 2 * *(_DWORD *)(v41 - 16);
      *(v43 - 7) = *(_DWORD *)(v23 + 4 * v46);
      *(v43 - 6) = *(_DWORD *)(v23 + 4 * v46 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495245] + v41 - v40) = *(_DWORD *)(v41 - 12);
      v47 = 2 * *(_DWORD *)(v41 - 12);
      *(v43 - 5) = *(_DWORD *)(v23 + 4 * v47);
      *(v43 - 4) = *(_DWORD *)(v23 + 4 * v47 + 4);
      --v42;
    }
    while ( v42 );
  }
  return sub_1401449C0(a2, 1);
}
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014013FCD0) ----------------------------------------------------
double            sub_14013FCD0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // r9
  char *v10; // r11
  _DWORD *v11; // rcx
  char *v12; // r14
  char *v13; // r15
  unsigned int *v14; // rdx
  char *v15; // r13
  char *v16; // r12
  char *v17; // rbx
  char *v18; // rsi
  char *v19; // r8
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  unsigned int *v22; // rcx
  __int64 v23; // r11
  unsigned int *v24; // rdx
  float *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r12d
  unsigned int v35; // r11d
  unsigned int v36; // ebx
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013FCD0[128];
#define v43 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 0)) /* [rsp+60h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 8)) /* [rsp+68h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 16)) /* [rsp+70h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 120)) /* [rsp+D8h] */

  v2 = 0;
  v4 = 5072LL * a1;
  dword_140404A6C[177495247] = 0;
  v5 = a2;
  dword_140404A6C[178519250] = 0;
  v45 = v4;
  v6 = 0;
  dword_140404A6C[177167565] = *(unsigned int *)((char *)&dword_140404A6C[278522541] + v4);
  v7 = (int)dword_140404A6C[177167565];
  v43 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_18;
    v21 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    goto LABEL_14;
  }
  v8 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
  v9 = (char *)&dword_140404A6C[177167568] - v8;
  v47 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
  v10 = (char *)&dword_140404A6C[177167569] - v8;
  v11 = (_DWORD *)(v8 + 20);
  v12 = (char *)&dword_140404A6C[177167566] - v8;
  v13 = (char *)&dword_140404A6C[177167570] - v8;
  v14 = (unsigned int *)(v47 + 20);
  v15 = (char *)&dword_140404A6C[177167573] - v8;
  v16 = (char *)&dword_140404A6C[177167572] - v8;
  v17 = (char *)&dword_140404A6C[177167567] - v8;
  v18 = (char *)&dword_140404A6C[177167565] - v8;
  v19 = (char *)&dword_140404A6C[177167571] - v8;
  v20 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v44 = 4 * v20;
  do
  {
    *(_DWORD *)&v17[(_QWORD)v11 - 20] = *(v11 - 5);
    *(_DWORD *)((char *)v11 + (_QWORD)v9 - 20) = *(v11 - 4);
    *(_DWORD *)((char *)v11 + (_QWORD)v10 - 20) = *(v11 - 3);
    if ( a1 == 45 )
    {
      *(float *)&v17[(_QWORD)v11 - 20] = *(float *)&v17[(_QWORD)v11 - 20] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v9 - 20) = *(float *)((char *)v11 + (_QWORD)v9 - 20) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10 - 20) = *(float *)((char *)v11 + (_QWORD)v10 - 20) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216714] + (_QWORD)v14 - v47) = *(v14 - 5);
    *(unsigned int *)((char *)&dword_140404A6C[177216715] + (_QWORD)v14 - v47) = *(v14 - 4);
    *(_DWORD *)&v18[(_QWORD)v11] = *(v11 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v12) = *(v11 - 1);
    *(_DWORD *)((char *)v11 + (_QWORD)v17) = *v11;
    if ( a1 == 45 )
    {
      *(float *)&v18[(_QWORD)v11] = *(float *)&v18[(_QWORD)v11] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v12) = *(float *)((char *)v11 + (_QWORD)v12) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v17) = *(float *)((char *)v11 + (_QWORD)v17) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216716] + (_QWORD)v14 - v47) = *(v14 - 3);
    *(unsigned int *)((char *)&dword_140404A6C[177216717] + (_QWORD)v14 - v47) = *(v14 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v9) = v11[1];
    *(_DWORD *)((char *)v11 + (_QWORD)v10) = v11[2];
    *(_DWORD *)((char *)v11 + (_QWORD)v13) = v11[3];
    if ( a1 == 45 )
    {
      *(float *)((char *)v11 + (_QWORD)v9) = *(float *)((char *)v11 + (_QWORD)v9) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10) = *(float *)((char *)v11 + (_QWORD)v10) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v13) = *(float *)((char *)v11 + (_QWORD)v13) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216718] + (_QWORD)v14 - v47) = *(v14 - 1);
    *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v14 - v47) = *v14;
    *(_DWORD *)&v19[(_QWORD)v11] = v11[4];
    *(_DWORD *)&v16[(_QWORD)v11] = v11[5];
    *(_DWORD *)&v15[(_QWORD)v11] = v11[6];
    if ( a1 == 45 )
    {
      *(float *)&v19[(_QWORD)v11] = *(float *)&v19[(_QWORD)v11] * 1.5;
      *(float *)&v16[(_QWORD)v11] = *(float *)&v16[(_QWORD)v11] * 1.5;
      *(float *)&v15[(_QWORD)v11] = *(float *)&v15[(_QWORD)v11] * 1.5;
    }
    v11 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v14 - v47) = v14[1];
    *(unsigned int *)((char *)&dword_140404A6C[177216721] + (_QWORD)v14 - v47) = v14[2];
    v14 += 8;
    --v20;
  }
  while ( v20 );
  v7 = v43;
  v6 = v44;
  v2 = 0;
  v5 = a2;
  v4 = v45;
  if ( v44 < v43 )
  {
    v21 = v47;
LABEL_14:
    v22 = &dword_140404A6C[3 * v6 + 177167569];
    v23 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
    v24 = (unsigned int *)(v21 + 8 * v6);
    v25 = (float *)(v23 + 4 * (3 * v6 + 2));
    v26 = v23 - (_QWORD)&dword_140404A6C[177167569];
    v27 = v7 - v6;
    do
    {
      v28 = *(float *)((char *)v22 + v26);
      *((float *)v22 - 2) = v28;
      v29 = *(v25 - 1);
      *((float *)v22 - 1) = v29;
      v30 = *v25;
      *v22 = *(_DWORD *)v25;
      if ( a1 == 45 )
      {
        *((float *)v22 - 2) = v28 * 1.5;
        *((float *)v22 - 1) = v29 * 1.5;
        *(float *)v22 = v30 * 1.5;
      }
      v25 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v24 - v21) = *v24;
      v22 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v24 - v21) = v24[1];
      v24 += 2;
      --v27;
    }
    while ( v27 );
  }
LABEL_18:
  dword_140404A6C[177495247] = *(unsigned int *)((char *)&dword_140404A6C[278522547] + v4);
  v31 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v32 = *(_QWORD *)((char *)&dword_140404A6C[278522549] + v4);
    v33 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    v34 = dword_140404A6C[283827005];
    v35 = dword_140404A6C[283827009];
    v36 = dword_140404A6C[283827006];
    v37 = (unsigned int *)(v32 + 8);
    do
    {
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495246] - v32) = *(v37 - 2);
      v38 = (int)(2 * *(v37 - 2));
      dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v33 + 4 * v38);
      dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v33 + 4 * v38 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495247] - v32) = *(v37 - 1);
      v39 = (int)(2 * *(v37 - 1));
      dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v33 + 4 * v39);
      dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v33 + 4 * v39 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495248] - v32) = *v37;
      v40 = (int)(2 * *v37);
      dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v33 + 4 * v40);
      dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v33 + 4 * v40 + 4);
      if ( v5 == v34 || v5 == v36 )
      {
        v41 = *(_QWORD *)((char *)&dword_140404A6C[278522551] + v4);
        dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v41 + v2 * 4);
        dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v41 + v2 * 4 + 4);
        dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v41 + v2 * 4 + 8);
        dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v41 + v2 * 4 + 12);
        dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v41 + v2 * 4 + 16);
        dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v41 + v2 * 4 + 20);
      }
      if ( v5 == v35 )
      {
        dword_140404A6C[v2 + 178011345] = 1035993088;
        dword_140404A6C[v2 + 178011346] = 1063780352;
        dword_140404A6C[v2 + 178011347] = 1035993088;
        dword_140404A6C[v2 + 178011348] = 1063780352;
        dword_140404A6C[v2 + 178011349] = 1035993088;
        dword_140404A6C[v2 + 178011350] = 1063780352;
      }
      v37 += 3;
      v2 += 6;
      --v31;
    }
    while ( v31 );
  }
  return sub_1401449C0(v5, 1);
}
#undef v43
#undef v44
#undef v45
#undef v47
//----- (00000001401449C0) ----------------------------------------------------
double            sub_1401449C0(int a1, int a2)
{
  int v2; // eax
  signed int v3; // r13d
  int v4; // edi
  float *v5; // rbx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm6_4
  __int64 v10; // rdx
  float v11; // xmm8_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  __int64 v14; // rax
  float *v15; // rdx
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // edx
  unsigned int *v20; // rcx
  int v21; // r14d
  unsigned int *v22; // rcx
  int v23; // r15d
  unsigned int *v24; // rdx
  int v25; // r8d
  int v26; // edi
  int v27; // ebp
  int *v28; // rsi
  int *v29; // r10
  int v30; // r11d
  unsigned int *v31; // rbx
  _DWORD *v32; // r9
  __int64 v33; // r12
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ebx
  signed int v47; // ebp
  __int64 v48; // rdi
  signed int v49; // r15d
  signed int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // rdx
  int v59; // r11d
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rdx
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rdx
  unsigned int v78; // r14d
  float v79; // xmm2_4
  float v80; // xmm2_4
  float v81; // xmm2_4
  unsigned int v82; // eax
  float v83; // xmm2_4
  unsigned int v84; // eax
  float v85; // xmm2_4
  unsigned int v86; // eax
  float v87; // xmm2_4
  float v88; // xmm2_4
  float v89; // xmm2_4
  float v90; // xmm2_4
  unsigned int v91; // eax
  float v92; // xmm2_4
  unsigned int v93; // eax
  float v94; // xmm2_4
  unsigned int v95; // eax
  float v96; // xmm2_4
  unsigned int v97; // r11d
  float v98; // xmm2_4
  unsigned int v99; // r10d
  float v100; // xmm2_4
  unsigned int v101; // r9d
  float v102; // xmm2_4
  int v103; // edx
  unsigned int *v104; // rcx
  int v105; // r8d
  int v106; // esi
  int v107; // ecx
  unsigned int *v108; // rdx
  int v109; // r8d
  int v110; // edx
  unsigned int *v111; // r9
  unsigned int *v112; // r10
  unsigned int v113; // eax
  int v114; // ecx
  unsigned int v115; // eax
  unsigned int v116; // eax
  unsigned int v117; // eax
  __int64 v118; // rbx
  void *v119; // rcx
  __m128i *v120; // rax
  unsigned int v121; // ecx
  unsigned int v122; // eax
  void *v123; // rcx
  __int64 v124; // rax
  bool v125; // cc
  __int64 v126; // r8
  __int64 v127; // rdx
  __m128i *v128; // rax
  unsigned int v129; // ecx
  __m128i *v130; // rax
  unsigned int v131; // ecx
  __m128i *v132; // rax
  unsigned int v133; // ecx
  __m128i *v134; // rax
  unsigned int v135; // ecx
  void *v136; // rcx
  __m128i *v137; // rax
  unsigned int v138; // ecx
  __int64 v139; // r8
  __int64 v140; // r8
  __int64 v141; // r8
  __int64 v142; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401449C0[176];
#define v144 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 0)) /* [rsp+20h] */
#define v147 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 168)) /* [rsp+C8h] */

  v2 = dword_140404A6C[177495247];
  v3 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v5 = (float *)&dword_140404A6C[177814739];
    do
    {
      v6 = 3 * *((_DWORD *)v5 - 319491);
      v7 = *(float *)&dword_140404A6C[v6 + 177167567];
      v8 = *(float *)&dword_140404A6C[v6 + 177167568];
      v9 = *(float *)&dword_140404A6C[v6 + 177167569];
      v10 = 3 * *((_DWORD *)v5 - 319490);
      v11 = *(float *)&dword_140404A6C[v10 + 177167568] - v8;
      v12 = *(float *)&dword_140404A6C[v10 + 177167569] - v9;
      v13 = *(float *)&dword_140404A6C[v10 + 177167567] - v7;
      v14 = 3 * *((_DWORD *)v5 - 319489);
      v15 = v5 - 2;
      v16 = *(float *)&dword_140404A6C[v14 + 177167568] - v8;
      v17 = *(float *)&dword_140404A6C[v14 + 177167569] - v9;
      v18 = *(float *)&dword_140404A6C[v14 + 177167567] - v7;
      *v15 = (float)(v16 * v12) - (float)(v17 * v11);
      *v5 = (float)(v11 * v18) - (float)(v16 * v13);
      *(v5 - 1) = (float)(v17 * v13) - (float)(v12 * v18);
      sub_14007A240((__int64)v15, v15);
      v2 = dword_140404A6C[177495247];
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  v19 = 0;
  if ( v2 > 0 )
  {
    v20 = &dword_140404A6C[178158802];
    do
    {
      *(_QWORD *)(v20 - 1) = -1;
      ++v19;
      v20[1] = -1;
      v20 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v19 < (int)dword_140404A6C[177495247] );
  }
  v21 = 0;
  if ( v2 > 0 )
  {
    v22 = &dword_140404A6C[178158801];
    v23 = 0;
    v24 = &dword_140404A6C[178224338];
    v144 = &dword_140404A6C[178158801];
    v147 = &dword_140404A6C[178224338];
    do
    {
      v25 = v21 + 1;
      v26 = v21 + 1;
      if ( v21 + 1 < v2 )
      {
        v27 = v23 + 5;
        v28 = (int *)(v24 + 8);
        v29 = (int *)(v22 + 3);
        do
        {
          v30 = 0;
          v31 = v24;
          v32 = v22;
          v33 = 3;
          do
          {
            if ( *v32 == -1 )
            {
              if ( *v29 == -1 )
              {
                v34 = 3 * *(v32 - 663553);
                v35 = 3 * dword_140404A6C[v27 + 177495247];
                if ( *(float *)&dword_140404A6C[v35 + 177167567] == *(float *)&dword_140404A6C[v34 + 177167567]
                  && *(float *)&dword_140404A6C[v35 + 177167568] == *(float *)&dword_140404A6C[v34 + 177167568]
                  && *(float *)&dword_140404A6C[v35 + 177167569] == *(float *)&dword_140404A6C[v34 + 177167569] )
                {
                  v36 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                  v37 = 3 * *(v29 - 663553);
                  if ( *(float *)&dword_140404A6C[v37 + 177167567] == *(float *)&dword_140404A6C[v36 + 177167567]
                    && *(float *)&dword_140404A6C[v37 + 177167568] == *(float *)&dword_140404A6C[v36 + 177167568]
                    && *(float *)&dword_140404A6C[v37 + 177167569] == *(float *)&dword_140404A6C[v36 + 177167569] )
                  {
                    *v32 = v26;
                    *v31 = 2;
                    *v29 = v21;
                    *(v28 - 2) = (v30 + 2) % 3;
                  }
                }
              }
              if ( *v32 == -1 )
              {
                if ( v29[1] == -1 )
                {
                  v38 = 3 * *(v32 - 663553);
                  v39 = 3 * dword_140404A6C[v27 + 177495248];
                  if ( *(float *)&dword_140404A6C[v39 + 177167567] == *(float *)&dword_140404A6C[v38 + 177167567]
                    && *(float *)&dword_140404A6C[v39 + 177167568] == *(float *)&dword_140404A6C[v38 + 177167568]
                    && *(float *)&dword_140404A6C[v39 + 177167569] == *(float *)&dword_140404A6C[v38 + 177167569] )
                  {
                    v40 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v41 = 3 * *(v29 - 663552);
                    if ( *(float *)&dword_140404A6C[v41 + 177167567] == *(float *)&dword_140404A6C[v40 + 177167567]
                      && *(float *)&dword_140404A6C[v41 + 177167568] == *(float *)&dword_140404A6C[v40 + 177167568]
                      && *(float *)&dword_140404A6C[v41 + 177167569] == *(float *)&dword_140404A6C[v40 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 0;
                      v29[1] = v21;
                      *v28 = (v30 + 2) % 3;
                    }
                  }
                }
                if ( *v32 == -1 && v29[2] == -1 )
                {
                  v42 = 3 * *(v32 - 663553);
                  v43 = 3 * dword_140404A6C[v27 + 177495246];
                  if ( *(float *)&dword_140404A6C[v43 + 177167567] == *(float *)&dword_140404A6C[v42 + 177167567]
                    && *(float *)&dword_140404A6C[v43 + 177167568] == *(float *)&dword_140404A6C[v42 + 177167568]
                    && *(float *)&dword_140404A6C[v43 + 177167569] == *(float *)&dword_140404A6C[v42 + 177167569] )
                  {
                    v44 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v45 = 3 * *(v29 - 663551);
                    if ( *(float *)&dword_140404A6C[v45 + 177167567] == *(float *)&dword_140404A6C[v44 + 177167567]
                      && *(float *)&dword_140404A6C[v45 + 177167568] == *(float *)&dword_140404A6C[v44 + 177167568]
                      && *(float *)&dword_140404A6C[v45 + 177167569] == *(float *)&dword_140404A6C[v44 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 1;
                      v29[2] = v21;
                      v28[2] = (v30 + 2) % 3;
                    }
                  }
                }
              }
            }
            ++v30;
            ++v32;
            v31 += 2;
            --v33;
          }
          while ( v33 );
          v2 = dword_140404A6C[177495247];
          ++v26;
          v22 = v144;
          v27 += 3;
          v24 = v147;
          v29 += 3;
          v28 += 6;
        }
        while ( v26 < (int)dword_140404A6C[177495247] );
        v25 = v21 + 1;
      }
      v24 += 6;
      v22 += 3;
      v23 += 3;
      v147 = v24;
      v144 = v22;
      v21 = v25;
    }
    while ( v25 < v2 );
  }
  dword_140404A6C[177167566] = 8;
  v46 = 0;
  if ( v2 > 0 )
  {
    v47 = dword_140404A6C[283827702];
    v48 = 0;
    v49 = dword_140404A6C[283827765];
    v50 = dword_140404A6C[283827734];
    do
    {
      v51 = (int)(3 * dword_140404A6C[3 * v48 + 177495248]);
      v52 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v52 + 177347791] = dword_140404A6C[v51 + 177167567];
      dword_140404A6C[v52 + 177347792] = dword_140404A6C[v51 + 177167568];
      dword_140404A6C[v52 + 177347793] = dword_140404A6C[v51 + 177167569];
      v53 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v53 + 177347794] = dword_140404A6C[6 * v48 + 178011345];
      dword_140404A6C[v53 + 177347795] = dword_140404A6C[6 * v48 + 178011346];
      if ( a2 || (v56 = dword_140404A6C[v48 + 178207953], v56 == -2) )
      {
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v55 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v56 == -1 )
          v57 = dword_140404A6C[3 * v48 + 177495248];
        else
          v57 = dword_140404A6C[v46 + v56 + 2 * v46 + 177495248];
        v58 = (int)(3 * v57);
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[v58 + 177249487];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[v58 + 177249488];
        v55 = dword_140404A6C[v58 + 177249489];
      }
      dword_140404A6C[v54 + 177347798] = v55;
      v59 = 3 * v46;
      v60 = 3 * v46 + 1;
      v61 = (int)(3 * dword_140404A6C[3 * v48 + 177495249]);
      v62 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v62 + 177347791] = dword_140404A6C[v61 + 177167567];
      dword_140404A6C[v62 + 177347792] = dword_140404A6C[v61 + 177167568];
      dword_140404A6C[v62 + 177347793] = dword_140404A6C[v61 + 177167569];
      v63 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v63 + 177347794] = dword_140404A6C[6 * v48 + 178011347];
      dword_140404A6C[v63 + 177347795] = dword_140404A6C[6 * v48 + 178011348];
      if ( a2 || (v66 = dword_140404A6C[v48 + 178207953], v66 == -2) )
      {
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v65 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v66 == -1 )
          v67 = dword_140404A6C[3 * v48 + 177495249];
        else
          v67 = dword_140404A6C[v59 + v66 + 177495248];
        v68 = (int)(3 * v67);
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[v68 + 177249487];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[v68 + 177249488];
        v65 = dword_140404A6C[v68 + 177249489];
      }
      dword_140404A6C[v64 + 177347798] = v65;
      v69 = v59 + 2;
      v70 = (int)(3 * dword_140404A6C[3 * v48 + 177495250]);
      v71 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v71 + 177347791] = dword_140404A6C[v70 + 177167567];
      dword_140404A6C[v71 + 177347792] = dword_140404A6C[v70 + 177167568];
      dword_140404A6C[v71 + 177347793] = dword_140404A6C[v70 + 177167569];
      v72 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v72 + 177347794] = dword_140404A6C[6 * v48 + 178011349];
      dword_140404A6C[v72 + 177347795] = dword_140404A6C[6 * v48 + 178011350];
      if ( a2 || (v75 = dword_140404A6C[v48 + 178207953], v75 == -2) )
      {
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v74 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v75 == -1 )
          v76 = dword_140404A6C[3 * v48 + 177495250];
        else
          v76 = dword_140404A6C[v59 + v75 + 177495248];
        v77 = (int)(3 * v76);
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[v77 + 177249487];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[v77 + 177249488];
        v74 = dword_140404A6C[v77 + 177249489];
      }
      v78 = dword_140404A6C[283826991];
      dword_140404A6C[v73 + 177347798] = v74;
      if ( a1 >= v47 && a1 <= (int)dword_140404A6C[283827733] || a1 >= v50 && a1 <= v49 )
      {
        v79 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v79 >= 0.9375 && v79 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099169792;
        v80 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v80 >= 0.9375 && v80 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099169792;
        v81 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v81 >= 0.9375 && v81 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099169792;
        v82 = dword_140404A6C[177167566] * v59;
        v83 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v83 >= 0.8125 && v83 < 0.875 && *(float *)&dword_140404A6C[v82 + 177347794] < 0.5 )
          dword_140404A6C[v82 + 177347794] = 1099169792;
        v84 = dword_140404A6C[177167566] * v60;
        v85 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v85 >= 0.8125 && v85 < 0.875 && *(float *)&dword_140404A6C[v84 + 177347794] < 0.5 )
          dword_140404A6C[v84 + 177347794] = 1099169792;
        v86 = dword_140404A6C[177167566] * v69;
        v87 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v87 >= 0.8125 && v87 < 0.875 && *(float *)&dword_140404A6C[v86 + 177347794] < 0.5 )
          dword_140404A6C[v86 + 177347794] = 1099169792;
        v88 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v88 >= 0.75 && v88 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099694080;
        v89 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v89 >= 0.75 && v89 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099694080;
        v90 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v90 >= 0.75 && v90 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099694080;
        v91 = dword_140404A6C[177167566] * v59;
        v92 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v92 >= 0.875 && v92 < 0.9375 && *(float *)&dword_140404A6C[v91 + 177347794] < 0.5 )
          dword_140404A6C[v91 + 177347794] = 1100218368;
        v93 = dword_140404A6C[177167566] * v60;
        v94 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v94 >= 0.875 && v94 < 0.9375 && *(float *)&dword_140404A6C[v93 + 177347794] < 0.5 )
          dword_140404A6C[v93 + 177347794] = 1100218368;
        v95 = dword_140404A6C[177167566] * v69;
        v96 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v96 >= 0.875 && v96 < 0.9375 && *(float *)&dword_140404A6C[v95 + 177347794] < 0.5 )
          dword_140404A6C[v95 + 177347794] = 1100218368;
      }
      if ( a1 == v78 )
      {
        v97 = dword_140404A6C[177167566] * v59;
        v98 = *(float *)&dword_140404A6C[v97 + 177347795];
        if ( v98 >= 0.875 && v98 < 0.9375 && *(float *)&dword_140404A6C[v97 + 177347794] < 0.0625 )
          dword_140404A6C[v97 + 177347794] = 1099169792;
        v99 = dword_140404A6C[177167566] * v60;
        v100 = *(float *)&dword_140404A6C[v99 + 177347795];
        if ( v100 >= 0.875 && v100 < 0.9375 && *(float *)&dword_140404A6C[v99 + 177347794] < 0.0625 )
          dword_140404A6C[v99 + 177347794] = 1099169792;
        v101 = dword_140404A6C[177167566] * v69;
        v102 = *(float *)&dword_140404A6C[v101 + 177347795];
        if ( v102 >= 0.875 && v102 < 0.9375 && *(float *)&dword_140404A6C[v101 + 177347794] < 0.0625 )
          dword_140404A6C[v101 + 177347794] = 1099169792;
      }
      v2 = dword_140404A6C[177495247];
      ++v46;
      ++v48;
    }
    while ( v46 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v103 = 0;
  if ( v2 > 0 )
  {
    v104 = &dword_140404A6C[178109649];
    do
    {
      ++v103;
      *v104 = *(v104 - 614401);
      v104[1] = *(v104 - 614400);
      v104[2] = *(v104 - 614399);
      v104 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v103 < (int)dword_140404A6C[177495247] );
  }
  v105 = 0;
  v106 = 2;
  if ( v2 > 0 )
  {
    v107 = 2;
    v108 = &dword_140404A6C[177495249];
    do
    {
      v108[1] = v107;
      *(v108 - 1) = v107 - 2;
      v108 += 3;
      ++v105;
      *(v108 - 3) = v107 - 1;
      v107 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v105 < (int)dword_140404A6C[177495247] );
  }
  v109 = 0;
  if ( v2 > 0 )
  {
    v110 = 2;
    v111 = &dword_140404A6C[178224338];
    v112 = &dword_140404A6C[178158802];
    do
    {
      v113 = v110 - 2;
      *(v111 - 1) = v110 - 2;
      v114 = *(v112 - 1);
      if ( v114 != -1 )
        v113 = dword_140404A6C[*v111 + 3 * v114 + 177495248];
      *v111 = v113;
      v115 = v110 - 1;
      v111[1] = v110 - 1;
      if ( *v112 != -1 )
        v115 = dword_140404A6C[v111[2] + 3 * *v112 + 177495248];
      v111[2] = v115;
      v111[3] = v110;
      v116 = v112[1];
      if ( v116 == -1 )
        v117 = v110;
      else
        v117 = dword_140404A6C[v111[4] + 3 * v116 + 177495248];
      v111[4] = v117;
      ++v109;
      v111 += 6;
      v110 += 3;
      v112 += 3;
    }
    while ( v109 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v118 = 908LL * a1;
  v119 = *(void **)&dword_140404A6C[v118 + 178527463];
  dword_140404A6C[v118 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v118 + 178527462] = dword_140404A6C[177167566];
  free(v119);
  v120 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247] * dword_140404A6C[177167566]);
  v121 = dword_140404A6C[177495247] * dword_140404A6C[177167566];
  *(_QWORD *)&dword_140404A6C[v118 + 178527463] = (uint64)(uintptr_t)(v120);
  sub_1401FC920(v120, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v121));
  v122 = dword_140404A6C[177495247];
  v123 = *(void **)&dword_140404A6C[v118 + 178527467];
  dword_140404A6C[v118 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v118 + 178527475] = v122;
  free(v123);
  v124 = sr_path_malloc(12 * dword_140404A6C[177495247]);
  v125 = (int)dword_140404A6C[v118 + 178527465] <= 0;
  *(_QWORD *)&dword_140404A6C[v118 + 178527467] = v124;
  if ( !v125 )
  {
    v126 = 0;
    v127 = 0;
    do
    {
      ++v3;
      v126 += 12;
      v127 += 12;
      *(_DWORD *)(v126 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 12) = v106 - 2;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 8) = v106 - 1;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 4) = v106;
      v106 += 3;
    }
    while ( v3 < (int)dword_140404A6C[v118 + 178527465] );
  }
  free(*(void **)&dword_140404A6C[v118 + 178527469]);
  v128 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v129 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527469] = (uint64)(uintptr_t)(v128);
  sub_1401FC920(v128, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v129));
  free(*(void **)&dword_140404A6C[v118 + 178527471]);
  v130 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v131 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527471] = (uint64)(uintptr_t)(v130);
  sub_1401FC920(v130, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v131));
  free(*(void **)&dword_140404A6C[v118 + 178527473]);
  v132 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v133 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527473] = (uint64)(uintptr_t)(v132);
  sub_1401FC920(v132, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v133));
  free(*(void **)&dword_140404A6C[v118 + 178527477]);
  v134 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v135 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527477] = (uint64)(uintptr_t)(v134);
  sub_1401FC920(v134, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v135));
  v136 = *(void **)&dword_140404A6C[v118 + 178527481];
  dword_140404A6C[v118 + 178527479] = dword_140404A6C[178519250];
  free(v136);
  v137 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v138 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v118 + 178527481] = (uint64)(uintptr_t)(v137);
  sub_1401FC920(v137, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v138));
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793813], v139);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v118 + 178527465] * dword_140404A6C[v118 + 178527462]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527463],
    35044);
  qword_140404170(34962, 0, v140);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793814], v141);
  unk_140404190(
    34963,
    (int)(24 * dword_140404A6C[v118 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527477],
    35044);
  return qword_140404170(34963, 0, v142);
}
#undef v144
#undef v147

// 140278F80: using guessed type __int128 xmmword_140278F80;
// 140278FE0: using guessed type __int128 xmmword_140278FE0;
// 140278FF0: using guessed type __int128 xmmword_140278FF0;
// 140279020: using guessed type __int128 xmmword_140279020;
// 140279040: using guessed type __int128 xmmword_140279040;
// 140279060: using guessed type __int128 xmmword_140279060;
// 140279070: using guessed type __int128 xmmword_140279070;
// 140279330: using guessed type __int128 xmmword_140279330;
// 140279350: using guessed type __int128 xmmword_140279350;
// 140279360: using guessed type __int128 xmmword_140279360;
// 140279370: using guessed type __int128 xmmword_140279370;
// 140279380: using guessed type __int128 xmmword_140279380;
// 140279390: using guessed type __int128 xmmword_140279390;
// 1402793A0: using guessed type __int128 xmmword_1402793A0;
// 1402793B0: using guessed type __int128 xmmword_1402793B0;
// 1402793C0: using guessed type __int128 xmmword_1402793C0;
// 1402793D0: using guessed type __int128 xmmword_1402793D0;
// 1402793E0: using guessed type __int128 xmmword_1402793E0;
// 1402793F0: using guessed type __int128 xmmword_1402793F0;
// 140279440: using guessed type __int128 xmmword_140279440;
// 140279450: using guessed type __int128 xmmword_140279450;
// 140279740: using guessed type __int128 xmmword_140279740;
// 140279750: using guessed type __int128 xmmword_140279750;
// 140279790: using guessed type __int128 xmmword_140279790;
// 1402797A0: using guessed type __int128 xmmword_1402797A0;
// 1402797B0: using guessed type __int128 xmmword_1402797B0;
// 1402797C0: using guessed type __int128 xmmword_1402797C0;
// 1402798D0: using guessed type __int128 xmmword_1402798D0;
// 1402798E0: using guessed type __int128 xmmword_1402798E0;
// 1402798F0: using guessed type __int128 xmmword_1402798F0;
// 140279900: using guessed type __int128 xmmword_140279900;
// 140279910: using guessed type __int128 xmmword_140279910;
// 140279920: using guessed type __int128 xmmword_140279920;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E9A680: using guessed type unsigned int;
// 192E9A688: using guessed type int[];
// 192E9A6B4: using guessed type unsigned int;
// 192E9A6B8: using guessed type unsigned int;
// 192EB1EF4: using guessed type unsigned int;
// 192EB2998: using guessed type unsigned int;
// 192EB2C48: using guessed type unsigned int;
// 192EB2C74: using guessed type unsigned int;
// 192EB2C78: using guessed type unsigned int;
// 192EB2C80: using guessed type unsigned int;
// 192EB3184: using guessed type unsigned int;
// 192EB3494: using guessed type unsigned int;
// 192ECA4B4: using guessed type unsigned int;
// 192ECAEBC: using guessed type unsigned int;
// 192ECAEC0: using guessed type unsigned int;
// 192ECAF58: using guessed type unsigned int;
// 192ECAF5C: using guessed type unsigned int;
// 192ECAF6C: using guessed type unsigned int;
// 192ECAF7C: using guessed type unsigned int;
// 192ECB208: using guessed type unsigned int;
// 192ECB234: using guessed type unsigned int;
// 192ECB238: using guessed type unsigned int;
// 192ECB240: using guessed type unsigned int;
// 192ECB744: using guessed type unsigned int;
// 192EE2A74: using guessed type unsigned int;
// 192EE347C: using guessed type unsigned int;
// 192EE3480: using guessed type unsigned int;
// 192EE3518: using guessed type unsigned int;
// 192EE351C: using guessed type unsigned int;
// 192EE352C: using guessed type unsigned int;
// 192EE3530: using guessed type unsigned int;
// 192EE37C8: using guessed type unsigned int;
// 192EE37F4: using guessed type unsigned int;
// 192EE37F8: using guessed type unsigned int;
// 192EE3800: using guessed type unsigned int;
// 192EE3D04: using guessed type unsigned int;
// 192EFB034: using guessed type unsigned int;
// 192EFBA3C: using guessed type unsigned int;
// 192EFBA40: using guessed type unsigned int;
// 192EFBAD8: using guessed type unsigned int;
// 192EFBADC: using guessed type unsigned int;
// 192EFBAEC: using guessed type unsigned int;
// 192EFBAFC: using guessed type unsigned int;
// 192EFBD80: using guessed type unsigned int;
// 192EFBD88: using guessed type unsigned int;
// 192EFBDB4: using guessed type unsigned int;
// 192EFBDB8: using guessed type unsigned int;
// 192F135F4: using guessed type unsigned int;
// 192F14098: using guessed type unsigned int;
// 192F1409C: using guessed type unsigned int;
// 192F140AC: using guessed type unsigned int;
// 192F140B0: using guessed type unsigned int;
// 192F14340: using guessed type unsigned int;
// 192F14348: using guessed type unsigned int;
// 192F14354: using guessed type unsigned int;
// 192F14374: using guessed type unsigned int;
// 192F14378: using guessed type unsigned int;
// 192F2BBB4: using guessed type unsigned int;
// 192F2C658: using guessed type unsigned int;
// 192F2C65C: using guessed type unsigned int;
// 192F2C66C: using guessed type unsigned int;
// 192F2C670: using guessed type unsigned int;
// 192F2C900: using guessed type unsigned int;
// 192F2C908: using guessed type unsigned int;
// 192F2C934: using guessed type unsigned int;
// 192F2C938: using guessed type unsigned int;
// 192F44174: using guessed type unsigned int;
// 192F44C18: using guessed type unsigned int;
// 192F44C1C: using guessed type unsigned int;
// 192F44C2C: using guessed type unsigned int;
// 192F44C3C: using guessed type unsigned int;
// 192F44EC0: using guessed type unsigned int;
// 192F44EC8: using guessed type unsigned int;
// 192F44ED4: using guessed type unsigned int;
// 192F44EF4: using guessed type unsigned int;
// 192F44EF8: using guessed type unsigned int;
// 192F5C734: using guessed type unsigned int;
// 192F5D1D8: using guessed type unsigned int;
// 192F5D1DC: using guessed type unsigned int;
// 192F5D1EC: using guessed type unsigned int;
// 192F5D1FC: using guessed type unsigned int;
// 192F5D20C: using guessed type unsigned int;
// 192F5D21C: using guessed type unsigned int;
// 192F5D220: using guessed type unsigned int;
// 192F5D480: using guessed type unsigned int;
// 192F5D488: using guessed type unsigned int;
// 192F5D4B4: using guessed type unsigned int;
// 192F5D4B8: using guessed type unsigned int;
// 192F74CF4: using guessed type unsigned int;
// 192F75798: using guessed type unsigned int;
// 192F7579C: using guessed type unsigned int;
// 192F757AC: using guessed type unsigned int;
// 192F757BC: using guessed type unsigned int;
// 192F757CC: using guessed type unsigned int;
// 192F757DC: using guessed type unsigned int;
// 192F757E0: using guessed type unsigned int;
// 192F75A40: using guessed type unsigned int;
// 192F75A48: using guessed type unsigned int;
// 192F75A54: using guessed type unsigned int;
// 192F75A74: using guessed type unsigned int;
// 192F75A78: using guessed type unsigned int;
// 192F8D2B4: using guessed type unsigned int;
// 192F8DD58: using guessed type unsigned int;
// 192F8DD5C: using guessed type unsigned int;
// 192F8DD6C: using guessed type unsigned int;
// 192F8DD7C: using guessed type unsigned int;
// 192F8DD8C: using guessed type unsigned int;
// 192F8DD9C: using guessed type unsigned int;
// 192F8DDA0: using guessed type unsigned int;
// 192F8E008: using guessed type unsigned int;
// 192F8E034: using guessed type unsigned int;
// 192F8E038: using guessed type unsigned int;
// 192F8E040: using guessed type unsigned int;
// 192F8E544: using guessed type unsigned int;
// 192FA5874: using guessed type unsigned int;
// 192FA627C: using guessed type unsigned int;
// 192FA6280: using guessed type unsigned int;
// 192FA6318: using guessed type unsigned int;
// 192FA631C: using guessed type unsigned int;
// 192FA632C: using guessed type unsigned int;
// 192FA6330: using guessed type unsigned int;
// 192FA65C8: using guessed type unsigned int;
// 192FA65D4: using guessed type unsigned int;
// 192FA65F4: using guessed type unsigned int;
// 192FA65F8: using guessed type unsigned int;
// 192FA6600: using guessed type unsigned int;
// 192FA6B04: using guessed type unsigned int;
// 192FBE83C: using guessed type unsigned int;
// 192FBE840: using guessed type unsigned int;
// 192FBE8D8: using guessed type unsigned int;
// 193007CC0: using guessed type unsigned int;
// 193007CC8: using guessed type unsigned int;
// 193007CF4: using guessed type unsigned int;
// 193007CF8: using guessed type unsigned int;
// 19301F534: using guessed type unsigned int;
// 19301FFD8: using guessed type unsigned int;
// 19301FFDC: using guessed type unsigned int;
// 19301FFEC: using guessed type unsigned int;
// 19301FFFC: using guessed type unsigned int;
// 193020280: using guessed type unsigned int;
// 193020288: using guessed type unsigned int;
// 1930202B4: using guessed type unsigned int;
// 1930202B8: using guessed type unsigned int;
// 193037AF4: using guessed type unsigned int;
// 193038598: using guessed type unsigned int;
// 19303859C: using guessed type unsigned int;
// 1930385AC: using guessed type unsigned int;
// 1930385B0: using guessed type unsigned int;

//----- (000000014018C340) ----------------------------------------------------
void            sub_14018C340(int a1)
{
  __m128 v2; // xmm10
  __m128 v3; // xmm11
  float v4; // xmm12_4
  __m128 v5; // xmm1
  __m128 v6; // xmm2
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
  dword_140404A6C[177167565] = 0;
  (*(__int128 *)(sr_branch_matrix + 4)) = xmmword_140278D30;
  dword_140404A6C[177495247] = 0;
  sr_branch_matrix[8] = 1065353216;
  dword_140404A6C[178519250] = 0;
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
  sr_branch_axis[0] = 0.24253563582897186;
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
  sr_branch_axis[0] = 0.7071067690849304;
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014018C6A0) ----------------------------------------------------
__int64            sub_14018C6A0(float *a1, float *a2, double a3, float a4, float a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // r14d
  __m128 v9; // xmm0
  __int64 v10; // rbp
  float v11; // xmm12_4
  __m128d v13; // xmm8
  __m128 v14; // xmm0
  double v15; // xmm7_8
  __int64 v16; // rcx
  double v17; // xmm6_8
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  double v21; // xmm2_8
  float v22; // xmm1_4
  float v23; // xmm5_4
  unsigned int v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  unsigned int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  unsigned int v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  unsigned int v35; // ebx
  __m128d v36; // xmm7
  __int64 v37; // rdx
  __m128 v38; // xmm0
  double v39; // xmm6_8
  __int64 v40; // rcx
  double v41; // xmm5_8
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  unsigned int v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm12_4
  float v54; // xmm13_4
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // r11d
  __int64 v58; // rbp
  unsigned int v59; // xmm1_4
  unsigned int v60; // xmm0_4
  unsigned int v61; // xmm12_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  __int64 v64; // rcx
  float v65; // xmm13_4
  unsigned int v66; // edi
  unsigned int v67; // xmm1_4
  unsigned int v68; // xmm0_4
  unsigned int v69; // xmm13_4
  unsigned int v70; // esi
  __int64 result; // rax
  unsigned int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rax
  unsigned int v79; // r10d
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax

  v5 = dword_140404A6C[177167565];
  v8 = dword_140404A6C[177167565];
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
    ++dword_140404A6C[177167565];
    v27 = 3 * dword_140404A6C[177167565];
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
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 1.0471975511965976;
    v35 = ++dword_140404A6C[177167565];
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
    ++dword_140404A6C[177167565];
    v48 = 3 * dword_140404A6C[177167565];
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
    v5 = dword_140404A6C[177167565] + 1;
    SR_VEC_LANES(128, v36, f64)[0] = SR_VEC_LANES(128, v36, f64)[0] + 1.0471975511965976;
    ++dword_140404A6C[177167565];
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
  ++dword_140404A6C[177167565];
  v62 = v54 * a2[3];
  v63 = v54 * a2[4];
  v64 = 3 * dword_140404A6C[177167565];
  v65 = v54 * a2[5];
  v66 = v8 + 2;
  *(float *)&v67 = v62 + *a1;
  *(float *)&v68 = v63 + a1[1];
  *(float *)&v69 = v65 + a1[2];
  v70 = v8 + 13;
  dword_140404A6C[v64 + 177167567] = v67;
  dword_140404A6C[v64 + 177167568] = v68;
  dword_140404A6C[v64 + 177167569] = v69;
  ++dword_140404A6C[177167565];
  LODWORD(result) = dword_140404A6C[177495247];
  do
  {
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    v72 = v8 + 2 * ((v57 - 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v73 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v73 + 178011345] = 1052770304;
    dword_140404A6C[v73 + 178011346] = 1052770304;
    dword_140404A6C[v73 + 178011347] = 1052770304;
    dword_140404A6C[v73 + 178011348] = 1052770304;
    dword_140404A6C[v73 + 178011349] = 1052770304;
    dword_140404A6C[v73 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v74 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v74 + 178011345] = 1052770304;
    dword_140404A6C[v74 + 178011346] = 1052770304;
    dword_140404A6C[v74 + 178011347] = 1052770304;
    dword_140404A6C[v74 + 178011348] = 1052770304;
    dword_140404A6C[v74 + 178011349] = 1052770304;
    dword_140404A6C[v74 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v75 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v75 + 178011345] = 1052770304;
    dword_140404A6C[v75 + 178011346] = 1052770304;
    dword_140404A6C[v75 + 178011347] = 1052770304;
    dword_140404A6C[v75 + 178011348] = 1052770304;
    dword_140404A6C[v75 + 178011349] = 1052770304;
    dword_140404A6C[v75 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v76 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v76 + 178011345] = 1052770304;
    dword_140404A6C[v76 + 178011346] = 1052770304;
    dword_140404A6C[v76 + 178011347] = 1052770304;
    dword_140404A6C[v76 + 178011348] = 1052770304;
    dword_140404A6C[v76 + 178011349] = 1052770304;
    dword_140404A6C[v76 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    v77 = v8 + 2 * (v57 % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v78 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v78 + 178011345] = 1052770304;
    dword_140404A6C[v78 + 178011346] = 1052770304;
    dword_140404A6C[v78 + 178011347] = 1052770304;
    dword_140404A6C[v78 + 178011348] = 1052770304;
    dword_140404A6C[v78 + 178011349] = 1052770304;
    dword_140404A6C[v78 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77 + 1;
    v79 = v66 + 3;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v80 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v80 + 178011345] = 1052770304;
    dword_140404A6C[v80 + 178011346] = 1052770304;
    dword_140404A6C[v80 + 178011347] = 1052770304;
    dword_140404A6C[v80 + 178011348] = 1052770304;
    dword_140404A6C[v80 + 178011349] = 1052770304;
    dword_140404A6C[v80 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v81 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v81 + 178011345] = 1052770304;
    dword_140404A6C[v81 + 178011346] = 1052770304;
    dword_140404A6C[v81 + 178011347] = 1052770304;
    dword_140404A6C[v81 + 178011348] = 1052770304;
    dword_140404A6C[v81 + 178011349] = 1052770304;
    dword_140404A6C[v81 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v77 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v82 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v82 + 178011345] = 1052770304;
    dword_140404A6C[v82 + 178011346] = 1052770304;
    dword_140404A6C[v82 + 178011347] = 1052770304;
    dword_140404A6C[v82 + 178011348] = 1052770304;
    dword_140404A6C[v82 + 178011349] = 1052770304;
    dword_140404A6C[v82 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 3;
    v83 = v8 + 2 * ((v57 + 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v84 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v84 + 178011345] = 1052770304;
    dword_140404A6C[v84 + 178011346] = 1052770304;
    dword_140404A6C[v84 + 178011347] = 1052770304;
    dword_140404A6C[v84 + 178011348] = 1052770304;
    dword_140404A6C[v84 + 178011349] = 1052770304;
    dword_140404A6C[v84 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v85 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v85 + 178011345] = 1052770304;
    dword_140404A6C[v85 + 178011346] = 1052770304;
    dword_140404A6C[v85 + 178011347] = 1052770304;
    dword_140404A6C[v85 + 178011348] = 1052770304;
    dword_140404A6C[v85 + 178011349] = 1052770304;
    dword_140404A6C[v85 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v86 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v86 + 178011345] = 1052770304;
    dword_140404A6C[v86 + 178011346] = 1052770304;
    dword_140404A6C[v86 + 178011347] = 1052770304;
    dword_140404A6C[v86 + 178011348] = 1052770304;
    dword_140404A6C[v86 + 178011349] = 1052770304;
    dword_140404A6C[v86 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    v57 += 3;
    v66 += 6;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v79;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v87 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v87 + 178011345] = 1052770304;
    dword_140404A6C[v87 + 178011346] = 1052770304;
    dword_140404A6C[v87 + 178011347] = 1052770304;
    dword_140404A6C[v87 + 178011348] = 1052770304;
    dword_140404A6C[v87 + 178011349] = 1052770304;
    dword_140404A6C[v87 + 178011350] = 1052770304;
    result = ++dword_140404A6C[177495247];
    --v58;
  }
  while ( v58 );
  return result;
}

// 14018C74B: variable 'a2' is possibly undefined
// 14018C8BD: variable 'v37' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

