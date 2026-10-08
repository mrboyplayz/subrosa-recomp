#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A3E0: using guessed type unsigned int;
// 14500A3E4: using guessed type unsigned int;
// 14500A3E8: using guessed type unsigned int;
// 14500A3EC: using guessed type unsigned int;
// 14500A3F0: using guessed type unsigned int;
// 14500A3F4: using guessed type unsigned int;
// 14500A3F8: using guessed type unsigned int;
// 14500A3FC: using guessed type unsigned int;
// 14500A400: using guessed type unsigned int;
// 14500A404: using guessed type unsigned int;
// 14500A408: using guessed type unsigned int;
// 14500A40C: using guessed type unsigned int;
// 14500A420: using guessed type unsigned int;
// 14500A424: using guessed type unsigned int;
// 14500A438: using guessed type unsigned int;
// 14500A43C: using guessed type unsigned int;
// 14500A440: using guessed type unsigned int;
// 14500A444: using guessed type unsigned int;
// 14500A448: using guessed type unsigned int;
// 14500A44C: using guessed type unsigned int;
// 14500A450: using guessed type unsigned int;
// 14500A454: using guessed type unsigned int;
// 14500A458: using guessed type unsigned int;
// 14500A45C: using guessed type unsigned int;
// 14500A460: using guessed type unsigned int;
// 14500A464: using guessed type unsigned int;
// 14500A468: using guessed type unsigned int;
// 14500A46C: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

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

//----- (0000000140003760) ----------------------------------------------------
__int64            sub_140003760(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r9d
  signed int v7; // eax
  __int64 result; // rax

  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628800] = a3;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628801] = a4;
  v4 = &dword_140404A6C[34 * a1 + 225391205];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628802] = v4[35] + v4[25];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628804] = v4[36] + v4[27];
  v5 = 34LL * a2;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v4[26];
  v6 = dword_140404A6C[225628799];
  v7 = dword_140404A6C[v5 + 225391231];
  if ( (int)dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] > v7 )
  {
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v7;
    v6 = dword_140404A6C[225628799];
  }
  dword_140404A6C[12 * v6 + 225628805] = dword_140404A6C[v5 + 225391230]
                                       - dword_140404A6C[v5 + 225391242]
                                       - v4[25]
                                       - v4[35];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628806] = dword_140404A6C[v5 + 225391232]
                                                               - dword_140404A6C[v5 + 225391243]
                                                               - v4[27]
                                                               - dword_140404A6C[34 * a1 + 225391241];
  result = (int)dword_140404A6C[225628799];
  dword_140404A6C[12 * dword_140404A6C[225628799]++ + 225628807] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760B9468: using guessed type unsigned int;

//----- (00000001400038E0) ----------------------------------------------------
__int64            sub_1400038E0(signed int a1, signed int a2, signed int a3, signed int a4)
{
  __int64 v5; // r11
  __int64 v7; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  signed int v13; // r8d
  int v14; // edx

  v5 = 34LL * a1;
  v7 = 34LL * a2;
  if ( (int)(dword_140404A6C[v7 + 225391230] - dword_140404A6C[v5 + 225391230]) <= (int)(dword_140404A6C[v7 + 225391232]
                                                                                       - dword_140404A6C[v5 + 225391232]) )
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 1;
    dword_140404A6C[v5 + 225391237] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391240] < a3 )
      dword_140404A6C[v5 + 225391240] = a3;
    if ( (int)dword_140404A6C[v5 + 225391242] < a4 )
      dword_140404A6C[v5 + 225391242] = a4;
    dword_140404A6C[v7 + 225391239] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391240] < a3 )
      dword_140404A6C[v7 + 225391240] = a3;
    if ( (int)dword_140404A6C[v7 + 225391242] < a4 )
      dword_140404A6C[v7 + 225391242] = a4;
  }
  else
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 0;
    dword_140404A6C[v5 + 225391236] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391241] < a4 )
      dword_140404A6C[v5 + 225391241] = a4;
    if ( (int)dword_140404A6C[v5 + 225391243] < a3 )
      dword_140404A6C[v5 + 225391243] = a3;
    dword_140404A6C[v7 + 225391238] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391241] < a4 )
      dword_140404A6C[v7 + 225391241] = a4;
    if ( (int)dword_140404A6C[v7 + 225391243] < a3 )
      dword_140404A6C[v7 + 225391243] = a3;
  }
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174] = (float)(int)(dword_140404A6C[v7 + 225391230]
                                                                                        - dword_140404A6C[v5 + 225391230]);
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426175] = 0;
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176] = (float)(int)(dword_140404A6C[v7 + 225391232]
                                                                                        - dword_140404A6C[v5 + 225391232]);
  sub_14007A240(
    (__int64)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174],
    (float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174]);
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426177] = -*(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426178] = 0;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426179] = dword_140404A6C[396 * dword_140404A6C[225426046]
                                                                                + 225426174];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426056] = a1;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426057] = a2;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426059] = a3;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426060] = a4;
  v10 = 396LL * (int)dword_140404A6C[225426046];
  v11 = 34LL * (int)dword_140404A6C[v10 + 225426056];
  if ( dword_140404A6C[v10 + 225426058] )
  {
    v13 = dword_140404A6C[v11 + 225391230] - 256;
    result = (unsigned int)((unsigned __int64)(2454267027LL * v13) >> 32) >> 31;
    v14 = v13 / 56;
    if ( v13 / 56 )
    {
      switch ( v14 )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Bunten Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 10;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Carmack Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 11;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "David Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 12;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eugene Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 13;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Flinn Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 14;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Garriott Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 15;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Holland Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 16;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "Abrash Ave");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 9;
    }
  }
  else
  {
    result = (unsigned int)((int)(dword_140404A6C[v11 + 225391232] - 256) / 32);
    if ( (_DWORD)result )
    {
      switch ( (_DWORD)result )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Second Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 1;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Third Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 2;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fourth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 3;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fifth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 4;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Sixth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 5;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Seventh Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 6;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eighth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 7;
          break;
        case 8:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Ninth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 8;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "First Street");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 0;
    }
  }
  ++dword_140404A6C[225426046];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175FF3464: using guessed type unsigned int;

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

//----- (0000000140005160) ----------------------------------------------------
__int64            sub_140005160(
        __int16 a1,
        unsigned int *a2,
        unsigned int *a3,
        float a4,
        unsigned int a5,
        float a6,
        unsigned int a7)
{
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx

  result = (__int64)&dword_140404A6C[486149253];
  v11 = 0;
  while ( *(_DWORD *)result )
  {
    ++v11;
    result += 244;
    if ( result >= (__int64)&dword_140404A6C[487148677] )
      return result;
  }
  if ( v11 != -1 )
  {
    v12 = v11;
    v13 = 61LL * v11;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v13 + 486149254]), 0, 0xF0u);
    dword_140404A6C[v13 + 486149253] = 1;
    v14 = 18 * v12;
    dword_140404A6C[v13 + 486149254] = 5;
    *(_QWORD *)&dword_140404A6C[v13 + 486149256] = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543029] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543033] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543037] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543041] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543045] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543049] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543053] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543057] + 2) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[2 * v14 + 485543061] + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[2 * v14 + 485543063] + 2) = 0;
    HIWORD(dword_140404A6C[2 * v14 + 485543064]) = 0;
    LOWORD(dword_140404A6C[2 * v14 + 485543029]) = a1;
    dword_140404A6C[2 * v14 + 485543037] = *a2;
    dword_140404A6C[2 * v14 + 485543038] = a2[1];
    dword_140404A6C[2 * v14 + 485543039] = a2[2];
    dword_140404A6C[2 * v14 + 485543033] = *a3;
    dword_140404A6C[2 * v14 + 485543034] = a3[1];
    result = a3[2];
    dword_140404A6C[2 * v14 + 485543035] = result;
    dword_140404A6C[2 * v14 + 485543046] = a7;
    dword_140404A6C[2 * v14 + 485543047] = a5;
    *(float *)&dword_140404A6C[2 * v14 + 485543036] = a4 * a6;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400052C0) ----------------------------------------------------
__int64            sub_1400052C0(
        int a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        float a6,
        unsigned int a7,
        float a8,
        unsigned int a9)
{
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rbp
  int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  float v18; // xmm3_4
  float v19; // xmm0_4

  v9 = a1;
  result = (__int64)&dword_140404A6C[486149253];
  v11 = a2;
  v14 = 0;
  while ( *(_DWORD *)result )
  {
    ++v14;
    result += 244;
    if ( result >= (__int64)&dword_140404A6C[487148677] )
      return result;
  }
  if ( v14 != -1 )
  {
    v15 = v14;
    v16 = 61LL * v14;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v16 + 486149254]), 0, 0xF0u);
    v17 = 18 * v15;
    dword_140404A6C[v16 + 486149253] = 1;
    dword_140404A6C[v16 + 486149254] = 6;
    *(_QWORD *)&dword_140404A6C[v16 + 486149256] = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543029] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543033] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543037] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543041] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543045] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543049] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543053] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543057] + 2) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[2 * v17 + 485543061] + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[2 * v17 + 485543063] + 2) = 0;
    HIWORD(dword_140404A6C[2 * v17 + 485543064]) = 0;
    LOWORD(dword_140404A6C[2 * v17 + 485543029]) = v9;
    HIWORD(dword_140404A6C[2 * v17 + 485543029]) = v11;
    dword_140404A6C[2 * v17 + 485543037] = *a3;
    dword_140404A6C[2 * v17 + 485543038] = a3[1];
    dword_140404A6C[2 * v17 + 485543039] = a3[2];
    dword_140404A6C[2 * v17 + 485543040] = *a4;
    dword_140404A6C[2 * v17 + 485543041] = a4[1];
    dword_140404A6C[2 * v17 + 485543042] = a4[2];
    dword_140404A6C[2 * v17 + 485543033] = *a5;
    dword_140404A6C[2 * v17 + 485543034] = a5[1];
    result = a5[2];
    dword_140404A6C[2 * v17 + 485543035] = result;
    *(float *)&dword_140404A6C[2 * v17 + 485543036] = a6 * a8;
    dword_140404A6C[2 * v17 + 485543046] = a9;
    dword_140404A6C[2 * v17 + 485543047] = a7;
    v18 = *(float *)&dword_140404A6C[47 * v9 + 18215714];
    v19 = *(float *)&dword_140404A6C[47 * v11 + 18215714] + v18;
    *(float *)&dword_140404A6C[2 * v17 + 485543044] = *(float *)&dword_140404A6C[47 * v11 + 18215714]
                                                    * (float)(1.0 / v19);
    *(float *)&dword_140404A6C[2 * v17 + 485543045] = v18 * (float)(1.0 / v19);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140007490) ----------------------------------------------------
__int64            sub_140007490(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v10 = a1;
  result = sub_1400A4620(a1, a6 / a7);
  if ( (_DWORD)result != -1 )
  {
    v12 = 5LL * (int)result;
    v13 = 188896 * v10 + 8 * v12;
    *(float *)((char *)&dword_140404A6C[438887436] + v13) = a6;
    *(float *)((char *)&dword_140404A6C[438887437] + v13) = a7;
    *(unsigned int *)((char *)&dword_140404A6C[438887428] + v13) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[438887429] + v13) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[438887430] + v13) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[438887431] + v13) = a4;
    *(unsigned int *)((char *)&dword_140404A6C[438887432] + v13) = a5;
    return a5;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140007EA0) ----------------------------------------------------
unsigned int *           sub_140007EA0(int a1)
{
  unsigned int v1; // r15d
  __int64 v2; // r13
  unsigned int *result; // rax
  unsigned int *v4; // r12
  __int64 v5; // r14
  unsigned int *v6; // rsi
  __int64 v7; // r11
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // rbx
  __int64 v12; // [rsp+38h] [rbp+10h]

  v1 = dword_140404A6C[456202453];
  v2 = 8;
  result = &dword_140404A6C[280658140];
  v12 = 8;
  v4 = &dword_140404A6C[7166 * a1 + 280658140];
  do
  {
    v5 = (int)*(v4 - 1);
    if ( v5 > 0 )
    {
      v6 = v4;
      do
      {
        v7 = (int)*v6;
        v8 = 1760 * v7;
        if ( (int)dword_140404A6C[1760 * v7 + 278845906] > 0 )
        {
          result = (unsigned int *)(int)dword_140404A6C[v8 + 278845907];
          v9 = 0;
          dword_140404A6C[1760 * (_QWORD)result + 278845900] = 0;
          v10 = dword_140404A6C[v8 + 278845906];
          v11 = (int)dword_140404A6C[v8 + 278845907];
          if ( v10 > 0 )
          {
            result = &dword_140404A6C[1760 * v7 + 278845907];
            do
            {
              if ( *result == (_DWORD)v11 )
              {
                dword_140404A6C[v8 + 278845906] = v10 - 1;
                *result = dword_140404A6C[1760 * v7 + 278845906 + v10];
                dword_140404A6C[1760 * v11 + 278845903] = -1;
                if ( v1 )
                {
                  if ( v11 <= 0x3FF )
                    ++dword_140404A6C[v11 + 280648157];
                  if ( (unsigned int)v7 <= 0x3FF )
                    ++dword_140404A6C[v7 + 280648157];
                }
              }
              else
              {
                ++v9;
                ++result;
              }
              v10 = dword_140404A6C[v8 + 278845906];
            }
            while ( v9 < v10 );
          }
        }
        ++v6;
        dword_140404A6C[v8 + 278845900] = 0;
        --v5;
      }
      while ( v5 );
      v2 = v12;
    }
    v4 += 10;
    v12 = --v2;
  }
  while ( v2 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD04ADC0: using guessed type unsigned int;

//----- (00000001400090C0) ----------------------------------------------------
__int64            sub_1400090C0(int a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbp
  signed int v6; // edx
  __int64 v7; // rdi
  int v8; // r15d
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  signed int v12; // r8d
  signed int v13; // r9d
  int v14; // eax
  bool v15; // cc
  int v16; // edi
  __int64 v17; // rbp
  unsigned int v18; // ecx
  __int64 result; // rax

  v1 = 3597LL * a1;
  v2 = 2;
  v3 = v1 * 4 + 32LL * (int)dword_140404A6C[v1 + 71859146];
  v4 = *(int *)((char *)&dword_140404A6C[71859151] + v3);
  v5 = (int)dword_140404A6C[396 * v4 + 225426056 + (*(int *)((char *)&dword_140404A6C[71859152] + v3) ^ 1LL)];
  v6 = dword_140404A6C[v1 + 71859660];
  v7 = 34 * v5;
  v8 = v4 == dword_140404A6C[34 * v5 + 225391237];
  if ( (_DWORD)v4 == dword_140404A6C[34 * v5 + 225391238] )
    v8 = 2;
  if ( (_DWORD)v4 == dword_140404A6C[v7 + 225391239] )
    v8 = 3;
  if ( dword_140404A6C[v7 + 225391230] == v6 && dword_140404A6C[v7 + 225391232] == dword_140404A6C[v1 + 71859661] )
  {
    if ( (int)dword_140404A6C[225391228] <= 0 )
      v9 = 0;
    else
      v9 = rand() % (signed int)dword_140404A6C[225391228];
    v10 = 34LL * v9;
    v6 = dword_140404A6C[v10 + 225391230];
    v11 = dword_140404A6C[v10 + 225391232];
    dword_140404A6C[v1 + 71859660] = v6;
    dword_140404A6C[v1 + 71859661] = v11;
  }
  v12 = dword_140404A6C[v7 + 225391232];
  v13 = dword_140404A6C[v1 + 71859661];
  v14 = dword_140404A6C[v7 + 225391230];
  if ( v12 == v13 )
  {
    if ( v14 < v6 )
      v2 = 0;
  }
  else
  {
    v15 = v14 <= (signed int)dword_140404A6C[225391366];
    if ( v14 < (int)dword_140404A6C[225391366] )
    {
      if ( v8 )
      {
        v2 = 0;
        goto LABEL_23;
      }
      v15 = v14 <= (signed int)dword_140404A6C[225391366];
    }
    if ( v15 || v8 == 2 )
    {
      v2 = 3;
      if ( v12 < v13 )
        v2 = 1;
    }
  }
LABEL_23:
  v16 = 0;
  v17 = 34 * v5;
  do
  {
    v18 = dword_140404A6C[v17 + 225391236 + v2];
    if ( v18 != (_DWORD)v4 && v18 != -1 )
      break;
    ++v16;
    v2 = rand() & 3;
  }
  while ( v16 < 512 );
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859159 + v1] = dword_140404A6C[v17 + 225391236 + v2];
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859160 + v1] = v2 >= 2;
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859162 + v1] = rand() & 1;
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859163 + v1] = 0;
  if ( v2 == (((_BYTE)v8 + 1) & 3) )
    dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859163 + v1] = -1;
  result = ((_BYTE)v8 - 1) & 3;
  if ( v2 == (_DWORD)result )
  {
    result = v1 * 4 + 32LL * (int)dword_140404A6C[v1 + 71859146];
    *(unsigned int *)((char *)&dword_140404A6C[71859163] + result) = 1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400096B0) ----------------------------------------------------
__int64            sub_1400096B0(int a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  signed int v10; // ecx
  signed int v11; // ebx
  signed int v12; // esi
  signed int v13; // r12d
  signed int v14; // r15d
  __int64 v15; // r11
  __int64 v16; // rcx
  signed int v17; // eax
  signed int v18; // edx
  int v19; // ebp
  __m128i v20; // xmm0
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp-20h] [rbp-80C0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400096B0[16528];
#define si128 (*(__m128i (*))(void *)(sr_frame_1400096B0 + 0)) /* [rsp+0h] */
#define v32 (*(_DWORD (*)[4096])(void *)(sr_frame_1400096B0 + 16)) /* [rsp+10h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_1400096B0 + 16400)) /* [rsp+4010h] */
#define v34 (*(signed int (*))(void *)(sr_frame_1400096B0 + 16512)) /* [rsp+4080h] */
#define v35 (*(signed int (*))(void *)(sr_frame_1400096B0 + 16520)) /* [rsp+4088h] */

  LODWORD(v4) = a3;
  v5 = a2;
  v6 = a1;
  sub_1401FCD30((void *)(uintptr_t)(v32), 0, 0x4000u);
  v8 = 3597 * v6;
  v9 = 396 * v5;
  *(_QWORD *)&dword_140404A6C[3597 * v6 + 71859146] = 0;
  if ( a4 )
    v10 = dword_140404A6C[v9 + 225426056];
  else
    v10 = dword_140404A6C[v9 + 225426057];
  dword_140404A6C[v8 + 71859663] = v10;
  dword_140404A6C[v8 + 71859151] = v5;
  dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859152 + v8] = v4;
  dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859153 + v8] = a4;
  v11 = dword_140404A6C[v8 + 71859147] + 1;
  dword_140404A6C[v8 + 71859147] = v11;
  if ( v11 < 32 )
  {
    v12 = v35;
    v13 = dword_140404A6C[225395140];
    v14 = v34;
    do
    {
      v15 = v10;
      v16 = 34LL * v10;
      v17 = dword_140404A6C[v16 + 225391230];
      if ( v17 == v14 && dword_140404A6C[v16 + 225391232] == v12 )
        break;
      v18 = dword_140404A6C[v16 + 225391232];
      v19 = v4;
      if ( v12 == v18 )
      {
        if ( v14 <= v17 )
        {
          SR_VEC_LANES(128, si128, i32)[0] = 2;
          SR_VEC_LANES(128, si128, i32)[3] = 0;
        }
        else
        {
          SR_VEC_LANES(128, si128, i32)[0] = 0;
          SR_VEC_LANES(128, si128, i32)[3] = 2;
        }
        *(__int64 *)((char *)SR_VEC_LANES(128, si128, i64) + 4) = 0x300000001LL;
      }
      else if ( v17 >= v13 )
      {
        if ( v17 <= v13 )
        {
          v20 = v12 <= v18
              ? _mm_load_si128((     __m128i *)&xmmword_140278EF0)
              : _mm_load_si128((     __m128i *)&xmmword_140278F40);
          si128 = v20;
        }
        else
        {
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278DF0);
        }
      }
      else
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140278F20);
      }
      v21 = 0;
      v22 = 0;
      v23 = 34 * v15;
      do
      {
        v24 = SR_VEC_LANES(128, si128, i32)[v22];
        if ( dword_140404A6C[v24 + 225391236 + v23] != -1 && !v32[4 * v15 + v24] && (_DWORD)v24 != (((_BYTE)v4 - 2) & 3) )
          break;
        ++v21;
        ++v22;
      }
      while ( v21 < 3 );
      v4 = SR_VEC_LANES(128, si128, i32)[v22];
      v25 = (int)dword_140404A6C[v4 + 225391236 + v23];
      if ( (_DWORD)v25 == -1 )
        break;
      v32[4 * v15 + v4] = 1;
      v26 = v4 - v19;
      dword_140404A6C[8 * v11 + 71859151 + v8] = v25;
      dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859152 + v8] = v4;
      if ( (int)v4 - v19 >= -1 )
      {
        if ( v26 > 1 )
          v26 -= 4;
      }
      else
      {
        v26 += 4;
      }
      dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859155 + v8] = 0;
      v27 = (int)dword_140404A6C[v8 + 71859147];
      if ( (int)v27 > 0 )
      {
        if ( v26 == -1 )
        {
          dword_140404A6C[8 * v27 + 71859147 + v8] = -1;
        }
        else if ( v26 == 1 )
        {
          dword_140404A6C[8 * v27 + 71859147 + v8] = 1;
        }
      }
      v28 = v8 * 4 + 32LL * (int)dword_140404A6C[v8 + 71859147];
      if ( (int)v4 >= 2 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[71859153] + v28) = 1;
        v11 = dword_140404A6C[v8 + 71859147] + 1;
        v10 = dword_140404A6C[396 * v25 + 225426056];
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[71859153] + v28) = 0;
        v11 = dword_140404A6C[v8 + 71859147] + 1;
        v10 = dword_140404A6C[396 * v25 + 225426057];
      }
      dword_140404A6C[v8 + 71859147] = v11;
    }
    while ( v11 < 32 );
  }
  return 0; /* no result: rax is loop residue at 0x1400099D6 */
}
#undef si128
#undef v32
#undef v33
#undef v34
#undef v35

// 140278DF0: using guessed type __int128 xmmword_140278DF0;
// 140278EF0: using guessed type __int128 xmmword_140278EF0;
// 140278F20: using guessed type __int128 xmmword_140278F20;
// 140278F40: using guessed type __int128 xmmword_140278F40;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175FD517C: using guessed type unsigned int;

//----- (000000014000B5F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14000B5F0(double a1, float a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern float math_angle_difference(float a, float b);
  /* a arrives as float bits in the low lane; callers read lane 0 of the result. */
  return _mm_set_ss(math_angle_difference(*(float *)&a1, a2));
}

// 14000B5F0: inconsistent variable size for 'xmm0_8.8'

//----- (000000014000B650) ----------------------------------------------------
void            sub_14000B650(signed int a1, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  unsigned int *v6; // rdx
  unsigned int *v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // xmm0_4
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned int v12; // xmm1_4
  unsigned int v13; // xmm2_4
  unsigned int v14; // xmm3_4
  unsigned int v15; // xmm1_4
  unsigned int v16; // xmm2_4

  v3 = 5210LL * a1;
  if ( dword_140404A6C[v3 + 129716710] != 13 )
  {
    v4 = dword_140404A6C[v3 + 129716712];
    if ( v4 > 0 )
    {
      v5 = v4 - a2;
      dword_140404A6C[v3 + 129716712] = v5;
      if ( v5 <= 0 )
      {
        v6 = &dword_140404A6C[v3 + 129716744];
        v7 = &dword_140404A6C[v3 + 129716720];
        if ( dword_140404A6C[456202453] )
        {
          v8 = dword_140404A6C[283831474];
          v9 = 0;
          v10 = dword_140404A6C[308307070];
          v11 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1;
          *(_QWORD *)((char *)&dword_140404A6C[297756294] + v11) = 2;
          if ( v7 )
          {
            v12 = v7[2];
            v13 = v7[1];
            v14 = *v7;
          }
          else
          {
            v12 = 0;
            v13 = 0;
            v14 = 0;
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = v14;
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = v13;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
          if ( v6 )
          {
            v9 = v6[2];
            v15 = v6[1];
            v16 = *v6;
          }
          else
          {
            v15 = 0;
            v16 = 0;
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = v16;
          *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = v15;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
          dword_140404A6C[308307070] = v10 + 1;
          HIWORD(dword_140404A6C[308307070]) = 0;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014000B7D0) ----------------------------------------------------
__int64            sub_14000B7D0(
        unsigned int a1,
        signed int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v10; // eax
  unsigned int v11; // xmm0_4
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // xmm1_4

  if ( a1 > 3 || a2 < 0 || (a5 & 0xE0000000) != 0x80000000 || (a6 & 0x10000) == 0 )
    return 0;
  if ( dword_140404A6C[456202453] )
  {
    v10 = dword_140404A6C[283831474];
    v11 = 0;
    v12 = dword_140404A6C[308307070];
    v13 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v13) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v13) = v10;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v13) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v13) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v13) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v13) = (unsigned __int16)a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v13) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v13) = a7[1];
      v14 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v13) = 0;
      v14 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v13) = v14;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v13) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v13) = a8[1];
      v11 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v13) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v13) = v11;
    dword_140404A6C[308307070] = v12 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
  sub_140016E30(a1, a2, a3, a4, a5 | (0x10000 << a6));
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014000E8B0) ----------------------------------------------------
char            sub_14000E8B0(int *a1, int a2, int a3, int a4, int a5, float a6)
{
  signed int v7; // esi
  __int64 v9; // r14
  float v10; // xmm14_4
  float v11; // xmm0_4
  float v12; // xmm13_4
  __int64 v14; // rax
  int v15; // ebx
  float v16; // xmm3_4
  float v17; // xmm4_4
  __int64 v18; // rax
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  float v28; // xmm14_4
  float *v29; // rcx
  float *v30; // rcx
  int v31; // r11d
  int v32; // r9d
  float *v33; // rcx
  int v34; // r8d
  float *v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  int *v38; // rcx
  int v39; // edi
  int *v40; // rcx
  int v41; // edx
  int v42; // edi
  int v43; // edx
  int *v44; // rcx
  int v45; // r11d
  int v46; // edx
  int *v47; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000E8B0[48];
#define v49 (*(float (*))(void *)(sr_frame_14000E8B0 + 0)) /* [rsp+D8h] */
#define v50 (*(float (*))(void *)(sr_frame_14000E8B0 + 8)) /* [rsp+E0h] */
#define v51 (*(float (*))(void *)(sr_frame_14000E8B0 + 32)) /* [rsp+F8h] */

  v7 = 0;
  v9 = 0;
  v10 = (float)a4;
  v11 = (float)a2;
  v12 = (float)a3;
  v50 = (float)a4;
  v51 = (float)a2;
  v49 = (float)a3;
  do
  {
    LOBYTE(v14) = _bittest(&a5, v7);
    if ( ((((64 << v7) & a5) != 0) & (unsigned __int8)v14) == 0 || a1[8193] >= 1024 )
      goto LABEL_75;
    v15 = 0;
    v16 = (float)(v11 + *(float *)&dword_1402B34F0[3 * dword_1402B3660[4 * v9]]) * a6;
    v17 = (float)(v12 + *(float *)&dword_1402B34F4[3 * dword_1402B3660[4 * v9]]) * a6;
    v18 = *a1;
    v19 = (float)(v10 + *(float *)&dword_1402B34F8[3 * dword_1402B3660[4 * v9]]) * a6;
    v20 = (float)(v11 + *(float *)&dword_1402B34F0[3 * dword_1402B3664[4 * v9]]) * a6;
    v21 = (float)(v12 + *(float *)&dword_1402B34F4[3 * dword_1402B3664[4 * v9]]) * a6;
    v22 = (float)(v10 + *(float *)&dword_1402B34F8[3 * dword_1402B3664[4 * v9]]) * a6;
    v23 = (float)(v11 + *(float *)&dword_1402B34F0[3 * dword_1402B3668[4 * v9]]) * a6;
    v24 = (float)(v12 + *(float *)&dword_1402B34F4[3 * dword_1402B3668[4 * v9]]) * a6;
    v25 = (float)(v10 + *(float *)&dword_1402B34F8[3 * dword_1402B3668[4 * v9]]) * a6;
    v26 = (float)(v11 + *(float *)&dword_1402B34F0[3 * dword_1402B366C[4 * v9]]) * a6;
    v27 = (float)(v12 + *(float *)&dword_1402B34F4[3 * dword_1402B366C[4 * v9]]) * a6;
    v28 = (float)(v10 + *(float *)&dword_1402B34F8[3 * dword_1402B366C[4 * v9]]) * a6;
    if ( (int)v18 <= 0 )
    {
LABEL_10:
      if ( (int)v18 < 2048 )
      {
        v18 *= 2;
        *(float *)&a1[2 * v18 + 2] = v16;
        *(float *)&a1[2 * v18 + 3] = v17;
        *(float *)&a1[2 * v18 + 4] = v19;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v15 = v18 - 1;
      if ( (int)v18 <= 0 )
      {
LABEL_18:
        if ( (int)v18 < 2048 )
        {
          v18 = 2LL * (int)v18;
          *(float *)&a1[2 * v18 + 2] = v20;
          *(float *)&a1[2 * v18 + 3] = v21;
          *(float *)&a1[2 * v18 + 4] = v22;
          LODWORD(v18) = *a1 + 1;
          *a1 = v18;
        }
        v31 = v18 - 1;
        goto LABEL_21;
      }
    }
    else
    {
      v29 = (float *)(a1 + 3);
      while ( fabs(v16 - *(v29 - 1)) >= 0.000061035156
           || fabs(v17 - *v29) >= 0.000061035156
           || fabs(v19 - v29[1]) >= 0.000061035156 )
      {
        ++v15;
        v29 += 4;
        if ( v15 >= (int)v18 )
          goto LABEL_10;
      }
    }
    v30 = (float *)(a1 + 3);
    v31 = 0;
    while ( fabs(v20 - *(v30 - 1)) >= 0.000061035156
         || fabs(v21 - *v30) >= 0.000061035156
         || fabs(v22 - v30[1]) >= 0.000061035156 )
    {
      LODWORD(v18) = *a1;
      ++v31;
      v30 += 4;
      if ( v31 >= *a1 )
        goto LABEL_18;
    }
LABEL_21:
    v32 = 0;
    if ( (int)v18 <= 0 )
    {
LABEL_27:
      if ( (int)v18 < 2048 )
      {
        v18 = 2LL * (int)v18;
        *(float *)&a1[2 * v18 + 2] = v23;
        *(float *)&a1[2 * v18 + 3] = v24;
        *(float *)&a1[2 * v18 + 4] = v25;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v32 = v18 - 1;
    }
    else
    {
      v33 = (float *)(a1 + 3);
      while ( fabs(v23 - *(v33 - 1)) >= 0.000061035156
           || fabs(v24 - *v33) >= 0.000061035156
           || fabs(v25 - v33[1]) >= 0.000061035156 )
      {
        LODWORD(v18) = *a1;
        ++v32;
        v33 += 4;
        if ( v32 >= *a1 )
          goto LABEL_27;
      }
    }
    v34 = 0;
    if ( (int)v18 <= 0 )
    {
LABEL_36:
      if ( (int)v18 < 2048 )
      {
        v18 = 2LL * (int)v18;
        *(float *)&a1[2 * v18 + 2] = v26;
        *(float *)&a1[2 * v18 + 3] = v27;
        *(float *)&a1[2 * v18 + 4] = v28;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v34 = v18 - 1;
    }
    else
    {
      v35 = (float *)(a1 + 3);
      while ( fabs(v26 - *(v35 - 1)) >= 0.000061035156
           || fabs(v27 - *v35) >= 0.000061035156
           || fabs(v28 - v35[1]) >= 0.000061035156 )
      {
        LODWORD(v18) = *a1;
        ++v34;
        v35 += 4;
        if ( v34 >= *a1 )
          goto LABEL_36;
      }
    }
    a1[8 * a1[8193] + 8194] = 4;
    a1[8 * a1[8193] + 8195] = v15;
    a1[8 * a1[8193] + 8196] = v31;
    a1[8 * a1[8193] + 8197] = v32;
    a1[8 * a1[8193] + 8198] = v34;
    v36 = 8LL * a1[8193];
    a1[v36 + 8199] = dword_1402B3550[3 * v9];
    a1[v36 + 8200] = dword_1402B3554[3 * v9];
    v37 = 0;
    a1[v36 + 8201] = dword_1402B3558[3 * v9];
    ++a1[8193];
    v14 = a1[16386];
    if ( (int)v14 > 0 )
    {
      v38 = a1 + 16388;
      while ( 1 )
      {
        v39 = *(v38 - 1);
        if ( v15 == v39 && v31 == *v38 )
          break;
        if ( v15 == *v38 && v31 == v39 )
          break;
        ++v37;
        v38 += 2;
        if ( v37 >= (int)v14 )
          goto LABEL_46;
      }
LABEL_49:
      v40 = a1 + 16388;
      v41 = 0;
      while ( 1 )
      {
        v42 = *(v40 - 1);
        if ( v31 == v42 && v32 == *v40 )
          goto LABEL_57;
        if ( v31 == *v40 && v32 == v42 )
          goto LABEL_57;
        LODWORD(v14) = a1[16386];
        ++v41;
        v40 += 2;
        if ( v41 >= (int)v14 )
          goto LABEL_55;
      }
    }
LABEL_46:
    if ( (int)v14 < 1024 )
    {
      a1[2 * v14 + 16387] = v15;
      a1[2 * a1[16386] + 16388] = v31;
      LODWORD(v14) = a1[16386] + 1;
      a1[16386] = v14;
    }
    if ( (int)v14 > 0 )
      goto LABEL_49;
LABEL_55:
    if ( (int)v14 < 1024 )
    {
      a1[2 * (int)v14 + 16387] = v31;
      a1[2 * a1[16386] + 16388] = v32;
      LODWORD(v14) = a1[16386] + 1;
      a1[16386] = v14;
    }
LABEL_57:
    v43 = 0;
    if ( (int)v14 <= 0 )
    {
LABEL_64:
      if ( (int)v14 < 1024 )
      {
        a1[2 * (int)v14 + 16387] = v32;
        a1[2 * a1[16386] + 16388] = v34;
        LODWORD(v14) = a1[16386] + 1;
        a1[16386] = v14;
      }
    }
    else
    {
      v44 = a1 + 16388;
      while ( 1 )
      {
        v45 = *(v44 - 1);
        if ( v32 == v45 && v34 == *v44 )
          break;
        if ( v32 == *v44 && v34 == v45 )
          break;
        LODWORD(v14) = a1[16386];
        ++v43;
        v44 += 2;
        if ( v43 >= (int)v14 )
          goto LABEL_64;
      }
    }
    v46 = 0;
    if ( (int)v14 <= 0 )
    {
LABEL_72:
      v11 = v51;
      v12 = v49;
      v10 = v50;
      if ( (int)v14 < 1024 )
      {
        a1[2 * (int)v14 + 16387] = v34;
        v14 = a1[16386];
        a1[2 * v14 + 16388] = v15;
        ++a1[16386];
      }
    }
    else
    {
      v47 = a1 + 16388;
      while ( 1 )
      {
        LODWORD(v14) = *(v47 - 1);
        if ( __PAIR64__(v15, v34) == *(_QWORD *)(v47 - 1) || v34 == *v47 && v15 == (_DWORD)v14 )
          break;
        LODWORD(v14) = a1[16386];
        ++v46;
        v47 += 2;
        if ( v46 >= (int)v14 )
          goto LABEL_72;
      }
      v10 = v50;
      v12 = v49;
      v11 = v51;
    }
LABEL_75:
    ++v7;
    ++v9;
  }
  while ( v7 < 6 );
  return v14;
}
#undef v49
#undef v50
#undef v51

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3550: using guessed type int dword_1402B3550[];
// 1402B3554: using guessed type int dword_1402B3554[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3660: using guessed type int dword_1402B3660[];
// 1402B3664: using guessed type int dword_1402B3664[];
// 1402B3668: using guessed type int dword_1402B3668[];
// 1402B366C: using guessed type int dword_1402B366C[];

//----- (000000014000EF70) ----------------------------------------------------
__int64            sub_14000EF70(int *a1, int a2, int a3, int a4, unsigned int a5, float a6, float *a7, float *a8)
{
  __int64 result; // rax
  float v10; // xmm1_4
  signed int v11; // r15d
  __int64 v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  float v20; // xmm14_4
  float v21; // xmm2_4
  float v22; // xmm13_4
  __int64 v23; // rax
  float v24; // xmm5_4
  float v25; // xmm14_4
  float v26; // xmm12_4
  float v27; // xmm15_4
  float v28; // xmm11_4
  __int64 v29; // rax
  float v30; // xmm8_4
  float v31; // xmm12_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  __int64 v34; // rax
  float v35; // xmm8_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  __int64 v41; // rax
  int v42; // r14d
  float *v43; // rcx
  float *v44; // rcx
  int v45; // ebp
  int v46; // esi
  float *v47; // rcx
  int v48; // edi
  float *v49; // rcx
  float v50; // xmm9_4
  float v51; // xmm15_4
  float v52; // xmm10_4
  float v53; // xmm11_4
  float v54; // xmm12_4
  float *v55; // rdx
  __int64 v56; // rax
  int v57; // r8d
  int *v58; // rcx
  int v59; // edx
  int *v60; // rcx
  int v61; // edx
  int v62; // r8d
  int v63; // edx
  int *v64; // rcx
  int v65; // r8d
  int v66; // edx
  int *v67; // rcx
  int v68; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000EF70[304];
#define v69 (*(float (*))(void *)(sr_frame_14000EF70 + 0)) /* [rsp+20h] */
#define v70 (*(float (*))(void *)(sr_frame_14000EF70 + 4)) /* [rsp+24h] */
#define v71 (*(float (*))(void *)(sr_frame_14000EF70 + 8)) /* [rsp+28h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_14000EF70 + 16)) /* [rsp+30h] */
#define v73 (*(__int64 (*))(void *)(sr_frame_14000EF70 + 24)) /* [rsp+38h] */
#define v74 (*(float (*))(void *)(sr_frame_14000EF70 + 264)) /* [rsp+128h] */
#define v75 (*(float (*))(void *)(sr_frame_14000EF70 + 272)) /* [rsp+130h] */
#define v76 (*(float (*))(void *)(sr_frame_14000EF70 + 280)) /* [rsp+138h] */
#define v77 (*(float (*))(void *)(sr_frame_14000EF70 + 288)) /* [rsp+140h] */

  result = a5;
  v10 = a6;
  v11 = 0;
  v12 = 232LL * (unsigned __int16)a5;
  v13 = (float)a2;
  v73 = v12;
  v14 = (float)a3;
  v15 = (float)a4;
  v74 = (float)a2;
  v75 = (float)a3;
  v76 = (float)a4;
  if ( *(int *)((char *)&dword_140404A6C[20074623] + v12) > 0 )
  {
    result = 0;
    v72 = 0;
    while ( a1[8193] >= 1024 )
    {
LABEL_119:
      ++result;
      ++v11;
      v72 = result;
      if ( v11 >= *(int *)((char *)&dword_140404A6C[20074623] + v12) )
        return result;
    }
    v16 = 2 * result;
    v17 = *(_QWORD *)((char *)&dword_140404A6C[20074615] + v73);
    v18 = *(_QWORD *)((char *)&dword_140404A6C[20074631] + v73);
    v19 = 3 * *(_DWORD *)(v18 + 16 * result);
    v20 = v15 + *(float *)(v17 + 4 * v19 + 8);
    v21 = (float)(v13 + *(float *)(v17 + 4 * v19)) * v10;
    v22 = (float)(v14 + *(float *)(v17 + 4 * v19 + 4)) * v10;
    v23 = 3 * *(_DWORD *)(v18 + 8 * v16 + 4);
    v71 = v21;
    v24 = v21;
    v25 = v20 * v10;
    v26 = v15 + *(float *)(v17 + 4 * v23 + 8);
    v27 = (float)(v13 + *(float *)(v17 + 4 * v23)) * v10;
    v28 = (float)(v14 + *(float *)(v17 + 4 * v23 + 4)) * v10;
    v29 = 3 * *(_DWORD *)(v18 + 8 * v16 + 8);
    v30 = v15 + *(float *)(v17 + 4 * v29 + 8);
    v31 = v26 * v10;
    v32 = (float)(v13 + *(float *)(v17 + 4 * v29)) * v10;
    v33 = (float)(v14 + *(float *)(v17 + 4 * v29 + 4)) * v10;
    v34 = 3 * *(_DWORD *)(v18 + 8 * v16 + 12);
    v35 = v30 * v10;
    v77 = (float)(v13 + *(float *)(v17 + 4 * v34)) * v10;
    v69 = (float)(v14 + *(float *)(v17 + 4 * v34 + 4)) * v10;
    v70 = (float)(v15 + *(float *)(v17 + 4 * v34 + 8)) * v10;
    if ( v21 > v27 )
      v24 = v27;
    v36 = v22;
    if ( v22 > v28 )
      v36 = v28;
    v37 = v25;
    if ( v25 > v31 )
      v37 = v31;
    v38 = v21;
    if ( v21 < v27 )
      v38 = v27;
    v39 = v22;
    if ( v22 < v28 )
      v39 = v28;
    v40 = v25;
    if ( v25 < v31 )
      v40 = v31;
    if ( v24 > v32 )
      v24 = v32;
    if ( v36 > v33 )
      v36 = v33;
    if ( v37 > v35 )
      v37 = v35;
    if ( v38 < v32 )
      v38 = v32;
    if ( v39 < v33 )
      v39 = v33;
    if ( v40 < v35 )
      v40 = v35;
    if ( v24 > v77 )
      v24 = v77;
    if ( v36 > v69 )
      v36 = v69;
    if ( v37 > v70 )
      v37 = v70;
    if ( v38 < v77 )
      v38 = v77;
    if ( v39 < v69 )
      v39 = v69;
    if ( v40 < v70 )
      v40 = v70;
    if ( v24 > *a8 || v38 < *a7 || v37 > a8[2] || v40 < a7[2] || v36 > a8[1] || v39 < a7[1] )
      goto LABEL_117;
    v41 = *a1;
    v42 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_52:
      if ( (int)v41 < 2048 )
      {
        v41 *= 2;
        *(float *)&a1[2 * v41 + 2] = v71;
        *(float *)&a1[2 * v41 + 3] = v22;
        *(float *)&a1[2 * v41 + 4] = v25;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v42 = v41 - 1;
      if ( (int)v41 <= 0 )
      {
LABEL_60:
        if ( (int)v41 < 2048 )
        {
          v41 = 2LL * (int)v41;
          *(float *)&a1[2 * v41 + 2] = v27;
          *(float *)&a1[2 * v41 + 3] = v28;
          *(float *)&a1[2 * v41 + 4] = v31;
          LODWORD(v41) = *a1 + 1;
          *a1 = v41;
        }
        v45 = v41 - 1;
        goto LABEL_63;
      }
    }
    else
    {
      v43 = (float *)(a1 + 3);
      while ( fabs(v71 - *(v43 - 1)) >= 0.000061035156
           || fabs(v22 - *v43) >= 0.000061035156
           || fabs(v25 - v43[1]) >= 0.000061035156 )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= (int)v41 )
          goto LABEL_52;
      }
    }
    v44 = (float *)(a1 + 3);
    v45 = 0;
    while ( fabs(v27 - *(v44 - 1)) >= 0.000061035156
         || fabs(v28 - *v44) >= 0.000061035156
         || fabs(v31 - v44[1]) >= 0.000061035156 )
    {
      LODWORD(v41) = *a1;
      ++v45;
      v44 += 4;
      if ( v45 >= *a1 )
        goto LABEL_60;
    }
LABEL_63:
    v46 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_69:
      if ( (int)v41 < 2048 )
      {
        v41 = 2LL * (int)v41;
        *(float *)&a1[2 * v41 + 2] = v32;
        *(float *)&a1[2 * v41 + 3] = v33;
        *(float *)&a1[2 * v41 + 4] = v35;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v46 = v41 - 1;
    }
    else
    {
      v47 = (float *)(a1 + 3);
      while ( fabs(v32 - *(v47 - 1)) >= 0.000061035156
           || fabs(v33 - *v47) >= 0.000061035156
           || fabs(v35 - v47[1]) >= 0.000061035156 )
      {
        LODWORD(v41) = *a1;
        ++v46;
        v47 += 4;
        if ( v46 >= *a1 )
          goto LABEL_69;
      }
    }
    v48 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_78:
      if ( (int)v41 < 2048 )
      {
        v41 = 2LL * (int)v41;
        *(float *)&a1[2 * v41 + 3] = v69;
        *(float *)&a1[2 * v41 + 4] = v70;
        *(float *)&a1[2 * v41 + 2] = v77;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v48 = v41 - 1;
    }
    else
    {
      v49 = (float *)(a1 + 3);
      while ( fabs(v77 - *(v49 - 1)) >= 0.000061035156
           || fabs(v69 - *v49) >= 0.000061035156
           || fabs(v70 - v49[1]) >= 0.000061035156 )
      {
        LODWORD(v41) = *a1;
        ++v48;
        v49 += 4;
        if ( v48 >= *a1 )
          goto LABEL_78;
      }
    }
    v50 = v32 - v71;
    v51 = v27 - v71;
    v52 = v33 - v22;
    v53 = v28 - v22;
    a1[8 * a1[8193] + 8194] = 4;
    v54 = v31 - v25;
    a1[8 * a1[8193] + 8195] = v42;
    a1[8 * a1[8193] + 8196] = v45;
    a1[8 * a1[8193] + 8197] = v46;
    a1[8 * a1[8193] + 8198] = v48;
    v55 = (float *)&a1[8 * a1[8193] + 8199];
    *v55 = (float)(v52 * v54) - (float)((float)(v35 - v25) * v53);
    v55[1] = (float)((float)(v35 - v25) * v51) - (float)(v50 * v54);
    v55[2] = (float)(v50 * v53) - (float)(v52 * v51);
    sub_14007A240((__int64)v55, v55);
    v56 = a1[16386];
    v57 = 0;
    ++a1[8193];
    if ( (int)v56 <= 0 )
    {
LABEL_88:
      if ( (int)v56 < 1024 )
      {
        a1[2 * v56 + 16387] = v42;
        a1[2 * a1[16386] + 16388] = v45;
        LODWORD(v56) = a1[16386] + 1;
        a1[16386] = v56;
      }
      if ( (int)v56 <= 0 )
      {
LABEL_97:
        if ( (int)v56 < 1024 )
        {
          a1[2 * (int)v56 + 16387] = v45;
          a1[2 * a1[16386] + 16388] = v46;
          LODWORD(v56) = a1[16386] + 1;
          a1[16386] = v56;
        }
LABEL_99:
        v63 = 0;
        if ( (int)v56 <= 0 )
        {
LABEL_106:
          if ( (int)v56 < 1024 )
          {
            a1[2 * (int)v56 + 16387] = v46;
            a1[2 * a1[16386] + 16388] = v48;
            LODWORD(v56) = a1[16386] + 1;
            a1[16386] = v56;
          }
        }
        else
        {
          v64 = a1 + 16388;
          while ( 1 )
          {
            v65 = *(v64 - 1);
            if ( v46 == v65 && v48 == *v64 )
              break;
            if ( v46 == *v64 && v48 == v65 )
              break;
            LODWORD(v56) = a1[16386];
            ++v63;
            v64 += 2;
            if ( v63 >= (int)v56 )
              goto LABEL_106;
          }
        }
        v66 = 0;
        if ( (int)v56 <= 0 )
        {
LABEL_115:
          v10 = a6;
          v13 = v74;
          v14 = v75;
          v15 = v76;
          v12 = v73;
          if ( (int)v56 < 1024 )
          {
            a1[2 * (int)v56 + 16387] = v48;
            a1[2 * a1[16386]++ + 16388] = v42;
          }
          goto LABEL_118;
        }
        v67 = a1 + 16388;
        while ( 1 )
        {
          v68 = *(v67 - 1);
          if ( v48 == v68 && v42 == *v67 )
            break;
          if ( v48 == *v67 && v42 == v68 )
            break;
          LODWORD(v56) = a1[16386];
          ++v66;
          v67 += 2;
          if ( v66 >= (int)v56 )
            goto LABEL_115;
        }
LABEL_117:
        v12 = v73;
        v15 = v76;
        v14 = v75;
        v13 = v74;
        v10 = a6;
LABEL_118:
        result = v72;
        goto LABEL_119;
      }
    }
    else
    {
      v58 = a1 + 16388;
      while ( 1 )
      {
        v59 = *(v58 - 1);
        if ( v42 == v59 && v45 == *v58 )
          break;
        if ( v42 == *v58 && v45 == v59 )
          break;
        ++v57;
        v58 += 2;
        if ( v57 >= (int)v56 )
          goto LABEL_88;
      }
    }
    v60 = a1 + 16388;
    v61 = 0;
    while ( 1 )
    {
      v62 = *(v60 - 1);
      if ( v45 == v62 && v46 == *v60 )
        goto LABEL_99;
      if ( v45 == *v60 && v46 == v62 )
        goto LABEL_99;
      LODWORD(v56) = a1[16386];
      ++v61;
      v60 += 2;
      if ( v61 >= (int)v56 )
        goto LABEL_97;
    }
  }
  return result;
}
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012940) ----------------------------------------------------
void            sub_140012940(unsigned int a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  if ( a1 <= 0xFFF )
  {
    v2 = a2 + 6930LL * (int)a1;
    v3 = (int)dword_140404A6C[v2 + 83200503];
    dword_140404A6C[v2 + 83200503] = -1;
    if ( (unsigned int)v3 <= 0x3FF )
    {
      dword_140404A6C[8969 * v3 + 73991662] = -1;
      sub_1401941F0(0, v3);
      sub_1401941F0(3, v3);
      sub_1401941F0(5, v3);
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012F30) ----------------------------------------------------
__int64            sub_140012F30(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bl
  char v5; // di
  char v6; // si
  int v7; // eax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = sub_140013020(a1, a2, a3, a4);
  if ( v7 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v7 + 83194871 + 64 * (v5 & 7) + 8 * (v4 & 7) + (v6 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400174D0) ----------------------------------------------------
char            sub_1400174D0(int *a1, int a2, int *a3, int a4, float a5)
{
  float v6; // xmm8_4
  __int64 v7; // rdx
  float v8; // xmm7_4
  float v9; // xmm9_4
  __int64 v10; // r8
  __int64 v11; // r11
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  __int64 v15; // rax
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  __int64 v37; // rcx
  __int64 v38; // rcx

  v6 = (float)a3[1];
  v7 = 263004LL * a2;
  v8 = (float)*a3 * a5;
  v9 = (float)a3[2];
  v10 = 0;
  v11 = 4;
  v12 = v8 + *(float *)&dword_140404A6C[v7 + 111579638];
  v13 = (float)(v6 * a5) + *(float *)&dword_140404A6C[v7 + 111579639];
  v14 = (float)(v9 * a5) + *(float *)&dword_140404A6C[v7 + 111579640];
  do
  {
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B0 + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B0 + v10 * 4))) != 0)) != 0
      && (_bittest(&a4, dword_1402B37B4[v10]) & ((a4 & (64 << dword_1402B37B4[v10])) != 0)) != 0 )
    {
      v15 = *a1;
      v16 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3750[v10]]) + v13;
      v17 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3754[v10]]) + v12;
      v18 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3750[v10]]) + v14;
      v19 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3754[v10]]) + v13;
      v20 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3754[v10]]) + v14;
      if ( (int)v15 < 256 )
      {
        v21 = 3 * v15;
        *(float *)&a1[2 * v21 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3750[v10]]) + v12;
        *(float *)&a1[2 * v21 + 2] = v16;
        *(float *)&a1[2 * v21 + 3] = v18;
        v22 = 3LL * *a1;
        *(float *)&a1[2 * v22 + 4] = v17;
        *(float *)&a1[2 * v22 + 5] = v19;
        *(float *)&a1[2 * v22 + 6] = v20;
        ++*a1;
      }
    }
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B8 + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B8 + v10 * 4))) != 0)) != 0
      && (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37BC + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37BC + v10 * 4))) != 0)) != 0 )
    {
      v23 = *a1;
      v24 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3758[v10]]) + v13;
      v25 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B375C[v10]]) + v12;
      v26 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3758[v10]]) + v14;
      v27 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B375C[v10]]) + v13;
      v28 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B375C[v10]]) + v14;
      if ( (int)v23 < 256 )
      {
        v29 = 3 * v23;
        *(float *)&a1[2 * v29 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3758[v10]]) + v12;
        *(float *)&a1[2 * v29 + 2] = v24;
        *(float *)&a1[2 * v29 + 3] = v26;
        v30 = 3LL * *a1;
        *(float *)&a1[2 * v30 + 4] = v25;
        *(float *)&a1[2 * v30 + 5] = v27;
        *(float *)&a1[2 * v30 + 6] = v28;
        ++*a1;
      }
    }
    LOBYTE(v31) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C0 + v10 * 4))
                & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C0 + v10 * 4))) != 0);
    if ( (_BYTE)v31 )
    {
      LOBYTE(v31) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C4 + v10 * 4))
                  & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C4 + v10 * 4))) != 0);
      if ( (_BYTE)v31 )
      {
        v31 = *a1;
        v32 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3760[v10]]) + v13;
        v33 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3764[v10]]) + v12;
        v34 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3760[v10]]) + v14;
        v35 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3764[v10]]) + v13;
        v36 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3764[v10]]) + v14;
        if ( (int)v31 < 256 )
        {
          v37 = 3 * v31;
          *(float *)&a1[2 * v37 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3760[v10]]) + v12;
          *(float *)&a1[2 * v37 + 2] = v32;
          *(float *)&a1[2 * v37 + 3] = v34;
          v31 = *a1;
          v38 = 3 * v31;
          *(float *)&a1[2 * v38 + 4] = v33;
          *(float *)&a1[2 * v38 + 5] = v35;
          *(float *)&a1[2 * v38 + 6] = v36;
          ++*a1;
        }
      }
    }
    v10 += 6;
    --v11;
  }
  while ( v11 );
  return v31;
}

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3750: using guessed type int dword_1402B3750[];
// 1402B3754: using guessed type int dword_1402B3754[];
// 1402B3758: using guessed type int dword_1402B3758[];
// 1402B375C: using guessed type int dword_1402B375C[];
// 1402B3760: using guessed type int dword_1402B3760[];
// 1402B3764: using guessed type int dword_1402B3764[];
// 1402B37B4: using guessed type int dword_1402B37B4[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017890) ----------------------------------------------------
void            sub_140017890(unsigned int a1)
{
  __int64 v2; // rsi
  int i; // ebx

  if ( a1 <= 0xFFF )
  {
    v2 = 6930LL * (int)a1;
    if ( dword_140404A6C[v2 + 83194357] )
    {
      sub_14000C4C0(a1);
      for ( i = 0; i < 4; ++i )
        sub_140012940(a1, i);
      dword_140404A6C[v2 + 83200510] = 0;
      if ( a1 == 1008 )
        ++dword_140404A6C[284205157];
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18402CC00: using guessed type unsigned int;

//----- (0000000140017C40) ----------------------------------------------------
__int64            sub_140017C40(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char v5; // bl
  char v6; // di
  char v7; // si
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = sub_140013020(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
  {
    dword_140404A6C[6930 * (int)result + 83194871 + 64 * (v6 & 7) + 8 * (v5 & 7) + (v7 & 7)] = a5;
    return a5;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140019000) ----------------------------------------------------
__m128            sub_140019000(float *a1, float *a2)
{
  float v2; // xmm0_4
  __int128 v4; // xmm6

  v2 = a2[2] - a1[2];
  if ( fsqrt(
         (float)((float)((float)(a2[1] - a1[1]) * (float)(a2[1] - a1[1]))
               + (float)((float)(*a2 - *a1) * (float)(*a2 - *a1)))
       + (float)(v2 * v2)) <= 128.0 )
  {
    v4 = 0x3F800000u;
    if ( (unsigned int)sub_1400DC050(a1, a2, 0) )
      return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
    return (__m128)v4;
  }
  else
  {
    return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
  }
}


//----- (000000014001B5C0) ----------------------------------------------------
__int64            sub_14001B5C0(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rax
  float v3; // xmm0_4
  unsigned int v4; // xmm2_4
  unsigned int v5; // xmm1_4
  float v6; // xmm0_4
  unsigned int v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm0_4

  if ( (int)a1 > 0 )
  {
    a1 = (unsigned int)a1;
    do
    {
      v2 = &dword_140404A6C[19928791];
      do
      {
        v3 = 1.0 - *(float *)v2;
        v4 = v2[1];
        *v2 = *(v2 - 2);
        v5 = v2[4];
        *((float *)v2 - 2) = v3;
        v6 = 1.0 - *((float *)v2 + 3);
        v2[3] = v4;
        v7 = v2[7];
        *((float *)v2 + 1) = v6;
        v8 = 1.0 - *((float *)v2 + 6);
        v2[6] = v5;
        *((float *)v2 + 4) = v8;
        v9 = 1.0 - *((float *)v2 + 9);
        v2[9] = v7;
        *((float *)v2 + 7) = v9;
        v2 += 12;
      }
      while ( (__int64)v2 < (__int64)&dword_140404A6C[19928839] );
      switch ( a2 )
      {
        case 0x60000u:
          a2 = 0x10000;
          break;
        case 0x10000u:
          a2 = 327680;
          break;
        case 0x50000u:
          a2 = 0x20000;
          break;
        case 0x20000u:
          a2 = 393216;
          break;
      }
      --a1;
    }
    while ( a1 );
  }
  return a2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001BF70) ----------------------------------------------------
__int64            sub_14001BF70(int a1)
{
  extern void physics_solve_joint(int bond);
  physics_solve_joint(a1);
  return 0;
}
#undef v57
#undef v58

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001C780) ----------------------------------------------------
__int64            sub_14001C780(int a1)
{
  extern void physics_prepare_joint(int bond);
  physics_prepare_joint(a1);
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001CBB0) ----------------------------------------------------
__int64            sub_14001CBB0(int a1)
{
  extern void physics_solve_point_velocity(int constraint);
  physics_solve_point_velocity(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001D080) ----------------------------------------------------
unsigned int *sub_14001D080()
{
  extern void physics_solve(void);
  physics_solve();
  /* The original returns its last bond-scan pointer; no caller uses it. */
  return &dword_140404A6C[487148677];
}
#undef v397
#undef v398

// 140384000: using guessed type float flt_140384000[131092];
// 140404000: using guessed type float;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;
// 182A7D558: using guessed type unsigned int;

//----- (000000014001FB90) ----------------------------------------------------
void sub_14001FB90()
{
  extern void physics_expire_bonds(void);
  physics_expire_bonds();
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001FD20) ----------------------------------------------------
__int64            sub_14001FD20(float *a1, float *a2)
{
  float *v4; // rdx
  int i; // ecx
  float *v6; // rax
  float v7; // xmm2_4
  unsigned int v8; // eax
  float v9; // xmm8_4
  float v10; // xmm7_4

  /* The five view-frustum planes (three floats each) are one table at 0x1402B27D0..0x1402B280B in the
     original, walked by pointer below. Separate globals do not stay adjacent, so keep it as one array. */
  static float sr_frustum_planes[15];
  static const float sr_frustum_plane_values[15] = {
    0.0f, 0.0f, 1.0f,   1.0f, 0.0f, 1.0f,   -1.0f, 0.0f, 1.0f,   0.0f, 0.75f, 1.0f,   0.0f, -0.75f, 1.0f
  };
  for ( i = 0; i < 5; ++i )
  {
    sr_frustum_planes[3 * i] = sr_frustum_plane_values[3 * i];
    sr_frustum_planes[3 * i + 1] = sr_frustum_plane_values[3 * i + 1];
    sr_frustum_planes[3 * i + 2] = sr_frustum_plane_values[3 * i + 2];
    sub_14007A240((__int64)&sr_frustum_planes[3 * i], &sr_frustum_planes[3 * i]);
  }
  v4 = &sr_frustum_planes[2];
  while ( 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        return 0;
      v6 = a1;
      if ( i >= 4 )
        v6 = a2;
      v7 = *v6;
      v8 = i & 3;
      if ( v8 >= 2 )
      {
        v9 = a2[1];
      }
      else
      {
        v9 = a1[1];
        if ( (i & 3) == 0 )
          goto LABEL_8;
      }
      if ( v8 == 3 )
      {
LABEL_8:
        v10 = a1[2];
        goto LABEL_9;
      }
      v10 = a2[2];
LABEL_9:
      if ( (float)((float)((float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024505])
                                                 + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024508]))
                                         + (float)(*v4 * *(float *)&dword_140404A6C[284024511]))
                                 * (float)(v7 - *(float *)&dword_140404A6C[284024502]))
                         + (float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024506])
                                                 + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024509]))
                                         + (float)(*v4 * *(float *)&dword_140404A6C[284024512]))
                                 * (float)(v9 - *(float *)&dword_140404A6C[284024503])))
                 + (float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024507])
                                         + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024510]))
                                 + (float)(*v4 * *(float *)&dword_140404A6C[284024513]))
                         * (float)(v10 - *(float *)&dword_140404A6C[284024504]))) < 0.0 )
        break;
    }
    v4 += 3;
    if ( v4 < &sr_frustum_planes[15] + 2 )
      continue;
    return 1;
  }
}
