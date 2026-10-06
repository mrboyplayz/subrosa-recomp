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

//----- (0000000140006F70) ----------------------------------------------------
__int64            sub_140006F70(int a1, float *a2, float *a3, float a4)
{
  __int64 v4; // rbx
  int v5; // r11d
  __int64 result; // rax
  int v8; // r10d
  int *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  __int64 v29; // rcx
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  __int64 v37; // rcx
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  __int64 v43; // r11
  unsigned int *v44; // r9
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm7_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm5_4

  v4 = a1;
  v5 = 0;
  result = 20840LL * a1;
  v8 = *(unsigned int *)((char *)&dword_140404A6C[129716768] + result);
  if ( v8 < 4 )
  {
    if ( v8 <= 0 )
      return result;
    v12 = 0;
    goto LABEL_8;
  }
  v9 = (int *)((char *)&dword_140404A6C[129716770] + result);
  v10 = ((unsigned int)(v8 - 4) >> 2) + 1;
  v11 = v10;
  v5 = 4 * v10;
  v12 = 4LL * v10;
  do
  {
    v13 = 60LL * *(v9 - 1);
    v14 = *v9;
    v15 = *(float *)&dword_140404A6C[v13 + 73007027] - a2[1];
    v16 = *(float *)&dword_140404A6C[v13 + 73007028] - a2[2];
    v17 = *(float *)&dword_140404A6C[v13 + 73007026] - *a2;
    v18 = (float)((float)(a3[1] * v17) - (float)(*a3 * v15)) * a4;
    v19 = (float)((float)(*a3 * v16) - (float)(a3[2] * v17)) * a4;
    *(float *)&dword_140404A6C[v13 + 73007032] = (float)((float)((float)(a3[2] * v15) - (float)(a3[1] * v16)) * a4)
                                               + *(float *)&dword_140404A6C[v13 + 73007032];
    *(float *)&dword_140404A6C[v13 + 73007033] = v19 + *(float *)&dword_140404A6C[v13 + 73007033];
    *(float *)&dword_140404A6C[v13 + 73007034] = v18 + *(float *)&dword_140404A6C[v13 + 73007034];
    v20 = 60 * v14;
    v21 = v9[1];
    v22 = *(float *)&dword_140404A6C[v20 + 73007027] - a2[1];
    v23 = *(float *)&dword_140404A6C[v20 + 73007028] - a2[2];
    v24 = *(float *)&dword_140404A6C[v20 + 73007026] - *a2;
    v25 = (float)((float)(a3[1] * v24) - (float)(*a3 * v22)) * a4;
    v26 = (float)((float)(*a3 * v23) - (float)(a3[2] * v24)) * a4;
    *(float *)&dword_140404A6C[v20 + 73007032] = (float)((float)((float)(a3[2] * v22) - (float)(a3[1] * v23)) * a4)
                                               + *(float *)&dword_140404A6C[v20 + 73007032];
    *(float *)&dword_140404A6C[v20 + 73007033] = v26 + *(float *)&dword_140404A6C[v20 + 73007033];
    *(float *)&dword_140404A6C[v20 + 73007034] = v25 + *(float *)&dword_140404A6C[v20 + 73007034];
    v27 = a3[2];
    v28 = *a3;
    v29 = 60 * v21;
    v30 = *(float *)&dword_140404A6C[60 * v21 + 73007027] - a2[1];
    v31 = *(float *)&dword_140404A6C[60 * v21 + 73007028] - a2[2];
    v32 = *(float *)&dword_140404A6C[60 * v21 + 73007026] - *a2;
    *(float *)&v33 = (float)((float)((float)(v27 * v30) - (float)(a3[1] * v31)) * a4)
                   + *(float *)&dword_140404A6C[60 * v21 + 73007032];
    result = v9[2];
    v34 = *a3 * v31;
    v9 += 4;
    v35 = a3[1] * v32;
    dword_140404A6C[v29 + 73007032] = v33;
    *(float *)&dword_140404A6C[v29 + 73007033] = (float)((float)(v34 - (float)(v27 * v32)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007033];
    *(float *)&dword_140404A6C[v29 + 73007034] = (float)((float)(v35 - (float)(v28 * v30)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007034];
    v36 = a3[1];
    v37 = 60 * result;
    v38 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
    v39 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
    v40 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
    v41 = a3[2] * v40;
    v42 = *a3;
    *(float *)&dword_140404A6C[v37 + 73007032] = (float)((float)((float)(a3[2] * v38) - (float)(v36 * v39)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007032];
    *(float *)&dword_140404A6C[v37 + 73007033] = (float)((float)((float)(v42 * v39) - v41) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007033];
    *(float *)&dword_140404A6C[v37 + 73007034] = (float)((float)((float)(v36 * v40) - (float)(v42 * v38)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007034];
    --v11;
  }
  while ( v11 );
  if ( v5 < v8 )
  {
LABEL_8:
    v43 = (unsigned int)(v8 - v5);
    v44 = &dword_140404A6C[5210 * v4 + 129716769 + v12];
    do
    {
      v45 = a3[2];
      v46 = a3[1];
      v47 = *a3;
      result = (int)*v44++;
      v48 = 60 * result;
      v49 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
      v50 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
      v51 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
      v52 = v51 * *a3;
      *(float *)&dword_140404A6C[v48 + 73007032] = (float)((float)((float)(v50 * v45) - (float)(v51 * v46)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007032];
      *(float *)&dword_140404A6C[v48 + 73007033] = (float)((float)(v52 - (float)(v49 * v45)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007033];
      *(float *)&dword_140404A6C[v48 + 73007034] = (float)((float)((float)(v49 * v46) - (float)(v50 * v47)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007034];
      --v43;
    }
    while ( v43 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140007C90) ----------------------------------------------------
__int64            sub_140007C90(int a1)
{
  __int64 v1; // rbx
  signed int v2; // eax
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  unsigned int *v8; // rcx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  double v11; // xmm2_8
  signed int v12; // eax
  unsigned int v13; // xmm0_4
  __int64 v14; // rcx
  unsigned int v15; // eax
  char v16; // al
  int v17; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140007C90[96];
#define v19 (*(__int64 (*))(void *)(sr_frame_140007C90 + 8)) /* [rsp+0h] */
#define v20 (*(_OWORD (*)[2])(void *)(sr_frame_140007C90 + 48)) /* [rsp+28h] */
#define v21 (*(int (*))(void *)(sr_frame_140007C90 + 80)) /* [rsp+48h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140007C90 + 88)) /* [rsp+50h] */

  v1 = a1;
  v2 = sub_14005CCF0();
  v3 = v2;
  if ( v2 != -1 )
  {
    v4 = 202 * v1;
    v5 = 3597LL * v2;
    dword_140404A6C[v4 + 133450255] = v2;
    dword_140404A6C[v5 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[v5 + 71856254], Parameters);
    v6 = dword_140404A6C[v4 + 133450262];
    dword_140404A6C[v5 + 71859139] = 1;
    dword_140404A6C[v5 + 71859816] = 1;
    dword_140404A6C[v5 + 71859821] = 2;
    dword_140404A6C[v5 + 71859822] = 1;
    dword_140404A6C[v5 + 71859146] = 0;
    dword_140404A6C[v5 + 71859147] = v6;
    if ( v6 > 0 )
    {
      v7 = (unsigned int)v6;
      v8 = &dword_140404A6C[v5 + 71859150];
      v9 = &dword_140404A6C[v4 + 133450265];
      do
      {
        v10 = *(v9 - 2);
        v9 += 3;
        *(v8 - 2) = v10;
        v8 += 8;
        *(v8 - 9) = *(v9 - 4);
        *(v8 - 8) = *(v9 - 3);
        --v7;
      }
      while ( v7 );
    }
    sub_140051DC0(v3);
    *(_QWORD *)&v11 = dword_140404A6C[v4 + 133450261];
    v20[0] = xmmword_140278D30;
    v20[1] = xmmword_140278D30;
    v21 = 1065353216;
    sub_14007B2A0((__int64)v20, (float *)&dword_1402F6188, v11);
    v12 = sub_140053840((float *)&dword_140404A6C[v4 + 133450258], (float *)v20, v3);
    dword_140404A6C[v5 + 71856292] = v12;
    if ( v12 != -1 )
    {
      v13 = dword_140404A6C[v4 + 133450261];
      dword_140404A6C[v4 + 133450256] = v12;
      v14 = 7166LL * v12;
      dword_140404A6C[v5 + 71859143] = v13;
      v15 = dword_140404A6C[v4 + 133450254];
      dword_140404A6C[v5 + 71856297] = 0;
      dword_140404A6C[v14 + 280651341] = v13;
      if ( v15 == 1 )
      {
        dword_140404A6C[v5 + 71859140] = 1;
      }
      else if ( !v15 )
      {
        v16 = rand();
        v17 = 7;
        if ( (v16 & 1) != 0 )
          v17 = 11;
        sub_14012CD60(dword_140404A6C[v5 + 71856292], v17, 3);
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v19
#undef v20
#undef v21
#undef v22

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140008020) ----------------------------------------------------
void sub_140008020()
{
  unsigned int *v0; // r12
  int i; // r13d
  int v2; // ecx
  int v3; // edx
  __int64 v4; // r10
  float v5; // xmm2_4
  float v6; // xmm3_4
  unsigned int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int *v19; // rbp
  __int64 v20; // rsi
  unsigned int *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // ecx

  v0 = &dword_140404A6C[133450256];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v0 - 3) )
    {
      v2 = v0[1];
      if ( v2 > 0 )
        v0[1] = --v2;
      if ( (((unsigned __int8)i ^ LOBYTE(dword_140404A6C[283831474])) & 0x1F) == 0 )
      {
        v3 = 0;
        if ( !v2 )
        {
          v4 = (int)*v0;
          if ( (_DWORD)v4 == -1 )
          {
            v5 = *((float *)v0 + 2);
            v6 = *((float *)v0 + 4);
          }
          else
          {
            v5 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
            v6 = *(float *)&dword_140404A6C[7166 * v4 + 280651337];
          }
          v7 = &dword_140404A6C[280658608];
          v8 = 64;
          do
          {
            if ( *(v7 - 7305) )
            {
              v9 = (int)*(v7 - 7303);
              if ( (_DWORD)v9 != -1 && !dword_140404A6C[3597 * v9 + 71859139] && (int)*(v7 - 7290) > 0 && v3 < 2 )
              {
                v10 = (float)((float)(v6 - *((float *)v7 - 7166)) * (float)(v6 - *((float *)v7 - 7166)))
                    + (float)((float)(v5 - *((float *)v7 - 7168)) * (float)(v5 - *((float *)v7 - 7168)));
                if ( v10 >= 9216.0 )
                {
                  if ( v10 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( *(v7 - 139) )
            {
              v11 = (int)*(v7 - 137);
              if ( (_DWORD)v11 != -1 && !dword_140404A6C[3597 * v11 + 71859139] && (int)*(v7 - 124) > 0 && v3 < 2 )
              {
                v12 = (float)((float)(v6 - *(float *)v7) * (float)(v6 - *(float *)v7))
                    + (float)((float)(v5 - *((float *)v7 - 2)) * (float)(v5 - *((float *)v7 - 2)));
                if ( v12 >= 9216.0 )
                {
                  if ( v12 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( v7[7027] )
            {
              v13 = (int)v7[7029];
              if ( (_DWORD)v13 != -1 && !dword_140404A6C[3597 * v13 + 71859139] && (int)v7[7042] > 0 && v3 < 2 )
              {
                v14 = (float)((float)(v6 - *((float *)v7 + 7166)) * (float)(v6 - *((float *)v7 + 7166)))
                    + (float)((float)(v5 - *((float *)v7 + 7164)) * (float)(v5 - *((float *)v7 + 7164)));
                if ( v14 >= 9216.0 )
                {
                  if ( v14 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( v7[14193] )
            {
              v15 = (int)v7[14195];
              if ( (_DWORD)v15 != -1 && !dword_140404A6C[3597 * v15 + 71859139] && (int)v7[14208] > 0 && v3 < 2 )
              {
                v16 = (float)((float)(v6 - *((float *)v7 + 14332)) * (float)(v6 - *((float *)v7 + 14332)))
                    + (float)((float)(v5 - *((float *)v7 + 14330)) * (float)(v5 - *((float *)v7 + 14330)));
                if ( v16 >= 9216.0 )
                {
                  if ( v16 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            v7 += 28664;
            --v8;
          }
          while ( v8 );
          if ( v3 == 2 )
          {
            if ( (_DWORD)v4 != -1 )
            {
LABEL_64:
              if ( (int)dword_140404A6C[7166 * (int)v4 + 280651318] <= 0 )
              {
                v25 = *(v0 - 1);
                *v0 = -1;
                if ( v25 != -1 )
                {
                  sub_1400802F0(v25);
                  *(v0 - 1) = -1;
                }
                v0[1] = 18000;
              }
              goto LABEL_68;
            }
            sub_140007C90(i);
LABEL_63:
            LODWORD(v4) = *v0;
            if ( *v0 == -1 )
              goto LABEL_68;
            goto LABEL_64;
          }
          if ( v3 )
            goto LABEL_63;
        }
        v17 = (int)*v0;
        if ( (_DWORD)v17 != -1 )
        {
          v18 = 8;
          v19 = &dword_140404A6C[7166 * v17 + 280658140];
          do
          {
            v20 = (int)*(v19 - 1);
            if ( v20 > 0 )
            {
              v21 = v19;
              do
              {
                v22 = (int)*v21;
                v23 = 1760 * v22;
                if ( (int)dword_140404A6C[1760 * v22 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v23 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v23 + 278845907], v22);
                }
                ++v21;
                dword_140404A6C[v23 + 278845900] = 0;
                --v20;
              }
              while ( v20 );
            }
            v19 += 10;
            --v18;
          }
          while ( v18 );
          sub_14007F590(*v0);
          *v0 = -1;
        }
        v24 = *(v0 - 1);
        if ( v24 != -1 )
        {
          sub_1400802F0(v24);
          *(v0 - 1) = -1;
        }
        goto LABEL_63;
      }
    }
LABEL_68:
    v0 += 202;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140008440) ----------------------------------------------------
void            sub_140008440(int a1, int a2)
{
  __int64 v2; // r13
  int v3; // r10d
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // r12
  signed int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r10
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rbx
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  __int64 v24; // rax
  unsigned int *v25; // rdx
  __int64 v26; // rbx
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  signed int v33; // r9d
  __int64 v34; // r8
  float *v35; // rdx
  float v36; // xmm0_4
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // r9
  __int64 v42; // rax
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm6_4
  float *v48; // rdx
  __int64 v49; // rax
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  __int64 v53; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140008440[16];
#define v54 (*(float (*))(void *)(sr_frame_140008440 + 0)) /* [rsp+20h] */
#define v55 (*(float (*))(void *)(sr_frame_140008440 + 4)) /* [rsp+24h] */
#define v56 (*(float (*))(void *)(sr_frame_140008440 + 8)) /* [rsp+28h] */

  v2 = a1;
  v3 = a2;
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ LOBYTE(dword_140404A6C[283831474])) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
    {
      if ( dword_140404A6C[v5 + 280651303] )
      {
        if ( (int)dword_140404A6C[v5 + 280651318] > 0 )
        {
          v8 = (int)dword_140404A6C[v5 + 280651305];
          if ( (_DWORD)v8 != -1 )
          {
            v9 = 3597 * v2;
            if ( dword_140404A6C[3597 * v8 + 71856286] != dword_140404A6C[3597 * v2 + 71856286] )
            {
              v10 = 7166LL * v3;
              if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675]))
                                 + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])))
                         + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676])
                                 * (float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676]))) < 16384.0 )
              {
                v11 = dword_140404A6C[v9 + 71859668];
                v12 = 0;
                LODWORD(v13) = -1;
                if ( v11 > 0 )
                {
                  v14 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v9 * 4 + 291652036);
                  do
                  {
                    v15 = *v14 == v4;
                    v14 += 6;
                    v16 = v12;
                    if ( !v15 )
                      v16 = v13;
                    ++v12;
                    LODWORD(v13) = v16;
                  }
                  while ( v12 < v11 );
                }
                v17 = dword_140404A6C[283831474] & 0xF;
                if ( dword_140404A6C[v5 + 280651313] != -1 )
                  v17 = 3;
                v18 = 312 * v17 + v5 * 4;
                v19 = *(float *)((char *)&dword_140404A6C[280651441] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651675];
                v20 = *(float *)((char *)&dword_140404A6C[280651442] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651676];
                v54 = *(float *)((char *)&dword_140404A6C[280651440] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651674];
                v55 = v19;
                v21 = v19 * v19;
                v22 = (float)(v19 * *(float *)&dword_140404A6C[v10 + 280651693])
                    + (float)(v54 * *(float *)&dword_140404A6C[v10 + 280651692]);
                v56 = v20;
                v23 = fsqrt((float)(v21 + (float)(v54 * v54)) + (float)(v20 * v20));
                if ( (float)(v22 + (float)(v20 * *(float *)&dword_140404A6C[v10 + 280651694])) < 0.0
                  && (dword_140404A6C[v9 + 71859140] == 1
                   || !(unsigned int)sub_1400DC050(
                                       (float *)&dword_140404A6C[v10 + 280651674],
                                       (float *)&dword_140404A6C[78 * v17 + 280651440 + v6],
                                       1)) )
                {
                  if ( (_DWORD)v13 != -1 )
                    goto LABEL_23;
                  v24 = (int)dword_140404A6C[v9 + 71859668];
                  if ( (int)v24 < 16 )
                  {
                    dword_140404A6C[6 * v24 + 71859670 + v9] = v4;
                    v13 = (int)dword_140404A6C[v9 + 71859668];
                    dword_140404A6C[6 * v13 + 71859674 + v9] = 0;
                    v25 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668] + 71859671 + v9];
                    *v25 = *(unsigned int *)((char *)&dword_140404A6C[280651440] + v18);
                    v25[1] = *(unsigned int *)((char *)&dword_140404A6C[280651441] + v18);
                    v25[2] = *(unsigned int *)((char *)&dword_140404A6C[280651442] + v18);
                    dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668]++ + 71859675 + v9] = 600;
                    if ( (_DWORD)v13 != -1 )
                    {
LABEL_23:
                      v26 = v9 * 4 + 24LL * (int)v13;
                      v27 = *(float *)((char *)&dword_140404A6C[71859674] + v26) + 1.0;
                      *(float *)((char *)&dword_140404A6C[71859674] + v26) = v27;
                      if ( v27 > 16.0 )
                        *(unsigned int *)((char *)&dword_140404A6C[71859674] + v26) = 1098907648;
                      *(float *)((char *)&dword_140404A6C[71859671] + v26) = *(float *)((char *)&dword_140404A6C[71859671]
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859672] + v26) = *(float *)((char *)&dword_140404A6C[71859672]
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859673] + v26) = *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v26)
                                                                           * 0.875;
                      sub_1400A56B0(
                        &v54,
                        (float)((float)(16.0 - *(float *)((char *)&dword_140404A6C[71859674] + v26)) + v23) * 0.03125,
                        0.0);
                      v28 = v56 + *(float *)((char *)&dword_140404A6C[280651442] + v18);
                      v29 = (float)(v55 + *(float *)((char *)&dword_140404A6C[280651441] + v18))
                          + (float)(*(float *)&dword_140404A6C[v5 + 280651447] * 4.0);
                      v54 = (float)(*(float *)&dword_140404A6C[v5 + 280651446] * 4.0)
                          + (float)(v54 + *(float *)((char *)&dword_140404A6C[280651440] + v18));
                      v30 = *(float *)&dword_140404A6C[v5 + 280651448] * 4.0;
                      v31 = (float)(v54 * 0.125) + *(float *)((char *)&dword_140404A6C[71859671] + v26);
                      v55 = v29;
                      *(float *)((char *)&dword_140404A6C[71859671] + v26) = v31;
                      v32 = (float)(v29 * 0.125) + *(float *)((char *)&dword_140404A6C[71859672] + v26);
                      v56 = v28 + v30;
                      *(float *)((char *)&dword_140404A6C[71859672] + v26) = v32;
                      *(float *)((char *)&dword_140404A6C[71859673] + v26) = (float)((float)(v28 + v30) * 0.125)
                                                                           + *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v26);
                    }
                  }
                }
              }
              v3 = a2;
            }
          }
        }
      }
      ++v4;
      v6 += 7166;
      v5 += 7166;
    }
    while ( v4 < 256 );
    v33 = 0;
    v34 = 3597 * v2;
    if ( (int)dword_140404A6C[3597 * v2 + 71859668] > 0 )
    {
      v35 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v34 * 4 + 291652052);
      do
      {
        v36 = *v35 * 0.96875;
        *v35 = v36;
        if ( v36 >= 0.875 )
        {
          ++v33;
          v35 += 6;
        }
        else
        {
          v37 = (int)dword_140404A6C[v34 + 71859668];
          dword_140404A6C[v34 + 71859668] = v37 - 1;
          v38 = v34 * 4 + 24 * v37;
          *((_OWORD *)v35 - 1) = *(_OWORD *)((char *)&dword_140404A6C[71859664] + v38);
          *(_QWORD *)v35 = *(_QWORD *)((char *)&dword_140404A6C[71859668] + v38);
        }
      }
      while ( v33 < (int)dword_140404A6C[v34 + 71859668] );
    }
    v39 = v3;
    v40 = dword_140404A6C[v34 + 71859668];
    v41 = 7166 * v39;
    dword_140404A6C[v34 + 71859669] = 0;
    v42 = (int)dword_140404A6C[v34 + 71859670];
    v43 = *(float *)&dword_140404A6C[v41 + 280651336];
    v44 = *(float *)&dword_140404A6C[v41 + 280651337];
    v45 = v43 - *(float *)&dword_140404A6C[7166 * v42 + 280651336];
    v46 = v44 - *(float *)&dword_140404A6C[7166 * v42 + 280651337];
    v47 = fsqrt(
            (float)((float)((float)(*(float *)&dword_140404A6C[v41 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v42 + 280651335])
                          * (float)(*(float *)&dword_140404A6C[v41 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v42 + 280651335]))
                  + (float)(v45 * v45))
          + (float)(v46 * v46));
    if ( v40 > 1 )
    {
      v48 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v34 * 4 + 291652060);
      do
      {
        if ( v48[4] > 8.0 )
        {
          v49 = *(int *)v48;
          v50 = *(float *)&dword_140404A6C[v41 + 280651335];
          v51 = v43 - *(float *)&dword_140404A6C[7166 * v49 + 280651336];
          v52 = v44 - *(float *)&dword_140404A6C[7166 * v49 + 280651337];
          if ( v47 > fsqrt(
                       (float)((float)(v51 * v51)
                             + (float)((float)(v50 - *(float *)&dword_140404A6C[7166 * v49 + 280651335])
                                     * (float)(v50 - *(float *)&dword_140404A6C[7166 * v49 + 280651335])))
                     + (float)(v52 * v52)) )
          {
            dword_140404A6C[v34 + 71859669] = v7;
            v53 = 7166LL * *(int *)v48;
            v47 = fsqrt(
                    (float)((float)((float)(v43 - *(float *)&dword_140404A6C[v53 + 280651336])
                                  * (float)(v43 - *(float *)&dword_140404A6C[v53 + 280651336]))
                          + (float)((float)(v50 - *(float *)&dword_140404A6C[v53 + 280651335])
                                  * (float)(v50 - *(float *)&dword_140404A6C[v53 + 280651335])))
                  + (float)((float)(v44 - *(float *)&dword_140404A6C[v53 + 280651337])
                          * (float)(v44 - *(float *)&dword_140404A6C[v53 + 280651337])));
          }
        }
        ++v7;
        v48 += 6;
      }
      while ( v7 < v40 );
    }
  }
}
#undef v54
#undef v55
#undef v56

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140008BB0) ----------------------------------------------------
float            sub_140008BB0(int a1, int a2, int a3, float a4, int a5)
{
  float v5; // xmm5_4
  int v6; // r9d
  __int64 v7; // rbp
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int *v12; // rdx
  unsigned int *v13; // r11
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm3_4

  v5 = 65536.0;
  v6 = 0;
  v7 = a1;
  dword_140404A6C[132384229] = 0;
  if ( a2 == -1 )
    return 65536.0;
  v10 = 396LL * a2;
  v11 = (int)dword_140404A6C[v10 + 225426186];
  if ( v11 <= 0 )
    return 65536.0;
  v12 = &dword_140404A6C[v10 + 225426187];
  v13 = &dword_140404A6C[132384230];
  do
  {
    v14 = *v12++;
    dword_140404A6C[v6 + 132384230] = v14;
    v6 = ++dword_140404A6C[132384229];
    --v11;
  }
  while ( v11 );
  if ( v6 <= 0 )
    return 65536.0;
  v15 = (unsigned int)v6;
  do
  {
    v16 = (int)*v13;
    if ( (_DWORD)v16 != (_DWORD)v7 )
    {
      v17 = dword_140404A6C[v10 + 225426061];
      v18 = 0;
      v19 = 0;
      if ( v17 > 0 )
      {
        v20 = 383 * v16;
        v21 = 1;
        do
        {
          if ( v19 == dword_140404A6C[383 * v7 + 132400996]
            && (v21 & a3) != 0
            && (v21 & dword_140404A6C[v20 + 132401010]) != 0 )
          {
            v18 = 1;
          }
          ++v19;
          v21 = __ROL4__(v21, 1);
        }
        while ( v19 < v17 );
        if ( v18 )
        {
          v22 = *(float *)&dword_140404A6C[v20 + 132401004];
          if ( a5 )
          {
            if ( a4 <= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v20 + 132400644]
                                  * *(float *)&dword_140404A6C[v20 + 132400644])
                          + (float)(*(float *)&dword_140404A6C[v20 + 132400645]
                                  * *(float *)&dword_140404A6C[v20 + 132400645]))
                  + (float)(*(float *)&dword_140404A6C[v20 + 132400646] * *(float *)&dword_140404A6C[v20 + 132400646]))
                - (float)((float)((float)(*(float *)&dword_140404A6C[v20 + 132401005] - a4) * 0.0083333338) + 0.016666668);
          }
          else
          {
            if ( a4 >= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v20 + 132400644]
                                  * *(float *)&dword_140404A6C[v20 + 132400644])
                          + (float)(*(float *)&dword_140404A6C[v20 + 132400645]
                                  * *(float *)&dword_140404A6C[v20 + 132400645]))
                  + (float)(*(float *)&dword_140404A6C[v20 + 132400646] * *(float *)&dword_140404A6C[v20 + 132400646]))
                + (float)((float)((float)(*(float *)&dword_140404A6C[v20 + 132401005] - a4) - 2.0) * 0.0083333338);
          }
          v5 = fminf(fmaxf(v23, 0.0), v5);
        }
      }
    }
LABEL_22:
    ++v13;
    --v15;
  }
  while ( v15 );
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FD06200: using guessed type unsigned int;

//----- (0000000140008E40) ----------------------------------------------------
void            sub_140008E40(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  int v6; // ecx
  unsigned int v7; // r10d
  unsigned int *v8; // rax
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // r11
  int v12; // ebx
  int v13; // r9d
  int v14; // r10d
  unsigned int *v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int v23; // edi
  unsigned int *v24; // r8
  bool v25; // zf
  int v26; // eax
  int v27; // eax
  int v28; // edx

  v5 = a1;
  v6 = 0;
  v7 = dword_140404A6C[2 * a2 + 133384713 + a3];
  dword_140404A6C[133383686] = v7;
  dword_140404A6C[133383687] = dword_140404A6C[2 * a4 + 133384713 + a5];
  if ( (int)dword_140404A6C[132793861] > 0 )
  {
    v8 = &dword_140404A6C[132793875];
    do
    {
      *(_QWORD *)(v8 - 1) = 0;
      v8 += 18;
      ++v6;
    }
    while ( v6 < (int)dword_140404A6C[132793861] );
    v7 = dword_140404A6C[133383686];
  }
  v9 = 0;
  dword_140404A6C[18 * v7 + 132793874] = 1;
  v10 = 0;
  dword_140404A6C[133383688] = 0;
  do
  {
    if ( v10 )
      break;
    sub_14012C1F0();
    v10 = dword_140404A6C[133383688];
    ++v9;
  }
  while ( v9 < 4096 );
  v11 = 383 * v5;
  v12 = v10 - 1;
  *(_QWORD *)&dword_140404A6C[v11 + 132400670] = 0;
  dword_140404A6C[v11 + 132400676] = 0;
  if ( (int)(v10 - 1) >= 0 )
  {
    v13 = a5;
    v14 = a5;
    v15 = &dword_140404A6C[v12 + 133383689];
    do
    {
      v16 = 9LL * (int)*v15;
      v17 = (int)dword_140404A6C[18 * *v15 + 132793877];
      v18 = dword_140404A6C[18 * *v15 + 132793878];
      dword_140404A6C[5 * (int)dword_140404A6C[v11 + 132400671] + 132400672 + v11] = v17;
      dword_140404A6C[5 * (int)dword_140404A6C[v11 + 132400671] + 132400674 + v11] = v18;
      v19 = (int)dword_140404A6C[v11 + 132400671];
      v20 = 396 * v17;
      dword_140404A6C[v11 + 132400671] = v19 + 1;
      if ( v18 )
        v21 = dword_140404A6C[v20 + 225426056];
      else
        v21 = dword_140404A6C[v20 + 225426057];
      if ( v12 )
      {
        v22 = 0;
        v23 = dword_140404A6C[2 * v16 + 132793877];
        v24 = &dword_140404A6C[34 * v21 + 225391236];
        do
        {
          v25 = *v24++ == v23;
          v26 = v22;
          if ( !v25 )
            v26 = v13;
          v13 = v26;
          v27 = v22;
          if ( *(v24 - 1) != dword_140404A6C[18 * *(v15 - 1) + 132793877] )
            v27 = v14;
          ++v22;
          v14 = v27;
        }
        while ( v22 < 4 );
        v28 = v13 - v27;
        if ( v13 - v27 >= -1 )
        {
          if ( v28 > 1 )
            v28 -= 4;
        }
        else
        {
          v28 += 4;
        }
        dword_140404A6C[5 * v19 + 132400681 + v11] = 0;
        if ( v28 == -1 )
        {
          dword_140404A6C[5 * (int)dword_140404A6C[v11 + 132400671] + 132400676 + v11] = -1;
        }
        else if ( v28 == 1 )
        {
          dword_140404A6C[5 * (int)dword_140404A6C[v11 + 132400671] + 132400676 + v11] = 1;
        }
      }
      --v15;
      --v12;
    }
    while ( v12 >= 0 );
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1600D6284: using guessed type unsigned int;
// 1600D6288: using guessed type unsigned int;
// 1600D628C: using guessed type unsigned int;

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

//----- (0000000140009340) ----------------------------------------------------
void sub_140009340()
{
  signed int v0; // r9d
  int v1; // edx
  signed int v2; // r10d
  unsigned int *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rax
  float v6; // xmm1_4
  __int64 v7; // rcx
  unsigned int v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rcx
  int v13; // esi
  unsigned int *v14; // rdx
  unsigned int *v15; // rbx
  __int64 v16; // r10
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rax
  signed int v20; // eax
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx

  v0 = dword_140404A6C[225426046];
  v1 = 0;
  v2 = 0;
  dword_140404A6C[132793861] = 0;
  if ( (int)dword_140404A6C[225426046] > 0 )
  {
    v3 = &dword_140404A6C[133384714];
    v4 = 0;
    do
    {
      v5 = v4 * 4 + 28LL * (int)dword_140404A6C[v4 + 225426061];
      v6 = *(float *)((char *)&dword_140404A6C[225426057] + v5) + *(float *)((char *)&dword_140404A6C[225426060] + v5);
      v7 = 9LL * v1;
      *(float *)&v8 = (float)(*(float *)((char *)&dword_140404A6C[225426058] + v5)
                            + *(float *)((char *)&dword_140404A6C[225426061] + v5))
                    * 0.5;
      *(float *)&dword_140404A6C[2 * v7 + 132793862] = (float)(*(float *)((char *)&dword_140404A6C[225426059] + v5)
                                                             + *(float *)((char *)&dword_140404A6C[225426056] + v5))
                                                     * 0.5;
      v9 = *(float *)&dword_140404A6C[v4 + 225426063] + *(float *)&dword_140404A6C[v4 + 225426066];
      *(float *)&dword_140404A6C[2 * v7 + 132793863] = v6 * 0.5;
      v10 = *(float *)&dword_140404A6C[v4 + 225426064] + *(float *)&dword_140404A6C[v4 + 225426067];
      dword_140404A6C[2 * v7 + 132793864] = v8;
      v11 = *(float *)&dword_140404A6C[v4 + 225426065] + *(float *)&dword_140404A6C[v4 + 225426068];
      v4 += 396;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793877] = v2;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793878] = 0;
      *(v3 - 1) = dword_140404A6C[132793861];
      dword_140404A6C[18 * dword_140404A6C[132793861]++ + 132793879] = 0;
      v12 = 9LL * (int)dword_140404A6C[132793861];
      *(float *)&dword_140404A6C[2 * v12 + 132793862] = v9 * 0.5;
      *(float *)&dword_140404A6C[2 * v12 + 132793863] = v10 * 0.5;
      *(float *)&dword_140404A6C[2 * v12 + 132793864] = v11 * 0.5;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793877] = v2++;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793878] = 1;
      *v3 = dword_140404A6C[132793861];
      v3 += 2;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793879] = 0;
      v1 = ++dword_140404A6C[132793861];
    }
    while ( v2 < v0 );
  }
  v13 = 0;
  if ( v1 > 0 )
  {
    v14 = &dword_140404A6C[132793865];
    v15 = &dword_140404A6C[132793866];
    v16 = 0;
    do
    {
      v17 = (int)v14[12];
      v18 = 0;
      v19 = 396 * v17;
      *v14 = 0;
      if ( v14[13] )
        v20 = dword_140404A6C[v19 + 225426056];
      else
        v20 = dword_140404A6C[v19 + 225426057];
      if ( v20 != -1 )
      {
        v21 = 34LL * v20;
        v22 = 0;
        v23 = (int)dword_140404A6C[v21 + 225391236];
        if ( (_DWORD)v23 != -1 && (_DWORD)v23 != (_DWORD)v17 )
        {
          *v15 = dword_140404A6C[2 * v23 + 133384713];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v24 = (int)dword_140404A6C[v21 + 225391237];
        if ( (_DWORD)v24 != -1 && (_DWORD)v24 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v24 + 133384713];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v25 = (int)dword_140404A6C[v21 + 225391238];
        if ( (_DWORD)v25 != -1 && (_DWORD)v25 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v25 + 133384714];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v26 = (int)dword_140404A6C[v21 + 225391239];
        if ( (_DWORD)v26 != -1 && (_DWORD)v26 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v26 + 133384714];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        if ( !v18 )
        {
          v14[14] = 1;
          if ( v14[13] )
            *v15 = dword_140404A6C[2 * v17 + 133384713];
          else
            dword_140404A6C[v16 + 132793866 + v22] = dword_140404A6C[2 * v17 + 133384714];
          ++*v14;
        }
      }
      ++v13;
      v16 += 18;
      v15 += 18;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[132793861] );
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE96280: using guessed type unsigned int;
// 175FF3464: using guessed type unsigned int;

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
  return sub_1401F8B20((unsigned __int64)&v30 ^ v33);
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

//----- (0000000140009A00) ----------------------------------------------------
void            sub_140009A00(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  float v7; // xmm3_4
  float v8; // xmm4_4
  unsigned int v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // eax

  v2 = a1;
  if ( dword_140404A6C[283831448] == 1 )
  {
    dword_140404A6C[3597 * a1 + 71856296] = -1082130432;
  }
  else
  {
    v3 = 5210LL * a2;
    v4 = (int)dword_140404A6C[v3 + 129720183];
    if ( (_DWORD)v4 != -1 )
    {
      dword_140404A6C[383 * v4 + 132400669] = 1;
      sub_140009E30(v4);
      v5 = (int)dword_140404A6C[v3 + 129720183];
      v6 = 3597 * v2;
      v7 = (float)((float)(*(float *)&dword_140404A6C[v3 + 129716745] * *(float *)&dword_140404A6C[v3 + 129716733])
                 + (float)(*(float *)&dword_140404A6C[v3 + 129716744] * *(float *)&dword_140404A6C[v3 + 129716732]))
         + (float)(*(float *)&dword_140404A6C[v3 + 129716746] * *(float *)&dword_140404A6C[v3 + 129716734]);
      dword_140404A6C[v6 + 71856293] = 0x40000000;
      dword_140404A6C[v6 + 71856295] = -1082130432;
      v8 = *(float *)&dword_140404A6C[383 * v5 + 132400658];
      v9 = dword_140404A6C[383 * v5 + 132400657];
      dword_140404A6C[v6 + 71856294] = v9;
      v10 = (float)(v7 + v8) * 8.0;
      if ( v10 > 1.0 )
        v10 = 1.0;
      *(float *)&dword_140404A6C[v6 + 71856296] = v10 / (float)(fabs(*(float *)&v9) + 1.0);
      if ( v8 < 0.050000001 )
        dword_140404A6C[v6 + 71856296] = -1082130432;
      v11 = dword_140404A6C[383 * v5 + 132401001];
      dword_140404A6C[v6 + 71856325] = 0;
      if ( v11 >= 180 )
      {
        dword_140404A6C[v6 + 71856296] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v6 + 71856293] = 0x40000000;
        dword_140404A6C[v6 + 71856295] = 1065353216;
        if ( v11 >= 280 )
          dword_140404A6C[v6 + 71856296] = -1082130432;
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140009BA0) ----------------------------------------------------
unsigned int *           sub_140009BA0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int *result; // rax
  unsigned int *v7; // rcx
  float v8; // xmm3_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  unsigned int v11; // xmm3_4
  unsigned int v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // rcx
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  v2 = 7166LL * a2;
  v4 = 3597LL * a1;
  v5 = (int)dword_140404A6C[v2 + 280651313];
  if ( (_DWORD)v5 == -1 )
  {
    result = (unsigned int *)(int)dword_140404A6C[v4 + 71859662];
    if ( (_DWORD)result != -1 )
    {
      v7 = &dword_140404A6C[5210 * (_QWORD)result + 129716720];
      v8 = *(float *)v7;
      dword_140404A6C[v4 + 71859149] = v7[1];
      dword_140404A6C[v4 + 71859150] = v7[2];
      *(float *)&dword_140404A6C[v4 + 71859148] = v8;
      v9 = 5210LL * (int)dword_140404A6C[v4 + 71859662];
      v10 = *(float *)&dword_140404A6C[v9 + 129716733] * 0.75;
      *(float *)&v11 = v8 - (float)(*(float *)&dword_140404A6C[v9 + 129716732] * 0.75);
      dword_140404A6C[v4 + 71859148] = v11;
      *(float *)&v12 = *(float *)&dword_140404A6C[v4 + 71859149] - v10;
      v13 = *(float *)&dword_140404A6C[v9 + 129716734] * 0.75;
      v14 = *(float *)&dword_140404A6C[v2 + 280651441];
      dword_140404A6C[v4 + 71859149] = v12;
      *(float *)&dword_140404A6C[v4 + 71859150] = *(float *)&dword_140404A6C[v4 + 71859150] - v13;
      v15 = 5210LL * (int)dword_140404A6C[v4 + 71859662];
      result = &dword_140404A6C[129716726];
      *(float *)&v16 = *(float *)&v11 - *(float *)&dword_140404A6C[v15 + 129716726];
      dword_140404A6C[v4 + 71859148] = v16;
      *(float *)&v17 = *(float *)&dword_140404A6C[v4 + 71859149] - *(float *)&dword_140404A6C[v15 + 129716727];
      dword_140404A6C[v4 + 71859149] = v17;
      v18 = v14 - *(float *)&v17;
      v19 = *(float *)&dword_140404A6C[v2 + 280651442];
      *(float *)&dword_140404A6C[v4 + 71859150] = *(float *)&dword_140404A6C[v4 + 71859150]
                                                - *(float *)&dword_140404A6C[v15 + 129716728];
      v20 = *(float *)&dword_140404A6C[v2 + 280651440];
      dword_140404A6C[v4 + 71859146] = 0;
      dword_140404A6C[v4 + 71859147] = 1;
      if ( (float)((float)((float)(v18 * v18) + (float)((float)(v20 - *(float *)&v16) * (float)(v20 - *(float *)&v16)))
                 + (float)((float)(v19 - *(float *)&dword_140404A6C[v4 + 71859150])
                         * (float)(v19 - *(float *)&dword_140404A6C[v4 + 71859150]))) < 1.0 )
      {
        if ( (rand() & 7) != 0 )
          dword_140404A6C[v4 + 71856325] |= 0x800u;
        result = (unsigned int *)sub_1400096B0(a1, 0, 1, 0);
        dword_140404A6C[v4 + 71859145] = 26;
        dword_140404A6C[v4 + 71859142] = 1;
      }
    }
  }
  else
  {
    result = (unsigned int *)(dword_140404A6C[v4 + 71859147] - 1);
    if ( (int)dword_140404A6C[v4 + 71859146] >= (int)result )
    {
      result = &dword_140404A6C[129716744];
      if ( fsqrt(
             (float)((float)(*(float *)&dword_140404A6C[5210 * v5 + 129716744]
                           * *(float *)&dword_140404A6C[5210 * v5 + 129716744])
                   + (float)(*(float *)&dword_140404A6C[5210 * v5 + 129716745]
                           * *(float *)&dword_140404A6C[5210 * v5 + 129716745]))
           + (float)(*(float *)&dword_140404A6C[5210 * v5 + 129716746]
                   * *(float *)&dword_140404A6C[5210 * v5 + 129716746])) < 0.033333335 )
        dword_140404A6C[v4 + 71856325] |= 0x800u;
    }
    dword_140404A6C[v4 + 71859662] = -1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140009E30) ----------------------------------------------------
void            sub_140009E30(int a1)
{
  int v1; // ebp
  __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edi
  char v12; // al
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  int v16; // edi
  signed int v17; // ecx
  int v18; // r14d
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // rdx
  float v22; // xmm8_4
  float v23; // xmm11_4
  float v24; // xmm10_4
  float v25; // xmm0_4
  float v26; // xmm9_4
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  unsigned int v32; // r8d
  unsigned int v33; // eax
  unsigned int v34; // r8d
  unsigned int v35; // eax
  int v36; // r8d
  signed int v37; // eax
  signed int v38; // eax
  __int64 v39; // rax
  float v40; // xmm3_4
  float v41; // xmm4_4
  unsigned int v42; // xmm0_4
  __int64 v43; // rcx
  __int64 v44; // rsi
  float v45; // xmm12_4
  float v46; // xmm7_4
  float v47; // xmm13_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm7_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  double v56; // xmm2_8
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm3_4
  unsigned int v61; // eax
  __int64 v62; // r15
  char v63; // al
  __int64 v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rsi
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  __m128 v70; // xmm0
  __int64 v71; // rdx
  int v72; // r8d
  float v73; // xmm10_4
  float v74; // xmm3_4
  __int64 v75; // r10
  float v76; // xmm9_4
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned int v79; // r12d
  float v80; // xmm7_4
  int v81; // r15d
  float v82; // xmm6_4
  float v83; // xmm7_4
  __int64 v84; // rax
  bool v85; // cc
  int v86; // ecx
  __int64 v87; // r11
  unsigned int *v88; // r8
  __int64 v89; // r10
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned int v92; // eax
  float v93; // xmm2_4
  int v94; // ecx
  float v95; // xmm0_4
  float v96; // xmm1_4
  float *v97; // rax
  int v98; // edx
  float v99; // xmm0_4
  __int64 v100; // rcx
  float v101; // xmm8_4
  float v102; // xmm9_4
  float v103; // xmm10_4
  float v104; // xmm1_4
  float *v105; // rcx
  int v106; // edx
  float v107; // xmm5_4
  float v108; // xmm6_4
  float v109; // xmm0_4
  int v110; // edx
  bool v111; // sf
  signed int v112; // edx
  signed int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // r14
  __int64 v116; // rdi
  __int64 v117; // r12
  unsigned int v118; // r8d
  __int64 v119; // rdx
  __int64 v120; // rax
  float v121; // xmm15_4
  float v122; // xmm14_4
  float v123; // xmm13_4
  __int64 v124; // r15
  __int64 v125; // rax
  float v126; // xmm12_4
  __int64 v127; // xmm3_8
  float v128; // xmm9_4
  float v129; // xmm6_4
  float v130; // xmm7_4
  float v131; // xmm10_4
  unsigned __int64 v132; // xmm8_8
  float v133; // xmm11_4
  __int64 v134; // xmm2_8
  __int64 v135; // xmm3_8
  double v136; // xmm2_8
  float v137; // xmm7_4
  float v138; // xmm6_4
  unsigned __int64 v139; // xmm3_8
  float v140; // xmm0_4
  float v141; // xmm8_4
  float v142; // xmm6_4
  float v143; // xmm7_4
  float v144; // xmm1_4
  float v145; // xmm10_4
  float v146; // xmm11_4
  __m128 v147; // xmm0
  float v148; // xmm2_4
  float v149; // xmm1_4
  float v150; // xmm3_4
  float v151; // xmm4_4
  float v152; // xmm0_4
  float v153; // xmm2_4
  float v154; // xmm2_4
  float v155; // xmm2_4
  float v156; // xmm7_4
  float v157; // xmm6_4
  double v158; // xmm0_8
  float v159; // xmm1_4
  float v160; // xmm2_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  float v163; // xmm2_4
  float v164; // xmm2_4
  double v165; // xmm1_8
  double v166; // xmm0_8
  float v167; // xmm2_4
  float v168; // xmm1_4
  __int64 v169; // rcx
  int v170; // edi
  char v171; // al
  float v172; // xmm2_4
  float v173; // xmm4_4
  float v174; // xmm6_4
  unsigned int v175; // ecx
  float *v176; // rdx
  float v177; // xmm8_4
  float v178; // xmm9_4
  float v179; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140009E30[320];
#define v180 (*(__int64 (*))(void *)(sr_frame_140009E30 + 0)) /* [rsp+30h] */
#define v181 (*(__int64 (*))(void *)(sr_frame_140009E30 + 8)) /* [rsp+38h] */
#define v182 (*(float (*))(void *)(sr_frame_140009E30 + 32)) /* [rsp+50h] */
#define v183 (*(float (*))(void *)(sr_frame_140009E30 + 288)) /* [rsp+150h] */
#define v184 (*(float (*))(void *)(sr_frame_140009E30 + 288)) /* [rsp+150h] */
#define v185 (*(unsigned int (*))(void *)(sr_frame_140009E30 + 296)) /* [rsp+158h] */
#define v186 (*(float (*))(void *)(sr_frame_140009E30 + 296)) /* [rsp+158h] */
#define v187 (*(signed int (*))(void *)(sr_frame_140009E30 + 304)) /* [rsp+160h] */
#define v188 (*(unsigned int (*))(void *)(sr_frame_140009E30 + 304)) /* [rsp+160h] */

  v1 = 0;
  v3 = 383LL * a1;
  v4 = dword_140404A6C[v3 + 132401001];
  if ( v4 >= 180 )
  {
    v8 = v4 + 1;
    if ( v8 >= 320 )
      v8 = 0;
  }
  else
  {
    v5 = *(float *)&dword_140404A6C[v3 + 132400645];
    v6 = *(float *)&dword_140404A6C[v3 + 132400644];
    v7 = *(float *)&dword_140404A6C[v3 + 132400646];
    if ( fsqrt((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) >= 0.016666668
      || (float)((float)((float)(v7 * *(float *)&dword_140404A6C[v3 + 132400656])
                       + *(float *)&dword_140404A6C[v3 + 132400658])
               + (float)((float)(v5 * *(float *)&dword_140404A6C[v3 + 132400655])
                       + (float)(v6 * *(float *)&dword_140404A6C[v3 + 132400654]))) <= 0.06666667 )
    {
      v8 = 0;
    }
    else
    {
      v8 = v4 + 1;
    }
  }
  dword_140404A6C[v3 + 132401001] = v8;
  v9 = (int)dword_140404A6C[v3 + 132400993];
  if ( (_DWORD)v9 != -1 )
  {
    if ( !dword_140404A6C[284024893] )
      goto LABEL_25;
    if ( (_DWORD)v9 == 67 )
    {
      v10 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      if ( !*(unsigned int *)((char *)&dword_140404A6C[132400674] + v10) )
        goto LABEL_25;
      *(unsigned int *)((char *)&dword_140404A6C[132400674] + v10) = 0;
      v11 = 68;
      dword_140404A6C[v3 + 132400996] = dword_140404A6C[225452593] - dword_140404A6C[v3 + 132400996] - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[v3 + 132400669] )
        v11 = sub_140130000();
      v12 = rand();
      v13 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      v14 = 67;
    }
    else
    {
      if ( (_DWORD)v9 != 68
        || (v15 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670],
            *(unsigned int *)((char *)&dword_140404A6C[132400674] + v15)) )
      {
LABEL_25:
        v16 = -1;
        v17 = dword_140404A6C[v3 + 132400670];
        if ( v17 >= (int)(dword_140404A6C[v3 + 132400671] - 1) )
        {
          dword_140404A6C[v3 + 132400993] = v9;
          dword_140404A6C[v3 + 132400995] = -1;
          v18 = rand() % (signed int)dword_140404A6C[225426046];
          if ( dword_140404A6C[284024893] )
            v18 = ((_DWORD)v9 == 67) + 67;
          if ( dword_140404A6C[v3 + 132400669] )
            v18 = sub_140130000();
          v19 = rand();
          sub_140008E40(
            a1,
            v9,
            dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400674 + v3],
            v18,
            v19 & 1);
          v17 = dword_140404A6C[v3 + 132400670];
        }
        v20 = 1584 * v9;
        v187 = dword_140404A6C[v3 + 132400996];
        v180 = v9;
        v181 = 1584 * v9;
        v21 = 1584 * v9 + 28LL * v187;
        if ( dword_140404A6C[5 * v17 + 132400674 + v3] )
        {
          v22 = *(float *)((char *)&dword_140404A6C[225426066] + v21);
          v23 = *(float *)((char *)&dword_140404A6C[225426067] + v21);
          v24 = *(float *)((char *)&dword_140404A6C[225426068] + v21);
          v25 = *(float *)((char *)&dword_140404A6C[225426063] + v21);
          v26 = *(float *)((char *)&dword_140404A6C[225426065] + v21);
        }
        else
        {
          v22 = *(float *)((char *)&dword_140404A6C[225426063] + v21);
          v23 = *(float *)((char *)&dword_140404A6C[225426064] + v21);
          v24 = *(float *)((char *)&dword_140404A6C[225426065] + v21);
          v25 = *(float *)((char *)&dword_140404A6C[225426066] + v21);
          v26 = *(float *)((char *)&dword_140404A6C[225426068] + v21);
        }
        v183 = v25;
        v185 = dword_140404A6C[5 * v17 + 132400681 + v3];
        if ( !dword_140404A6C[v3 + 132400669] && dword_140404A6C[v3 + 132400997] == v187 && (rand() & 0x7F) == 0 )
        {
          if ( !dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400681 + v3] && !(unsigned __int8)rand() )
          {
            v27 = (rand() & 1) == 0;
            v28 = dword_140404A6C[v3 + 132400997];
            if ( v27 )
              v29 = v28 - 1;
            else
              v29 = v28 + 1;
            dword_140404A6C[v3 + 132400997] = v29;
          }
          v30 = (int)dword_140404A6C[v3 + 132400670];
          v31 = v3 * 4 + 20 * v30;
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400681] + v31) == -1 )
          {
            v32 = dword_140404A6C[v3 + 132400997];
            v33 = v32 - 1;
            if ( dword_140404A6C[5 * v30 + 132400674 + v3] )
              v33 = v32 + 1;
            dword_140404A6C[v3 + 132400997] = v33;
          }
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400681] + v31) == 1 )
          {
            v34 = dword_140404A6C[v3 + 132400997];
            v35 = v34 + 1;
            if ( dword_140404A6C[5 * v30 + 132400674 + v3] )
              v35 = v34 - 1;
            dword_140404A6C[v3 + 132400997] = v35;
          }
          v36 = dword_140404A6C[v3 + 132400997];
          if ( dword_140404A6C[5 * v30 + 132400674 + v3] )
          {
            if ( v36 < 1 )
            {
              v36 = 1;
              dword_140404A6C[v3 + 132400997] = 1;
            }
            v38 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20) - 1;
          }
          else
          {
            v37 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20);
            if ( v36 < v37 )
            {
              v36 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20);
              dword_140404A6C[v3 + 132400997] = v37;
            }
            v38 = *(unsigned int *)((char *)&dword_140404A6C[225426061] + v20) - 2;
          }
          if ( v36 > v38 )
            dword_140404A6C[v3 + 132400997] = v38;
        }
        v39 = (int)dword_140404A6C[v3 + 132400997];
        if ( (_DWORD)v39 != v187 )
        {
          v40 = *(float *)&dword_140404A6C[v3 + 132401000];
          v41 = (float)(3.0 - (float)(v40 + v40)) * (float)(v40 * v40);
          *(float *)&v42 = fminf(
                             fsqrt(
                               (float)((float)(*(float *)&dword_140404A6C[v3 + 132400644]
                                             * *(float *)&dword_140404A6C[v3 + 132400644])
                                     + (float)(*(float *)&dword_140404A6C[v3 + 132400645]
                                             * *(float *)&dword_140404A6C[v3 + 132400645]))
                             + (float)(*(float *)&dword_140404A6C[v3 + 132400646]
                                     * *(float *)&dword_140404A6C[v3 + 132400646]))
                           * 0.125,
                             0.0083333338)
                         + v40;
          dword_140404A6C[v3 + 132401000] = v42;
          if ( *(float *)&v42 > 1.0 )
          {
            dword_140404A6C[v3 + 132400996] = v39;
            dword_140404A6C[v3 + 132401000] = 0;
          }
          v43 = v20 + 28 * v39;
          v22 = v22 + (float)((float)(*(float *)((char *)&dword_140404A6C[225426063] + v43) - v22) * v41);
          v23 = v23 + (float)((float)(*(float *)((char *)&dword_140404A6C[225426064] + v43) - v23) * v41);
          v24 = v24 + (float)((float)(*(float *)((char *)&dword_140404A6C[225426065] + v43) - v24) * v41);
        }
        v44 = (int)dword_140404A6C[v3 + 132400670];
        v45 = *(float *)((char *)&dword_140404A6C[225426174] + v20);
        v46 = *(float *)((char *)&dword_140404A6C[225426175] + v20);
        v47 = *(float *)((char *)&dword_140404A6C[225426176] + v20);
        if ( dword_140404A6C[5 * v44 + 132400674 + v3] )
        {
          v45 = -v45;
          v46 = -v46;
          v47 = -v47;
        }
        v48 = *(float *)&dword_140404A6C[v3 + 132400643];
        v49 = *(float *)&dword_140404A6C[v3 + 132400641];
        v50 = *(float *)&dword_140404A6C[v3 + 132400642];
        v51 = fmaxf(
                10.0
              - (float)(fabs(
                          (float)((float)((float)(v23 - v50) * *(float *)((char *)&dword_140404A6C[225426178] + v20))
                                + (float)((float)(v22 - v49) * *(float *)((char *)&dword_140404A6C[225426177] + v20)))
                        + (float)((float)(v24 - v48) * *(float *)((char *)&dword_140404A6C[225426179] + v20)))
                      * 0.25),
                0.0);
        v52 = (float)((float)((float)(v46 * v51) + v50) - v23) * v46;
        v53 = *(float *)&dword_140404A6C[v3 + 132400647];
        v54 = (float)(v52 + (float)((float)((float)((float)(v45 * v51) + v49) - v22) * v45))
            + (float)((float)((float)((float)(v47 * v51) + v48) - v24) * v47);
        v55 = sub_14023F704((float)((float)(v54 * v47) + v24) - v48, (float)((float)(v54 * v45) + v22) - v49);
        v56 = (float)(v53 - v55);
        if ( v56 >= 3.14159265359 )
          v55 = v55 + 6.28318530718;
        if ( (float)(v55 - v53) >= 3.14159265359 )
          v53 = v53 + 6.28318530718;
        v57 = v55 - v53;
        if ( v57 >= -0.7853981633975 )
        {
          if ( v57 > 0.7853981633975 )
            v57 = 0.78539819;
        }
        else
        {
          v57 = -0.78539819;
        }
        v58 = *(float *)&dword_140404A6C[v3 + 132400657];
        v59 = 0.0625;
        v60 = fmaxf(v57 - v58, -0.0625);
        if ( v60 <= 0.0625 )
          v59 = v60;
        v61 = dword_140404A6C[v3 + 132400996];
        *(float *)&dword_140404A6C[v3 + 132400657] = v58 + v59;
        v62 = (int)dword_140404A6C[5 * v44 + 132400677 + v3];
        dword_140404A6C[v3 + 132400998] = v61;
        v63 = rand();
        v64 = (int)dword_140404A6C[v3 + 132400670];
        v65 = v63 & 1;
        v66 = v3 * 4 + 20 * (v64 + 1);
        if ( *(unsigned int *)((char *)&dword_140404A6C[132400676] + v66) == 1 )
        {
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v66) )
            v67 = v65 + 1;
          else
            v67 = dword_140404A6C[396 * v62 + 225426061] - v65 - 2;
          dword_140404A6C[v3 + 132400998] = v67;
        }
        if ( *(unsigned int *)((char *)&dword_140404A6C[132400676] + v66) == -1 )
        {
          v68 = dword_140404A6C[396 * v62 + 225426059];
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v66) )
            v69 = v68 - v65 - 1;
          else
            v69 = v65 + v68;
          dword_140404A6C[v3 + 132400998] = v69;
        }
        v70 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v3 + 132400647]), v65, v56);
        v182 = SR_VEC_LANES(128, v70, f32)[0];
        v71 = v3 * 4 + 20 * v64;
        v72 = *(unsigned int *)((char *)&dword_140404A6C[132400672] + v71);
        v73 = SR_VEC_LANES(128, v70, f32)[0];
        v74 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v70, v70, 1), f32)[0];
        v75 = (int)dword_140404A6C[396 * v180 + 225426056 + (*(int *)((char *)&dword_140404A6C[132400674] + v71) ^ 1LL)];
        v76 = (float)((float)(v26 - (float)((float)(SR_VEC_LANES(128, v70, f32)[0] * 4.0) + *(float *)&dword_140404A6C[v3 + 132400643]))
                    * v47)
            + (float)((float)(v183 - (float)((float)(v74 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400641])) * v45);
        v77 = v72 == dword_140404A6C[34 * v75 + 225391237];
        v78 = v77;
        if ( v72 == dword_140404A6C[34 * v75 + 225391238] )
        {
          v77 = 2;
          v78 = 2;
        }
        if ( v72 == dword_140404A6C[34 * v75 + 225391239] )
        {
          v77 = 3;
          v78 = 3;
        }
        if ( v76 < 1.0 )
        {
          dword_140404A6C[v3 + 132400995] = v75;
          dword_140404A6C[v3 + 132400993] = -1;
        }
        v79 = dword_140404A6C[v3 + 132400669];
        v80 = 0.26666668;
        dword_140404A6C[v3 + 132400658] = 1049135241;
        if ( v79 && (v76 > 40.0 || !*(unsigned int *)((char *)&dword_140404A6C[132400676] + v66)) )
          v80 = (float)(8 * dword_140404A6C[284024358] + 16) * 0.016666668;
        v81 = 0;
        v82 = fmaxf((float)(v76 - 4.0) * 0.0083333338, 0.0);
        v83 = v80 + (float)((float)(a1 & 7) * 0.0083333338);
        if ( v76 < 6.0 )
          v82 = 0.0;
        if ( !v79 )
        {
          v84 = 34 * v75;
          v85 = v185 == -1
              ? (int)dword_140404A6C[v77 + 225391254 + v84] < 2
              : (int)dword_140404A6C[v78 + 225391250 + v84] < 2;
          if ( v85 && v83 > v82 )
            v83 = v82;
        }
        *(float *)&dword_140404A6C[v3 + 132400658] = v83;
        if ( v76 < 32.0 )
        {
          v86 = *(unsigned int *)((char *)&dword_140404A6C[132400672] + v66);
          dword_140404A6C[132384229] = 0;
          sub_14018C250(v86);
          if ( (int)dword_140404A6C[132384229] > 0 )
          {
            v87 = *(int *)((char *)&dword_140404A6C[132400674] + v66);
            v88 = &dword_140404A6C[132384230];
            v89 = dword_140404A6C[132384229];
            do
            {
              v90 = (int)*v88;
              if ( (_DWORD)v90 != a1 )
              {
                v91 = 383 * v90;
                v92 = dword_140404A6C[383 * v90 + 132401010];
                if ( _bittest((     int *)&v92, dword_140404A6C[v3 + 132400998]) )
                {
                  if ( dword_140404A6C[v3 + 132400669] )
                    v82 = fmaxf(v82, 0.2);
                  if ( *(float *)&dword_140404A6C[383 * (int)*v88 + 132401008 + v87] < 12.0
                    && fsqrt(
                         (float)((float)(*(float *)&dword_140404A6C[v91 + 132400644]
                                       * *(float *)&dword_140404A6C[v91 + 132400644])
                               + (float)(*(float *)&dword_140404A6C[v91 + 132400645]
                                       * *(float *)&dword_140404A6C[v91 + 132400645]))
                       + (float)(*(float *)&dword_140404A6C[v91 + 132400646]
                               * *(float *)&dword_140404A6C[v91 + 132400646])) < 0.06666667
                    && v83 > v82 )
                  {
                    *(float *)&dword_140404A6C[v3 + 132400658] = v82;
                    v83 = v82;
                    v81 = 1;
                  }
                }
              }
              ++v88;
              --v89;
            }
            while ( v89 );
            v20 = v181;
          }
        }
        v93 = *(float *)&dword_140404A6C[v3 + 132400642];
        v94 = 0;
        v95 = (float)(v74 * 12.0) + *(float *)&dword_140404A6C[v3 + 132400641];
        v96 = (float)(v73 * 12.0) + *(float *)&dword_140404A6C[v3 + 132400643];
        if ( (int)dword_140404A6C[225426046] > 0 )
        {
          v97 = (float *)&dword_140404A6C[225426183];
          do
          {
            if ( v94 != dword_140404A6C[v3 + 132401002]
              && v95 >= *(v97 - 3)
              && v95 <= *v97
              && v96 >= *(v97 - 1)
              && v96 <= v97[2]
              && v93 >= *(v97 - 2)
              && v93 <= v97[1] )
            {
              v16 = v94;
            }
            ++v94;
            v97 += 396;
          }
          while ( v94 < (int)dword_140404A6C[225426046] );
        }
        v98 = dword_140404A6C[v3 + 132401002];
        if ( v98 != -1 )
        {
          v99 = sub_140008BB0(
                  a1,
                  v98,
                  dword_140404A6C[v3 + 132401010] | (1 << dword_140404A6C[v3 + 132400997]),
                  *(float *)&dword_140404A6C[v3 + 132401004],
                  (float)((float)(v74 * *(float *)((char *)&dword_140404A6C[225426174] + v20))
                        + (float)(v73 * *(float *)((char *)&dword_140404A6C[225426176] + v20))) < 0.0);
          if ( v79 )
            v99 = fmaxf(v99, 0.2);
          if ( v83 > v99 )
          {
            *(float *)&dword_140404A6C[v3 + 132400658] = v99;
            v83 = v99;
            v81 = 1;
          }
        }
        if ( v16 == -1 )
          goto LABEL_146;
        v100 = 396LL * v16;
        v101 = *(float *)&dword_140404A6C[v100 + 225426174];
        v102 = *(float *)&dword_140404A6C[v100 + 225426176];
        v103 = *(float *)&dword_140404A6C[v100 + 225426175];
        v104 = (float)(v101 * v74) + (float)(v102 * v182);
        v105 = (float *)&dword_140404A6C[34 * dword_140404A6C[v100 + 225426056] + 225391233];
        if ( v104 >= 0.0 )
        {
          v106 = 0;
          if ( v104 > 0.0 )
          {
            v107 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v105[1]) * v103)
                         + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v105) * v101))
                 + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v105[2]) * v102);
            v108 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v105[1]) * v103)
                         + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v105) * v101))
                 + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v105[2]) * v102);
            if ( v107 > v108 )
              goto LABEL_139;
            goto LABEL_138;
          }
        }
        else
        {
          v106 = 1;
        }
        v107 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v105[1]) * v103)
                     + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v105) * v101))
             + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v105[2]) * v102);
        v108 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v105[1]) * v103)
                     + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v105) * v101))
             + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v105[2]) * v102);
        if ( v107 < v108 )
        {
LABEL_139:
          v109 = sub_140008BB0(a1, v16, 1 << dword_140404A6C[v3 + 132400997], v107, v106);
          if ( v79 )
            v109 = fmaxf(v109, 0.2);
          if ( v83 > v109 )
          {
            *(float *)&dword_140404A6C[v3 + 132400658] = v109;
            v83 = v109;
            v81 = 1;
          }
LABEL_146:
          if ( v79 )
          {
            if ( v81 && v83 < 0.30000001 && dword_140404A6C[v3 + 132400997] == v187 )
            {
              v110 = 2 * (rand() & 1) - 1;
              v111 = (int)(dword_140404A6C[v3 + 132400997] + v110) < 0;
              v112 = dword_140404A6C[v3 + 132400997] + v110;
              dword_140404A6C[v3 + 132400997] = v112;
              if ( v111 )
              {
                v112 = 0;
                dword_140404A6C[v3 + 132400997] = 0;
              }
              v113 = *(unsigned int *)((char *)&dword_140404A6C[225426061] + v20) - 1;
              if ( v112 > v113 )
                dword_140404A6C[v3 + 132400997] = v113;
            }
            if ( *(float *)&dword_140404A6C[v3 + 132400658] < 0.13333334 )
              dword_140404A6C[v3 + 132400658] = 1040746633;
          }
          return;
        }
LABEL_138:
        v107 = v108;
        goto LABEL_139;
      }
      *(unsigned int *)((char *)&dword_140404A6C[132400674] + v15) = 1;
      v11 = 67;
      dword_140404A6C[v3 + 132400996] = dword_140404A6C[225452989] - dword_140404A6C[v3 + 132400996] - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[v3 + 132400669] )
        v11 = sub_140130000();
      v12 = rand();
      v13 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      v14 = 68;
    }
    sub_140008E40(a1, v14, *(unsigned int *)((char *)&dword_140404A6C[132400674] + v13), v11, v12 & 1);
    goto LABEL_25;
  }
  if ( dword_140404A6C[v3 + 132400995] != -1 )
  {
    v114 = (int)dword_140404A6C[v3 + 132400670];
    v115 = (int)dword_140404A6C[5 * v114 + 132400672 + v3];
    v116 = v3 * 4 + 20 * (v114 + 1);
    v117 = *(int *)((char *)&dword_140404A6C[132400672] + v116);
    v118 = dword_140404A6C[5 * v114 + 132400674 + v3];
    v119 = 396 * v115;
    v120 = 1584 * v115 + 28LL * (int)dword_140404A6C[v3 + 132400996];
    if ( v118 )
    {
      v121 = *(float *)((char *)&dword_140404A6C[225426063] + v120);
      v122 = *(float *)((char *)&dword_140404A6C[225426064] + v120);
      v123 = *(float *)((char *)&dword_140404A6C[225426065] + v120);
    }
    else
    {
      v121 = *(float *)((char *)&dword_140404A6C[225426066] + v120);
      v122 = *(float *)((char *)&dword_140404A6C[225426067] + v120);
      v123 = *(float *)((char *)&dword_140404A6C[225426068] + v120);
    }
    v124 = (int)dword_140404A6C[v3 + 132400998];
    v125 = 1584 * v117 + 28 * v124;
    if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v116) )
    {
      v126 = *(float *)((char *)&dword_140404A6C[225426066] + v125);
      v127 = *(unsigned int *)((char *)&dword_140404A6C[225426067] + v125);
      v128 = *(float *)((char *)&dword_140404A6C[225426068] + v125);
    }
    else
    {
      v126 = *(float *)((char *)&dword_140404A6C[225426063] + v125);
      v127 = *(unsigned int *)((char *)&dword_140404A6C[225426064] + v125);
      v128 = *(float *)((char *)&dword_140404A6C[225426065] + v125);
    }
    v129 = *(float *)&dword_140404A6C[v119 + 225426175];
    v130 = *(float *)&dword_140404A6C[v119 + 225426174];
    v131 = v126 - v121;
    v132 = dword_140404A6C[v119 + 225426176];
    v184 = *(float *)&v127;
    v133 = v128 - v123;
    HIDWORD(v134) = 0;
    *(float *)&v127 = (float)((float)((float)(*(float *)&v127 - v122) * v129) + (float)((float)(v126 - v121) * v130))
                    + (float)((float)(v128 - v123) * *(float *)&v132);
    v135 = v127 & 0x7FFFFFFF7FFFFFFFLL;
    *(float *)&v134 = (float)((float)(v129 * *(float *)&dword_140404A6C[396 * v117 + 225426175])
                            + (float)(v130 * *(float *)&dword_140404A6C[396 * v117 + 225426174]))
                    + (float)(*(float *)&v132 * *(float *)&dword_140404A6C[396 * v117 + 225426176]);
    *(_QWORD *)&v136 = v134 & 0x7FFFFFFF7FFFFFFFLL;
    if ( *(float *)&v136 > 0.5 )
      *(float *)&v135 = *(float *)&v135 * 0.5;
    if ( v118 )
    {
      v139 = v135 ^ 0x8000000080000000uLL;
      v137 = *(float *)&v139 * v130;
      v140 = *(float *)&v139 * v129;
      *(float *)&v139 = *(float *)&v139 * *(float *)&v132;
      v138 = v140;
      v132 = v139;
    }
    else
    {
      v137 = v130 * *(float *)&v135;
      v138 = v129 * *(float *)&v135;
      *(float *)&v132 = *(float *)&v132 * *(float *)&v135;
    }
    v141 = *(float *)&v132 + v123;
    v142 = v138 + v122;
    v143 = v137 + v121;
    v144 = fsqrt((float)(v133 * v133) + (float)(v131 * v131));
    v186 = v144;
    if ( v144 == 0.0 )
    {
      v145 = 0.0;
      v146 = 0.0;
    }
    else
    {
      v145 = v131 * (float)(1.0 / v144);
      v146 = v133 * (float)(1.0 / v144);
    }
    v188 = dword_140404A6C[v3 + 132400647];
    v147 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v188), v119 * 4, v136);
    v148 = SR_VEC_LANES(128, v147, f32)[0];
    v149 = *(float *)&dword_140404A6C[v3 + 132400661] + 4.0;
    v150 = *(float *)&dword_140404A6C[v3 + 132400641];
    v151 = *(float *)&dword_140404A6C[v3 + 132400643];
    v152 = (float)(SR_VEC_READ_LANES(128, _mm_shuffle_ps(v147, v147, 1), f32)[0] * v149) + v150;
    v153 = (float)(v148 * v149) + v151;
    if ( v186 <= 0.000015258789 )
      v154 = 1.0;
    else
      v154 = (float)((float)((float)(v153 - v123) * v146) + (float)((float)(v152 - v121) * v145)) / v186;
    v155 = fmaxf(v154 + 0.125, 0.0);
    if ( v155 > 1.0 )
      v155 = 1.0;
    v156 = (float)((float)((float)((float)((float)(v143 + v143) * (float)(1.0 - v155)) + (float)(v126 * v155)) * v155)
                 + (float)((float)((float)(1.0 - v155) * v121) * (float)(1.0 - v155)))
         - v150;
    v157 = (float)((float)((float)((float)(v142 + v142) * (float)(1.0 - v155)) + (float)(v184 * v155)) * v155)
         + (float)((float)(v122 * (float)(1.0 - v155)) * (float)(1.0 - v155));
    *(float *)&v132 = (float)((float)((float)((float)((float)(v141 + v141) * (float)(1.0 - v155)) + (float)(v128 * v155))
                                    * v155)
                            + (float)((float)(v123 * (float)(1.0 - v155)) * (float)(1.0 - v155)))
                    - v151;
    if ( fsqrt(
           (float)((float)((float)(v157 - *(float *)&dword_140404A6C[v3 + 132400642])
                         * (float)(v157 - *(float *)&dword_140404A6C[v3 + 132400642]))
                 + (float)(v156 * v156))
         + (float)(*(float *)&v132 * *(float *)&v132)) <= 0.000015258789 )
    {
      v159 = *(float *)&dword_140404A6C[v3 + 132400647];
      *(_QWORD *)&v158 = LODWORD(v159);
    }
    else
    {
      HIDWORD(v158) = HIDWORD(v132);
      *(float *)&v158 = sub_14023F704(*(float *)&v132, v156);
      v159 = *(float *)&v188;
    }
    v160 = SR_VEC_READ_LANES(128, sub_14000B5F0(v158, v159), f32)[0];
    if ( v160 >= -0.981747704246875 )
    {
      if ( v160 > 0.981747704246875 )
        v160 = 0.98174769;
    }
    else
    {
      v160 = -0.98174769;
    }
    v161 = 0.25;
    v162 = *(float *)&dword_140404A6C[v3 + 132400657];
    v163 = fmaxf(v160 - v162, -0.25);
    if ( v163 <= 0.25 )
      v161 = v163;
    v164 = 0.13333334;
    dword_140404A6C[v3 + 132400658] = 1040746633;
    *(float *)&dword_140404A6C[v3 + 132400657] = v162 + v161;
    if ( !*(unsigned int *)((char *)&dword_140404A6C[132400676] + v116) )
    {
      v164 = 0.26666668;
      if ( dword_140404A6C[v3 + 132400669] )
      {
        if ( dword_140404A6C[283831312] == 6 )
          v164 = (float)(4 * dword_140404A6C[284024358] + 16) * 0.016666668;
        else
          v164 = 0.40000001;
      }
    }
    v165 = 0.5 - fabs(v161);
    v166 = v164;
    v167 = *(float *)&dword_140404A6C[396 * v117 + 225426176];
    *(float *)&v166 = (v165 + v165) * v166;
    v168 = *(float *)&dword_140404A6C[396 * v117 + 225426174];
    dword_140404A6C[v3 + 132400658] = LODWORD(v166);
    if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v116) )
    {
      v168 = -v168;
      v167 = -v167;
    }
    if ( (float)((float)((float)(v128 - (float)((float)(v167 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400643])) * v167)
               + (float)((float)(v126 - (float)((float)(v168 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400641])) * v168)) < 1.0 )
    {
      if ( (int)dword_140404A6C[v3 + 132400670] >= (int)(dword_140404A6C[v3 + 132400671] - 1) )
      {
        dword_140404A6C[v3 + 132400993] = v115;
        dword_140404A6C[v3 + 132400995] = -1;
        rand();
        v170 = ((_DWORD)v115 == 67) + 67;
        if ( dword_140404A6C[v3 + 132400669] )
          v170 = sub_140130000();
        if ( (unsigned int)(v115 - 67) > 1 )
        {
          v171 = rand();
          sub_140008E40(
            a1,
            v115,
            dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400674 + v3],
            v170,
            v171 & 1);
        }
      }
      else
      {
        v169 = (int)dword_140404A6C[v3 + 132400670];
        dword_140404A6C[v3 + 132400670] = v169 + 1;
        dword_140404A6C[v3 + 132400993] = dword_140404A6C[5 * v169 + 132400677 + v3];
        dword_140404A6C[v3 + 132400995] = -1;
        dword_140404A6C[v3 + 132400996] = v124;
        dword_140404A6C[v3 + 132400997] = v124;
      }
    }
    if ( (_DWORD)v117 != -1 )
    {
      v172 = *(float *)&dword_140404A6C[396 * v117 + 225426175];
      v173 = *(float *)&dword_140404A6C[396 * v117 + 225426174];
      v174 = *(float *)&dword_140404A6C[396 * v117 + 225426176];
      v175 = dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400679 + v3];
      v176 = (float *)&dword_140404A6C[34 * dword_140404A6C[396 * v117 + 225426056] + 225391233];
      v177 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v176[1]) * v172)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v176) * v173))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v176[2]) * v174);
      v178 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v176[1]) * v172)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v176) * v173))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v176[2]) * v174);
      if ( v175 )
      {
        if ( v177 < v178 )
          goto LABEL_205;
      }
      else if ( v177 > v178 )
      {
        goto LABEL_205;
      }
      v177 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v176[1]) * v172)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v176) * v173))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v176[2]) * v174);
LABEL_205:
      LOBYTE(v1) = v175 != 0;
      v179 = sub_140008BB0(a1, v117, 1 << dword_140404A6C[v3 + 132400998], v177, v1);
      if ( v179 < *(float *)&dword_140404A6C[v3 + 132400658] )
        *(float *)&dword_140404A6C[v3 + 132400658] = v179;
    }
  }
}
#undef v180
#undef v181
#undef v182
#undef v183
#undef v184
#undef v185
#undef v186
#undef v187
#undef v188

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FD06200: using guessed type unsigned int;

//----- (000000014000B5F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14000B5F0(double a1, float a2)
{
  __m128 v2; // xmm4
  __m128d v3; // xmm0

  v2 = *(__m128 *)&a1;
  if ( (float)(a2 - *(float *)&a1) >= 3.14159265359 )
  {
    v3 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
    SR_VEC_LANES(128, v3, f64)[0] = SR_VEC_LANES(128, v2, f32)[0] + 6.28318530718;
    v2 = _mm_cvtpd_ps(v3);
  }
  if ( (float)(SR_VEC_LANES(128, v2, f32)[0] - a2) >= 3.14159265359 )
    a2 = a2 + 6.28318530718;
  SR_VEC_LANES(128, v2, f32)[0] = SR_VEC_LANES(128, v2, f32)[0] - a2;
  return v2;
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

//----- (000000014000B950) ----------------------------------------------------
__int64            sub_14000B950(int *a1, signed int a2, float *a3, float *a4)
{
  int v4; // esi
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  int v9; // r12d
  float v10; // xmm1_4
  int v11; // r10d
  float v12; // xmm0_4
  int v13; // ebx
  float v14; // xmm0_4
  int v15; // r11d
  int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rbp
  int v19; // r15d
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // r10
  _DWORD *v25; // r11
  _DWORD *v26; // rdi
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r13
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // ebp
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  unsigned int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  int v48; // r9d
  float v49; // xmm0_4
  int v50; // r8d
  int v51; // edx
  unsigned int v52; // edi
  unsigned int v53; // esi
  __int64 v54; // rcx
  unsigned int v55; // ebp
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  unsigned int v58; // eax
  __int64 v60; // [rsp-20h] [rbp-21D8h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000B950[4256];
#define v61 (*(unsigned int (*))(void *)(sr_frame_14000B950 + 0)) /* [rsp+0h] */
#define v62 (*(float (*))(void *)(sr_frame_14000B950 + 8)) /* [rsp+8h] */
#define v63 (*(float * (*))(void *)(sr_frame_14000B950 + 16)) /* [rsp+10h] */
#define v64 (*(float * (*))(void *)(sr_frame_14000B950 + 24)) /* [rsp+18h] */
#define v65 (*(int (*))(void *)(sr_frame_14000B950 + 32)) /* [rsp+20h] */
#define v66 (*(int (*))(void *)(sr_frame_14000B950 + 36)) /* [rsp+24h] */
#define v67 (*(_DWORD * (*))(void *)(sr_frame_14000B950 + 40)) /* [rsp+28h] */
#define v68 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 48)) /* [rsp+30h] */
#define v69 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 56)) /* [rsp+38h] */
#define v70 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 64)) /* [rsp+40h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_14000B950 + 72)) /* [rsp+48h] */
#define v72 (*(int * (*))(void *)(sr_frame_14000B950 + 80)) /* [rsp+50h] */
#define v73 (*(unsigned __int64 (*))(void *)(sr_frame_14000B950 + 88)) /* [rsp+58h] */
#define v74 (*(unsigned int (*))(void *)(sr_frame_14000B950 + 96)) /* [rsp+60h] */
#define v75 (*(float * (*))(void *)(sr_frame_14000B950 + 104)) /* [rsp+68h] */
#define v76 (*(float * (*))(void *)(sr_frame_14000B950 + 112)) /* [rsp+70h] */
#define v77 (*(int (*))(void *)(sr_frame_14000B950 + 120)) /* [rsp+78h] */
#define v78 (*(int (*))(void *)(sr_frame_14000B950 + 124)) /* [rsp+7Ch] */
#define v79 (*(int (*))(void *)(sr_frame_14000B950 + 128)) /* [rsp+80h] */
#define v80 (*(int (*))(void *)(sr_frame_14000B950 + 132)) /* [rsp+84h] */
#define v81 (*(_BYTE (*)[4])(void *)(sr_frame_14000B950 + 144)) /* [rsp+90h] */
#define v82 (*(_BYTE (*)[4092])(void *)(sr_frame_14000B950 + 148)) /* [rsp+94h] */
#define v83 (*(__int64 (*))(void *)(sr_frame_14000B950 + 4240)) /* [rsp+1090h] */

  v72 = a1;
  v4 = 0;
  v66 = 0;
  v76 = a3;
  *a1 = 0;
  a1[8193] = 0;
  a1[16386] = 0;
  v5 = a3[1];
  v6 = *a3 * 0.25;
  v75 = a4;
  v74 = a2;
  v7 = (int)v6;
  v8 = *a4 * 0.25;
  v77 = v7;
  v9 = (int)(float)(v5 * 0.25);
  v10 = a3[2];
  v11 = (int)v8;
  v12 = a4[1] * 0.25;
  v65 = v11;
  v13 = (int)v12;
  v14 = a4[2] * 0.25;
  v80 = v13;
  v15 = (int)(float)(v10 * 0.25);
  v16 = (int)v14;
  v79 = v15;
  v78 = (int)v14;
  if ( v9 <= v13 )
  {
    v17 = a2;
    v71 = a2;
    while ( 1 )
    {
      if ( v9 >= 0 )
      {
        v18 = 1052016 * v17;
        v73 = 1052016 * v17;
        if ( v9 < (int)(dword_140404A6C[263004 * v17 + 111579651] << 6) )
        {
          v19 = v15;
          if ( v15 <= v16 )
            break;
        }
      }
LABEL_79:
      if ( ++v9 > v13 )
        return sub_1401F8B20((unsigned __int64)&v60 ^ v83);
    }
    while ( 1 )
    {
      if ( v19 >= 0 && v19 < (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) << 6) )
      {
        v20 = v7;
        if ( v7 <= v11 )
          break;
      }
LABEL_77:
      if ( ++v19 > v16 )
      {
        v15 = v79;
        v13 = v80;
        goto LABEL_79;
      }
    }
    v21 = v4;
    v22 = 16LL * v4;
    v23 = &v82[v22 + 8];
    v24 = &v82[v22 + 4];
    v68 = &v82[v22 + 8];
    v25 = &v82[v22];
    v69 = &v82[v22 + 4];
    v26 = &v81[v22];
    v70 = &v82[v22];
    v27 = v65;
    v67 = v26;
    while ( v20 < 0 )
    {
LABEL_75:
      v23 = v68;
      ++v20;
      v24 = v69;
      v25 = v70;
      v26 = v67;
      v4 = v66;
      v18 = v73;
      if ( v20 > v27 )
      {
        v11 = v65;
        v7 = v77;
        v16 = v78;
        goto LABEL_77;
      }
    }
    if ( v20 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v18) << 6)
      || (v28 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v18)
                       + 4LL
                       * (int)((v20 >> 6)
                             + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v18)
                             * ((v19 >> 6) + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) * (v9 >> 6)))),
          (_DWORD)v28 == -1)
      || (v29 = (int)dword_140404A6C[263004 * v17
                                   + 111579985
                                   + 513 * v28
                                   + 64 * ((v9 >> 3) & 7)
                                   + 8 * ((v19 >> 3) & 7)
                                   + ((v20 >> 3) & 7)],
          (_DWORD)v29 == -1) )
    {
LABEL_74:
      v27 = v65;
      goto LABEL_75;
    }
    v30 = 6930 * v29 + (v20 & 7) + 8 * ((v19 & 7) + 8 * (v9 & 7u));
    v31 = dword_140404A6C[v30 + 83194359];
    if ( v31 )
    {
      v32 = v31 & 0xE0000000;
      if ( (v31 & 0xE0000000) == 0x40000000 )
      {
        sub_14000E8B0(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18));
LABEL_31:
        v23 = v68;
        v24 = v69;
        v25 = v70;
        goto LABEL_44;
      }
      if ( v32 == 0x80000000 )
      {
        v33 = 58LL * (unsigned __int16)v31;
        if ( dword_140404A6C[v33 + 20074645] != 1
          || dword_140404A6C[v33 + 20074646] != 1
          || dword_140404A6C[v33 + 20074647] != 1 )
        {
          v34 = 0;
          if ( v21 > 0 )
          {
            v35 = v82;
            while ( *(v35 - 1) || *v35 != v20 || v35[1] != v9 || v35[2] != v19 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= v21 )
                goto LABEL_28;
            }
            goto LABEL_44;
          }
LABEL_28:
          if ( v21 < 256 )
          {
            ++v4;
            *v26 = 0;
            v26 += 4;
            *v25 = v20;
            *v24 = v9;
            *v23 = v19;
            ++v21;
            v66 = v4;
            v67 = v26;
            v68 = v23 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
        }
        sub_14000EF70(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18), v76, v75);
        goto LABEL_31;
      }
      if ( v32 == -1073741824 )
      {
        v36 = v20 - (unsigned __int8)v31;
        v37 = v9 - BYTE2(v31);
        v38 = 0;
        v39 = v19 - BYTE1(v31);
        if ( v21 <= 0 )
        {
LABEL_40:
          if ( v21 < 256 )
          {
            v41 = v67;
            ++v21;
            ++v66;
            *v25 = v36;
            *v24 = v37;
            *v41 = 0;
            *v23 = v39;
            v68 = v23 + 4;
            v67 = v41 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v42 = sub_1400129D0(v74, v36, v37, v39);
          v64 = v75;
          v63 = v76;
          sub_14000EF70(v72, v36, v37, v39, v42, *(float *)&dword_140404A6C[v73 / 4 + 111579653], v76, v75);
          v23 = v68;
          v24 = v69;
          v25 = v70;
        }
        else
        {
          v40 = v82;
          while ( *(v40 - 1) || *v40 != v36 || v40[1] != v37 || v40[2] != v39 )
          {
            ++v38;
            v40 += 4;
            if ( v38 >= v21 )
              goto LABEL_40;
          }
        }
        v18 = v73;
        v4 = v66;
        v26 = v67;
      }
    }
LABEL_44:
    v43 = dword_140404A6C[v30 + 83197431];
    if ( v43 )
    {
      v44 = v43 & 0xE0000000;
      if ( (v43 & 0xE0000000) != 0x40000000 )
      {
        if ( v44 == 0x80000000 )
        {
          v45 = 58LL * (unsigned __int16)v43;
          if ( dword_140404A6C[v45 + 20074645] != 1
            || dword_140404A6C[v45 + 20074646] != 1
            || dword_140404A6C[v45 + 20074647] != 1 )
          {
            v46 = 0;
            if ( v21 > 0 )
            {
              v47 = v82;
              while ( *(v47 - 1) != 1 || *v47 != v20 || v47[1] != v9 || v47[2] != v19 )
              {
                ++v46;
                v47 += 4;
                if ( v46 >= v21 )
                  goto LABEL_58;
              }
              goto LABEL_73;
            }
LABEL_58:
            if ( v21 < 256 )
            {
              *v26 = 1;
              *v25 = v20;
              *v24 = v9;
              *v23 = v19;
              ++v21;
              v66 = v4 + 1;
              v67 = v26 + 4;
              v68 = v23 + 4;
              v70 = v25 + 4;
              v69 = v24 + 4;
            }
          }
          v48 = v19;
          v49 = *(float *)((char *)&dword_140404A6C[111579653] + v18);
          v50 = v9;
          v64 = v75;
          v63 = v76;
          v62 = v49;
          v61 = v43;
          v51 = v20;
        }
        else
        {
          if ( v44 != -1073741824 )
            goto LABEL_73;
          v52 = v20 - (unsigned __int8)v43;
          v53 = v9 - BYTE2(v43);
          v54 = 0;
          v55 = v19 - BYTE1(v43);
          if ( v21 > 0 )
          {
            v56 = v82;
            while ( *(v56 - 1) != 1 || *v56 != v52 || v56[1] != v53 || v56[2] != v55 )
            {
              ++v54;
              v56 += 4;
              if ( v54 >= v21 )
                goto LABEL_69;
            }
            goto LABEL_73;
          }
LABEL_69:
          if ( v21 < 256 )
          {
            v57 = v67;
            ++v21;
            ++v66;
            *v25 = v52;
            *v24 = v53;
            *v57 = 1;
            *v23 = v55;
            v68 = v23 + 4;
            v67 = v57 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v58 = sub_140016450(v74, v52, v53, v55);
          v64 = v75;
          v48 = v55;
          v51 = v52;
          v63 = v76;
          v50 = v53;
          v62 = *(float *)&dword_140404A6C[v73 / 4 + 111579653];
          v61 = v58;
        }
        sub_14000EF70(v72, v51, v50, v48, v61, v62, v63, v64);
        goto LABEL_73;
      }
      sub_14000E8B0(v72, v20, v9, v19, v43, *(float *)((char *)&dword_140404A6C[111579653] + v18));
    }
LABEL_73:
    v17 = v71;
    goto LABEL_74;
  }
  return sub_1401F8B20((unsigned __int64)&v60 ^ v83);
}
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014000C180) ----------------------------------------------------
__int64            sub_14000C180(int *a1, int a2, float *a3, float *a4)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 result; // rax
  float v14; // xmm0_4
  int v15; // r13d
  float v16; // xmm1_4
  int v17; // ebp
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // r11d
  float v21; // xmm0_4
  int v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C180[48];
#define v31 (*(int (*))(void *)(sr_frame_14000C180 + 0)) /* [rsp+30h] */
#define v32 (*(int (*))(void *)(sr_frame_14000C180 + 4)) /* [rsp+34h] */
#define v33 (*(int (*))(void *)(sr_frame_14000C180 + 8)) /* [rsp+38h] */
#define v34 (*(unsigned int (*))(void *)(sr_frame_14000C180 + 16)) /* [rsp+40h] */
#define v35 (*(int (*))(void *)(sr_frame_14000C180 + 20)) /* [rsp+44h] */
#define v36 (*(int (*))(void *)(sr_frame_14000C180 + 24)) /* [rsp+48h] */
#define v37 (*(int (*))(void *)(sr_frame_14000C180 + 28)) /* [rsp+4Ch] */
#define v38 (*(__int64 (*))(void *)(sr_frame_14000C180 + 32)) /* [rsp+50h] */

  v6 = 263004LL * a2;
  v7 = 263004LL * a2;
  v8 = *(float *)&dword_140404A6C[v7 + 111579638];
  v9 = *a3 - v8;
  v10 = *a4 - v8;
  v11 = *(float *)&dword_140404A6C[v7 + 111579640];
  v38 = v6;
  v12 = *(float *)&dword_140404A6C[v7 + 111579654];
  result = (unsigned int)(int)(float)(v9 * v12);
  v14 = a3[1];
  v15 = (int)(float)(v10 * v12);
  v34 = result;
  v16 = *(float *)&dword_140404A6C[v7 + 111579639];
  v17 = (int)(float)((float)(v14 - v16) * v12);
  v18 = a4[1] - v16;
  v32 = v17;
  v19 = (float)(a4[2] - v11) * v12;
  v20 = (int)(float)(v18 * v12);
  v21 = a3[2];
  v37 = v20;
  v22 = (int)v19;
  v35 = (int)v19;
  v23 = (int)(float)((float)(v21 - v11) * v12);
  v36 = v23;
  if ( v17 <= v20 )
  {
    v32 = v17;
    do
    {
      v33 = v23;
      v24 = v23;
      if ( v23 <= v22 )
      {
        do
        {
          v31 = result;
          v25 = result;
          if ( (int)result <= v15 )
          {
            do
            {
              if ( v25 >= 0
                && v25 < (int)(dword_140404A6C[v7 + 111579650] << 6)
                && v17 >= 0
                && v17 < (int)(dword_140404A6C[v7 + 111579651] << 6)
                && v24 >= 0
                && v24 < (int)(dword_140404A6C[v7 + 111579652] << 6) )
              {
                v26 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                             + 4LL
                             * (int)((v25 >> 6)
                                   + dword_140404A6C[v7 + 111579650]
                                   * ((v24 >> 6) + dword_140404A6C[v7 + 111579652] * (v17 >> 6))));
                if ( (_DWORD)v26 != -1 )
                {
                  v27 = (int)dword_140404A6C[513 * v26
                                           + 111579985
                                           + 64 * ((v17 >> 3) & 7u)
                                           + 8 * ((v24 >> 3) & 7)
                                           + v6
                                           + ((v25 >> 3) & 7)];
                  if ( (_DWORD)v27 != -1 )
                  {
                    v28 = 6930 * v27 + (v25 & 7) + 8 * ((v24 & 7) + 8 * (v17 & 7u));
                    v29 = dword_140404A6C[v28 + 83194359];
                    if ( (v29 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &v31, v29, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v29 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &v31, v29, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    v30 = dword_140404A6C[v28 + 83197431];
                    if ( (v30 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &v31, v30, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v30 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &v31, v30, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                  }
                }
              }
              v6 = v38;
              v31 = ++v25;
            }
            while ( v25 <= v15 );
            result = v34;
            v22 = v35;
          }
          v33 = ++v24;
        }
        while ( v24 <= v22 );
        v23 = v36;
        v20 = v37;
      }
      v32 = ++v17;
    }
    while ( v17 <= v20 );
  }
  return result;
}
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014000C4C0) ----------------------------------------------------
__int64            sub_14000C4C0(unsigned int a1)
{
  __int64 v1; // rbp
  __m128i v2; // xmm4
  __m128 v3; // xmm3
  signed int v4; // r10d
  unsigned int v5; // r8d
  int v6; // esi
  __m128i v7; // xmm10
  __m128i v8; // xmm11
  __int64 v9; // r13
  char *v10; // rax
  char *v11; // rdx
  float v12; // xmm1_4
  float v13; // xmm11_4
  float v14; // xmm4_4
  float v15; // xmm10_4
  signed int v16; // r12d
  char *v17; // rcx
  signed int v18; // edi
  char *v19; // r14
  unsigned int v20; // ebx
  int v21; // edx
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  int *v24; // r12
  int v25; // ebp
  int v26; // esi
  unsigned __int64 v27; // r11
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // r9
  int *v31; // r10
  float v32; // xmm5_4
  __int64 v33; // rbx
  int v34; // xmm9_4
  int v35; // xmm10_4
  int v36; // xmm11_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  unsigned int v40; // r15d
  float v41; // xmm14_4
  float v42; // xmm15_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  int v45; // eax
  __int64 v46; // r14
  float v47; // xmm3_4
  float v48; // xmm4_4
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm1_4
  __int64 v61; // rcx
  float v62; // xmm0_4
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned int v65; // xmm0_4
  unsigned int v66; // xmm1_4
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  int v75; // eax
  unsigned int v76; // r15d
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // edx
  int v80; // eax
  int v81; // r8d
  unsigned int v82; // edx
  int v83; // eax
  __int64 v84; // r9
  int v85; // r11d
  unsigned __int64 v86; // rax
  unsigned __int16 v87; // dx
  __int64 v88; // r14
  unsigned int v89; // esi
  int v90; // ecx
  __int64 v91; // rax
  float v92; // xmm2_4
  __int64 v93; // r10
  __int64 v94; // rbp
  float v95; // xmm7_4
  float v96; // xmm8_4
  float *v97; // r9
  float v98; // xmm9_4
  __int64 v99; // r13
  float v100; // xmm3_4
  __m128i v101; // xmm4
  __int64 v102; // rdi
  __m128i v103; // xmm6
  __int64 v104; // r12
  unsigned int *v105; // r11
  __int64 v106; // rbp
  unsigned int *v107; // rbx
  __int64 v108; // rdi
  float v109; // xmm4_4
  float v110; // xmm5_4
  float v111; // xmm6_4
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // r12d
  signed int v118; // edi
  signed int v119; // r13d
  __int64 v120; // rbx
  unsigned int v121; // r8d
  __int64 v122; // rbp
  int v123; // eax
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // rdx
  unsigned int v129; // xmm0_4
  unsigned int v130; // xmm1_4
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __m128 v137; // xmm13
  __m128 v138; // xmm14
  __m128 v139; // xmm10
  __m128 v140; // xmm15
  __m128 v141; // xmm11
  __m128 v142; // xmm12
  __int64 v143; // rax
  __m128 v144; // xmm2
  __m128 v145; // xmm1
  __m128 v146; // xmm0
  float v147; // xmm9_4
  float v148; // xmm6_4
  float v149; // xmm7_4
  float v150; // xmm8_4
  __int64 v151; // rax
  float v152; // xmm2_4
  float v153; // xmm0_4
  float v154; // xmm1_4
  __int64 v155; // rax
  float v156; // xmm2_4
  float v157; // xmm0_4
  float v158; // xmm1_4
  __int64 v159; // rax
  float v160; // xmm2_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  __int64 v163; // rcx
  float v164; // xmm5_4
  float v165; // xmm4_4
  float v166; // xmm3_4
  float v167; // xmm0_4
  float v168; // xmm1_4
  float v169; // xmm2_4
  float v170; // xmm8_4
  float v171; // xmm7_4
  float v172; // xmm4_4
  float v173; // xmm5_4
  float v174; // xmm3_4
  float v175; // xmm6_4
  float *v176; // rcx
  int v177; // ecx
  __int64 v178; // r10
  __int64 v179; // r9
  __int64 v180; // r8
  unsigned int v181; // ecx
  int v182; // edx
  int i; // r10d
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rdx
  __int64 v188; // rcx
  int v189; // r9d
  signed int v190; // r8d
  int v191; // ecx
  unsigned int *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  unsigned int v197; // eax
  int v198; // ecx
  unsigned int *v199; // rax
  unsigned int v200; // eax
  int v201; // r8d
  int v202; // r10d
  __int64 v203; // rcx
  __int64 v204; // rax
  int v205; // r15d
  int v206; // edx
  int v207; // r8d
  int v208; // ecx
  __int64 v209; // rax
  signed int v210; // r11d
  int v211; // r15d
  signed int v212; // esi
  unsigned int *v213; // r14
  unsigned int *v214; // r8
  int v215; // r9d
  __int64 j; // rbx
  int v217; // edi
  __int64 v218; // rbp
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rbp
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rbp
  __int64 v225; // rax
  __int64 v226; // rax
  int v227; // ebx
  int v228; // esi
  int v229; // r8d
  int v230; // eax
  unsigned int v231; // ecx
  unsigned int v232; // eax
  unsigned int v233; // r10d
  unsigned int v234; // eax
  unsigned int v235; // r10d
  unsigned int v236; // eax
  unsigned int v237; // edx
  __int64 v238; // rdi
  unsigned int v239; // r8d
  __int64 v240; // r9
  int k; // ebx
  int v242; // r11d
  unsigned int *v243; // r9
  unsigned int *v244; // r10
  __int64 v245; // rcx
  __int64 v246; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C4C0[192];
#define v248 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 0)) /* [rsp+0h] */
#define v249 (*(float (*))(void *)(sr_frame_14000C4C0 + 32)) /* [rsp+20h] */
#define v250 (*(float (*))(void *)(sr_frame_14000C4C0 + 36)) /* [rsp+24h] */
#define v251 (*(float (*))(void *)(sr_frame_14000C4C0 + 40)) /* [rsp+28h] */
#define v252 (*(int (*))(void *)(sr_frame_14000C4C0 + 44)) /* [rsp+2Ch] */
#define v253 (*(int (*))(void *)(sr_frame_14000C4C0 + 48)) /* [rsp+30h] */
#define v254 (*(int (*))(void *)(sr_frame_14000C4C0 + 52)) /* [rsp+34h] */
#define v255 (*(int (*))(void *)(sr_frame_14000C4C0 + 56)) /* [rsp+38h] */
#define v256 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 60)) /* [rsp+3Ch] */
#define v257 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 64)) /* [rsp+40h] */
#define v258 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 68)) /* [rsp+44h] */
#define v259 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 72)) /* [rsp+48h] */
#define v260 (*(char * (*))(void *)(sr_frame_14000C4C0 + 80)) /* [rsp+50h] */
#define v261 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 88)) /* [rsp+58h] */
#define v262 (*(_DWORD * (*))(void *)(sr_frame_14000C4C0 + 96)) /* [rsp+60h] */
#define v263 (*(int * (*))(void *)(sr_frame_14000C4C0 + 104)) /* [rsp+68h] */
#define v264 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 112)) /* [rsp+70h] */
#define v265 (*(char * (*))(void *)(sr_frame_14000C4C0 + 120)) /* [rsp+78h] */
#define v266 (*(char * (*))(void *)(sr_frame_14000C4C0 + 128)) /* [rsp+80h] */
#define v267 (*(char * (*))(void *)(sr_frame_14000C4C0 + 136)) /* [rsp+88h] */
#define v268 (*(char * (*))(void *)(sr_frame_14000C4C0 + 144)) /* [rsp+90h] */
#define v269 (*(unsigned __int16 (*)[8])(void *)(sr_frame_14000C4C0 + 152)) /* [rsp+98h] */
#define v271 (*(_BYTE (*)[15])(void *)(sr_frame_14000C4C0 + 169)) /* [rsp+A9h] */
#define v272 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 184)) /* [rsp+B8h] */

  v256 = a1;
  if ( a1 <= 0xFFF )
  {
    v1 = 27720LL * (int)a1;
    v261 = v1;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v1) )
    {
      v2 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200507]);
      v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200508]);
      v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200509]);
      v9 = 1052016LL * (int)dword_140404A6C[6930 * a1 + 83194358];
      dword_140404A6C[71654225] = 0;
      v10 = (char *)&dword_140404A6C[83194871] + v1;
      v259 = v9;
      v11 = (char *)&dword_140404A6C[83195383] + v1 - (_QWORD)v271;
      dword_140404A6C[70425405] = 0;
      dword_140404A6C[70998846] = 0;
      dword_140404A6C[71179071] = 0;
      v12 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
      v252 = 0;
      v255 = 0;
      v267 = (char *)&dword_140404A6C[83194871] + v1;
      v268 = v11;
      v13 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v8), f32)[0] * 8.0) * v12;
      v14 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v2), f32)[0] * 8.0) * v12;
      v15 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 8.0) * v12;
      v251 = v13;
      v249 = v14;
      v250 = v15;
      do
      {
        v16 = 0;
        v254 = 0;
        v265 = v10;
        v17 = v11;
        v266 = v11;
        do
        {
          v18 = 0;
          v253 = 0;
          v262 = v10;
          v19 = v17;
          v260 = v17;
          do
          {
            v20 = *((_DWORD *)v10 - 512);
            v258 = v20;
            if ( (v20 & 0xE0000000) == 0x40000000 )
            {
              v257 = HIBYTE(v20) & 3;
              v21 = 0;
              v22 = 0;
              do
              {
                v23 = *(_WORD *)&v271[v22 * 2 + (_QWORD)v19];
                *(_WORD *)&v271[v22 * 2 - 1] = v23;
                if ( v22 >= 8 )
                  goto LABEL_162;
                v269[v22] = 0;
                if ( (v23 & 0x4000) != 0 )
                {
                  v271[v22 * 2] = 0;
                  v269[v22] = HIBYTE(v23) & 0x1F;
                  v23 = *(_WORD *)&v271[v22 * 2 - 1];
                }
                if ( v23 < 0 )
                {
                  v269[v22] = v23 & 0x3FF;
                  *(_WORD *)&v271[v22 * 2 - 1] = dword_140404A6C[421784414];
                }
                ++v21;
                ++v22;
              }
              while ( v21 < 8 );
              v24 = dword_1402B3660;
              v264 = 0;
              v263 = dword_1402B3660;
              v25 = 0;
              v26 = 1;
              v27 = 0;
              v28 = 0;
              do
              {
                if ( (v26 & v20) != 0 )
                {
                  v29 = *(unsigned __int16 *)&v271[v28 - 1];
                  v30 = 0;
                  v31 = v24;
                  v32 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v33 = 4;
                  v34 = dword_1402B3550[v27 / 4];
                  v35 = dword_1402B3554[v27 / 4];
                  v36 = dword_1402B3558[v27 / 4];
                  v37 = *(float *)((char *)&unk_1402B35A0 + v27);
                  v38 = *(float *)((char *)&unk_1402B35A4 + v27);
                  v39 = *(float *)((char *)&unk_1402B35A8 + v27);
                  v40 = dword_140404A6C[421784414];
                  v41 = (float)v253;
                  v42 = (float)v252;
                  v43 = *(float *)&dword_140404A6C[46 * v29 + 421784734];
                  v44 = *(float *)&dword_140404A6C[46 * v29 + 421784735];
                  v45 = *(unsigned __int16 *)((char *)v269 + v28);
                  v46 = v259;
                  v47 = (float)v254;
                  v48 = (float)v45;
                  do
                  {
                    v49 = 3LL * *v31;
                    *(float *)&dword_140404A6C[3 * v5 + 70687550] = (float)(v41 + *(float *)&dword_1402B34F0[3 * *v31])
                                                                  * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v42
                                                                                                 + *(float *)&dword_1402B34F4[v49])
                                                                                         * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v47
                                                                                                 + *(float *)&dword_1402B34F8[v49])
                                                                                         * v32;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v50 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v50 + 70736702] = v34;
                    dword_140404A6C[v50 + 70736703] = v35;
                    dword_140404A6C[v50 + 70736704] = v36;
                    v51 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v51 + 70785854] = v37;
                    *(float *)&dword_140404A6C[v51 + 70785855] = v38;
                    *(float *)&dword_140404A6C[v51 + 70785856] = v39;
                    v52 = *(float *)((char *)&unk_1402B35F0 + v27);
                    v53 = *(float *)((char *)&unk_1402B35F8 + v27);
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = (float)((float)((float)(v38 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551]) + (float)(v37 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]))
                                                                                                 + (float)(v39 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]))
                                                                                         * v43;
                    v54 = (float)(*(float *)((char *)&unk_1402B35F4 + v27)
                                * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551])
                        + (float)(v52 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]);
                    v55 = v249;
                    v56 = v54 + (float)(v53 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]);
                    v57 = v250;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = v56 * v44;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v58 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v58 + 70687550] = v55
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v59 = v251;
                    *(float *)&dword_140404A6C[v58 + 70687551] = v57 + *(float *)&dword_140404A6C[v58 + 70687551];
                    v60 = *(float *)((char *)&dword_140404A6C[111579639] + v46);
                    *(float *)&dword_140404A6C[v58 + 70687552] = v59 + *(float *)&dword_140404A6C[v58 + 70687552];
                    v61 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v61 + 70687550] = *(float *)((char *)&dword_140404A6C[111579638] + v46)
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v62 = *(float *)((char *)&dword_140404A6C[111579640] + v46);
                    *(float *)&dword_140404A6C[v61 + 70687551] = v60 + *(float *)&dword_140404A6C[v61 + 70687551];
                    *(float *)&dword_140404A6C[v61 + 70687552] = v62 + *(float *)&dword_140404A6C[v61 + 70687552];
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                    if ( (unsigned int)(v25 - 1) <= 3 && (_DWORD)v29 == v40 )
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    ++v31;
                    dword_140404A6C[4 * (int)dword_140404A6C[70998846] + 70998847 + v30++] = dword_140404A6C[70425405];
                    v5 = ++dword_140404A6C[70425405];
                    --v33;
                  }
                  while ( v33 );
                  v28 = v264;
                  v24 = v263;
                  if ( v25 == 5 && v257 )
                  {
                    v63 = v257;
                    do
                    {
                      v64 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                      v65 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835006];
                      v66 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835007];
                      v67 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v64 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998850]
                                                                      + 70835006];
                      dword_140404A6C[v64 + 70835007] = dword_140404A6C[v67 + 70835007];
                      v68 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v69 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v69 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998849]
                                                                      + 70835006];
                      dword_140404A6C[v69 + 70835007] = dword_140404A6C[v68 + 70835007];
                      v70 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v71 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      dword_140404A6C[v71 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998848]
                                                                      + 70835006];
                      dword_140404A6C[v71 + 70835007] = dword_140404A6C[v70 + 70835007];
                      v72 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      dword_140404A6C[v72 + 70835006] = v65;
                      dword_140404A6C[v72 + 70835007] = v66;
                      --v63;
                    }
                    while ( v63 );
                  }
                  v20 = v258;
                  v9 = v259;
                  dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v29;
                  v73 = 3LL * (int)dword_140404A6C[70998846];
                  dword_140404A6C[v73 + 71113535] = v34;
                  dword_140404A6C[v73 + 71113536] = v35;
                  dword_140404A6C[v73 + 71113537] = v36;
                  ++dword_140404A6C[70998846];
                  v5 = dword_140404A6C[70425405];
                }
                v24 += 4;
                v26 = __ROL4__(v26, 1);
                v28 += 2;
                v263 = v24;
                ++v25;
                v264 = v28;
                v27 += 12LL;
              }
              while ( v25 < 6 );
              v4 = dword_140404A6C[71654225];
              v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
              v15 = v250;
              v13 = v251;
              v1 = v261;
              v16 = v254;
              v18 = v253;
              v6 = v252;
              v19 = v260;
            }
            else if ( (v20 & 0xE0000000) == 0x80000000 )
            {
              v74 = 0;
              if ( v4 <= 0 )
              {
LABEL_38:
                v75 = *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1);
                v76 = HIBYTE(v20) & 3;
                v257 = v76;
                v77 = v18 + 8 * v75;
                v78 = *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1);
                dword_140404A6C[3 * v4 + 71654226] = v77;
                v79 = v6 + 8 * v78;
                v80 = *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1);
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654227] = v79;
                v81 = 0;
                v82 = v16 + 8 * v80;
                v83 = v255;
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654228] = v82;
                v4 = dword_140404A6C[71654225] + 1;
                v84 = 6930LL * (int)v256;
                ++dword_140404A6C[71654225];
                v85 = 4 * (v18 + 8 * (v16 + v83));
                do
                {
                  v86 = 2LL * v81;
                  v87 = *((_WORD *)&dword_140404A6C[v84 + 83195383 + v85] + v81);
                  *(_WORD *)&v271[v86 - 1] = v87;
                  if ( v86 >= 0x10 )
LABEL_162:
                    sub_1401F8694();
                  v269[v81] = 0;
                  if ( (v87 & 0x4000) != 0 )
                    v269[v81] = HIBYTE(v87) & 0x1F;
                  ++v81;
                  v271[v86] = 0;
                }
                while ( v81 < 8 );
                v5 = dword_140404A6C[70425405];
                v88 = 58LL * (unsigned __int16)v20;
                v89 = dword_140404A6C[70425405];
                v258 = dword_140404A6C[70425405];
                v90 = dword_140404A6C[v88 + 20074613];
                if ( v90 > 0 )
                {
                  v91 = *(_QWORD *)&dword_140404A6C[v88 + 20074615];
                  v92 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v93 = 0;
                  v94 = *(_QWORD *)&dword_140404A6C[v88 + 20074619];
                  v95 = *(float *)((char *)&dword_140404A6C[111579638] + v9);
                  v96 = *(float *)((char *)&dword_140404A6C[111579639] + v9);
                  v97 = (float *)(v91 + 8);
                  v98 = *(float *)((char *)&dword_140404A6C[111579640] + v9);
                  v99 = (unsigned int)v90;
                  v100 = v249;
                  v101 = _mm_cvtsi32_si128(v18);
                  v102 = *(_QWORD *)&dword_140404A6C[v88 + 20074617];
                  v103 = _mm_cvtsi32_si128(v16);
                  v104 = *(_QWORD *)&dword_140404A6C[v88 + 20074621];
                  v105 = (unsigned int *)(v94 + 8);
                  v106 = v94 - v91;
                  v107 = (unsigned int *)(v102 + 8);
                  v108 = v102 - v91;
                  v109 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v101), f32)[0];
                  v110 = (float)v252;
                  v111 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v103), f32)[0];
                  do
                  {
                    *(float *)&dword_140404A6C[3 * v5 + 70687550] = (float)(v109 + *(v97 - 2)) * v92;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v110 + *(v97 - 1))
                                                                                         * v92;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v111 + *v97) * v92;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v112 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v112 + 70687550] = v100
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v112 + 70687551] = v15 + *(float *)&dword_140404A6C[v112 + 70687551];
                    *(float *)&dword_140404A6C[v112 + 70687552] = v13 + *(float *)&dword_140404A6C[v112 + 70687552];
                    v113 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v113 + 70687550] = v95
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v113 + 70687551] = v96 + *(float *)&dword_140404A6C[v113 + 70687551];
                    *(float *)&dword_140404A6C[v113 + 70687552] = v98 + *(float *)&dword_140404A6C[v113 + 70687552];
                    v114 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v114 + 70736702] = *(_DWORD *)((char *)v97 + v108 - 8);
                    dword_140404A6C[v114 + 70736703] = *(v107 - 1);
                    dword_140404A6C[v114 + 70736704] = *v107;
                    v115 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v115 + 70785854] = *(_DWORD *)((char *)v97 + v106 - 8);
                    dword_140404A6C[v115 + 70785855] = *(v105 - 1);
                    dword_140404A6C[v115 + 70785856] = *v105;
                    v116 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v116 + 70884158] = 1065353216;
                    dword_140404A6C[v116 + 70884159] = 1065353216;
                    dword_140404A6C[v116 + 70884160] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v104 + v93);
                    v97 += 3;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v104 + v93 + 4);
                    v107 += 3;
                    v105 += 3;
                    v93 += 8;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v5 = ++dword_140404A6C[70425405];
                    --v99;
                  }
                  while ( v99 );
                  v4 = dword_140404A6C[71654225];
                  v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                  v14 = v249;
                  v89 = v258;
                  v76 = v257;
                }
                v117 = dword_140404A6C[v88 + 20074623];
                v118 = 0;
                if ( v117 > 0 )
                {
                  v119 = dword_140404A6C[v88 + 20074624];
                  v120 = 0;
                  v121 = dword_140404A6C[70998846];
                  v122 = 8;
                  do
                  {
                    if ( v118 >= v119 || (v123 = *v262, !_bittest(&v123, v118)) )
                    {
                      v124 = *(_QWORD *)&dword_140404A6C[v88 + 20074633];
                      v125 = *(_QWORD *)&dword_140404A6C[v88 + 20074631];
                      dword_140404A6C[4 * v121 + 70998847] = v89 + *(_DWORD *)(v125 + v122 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v89 + *(_DWORD *)(v125 + v122 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v89 + *(_DWORD *)(v125 + v122);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v89 + *(_DWORD *)(v125 + v122 + 4);
                      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *(unsigned __int16 *)&v271[2 * *(unsigned __int8 *)(v120 + v124) - 1];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      v126 = *(_QWORD *)&dword_140404A6C[v88 + 20074635];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      if ( (*(_BYTE *)(v120 + v126) & 1) != 0 )
                      {
                        if ( v76 )
                        {
                          v127 = v76;
                          do
                          {
                            v128 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v129 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835006];
                            v130 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835007];
                            v131 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v128 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998850]
                                                                             + 70835006];
                            dword_140404A6C[v128 + 70835007] = dword_140404A6C[v131 + 70835007];
                            v132 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v133 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v133 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998849]
                                                                             + 70835006];
                            dword_140404A6C[v133 + 70835007] = dword_140404A6C[v132 + 70835007];
                            v134 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v135 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v135 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998848]
                                                                             + 70835006];
                            dword_140404A6C[v135 + 70835007] = dword_140404A6C[v134 + 70835007];
                            v136 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v136 + 70835006] = v129;
                            dword_140404A6C[v136 + 70835007] = v130;
                            --v127;
                          }
                          while ( v127 );
                        }
                        v137 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), v3);
                        v138 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), v3);
                        v139 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        v140 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), v3);
                        v141 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        v142 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        v143 = ((_BYTE)v76 + (unsigned __int8)(*(int *)(v120 + v124) >> 12)) & 3;
                        if ( (((_BYTE)v76 + (unsigned __int8)(*(int *)(v120 + v124) >> 12)) & 3) != 0 )
                        {
                          do
                          {
                            v144 = v142;
                            v145 = v141;
                            v146 = v139;
                            v139 = _mm_xor_ps(v137, v3);
                            v141 = _mm_xor_ps(v138, v3);
                            v142 = _mm_xor_ps(v140, v3);
                            v137 = v146;
                            v138 = v145;
                            v140 = v144;
                            --v143;
                          }
                          while ( v143 );
                        }
                        v147 = *(float *)((char *)&dword_140404A6C[111579654] + v259);
                        v148 = *(float *)((char *)&dword_140404A6C[111579638] + v259);
                        v149 = *(float *)((char *)&dword_140404A6C[111579639] + v259);
                        v150 = *(float *)((char *)&dword_140404A6C[111579640] + v259);
                        v151 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v152 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v14)
                             - v148;
                        v153 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v154 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v151 + 70835006] = (float)((float)((float)(v152 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v153 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v154 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v151 + 70835007] = (float)((float)((float)(v152 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v153 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v154 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v155 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v156 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v249)
                             - v148;
                        v157 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v158 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v155 + 70835006] = (float)((float)((float)(v156 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v157 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v158 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v155 + 70835007] = (float)((float)((float)(v156 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v157 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v158 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v159 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v160 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v249)
                             - v148;
                        v161 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v162 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v159 + 70835006] = (float)((float)((float)(v160 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v161 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v162 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v159 + 70835007] = (float)((float)((float)(v160 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v161 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v162 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v163 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v164 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687550] - v249) - v148;
                        v165 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687551] - v250) - v149;
                        v166 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687552] - v251) - v150;
                        *(float *)&dword_140404A6C[3 * v163 + 70835006] = (float)((float)((float)(v164 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                        + (float)(v165 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                                + (float)(v166 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                        * v147;
                        *(float *)&dword_140404A6C[3 * v163 + 70835007] = (float)((float)((float)(v164 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                        + (float)(v165 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                                + (float)(v166 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                        * v147;
                      }
                      v167 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687550];
                      v168 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v169 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v170 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687550]
                           - v167;
                      v171 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687551]
                           - v168;
                      v172 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687552]
                           - v169;
                      v173 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687551]
                           - v168;
                      v174 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687552]
                           - v169;
                      v175 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687550]
                           - v167;
                      v176 = (float *)&dword_140404A6C[3LL * (int)dword_140404A6C[70998846] + 71113535];
                      *v176 = (float)(v173 * v172) - (float)(v174 * v171);
                      v176[1] = (float)(v170 * v174) - (float)(v175 * v172);
                      v176[2] = (float)(v175 * v171) - (float)(v170 * v173);
                      sub_14007A240((__int64)v176, v176);
                      v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                      v121 = ++dword_140404A6C[70998846];
                    }
                    v14 = v249;
                    ++v118;
                    v122 += 16;
                    v120 += 4;
                  }
                  while ( v118 < v117 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                  v15 = v250;
                  v13 = v251;
                }
                v177 = dword_140404A6C[v88 + 20074639];
                if ( v177 > 0 )
                {
                  v178 = (unsigned int)v177;
                  v179 = *(_QWORD *)&dword_140404A6C[v88 + 20074643];
                  v180 = *(_QWORD *)&dword_140404A6C[v88 + 20074641] + 8LL;
                  v181 = dword_140404A6C[71179071];
                  do
                  {
                    v182 = *(_DWORD *)(v180 - 8);
                    v180 += 12;
                    v179 += 4;
                    dword_140404A6C[3 * v181 + 71179072] = v89 + v182;
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = v89 + *(_DWORD *)(v180 - 16);
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = v89 + *(_DWORD *)(v180 - 12);
                    dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *(unsigned __int16 *)&v271[2 * *(int *)(v179 - 4) - 1];
                    v181 = ++dword_140404A6C[71179071];
                    --v178;
                  }
                  while ( v178 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                }
                v1 = v261;
                v16 = v254;
                v18 = v253;
                v6 = v252;
                v19 = v260;
              }
              else
              {
                while ( v18 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1) != dword_140404A6C[3 * v74 + 71654226]
                     || v6 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1) != dword_140404A6C[3 * v74 + 71654227]
                     || v16 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1) != dword_140404A6C[3 * v74 + 71654228] )
                {
                  if ( ++v74 >= v4 )
                    goto LABEL_38;
                }
              }
            }
            ++v18;
            v14 = v249;
            v10 = (char *)(v262 + 1);
            v9 = v259;
            v19 += 16;
            v253 = v18;
            ++v262;
            v260 = v19;
          }
          while ( v18 < 8 );
          ++v16;
          v10 = v265 + 32;
          v17 = v266 + 128;
          v254 = v16;
          v265 += 32;
          v266 += 128;
        }
        while ( v16 < 8 );
        ++v6;
        v10 = v267 + 256;
        v11 = v268 + 1024;
        v252 = v6;
        v255 += 8;
        v267 += 256;
        v268 += 1024;
      }
      while ( v255 < 64 );
      sub_140184BB0();
      for ( i = 0; i < (int)dword_140404A6C[70998846]; ++dword_140404A6C[71179071] )
      {
        v184 = i++;
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v184 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v184 + 70998848];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v184 + 70998849];
        v185 = 3LL * (int)dword_140404A6C[4 * v184 + 70998847];
        v186 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v186 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v184 + 70998847] + 70736702];
        dword_140404A6C[v186 + 71310146] = dword_140404A6C[v185 + 70736703];
        dword_140404A6C[v186 + 71310147] = dword_140404A6C[v185 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v184 + 71064383];
        ++dword_140404A6C[71179071];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v184 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v184 + 70998849];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v184 + 70998850];
        v187 = 3LL * (int)dword_140404A6C[4 * v184 + 70998847];
        v188 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v188 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v184 + 70998847] + 70736702];
        dword_140404A6C[v188 + 71310146] = dword_140404A6C[v187 + 70736703];
        dword_140404A6C[v188 + 71310147] = dword_140404A6C[v187 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v184 + 71064383];
      }
      v189 = dword_140404A6C[70425405];
      v190 = 0;
      while ( v190 < v189 )
      {
        v191 = 0;
        if ( (int)dword_140404A6C[71179071] <= 0 )
        {
LABEL_75:
          dword_140404A6C[70425405] = --v189;
          if ( v190 >= v189 )
            break;
          v193 = 3LL * v190;
          dword_140404A6C[v193 + 70687550] = dword_140404A6C[3 * v189 + 70687550];
          dword_140404A6C[v193 + 70687551] = dword_140404A6C[3 * v189 + 70687551];
          dword_140404A6C[v193 + 70687552] = dword_140404A6C[3 * v189 + 70687552];
          v194 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
          dword_140404A6C[v193 + 70736703] = dword_140404A6C[v194 + 70736703];
          dword_140404A6C[v193 + 70736704] = dword_140404A6C[v194 + 70736704];
          v195 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
          dword_140404A6C[v193 + 70785855] = dword_140404A6C[v195 + 70785855];
          dword_140404A6C[v193 + 70785856] = dword_140404A6C[v195 + 70785856];
          dword_140404A6C[v193 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
          dword_140404A6C[v193 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
          dword_140404A6C[v193 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
          v196 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
          dword_140404A6C[v193 + 70884159] = dword_140404A6C[v196 + 70884159];
          v197 = dword_140404A6C[v196 + 70884160];
          v198 = 0;
          dword_140404A6C[v193 + 70884160] = v197;
          v189 = dword_140404A6C[70425405];
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v199 = &dword_140404A6C[71179073];
            do
            {
              if ( *(v199 - 1) == v189 )
              {
                *(v199 - 1) = v190;
                v189 = dword_140404A6C[70425405];
              }
              if ( *v199 == v189 )
              {
                *v199 = v190;
                v189 = dword_140404A6C[70425405];
              }
              if ( v199[1] == v189 )
              {
                v199[1] = v190;
                v189 = dword_140404A6C[70425405];
              }
              ++v198;
              v199 += 3;
            }
            while ( v198 < (int)dword_140404A6C[71179071] );
          }
        }
        else
        {
          v192 = &dword_140404A6C[71179073];
          while ( *(v192 - 1) != v190 && *v192 != v190 && v192[1] != v190 )
          {
            ++v191;
            v192 += 3;
            if ( v191 >= (int)dword_140404A6C[71179071] )
              goto LABEL_75;
          }
          ++v190;
        }
      }
      v200 = dword_140404A6C[179955283];
      v201 = 0;
      if ( (int)dword_140404A6C[179955283] < v189 )
        v200 = v189;
      dword_140404A6C[179955283] = v200;
      if ( v189 > 0 )
      {
        v202 = 0;
        do
        {
          v203 = v202;
          v202 += 16;
          v204 = v201++;
          *(_QWORD *)&dword_140404A6C[v203 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70687550];
          dword_140404A6C[v203 + 70425408] = dword_140404A6C[3 * v204 + 70687552];
          *(_QWORD *)&dword_140404A6C[v203 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70736702];
          dword_140404A6C[v203 + 70425411] = dword_140404A6C[3 * v204 + 70736704];
          *(_QWORD *)&dword_140404A6C[v203 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70785854];
          dword_140404A6C[v203 + 70425414] = dword_140404A6C[3 * v204 + 70785856];
          *(_QWORD *)&dword_140404A6C[v203 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70835006];
          dword_140404A6C[v203 + 70425417] = dword_140404A6C[3 * v204 + 70835008];
          v189 = dword_140404A6C[70425405];
        }
        while ( v201 < (int)dword_140404A6C[70425405] );
      }
      v205 = v256;
      sub_140193FE0(1, v256, (__int64)&dword_140404A6C[70425406], v189 << 6);
      v206 = dword_140404A6C[71179071];
      v207 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200512] + v1) = dword_140404A6C[71179071];
      if ( v206 > 0 )
      {
        v208 = 0;
        do
        {
          v209 = v208;
          ++v207;
          v208 += 3;
          *(_QWORD *)&dword_140404A6C[v209 + 71359297] = -1;
          dword_140404A6C[v209 + 71359299] = -1;
          v206 = dword_140404A6C[71179071];
        }
        while ( v207 < (int)dword_140404A6C[71179071] );
      }
      v210 = 0;
      if ( v206 > 0 )
      {
        v211 = 0;
        do
        {
          v212 = 0;
          if ( v206 > 0 )
          {
            v213 = &dword_140404A6C[71408452];
            v214 = &dword_140404A6C[71359297];
            do
            {
              if ( v210 != v212 )
              {
                v215 = 0;
                for ( j = 0; j < 3; ++j )
                {
                  v217 = v211 + v215;
                  if ( dword_140404A6C[v211 + 71359297 + v215] == -1 )
                  {
                    if ( *v214 == -1 )
                    {
                      v218 = 3LL * v210;
                      v219 = (int)*(v214 - 180224);
                      if ( fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687550]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687550]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687551]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687551]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687552]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687552]) < 0.000099999997 )
                      {
                        v220 = (int)*(v214 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687550]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687551]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687552]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687552]) < 0.000099999997 )
                        {
                          dword_140404A6C[v217 + 71359297] = v212;
                          dword_140404A6C[2 * v217 + 71408450] = 2;
                          *v214 = v210;
                          *(v213 - 2) = (v215 + 2) % 3;
                        }
                      }
                    }
                    if ( dword_140404A6C[v217 + 71359297] == -1 )
                    {
                      if ( v214[1] == -1 )
                      {
                        v221 = 3LL * v210;
                        v222 = (int)*(v214 - 180223);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687552]) < 0.000099999997 )
                        {
                          v223 = (int)*(v214 - 180224);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v217 + 71359297] = v212;
                            dword_140404A6C[2 * v217 + 71408450] = 0;
                            v214[1] = v210;
                            *v213 = (v215 + 2) % 3;
                          }
                        }
                      }
                      if ( dword_140404A6C[v217 + 71359297] == -1 && v214[2] == -1 )
                      {
                        v224 = 3LL * v210;
                        v225 = (int)*(v214 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687552]) < 0.000099999997 )
                        {
                          v226 = (int)*(v214 - 180223);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v217 + 71359297] = v212;
                            dword_140404A6C[2 * v217 + 71408450] = 1;
                            v214[2] = v210;
                            v213[2] = (v215 + 2) % 3;
                          }
                        }
                      }
                    }
                  }
                  ++v215;
                }
                v206 = dword_140404A6C[71179071];
              }
              ++v212;
              v214 += 3;
              v213 += 6;
            }
            while ( v212 < v206 );
          }
          ++v210;
          v211 += 3;
        }
        while ( v210 < v206 );
        v1 = v261;
        v205 = v256;
      }
      v227 = 0;
      if ( v206 > 0 )
      {
        v228 = 0;
        v229 = 3;
        do
        {
          dword_140404A6C[v229 + 71408446] = dword_140404A6C[3 * v227 + 71179072];
          v230 = v229 - 2;
          v231 = dword_140404A6C[v228 + 71359297];
          if ( v231 == -1 )
          {
            v232 = dword_140404A6C[3 * v227 + 71179072];
          }
          else
          {
            v233 = dword_140404A6C[v230 + 71408449];
            if ( v233 > 2 )
            {
              dword_140404A6C[v230 + 71408449] = 0;
              v233 = 0;
              v231 = dword_140404A6C[v228 + 71359297];
            }
            v232 = dword_140404A6C[3 * v231 + 71179072 + v233];
          }
          dword_140404A6C[v229 + 71408447] = v232;
          dword_140404A6C[v229 + 71408448] = dword_140404A6C[3 * v227 + 71179073];
          if ( dword_140404A6C[v228 + 71359298] == -1 )
          {
            v234 = dword_140404A6C[3 * v227 + 71179073];
          }
          else
          {
            v235 = dword_140404A6C[v229 + 71408449];
            if ( v235 > 2 )
            {
              dword_140404A6C[v229 + 71408449] = 0;
              v235 = 0;
            }
            v234 = dword_140404A6C[3 * dword_140404A6C[v228 + 71359298] + 71179072 + v235];
          }
          dword_140404A6C[v229 + 71408449] = v234;
          dword_140404A6C[v229 + 71408450] = dword_140404A6C[3 * v227 + 71179074];
          if ( dword_140404A6C[v228 + 71359299] == -1 )
          {
            v236 = dword_140404A6C[3 * v227 + 71179074];
          }
          else
          {
            v237 = dword_140404A6C[v229 + 71408451];
            if ( v237 > 2 )
            {
              dword_140404A6C[v229 + 71408451] = 0;
              v237 = 0;
            }
            v236 = dword_140404A6C[3 * dword_140404A6C[v228 + 71359299] + 71179072 + v237];
          }
          dword_140404A6C[v229 + 71408451] = v236;
          ++v227;
          v206 = dword_140404A6C[71179071];
          v228 += 3;
          v229 += 6;
        }
        while ( v227 < (int)dword_140404A6C[71179071] );
      }
      v238 = 2310LL * v205;
      v239 = 0;
      dword_140404A6C[71228224] = 0;
      LODWORD(v240) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = 0;
      for ( k = 0; k < 256; ++k )
      {
        v242 = 0;
        LOBYTE(dword_140404A6C[3 * v238 + 83200514 + 3 * (int)v240]) = k;
        dword_140404A6C[3 * v238 + 83200515 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = 0;
        dword_140404A6C[3 * v238 + 83200516 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = v239;
        if ( v206 > 0 )
        {
          v243 = &dword_140404A6C[71179072];
          v244 = &dword_140404A6C[71277377];
          do
          {
            if ( *v244 == k )
            {
              v245 = (int)(3 * v239);
              *(_QWORD *)&dword_140404A6C[v245 + 71228225] = *(_QWORD *)v243;
              dword_140404A6C[v245 + 71228227] = v243[2];
              v246 = v238 + *(int *)((char *)&dword_140404A6C[83200513] + v1);
              v206 = dword_140404A6C[71179071];
              v239 = ++dword_140404A6C[71228224];
              ++dword_140404A6C[3 * v246 + 83200515];
            }
            ++v242;
            ++v244;
            v243 += 3;
          }
          while ( v242 < v206 );
        }
        v240 = *(int *)((char *)&dword_140404A6C[83200513] + v1);
        if ( (int)dword_140404A6C[3 * v238 + 83200515 + 3 * v240] > 0 )
        {
          LODWORD(v240) = v240 + 1;
          *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = v240;
        }
      }
      sub_140193FE0(2, v205, (__int64)&dword_140404A6C[71228225], 12 * v206);
      sub_140193FE0(4, v205, (__int64)&dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef v253
#undef v254
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260
#undef v261
#undef v262
#undef v263
#undef v264
#undef v265
#undef v266
#undef v267
#undef v268
#undef v269
#undef v271
#undef v272

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3550: using guessed type int dword_1402B3550[];
// 1402B3554: using guessed type int dword_1402B3554[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3660: using guessed type int dword_1402B3660[];
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 1513BB76C: using guessed type unsigned int;
// 15155B7B0: using guessed type unsigned int;
// 16B27E3B8: using guessed type unsigned int;
// 1A4CFF7E4: using guessed type unsigned int;

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

//----- (000000014000F830) ----------------------------------------------------
void            sub_14000F830(signed int a1, int a2, unsigned int a3, int a4, unsigned int a5, _WORD *a6)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned int v9; // ebp
  __int64 v10; // r10
  int v11; // edx
  signed int v12; // ecx
  int v13; // r8d
  signed int v14; // r11d
  int v15; // r9d
  unsigned int v16; // r10d
  signed int v17; // eax
  __int64 v18; // r8
  unsigned int *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  signed int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  signed int i; // r14d
  signed int j; // ebx
  unsigned int v33; // edi
  unsigned int v34; // ebp
  int v35; // ebx
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  unsigned int v39; // esi
  unsigned int v40; // r14d
  unsigned int v41; // r15d
  int v42; // eax
  int v43; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000F830[112];
#define v44 (*(int (*))(void *)(sr_frame_14000F830 + 0)) /* [rsp+30h] */
#define v45 (*(int (*))(void *)(sr_frame_14000F830 + 4)) /* [rsp+34h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define v47 (*(int (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14000F830 + 24)) /* [rsp+48h] */
#define v49 (*(int (*))(void *)(sr_frame_14000F830 + 96)) /* [rsp+90h] */

  v6 = a1;
  v7 = a4;
  v9 = a2;
  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && a4 >= 0 )
  {
    v10 = 263004LL * a1;
    v11 = (unsigned int)a2 >> 6;
    v12 = dword_140404A6C[v10 + 111579650];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < (int)dword_140404A6C[v10 + 111579651] )
      {
        v14 = dword_140404A6C[v10 + 111579652];
        v15 = (unsigned int)a4 >> 6;
        if ( v15 < v14 )
        {
          if ( a5 )
          {
            v16 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655] + 4LL * (v11 + v12 * (v15 + v14 * v13)));
            if ( v16 != -1 || (v16 = sub_140010020(v6, v11, v13, v15), v16 != -1) )
            {
              v17 = dword_140404A6C[263004 * v6
                                  + 111579985
                                  + 513 * (int)v16
                                  + (int)(((v9 >> 3) & 7) + 8 * (((v7 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
              if ( v17 != -1 || (v17 = sub_140012490(v6, v16, v9 >> 3, a3 >> 3, v7 >> 3), v17 != -1) )
              {
                if ( (a5 & 0xE0000000) == 0x40000000 )
                {
                  v18 = (v9 & 7) + 8 * ((v7 & 7) + 8 * (a3 & 7));
                  v19 = &dword_140404A6C[6930 * v17 + 83194359 + v18];
                  *v19 = ((HIBYTE(a5) & 3) << 24) | 0x4000003F;
                  v20 = 13860LL * v17 + 8 * v18;
                  *((_WORD *)&dword_140404A6C[83195383] + v20) = *a6;
                  if ( (__int16)*a6 >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x40u;
                  *((_WORD *)&dword_140404A6C[83195383] + v20 + 1) = a6[1];
                  if ( (__int16)a6[1] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x80u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20) = a6[2];
                  if ( (__int16)a6[2] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x100u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20 + 1) = a6[3];
                  if ( (__int16)a6[3] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x200u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20) = a6[4];
                  if ( (__int16)a6[4] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x400u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20 + 1) = a6[5];
                  if ( (__int16)a6[5] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x800u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20) = a6[6];
                  if ( (__int16)a6[6] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x1000u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20 + 1) = a6[7];
                  if ( (__int16)a6[7] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x2000u;
                  v21 = sub_1400129D0(v6, v9, a3 - 1, v7);
                  if ( (v21 & 0xE0000000) == 0x40000000 || !a3 )
                  {
                    *v19 &= ~1u;
                    sub_140017AC0(v6, v9, a3 - 1, v7, v21 & 0xFFFFFFDF);
                  }
                  v22 = sub_1400129D0(v6, v9, a3 + 1, v7);
                  if ( (v22 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x20u;
                    sub_140017AC0(v6, v9, a3 + 1, v7, v22 & 0xFFFFFFFE);
                  }
                  v23 = sub_1400129D0(v6, v9, a3, v7 + 1);
                  if ( (v23 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~2u;
                    sub_140017AC0(v6, v9, a3, v7 + 1, v23 & 0xFFFFFFF7);
                  }
                  v24 = sub_1400129D0(v6, v9, a3, v7 - 1);
                  if ( (v24 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~8u;
                    sub_140017AC0(v6, v9, a3, v7 - 1, v24 & 0xFFFFFFFD);
                  }
                  v25 = sub_1400129D0(v6, v9 - 1, a3, v7);
                  if ( (v25 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~4u;
                    sub_140017AC0(v6, v9 - 1, a3, v7, v25 & 0xFFFFFFEF);
                  }
                  v26 = sub_1400129D0(v6, v9 + 1, a3, v7);
                  if ( (v26 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x10u;
                    sub_140017AC0(v6, v9 + 1, a3, v7, v26 & 0xFFFFFFFB);
                  }
                  sub_1400173C0(v6, v9, a3, v7);
                }
                else if ( (a5 & 0xE0000000) == 0x80000000 )
                {
                  v27 = 0;
                  v28 = (v9 & 7) + 8 * ((v7 & 7) + 8 * (a3 & 7));
                  dword_140404A6C[6930 * v17 + 83194359 + v28] = a5;
                  v48 = v28 + 6930LL * v17;
                  v29 = 13860LL * v17 + 8 * v28;
                  *((_WORD *)&dword_140404A6C[83195383] + v29) = *a6;
                  *((_WORD *)&dword_140404A6C[83195383] + v29 + 1) = a6[1];
                  *((_WORD *)&dword_140404A6C[83195384] + v29) = a6[2];
                  *((_WORD *)&dword_140404A6C[83195384] + v29 + 1) = a6[3];
                  *((_WORD *)&dword_140404A6C[83195385] + v29) = a6[4];
                  *((_WORD *)&dword_140404A6C[83195385] + v29 + 1) = a6[5];
                  *((_WORD *)&dword_140404A6C[83195386] + v29) = a6[6];
                  *((_WORD *)&dword_140404A6C[83195386] + v29 + 1) = a6[7];
                  v30 = 232LL * (unsigned __int16)a5;
                  v46 = v30;
                  if ( *(int *)((char *)&dword_140404A6C[20074646] + v30) > 0 )
                  {
                    do
                    {
                      for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v30); ++i )
                      {
                        for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v30); ++j )
                        {
                          if ( v27 || i || j )
                          {
                            v33 = i + v7;
                            v34 = j + v9;
                            sub_140017AC0(v6, v34, v27 + a3, v33, j | ((i | (v27 << 8)) << 8) | 0xC0000000);
                            sub_1400173C0(v6, v34, v27 + a3, v33);
                            v30 = v46;
                            v9 = a2;
                            v7 = a4;
                          }
                        }
                      }
                      ++v27;
                    }
                    while ( v27 < *(int *)((char *)&dword_140404A6C[20074646] + v30) );
                  }
                  v35 = 0;
                  v49 = dword_140404A6C[v48 + 83194871];
                  do
                  {
                    v36 = 0;
                    v37 = 0;
                    v38 = 0;
                    if ( v35 )
                    {
                      switch ( v35 )
                      {
                        case 1:
                          v37 = -1;
                          break;
                        case 2:
                          v38 = -1;
                          break;
                        case 3:
                          v38 = 1;
                          break;
                        case 4:
                          v37 = 1;
                          break;
                        default:
                          v36 = 1;
                          break;
                      }
                    }
                    else
                    {
                      v36 = -1;
                    }
                    v39 = v38 + v7;
                    v40 = v37 + a3;
                    v41 = v36 + v9;
                    v42 = sub_1400129D0(v6, v36 + v9, v37 + a3, v38 + v7);
                    if ( (v42 & 0xE0000000) == 0x80000000 )
                    {
                      v45 = (unsigned __int16)v42;
                      v49 = sub_14001B390((unsigned __int16)a5, v35, v49, (unsigned __int16)v42);
                      v43 = sub_140013020(v6, v41, v40, v39);
                      v44 = v43 == -1
                          ? 0
                          : dword_140404A6C[6930 * v43 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)];
                      v47 = sub_140013020(v6, v41, v40, v39);
                      if ( v47 != -1 )
                        dword_140404A6C[6930 * v47 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)] = sub_14001B390(v45, 5 - v35, v44, (unsigned __int16)a5);
                    }
                    ++v35;
                  }
                  while ( v35 < 6 );
                  dword_140404A6C[v48 + 83194871] = v49;
                  sub_1400173C0(v6, v9, a3, v7);
                }
              }
            }
          }
        }
      }
    }
  }
}
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140010020) ----------------------------------------------------
__int64            sub_140010020(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v6; // r8
  signed int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int *i; // rax
  __int64 v12; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( a2 >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( a4 >= v7 )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  for ( i = &dword_140404A6C[v6 + 111579984]; *i; i += 513 )
  {
    ++v8;
    if ( ++v9 >= 512 )
      return 0xFFFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
            + 4LL * (int)(a2 + dword_140404A6C[v6 + 111579650] * (a4 + a3 * v7))) = v8;
  v12 = v6 * 4 + 2052LL * v8;
  *(unsigned int *)((char *)&dword_140404A6C[111579984] + v12) = 1;
  sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[111579985] + v12)), 0xFFu, 0x800u);
  return v8;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140010110) ----------------------------------------------------
__int64 sub_140010110()
{
  int *v0; // rsi
  unsigned int v1; // eax
  unsigned int *v2; // rcx
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 i; // r9
  __int64 v8; // rdx
  unsigned int *v9; // rcx
  __int64 j; // r9
  __int64 v11; // rdx
  unsigned int *v12; // rcx
  unsigned int v13; // r14d
  int v14; // ebx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int *v17; // r10
  unsigned int *v18; // rcx
  unsigned int *v19; // rdx
  char v20; // al
  unsigned int *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned int *v27; // rcx
  char *v28; // rdx
  char v29; // al
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  char *v40; // rcx
  char v41; // al
  __int64 v42; // rsi
  unsigned int v43; // r9d
  __int64 v44; // r11
  unsigned int *v45; // r10
  unsigned int *v46; // rax
  char *v47; // r8
  int v48; // ecx
  int v49; // edx
  int v50; // r13d
  __int64 v51; // rbx
  __int64 v52; // r12
  unsigned int *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // r14
  int m; // r14d
  __int64 v57; // r12
  __int64 v58; // rdi
  unsigned int *v59; // rbx
  __int64 v60; // rdi
  unsigned int *v61; // rbx
  int v62; // edi
  int *v63; // rbx
  int v64; // esi
  unsigned int *v65; // rdi
  signed __int64 v66; // rbx
  unsigned int *v67; // rdx
  unsigned int *v68; // rcx
  __int64 v69; // r8
  unsigned int v70; // eax
  float v71; // xmm8_4
  float v72; // xmm9_4
  float v73; // xmm7_4
  float v74; // xmm3_4
  float v75; // xmm7_4
  float v76; // xmm8_4
  float v77; // xmm9_4
  int v78; // edx
  int v79; // ecx
  int v80; // edi
  int v81; // ebx
  int v82; // r9d
  signed int v83; // esi
  int v84; // edi
  int v85; // ebx
  int v86; // esi
  int v87; // edi
  int v88; // ebx
  int v89; // edi
  int v90; // ebx
  int v91; // edi
  int v92; // ebx
  int v93; // esi
  int v94; // edi
  int v95; // ebx
  __int64 v96; // r8
  unsigned int *v97; // rdi
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rdi
  int v101; // ebx
  __int64 v102; // r15
  int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // r12
  __int64 v106; // r14
  __int64 v107; // rbx
  float v108; // xmm7_4
  float v109; // xmm9_4
  __int64 v110; // rsi
  int *v111; // rdi
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm4_4
  float v115; // xmm1_4
  unsigned int v116; // xmm6_4
  float v117; // xmm3_4
  int v118; // ecx
  __int64 v119; // rdx
  __int64 n; // rbx
  __int128 v121; // xmm0
  __int64 v122; // rsi
  int *v123; // rdi
  __int128 v124; // xmm6
  int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // rbx
  __int64 v128; // r13
  int v129; // ecx
  __int64 v130; // rdx
  int v131; // ecx
  __int64 v132; // rdx
  __int64 v133; // rdi
  int v134; // ecx
  __int64 v135; // rdx
  __int64 v136; // rdi
  int v137; // ecx
  __int64 v138; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140010110[800];
#define v140 (*(__int64 (*))(void *)(sr_frame_140010110 + 0)) /* [rsp+8h] */
#define v141 (*(unsigned int (*))(void *)(sr_frame_140010110 + 80)) /* [rsp+58h] */
#define v142 (*(float (*))(void *)(sr_frame_140010110 + 88)) /* [rsp+60h] */
#define v143 (*(float (*))(void *)(sr_frame_140010110 + 92)) /* [rsp+64h] */
#define v144 (*(float (*))(void *)(sr_frame_140010110 + 96)) /* [rsp+68h] */
#define Buffer (*(int (*))(void *)(sr_frame_140010110 + 104)) /* [rsp+70h] */
#define k (*(int (*))(void *)(sr_frame_140010110 + 108)) /* [rsp+74h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_140010110 + 112)) /* [rsp+78h] */
#define v148 (*(__int64 (*))(void *)(sr_frame_140010110 + 120)) /* [rsp+80h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_140010110 + 128)) /* [rsp+88h] */
#define v150 (*(__int64 (*))(void *)(sr_frame_140010110 + 136)) /* [rsp+90h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140010110 + 144)) /* [rsp+98h] */
#define v152 (*(__int64 (*))(void *)(sr_frame_140010110 + 160)) /* [rsp+A8h] */
#define v153 (*(_DWORD (*)[8])(void *)(sr_frame_140010110 + 176)) /* [rsp+B8h] */
#define v154 (*(__int64 (*))(void *)(sr_frame_140010110 + 208)) /* [rsp+D8h] */
#define v155 (*(float (*))(void *)(sr_frame_140010110 + 216)) /* [rsp+E0h] */
#define v156 (*(__int64 (*))(void *)(sr_frame_140010110 + 220)) /* [rsp+E4h] */
#define v157 (*(float (*))(void *)(sr_frame_140010110 + 228)) /* [rsp+ECh] */
#define v158 (*(int (*))(void *)(sr_frame_140010110 + 232)) /* [rsp+F0h] */
#define v159 (*(int (*))(void *)(sr_frame_140010110 + 236)) /* [rsp+F4h] */
#define v160 (*(float (*))(void *)(sr_frame_140010110 + 240)) /* [rsp+F8h] */
#define v161 (*(int (*))(void *)(sr_frame_140010110 + 244)) /* [rsp+FCh] */
#define v162 (*(int (*))(void *)(sr_frame_140010110 + 248)) /* [rsp+100h] */
#define v163 (*(float (*))(void *)(sr_frame_140010110 + 252)) /* [rsp+104h] */
#define v164 (*(__int64 (*))(void *)(sr_frame_140010110 + 256)) /* [rsp+108h] */
#define v165 (*(float (*))(void *)(sr_frame_140010110 + 264)) /* [rsp+110h] */
#define v166 (*(int (*))(void *)(sr_frame_140010110 + 268)) /* [rsp+114h] */
#define Str1 (*(char (*)[512])(void *)(sr_frame_140010110 + 272)) /* [rsp+118h] */
#define v168 (*(__int64 (*))(void *)(sr_frame_140010110 + 784)) /* [rsp+318h] */

  v0 = (int *)&dword_140404A6C[19928872];
  v1 = 0;
  v2 = &dword_140404A6C[19928872];
  dword_140404A6C[19928869] = 0;
  do
  {
    *v2++ = v1;
    v1 = ++dword_140404A6C[19928869];
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[19928888] );
  dword_140404A6C[19928888] = v1;
  dword_140404A6C[19928889] = v1 + 1;
  dword_140404A6C[19928890] = v1 + 2;
  dword_140404A6C[19928891] = v1 + 3;
  dword_140404A6C[19928892] = v1 + 4;
  dword_140404A6C[19928893] = v1 + 5;
  dword_140404A6C[19928894] = v1 + 6;
  dword_140404A6C[19928895] = v1 + 7;
  dword_140404A6C[19928896] = v1 + 8;
  dword_140404A6C[19928897] = v1 + 9;
  dword_140404A6C[19928898] = v1 + 10;
  dword_140404A6C[19928899] = v1 + 11;
  dword_140404A6C[19928900] = v1 + 12;
  dword_140404A6C[19928901] = v1 + 13;
  dword_140404A6C[19928902] = v1 + 14;
  dword_140404A6C[19928903] = v1 + 15;
  dword_140404A6C[19928904] = v1 + 16;
  dword_140404A6C[19928905] = v1 + 17;
  dword_140404A6C[19928906] = v1 + 18;
  dword_140404A6C[19928907] = v1 + 19;
  dword_140404A6C[19931162] = v1 + 20;
  dword_140404A6C[19931163] = v1 + 21;
  dword_140404A6C[19931164] = v1 + 22;
  dword_140404A6C[19931165] = v1 + 23;
  dword_140404A6C[19931166] = v1 + 24;
  dword_140404A6C[19931167] = v1 + 25;
  dword_140404A6C[19931168] = v1 + 26;
  dword_140404A6C[19931169] = v1 + 27;
  dword_140404A6C[19931170] = v1 + 28;
  dword_140404A6C[19931171] = v1 + 29;
  dword_140404A6C[19931172] = v1 + 30;
  dword_140404A6C[19931173] = v1 + 31;
  dword_140404A6C[19931174] = v1 + 32;
  dword_140404A6C[19931175] = v1 + 33;
  dword_140404A6C[19931176] = v1 + 34;
  dword_140404A6C[19931177] = v1 + 35;
  dword_140404A6C[19931178] = v1 + 36;
  dword_140404A6C[19931179] = v1 + 37;
  dword_140404A6C[19931180] = v1 + 38;
  dword_140404A6C[19931181] = v1 + 39;
  dword_140404A6C[19928908] = v1 + 40;
  dword_140404A6C[19928909] = v1 + 41;
  v149 = 4;
  dword_140404A6C[19928910] = v1 + 42;
  v150 = 16;
  dword_140404A6C[19928911] = v1 + 43;
  v3 = 9;
  v4 = 16;
  dword_140404A6C[19928912] = v1 + 44;
  v5 = 4;
  dword_140404A6C[19928913] = v1 + 45;
  dword_140404A6C[19928914] = v1 + 46;
  dword_140404A6C[19928915] = v1 + 47;
  dword_140404A6C[19928916] = v1 + 48;
  dword_140404A6C[19928917] = v1 + 49;
  v6 = v1 + 50;
  dword_140404A6C[19928869] = v6;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( v4 > 0 )
      {
        v8 = v5;
        v9 = &dword_140404A6C[16 * (i + v4) + 19929066];
        do
        {
          *v9++ = v6;
          v6 = ++dword_140404A6C[19928869];
          --v8;
        }
        while ( v8 );
      }
    }
    for ( j = 0; j < 4; ++j )
    {
      if ( v4 > 0 )
      {
        v11 = v5;
        v12 = &dword_140404A6C[16 * (j + v4) + 19930090];
        do
        {
          *v12++ = v6;
          v6 = ++dword_140404A6C[19928869];
          --v11;
        }
        while ( v11 );
      }
    }
    ++v5;
    v4 += 4;
    --v3;
  }
  while ( v3 );
  dword_140404A6C[19928870] = (v6 + 3) & 0xFFFFFFFC;
  dword_140404A6C[19931118] = (v6 + 3) & 0xFFFFFFFC;
  dword_140404A6C[19931119] = dword_140404A6C[19928870] + 1;
  dword_140404A6C[19931120] = dword_140404A6C[19928870] + 2;
  dword_140404A6C[19931121] = dword_140404A6C[19928870] + 3;
  dword_140404A6C[19931122] = dword_140404A6C[19928870] + 4;
  dword_140404A6C[19931123] = dword_140404A6C[19928870] + 5;
  dword_140404A6C[19931124] = dword_140404A6C[19928870] + 6;
  dword_140404A6C[19931125] = dword_140404A6C[19928870] + 7;
  dword_140404A6C[19931138] = dword_140404A6C[19928870] + 8;
  dword_140404A6C[19931139] = dword_140404A6C[19928870] + 9;
  dword_140404A6C[19931140] = dword_140404A6C[19928870] + 10;
  dword_140404A6C[19931141] = dword_140404A6C[19928870] + 11;
  dword_140404A6C[19931142] = dword_140404A6C[19928870] + 12;
  dword_140404A6C[19931143] = dword_140404A6C[19928870] + 13;
  dword_140404A6C[19931144] = dword_140404A6C[19928870] + 14;
  dword_140404A6C[19931145] = dword_140404A6C[19928870] + 15;
  dword_140404A6C[19931126] = dword_140404A6C[19928870] + 16;
  dword_140404A6C[19931127] = dword_140404A6C[19928870] + 17;
  dword_140404A6C[19931128] = dword_140404A6C[19928870] + 18;
  dword_140404A6C[19931129] = dword_140404A6C[19928870] + 19;
  dword_140404A6C[19931130] = dword_140404A6C[19928870] + 20;
  dword_140404A6C[19931131] = dword_140404A6C[19928870] + 21;
  dword_140404A6C[19931132] = dword_140404A6C[19928870] + 22;
  dword_140404A6C[19931133] = dword_140404A6C[19928870] + 23;
  dword_140404A6C[19931134] = dword_140404A6C[19928870] + 24;
  dword_140404A6C[19931135] = dword_140404A6C[19928870] + 25;
  dword_140404A6C[19931136] = dword_140404A6C[19928870] + 26;
  dword_140404A6C[19931137] = dword_140404A6C[19928870] + 27;
  dword_140404A6C[19931146] = dword_140404A6C[19928870] + 28;
  dword_140404A6C[19931147] = dword_140404A6C[19928870] + 29;
  dword_140404A6C[19931148] = dword_140404A6C[19928870] + 30;
  dword_140404A6C[19931149] = dword_140404A6C[19928870] + 31;
  dword_140404A6C[19931150] = dword_140404A6C[19928870] + 32;
  dword_140404A6C[19931151] = dword_140404A6C[19928870] + 33;
  dword_140404A6C[19931152] = dword_140404A6C[19928870] + 34;
  dword_140404A6C[19931153] = dword_140404A6C[19928870] + 35;
  dword_140404A6C[19931154] = dword_140404A6C[19928870] + 36;
  dword_140404A6C[19931155] = dword_140404A6C[19928870] + 37;
  dword_140404A6C[19931156] = dword_140404A6C[19928870] + 38;
  dword_140404A6C[19931157] = dword_140404A6C[19928870] + 39;
  v13 = dword_140404A6C[293512634];
  dword_140404A6C[19931158] = dword_140404A6C[19928870] + 40;
  v14 = 0;
  dword_140404A6C[293119325] = 0;
  dword_140404A6C[19931159] = dword_140404A6C[19928870] + 41;
  v15 = 0;
  dword_140404A6C[19931160] = dword_140404A6C[19928870] + 42;
  dword_140404A6C[19931161] = dword_140404A6C[19928870] + 43;
  dword_140404A6C[19931182] = dword_140404A6C[19928870] + 44;
  dword_140404A6C[19931183] = dword_140404A6C[19928870] + 45;
  dword_140404A6C[19931184] = dword_140404A6C[19928870] + 46;
  dword_140404A6C[19931185] = dword_140404A6C[19928870] + 47;
  dword_140404A6C[19931186] = dword_140404A6C[19928870] + 48;
  dword_140404A6C[19931187] = dword_140404A6C[19928870] + 49;
  dword_140404A6C[19931188] = dword_140404A6C[19928870] + 50;
  dword_140404A6C[19931189] = dword_140404A6C[19928870] + 51;
  dword_140404A6C[19931194] = dword_140404A6C[19928870] + 52;
  dword_140404A6C[19931195] = dword_140404A6C[19928870] + 53;
  dword_140404A6C[19931196] = dword_140404A6C[19928870] + 54;
  dword_140404A6C[19931197] = dword_140404A6C[19928870] + 55;
  dword_140404A6C[19931198] = dword_140404A6C[19928870] + 56;
  dword_140404A6C[19931199] = dword_140404A6C[19928870] + 57;
  dword_140404A6C[19931200] = dword_140404A6C[19928870] + 58;
  dword_140404A6C[19931201] = dword_140404A6C[19928870] + 59;
  dword_140404A6C[19931202] = dword_140404A6C[19928870] + 60;
  dword_140404A6C[19931203] = dword_140404A6C[19928870] + 61;
  dword_140404A6C[19931204] = dword_140404A6C[19928870] + 62;
  dword_140404A6C[19931205] = dword_140404A6C[19928870] + 63;
  dword_140404A6C[19931206] = dword_140404A6C[19928870] + 64;
  dword_140404A6C[19931207] = dword_140404A6C[19928870] + 65;
  dword_140404A6C[19931208] = dword_140404A6C[19928870] + 66;
  dword_140404A6C[19931209] = dword_140404A6C[19928870] + 67;
  dword_140404A6C[19931210] = dword_140404A6C[19928870] + 68;
  dword_140404A6C[19931211] = dword_140404A6C[19928870] + 69;
  dword_140404A6C[19931212] = dword_140404A6C[19928870] + 70;
  dword_140404A6C[19931213] = dword_140404A6C[19928870] + 71;
  v16 = dword_140404A6C[19928870] + 72;
  dword_140404A6C[19928869] = dword_140404A6C[19928870] + 72;
  if ( dword_140404A6C[293512634] )
  {
    v17 = &dword_140404A6C[293512635];
    do
    {
      if ( *v17 == 1482293249 )
      {
        v18 = &dword_140404A6C[16 * (__int64)(int)v15 + 293512638];
        v19 = &dword_140404A6C[16 * (__int64)v14 + 293119326];
        do
        {
          v20 = *(_BYTE *)v18;
          v18 = (unsigned int *)((char *)v18 + 1);
          *(_BYTE *)v19 = v20;
          v19 = (unsigned int *)((char *)v19 + 1);
        }
        while ( v20 );
        v14 = ++dword_140404A6C[293119325];
      }
      ++v15;
      v17 += 16;
    }
    while ( v15 < v13 );
    if ( v14 > 0 )
    {
      v21 = &dword_140404A6C[19931216];
      v22 = (unsigned int)v14;
      do
      {
        *(v21 - 1) = v16;
        v21 += 4;
        *(v21 - 4) = ++dword_140404A6C[19928869];
        *(v21 - 3) = ++dword_140404A6C[19928869];
        *(v21 - 2) = ++dword_140404A6C[19928869];
        v16 = ++dword_140404A6C[19928869];
        --v22;
      }
      while ( v22 );
    }
  }
  dword_140404A6C[19928871] = v16;
  dword_140404A6C[19928919] = v16 + 1;
  dword_140404A6C[19928918] = v16;
  dword_140404A6C[19928920] = v16 + 2;
  dword_140404A6C[19928921] = v16 + 3;
  dword_140404A6C[19928869] = v16 + 4;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[23937125]), 0xFFu, 0x4000000u);
  v23 = 0;
  v24 = 0;
  dword_140404A6C[19931214] = 0;
  LODWORD(v147) = 0;
  if ( v14 > 0 )
  {
    v25 = 0;
    v148 = 0;
    while ( 1 )
    {
      dword_140404A6C[19931214] = v23 + 1;
      v26 = (int)dword_140404A6C[4 * v25 + 19931215];
      v27 = &dword_140404A6C[16 * (__int64)v24 + 293119326];
      v141 = dword_140404A6C[4 * v25 + 19931215];
      v28 = (char *)(Str1 - (char *)v27);
      do
      {
        v29 = *(_BYTE *)v27;
        v28[(_QWORD)v27] = *(_BYTE *)v27;
        v27 = (unsigned int *)((char *)v27 + 1);
      }
      while ( v29 );
      v30 = strcmp_sr(Str1, "bc-safe01");
      v31 = dword_140404A6C[70087027];
      if ( !v30 )
        v31 = v26;
      dword_140404A6C[70087027] = v31;
      v32 = strcmp_sr(Str1, "bc-roof-4x4");
      v33 = dword_140404A6C[70087026];
      if ( !v32 )
        v33 = v26;
      dword_140404A6C[70087026] = v33;
      v34 = strcmp_sr(Str1, "bc-roof-5x4");
      v35 = dword_140404A6C[70087025];
      if ( !v34 )
        v35 = v26;
      dword_140404A6C[70087025] = v35;
      v36 = strcmp_sr(Str1, "bc-roof-2x4");
      v37 = dword_140404A6C[40714342];
      if ( !v36 )
        v37 = v26;
      dword_140404A6C[40714342] = v37;
      v38 = strcmp_sr(Str1, "basetable");
      v39 = dword_140404A6C[40714341];
      if ( !v38 )
        v39 = v26;
      dword_140404A6C[40714341] = v39;
      if ( !strcmp_sr(Str1, "garagedoor") )
      {
        dword_140404A6C[19931114] = v26;
        dword_140404A6C[19931115] = v26 + 1;
        dword_140404A6C[19931116] = v26 + 2;
        dword_140404A6C[19931117] = v26 + 3;
        dword_140404A6C[58 * v26 + 20074650] = 1;
        dword_140404A6C[58 * v26 + 20074708] = 1;
        dword_140404A6C[58 * v26 + 20074766] = 1;
        dword_140404A6C[58 * v26 + 20074824] = 1;
      }
      dword_140404A6C[70425405] = 0;
      dword_140404A6C[70998846] = 0;
      dword_140404A6C[71179071] = 0;
      dword_140404A6C[71655762] = 0;
      v40 = Str1;
      do
      {
        v41 = *v40;
        *((_BYTE *)&dword_140404A6C[20074597] + 232 * v26 - (_QWORD)Str1 + (_QWORD)v40) = *v40;
        ++v40;
      }
      while ( v41 );
      v42 = *(_QWORD *)&dword_140404A6C[293512629];
      if ( *(_QWORD *)&dword_140404A6C[293512629] )
      {
        if ( !dword_140404A6C[293512631] )
        {
          v43 = 0;
          v44 = 0;
          if ( v13 )
          {
            v45 = &dword_140404A6C[293512635];
            while ( 1 )
            {
              if ( *v45 == 1482293249 )
              {
                v46 = &dword_140404A6C[16 * (__int64)(int)v43 + 293512638];
                v47 = (char *)(Str1 - (char *)v46);
                do
                {
                  v48 = (unsigned __int8)v47[(_QWORD)v46];
                  v49 = *(unsigned __int8 *)v46 - v48;
                  if ( v49 )
                    break;
                  v46 = (unsigned int *)((char *)v46 + 1);
                }
                while ( v48 );
                if ( !v49 )
                  break;
              }
              ++v43;
              ++v44;
              v45 += 16;
              if ( v43 >= v13 )
                goto LABEL_55;
            }
            sub_14020C4A8(*(__int64 *)&dword_140404A6C[293512629], dword_140404A6C[16 * v44 + 293512636], 0);
            LODWORD(v26) = v141;
            v42 = *(_QWORD *)&dword_140404A6C[293512629];
          }
        }
LABEL_55:
        if ( v42 )
        {
          Buffer = 1;
          fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v42));
          if ( Buffer == 1 )
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852365]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852366]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852367]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852368]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852369]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852370]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852371]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852372]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852373]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852374]), 4, 1, (FILE *)(uintptr_t)(v42));
            v50 = 0;
            for ( k = 0; k < (int)dword_140404A6C[19852374]; v50 = k )
            {
              v51 = 87LL * v50;
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852378]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852376]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852379]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852377]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852460]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852461]), 4, 1, (FILE *)(uintptr_t)(v42));
              v52 = 4;
              v53 = &dword_140404A6C[v51 + 19852428];
              v54 = (intptr_t)&dword_140404A6C[v51 + 19852380];
              do
              {
                v55 = 4;
                do
                {
                  fread_sr((void *)(uintptr_t)(v54), 4, 3, (FILE *)(uintptr_t)(v42));
                  fread_sr((void *)(uintptr_t)(v53), 4, 2, (FILE *)(uintptr_t)(v42));
                  v54 += 12;
                  v53 += 2;
                  --v55;
                }
                while ( v55 );
                --v52;
              }
              while ( v52 );
              ++k;
            }
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19896919]), 4, 1, (FILE *)(uintptr_t)(v42));
            for ( m = 0; m < (int)dword_140404A6C[19896919]; ++m )
            {
              v57 = 31LL * m;
              v58 = 8;
              v59 = &dword_140404A6C[v57 + 19896920];
              do
              {
                fread_sr((void *)(uintptr_t)(v59), 4, 3, (FILE *)(uintptr_t)(v42));
                v59 += 3;
                --v58;
              }
              while ( v58 );
              v60 = 6;
              v61 = &dword_140404A6C[v57 + 19896944];
              do
              {
                fread_sr((void *)(uintptr_t)(v61++), 4, 1, (FILE *)(uintptr_t)(v42));
                --v60;
              }
              while ( v60 );
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v57 + 19896950]), 4, 1, (FILE *)(uintptr_t)(v42));
            }
          }
          LODWORD(v26) = v141;
        }
      }
      v62 = 0;
      if ( (int)dword_140404A6C[19896919] > 0 )
      {
        v63 = (int *)&dword_140404A6C[19896944];
        do
        {
          sub_140019C10((__int64)&dword_140404A6C[31 * v62++ + 19896920], *v63, v63[6]);
          v63 += 31;
        }
        while ( v62 < (int)dword_140404A6C[19896919] );
        LODWORD(v26) = v141;
      }
      v64 = 0;
      if ( (int)dword_140404A6C[19852374] > 0 )
        break;
LABEL_93:
      v78 = dword_140404A6C[19852367];
      v79 = dword_140404A6C[19852365];
      if ( dword_140404A6C[19852368] )
      {
        v80 = 0;
        if ( (int)dword_140404A6C[19852367] > 0 )
        {
          do
          {
            v81 = 0;
            if ( v79 > 0 )
            {
              v143 = 0.0;
              v144 = (float)v80;
              do
              {
                v142 = (float)v81;
                sub_140019140(0, &v142);
                v79 = dword_140404A6C[19852365];
                ++v81;
              }
              while ( v81 < (int)dword_140404A6C[19852365] );
              v78 = dword_140404A6C[19852367];
            }
            ++v80;
          }
          while ( v80 < v78 );
          LODWORD(v26) = v141;
        }
      }
      v82 = dword_140404A6C[19852366];
      if ( dword_140404A6C[19852369] )
      {
        v83 = dword_140404A6C[19852366] - 1;
        v84 = 0;
        if ( v78 > 0 )
        {
          do
          {
            v85 = 0;
            if ( v79 > 0 )
            {
              v143 = (float)v83;
              v144 = (float)v84;
              do
              {
                v142 = (float)v85;
                sub_140019140(5, &v142);
                v79 = dword_140404A6C[19852365];
                ++v85;
              }
              while ( v85 < (int)dword_140404A6C[19852365] );
              v78 = dword_140404A6C[19852367];
            }
            ++v84;
          }
          while ( v84 < v78 );
          LODWORD(v26) = v141;
          v82 = dword_140404A6C[19852366];
        }
      }
      if ( dword_140404A6C[19852370] )
      {
        v86 = v78 - 1;
        v87 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v88 = 0;
            if ( v79 > 0 )
            {
              v143 = (float)v87;
              v144 = (float)v86;
              do
              {
                v142 = (float)v88;
                sub_140019140(3, &v142);
                v79 = dword_140404A6C[19852365];
                ++v88;
              }
              while ( v88 < (int)dword_140404A6C[19852365] );
              v82 = dword_140404A6C[19852366];
            }
            ++v87;
          }
          while ( v87 < v82 );
          LODWORD(v26) = v141;
          v78 = dword_140404A6C[19852367];
        }
      }
      if ( dword_140404A6C[19852371] )
      {
        v89 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v90 = 0;
            if ( v78 > 0 )
            {
              v142 = 0.0;
              v143 = (float)v89;
              do
              {
                v144 = (float)v90;
                sub_140019140(4, &v142);
                v78 = dword_140404A6C[19852367];
                ++v90;
              }
              while ( v90 < (int)dword_140404A6C[19852367] );
              v82 = dword_140404A6C[19852366];
            }
            ++v89;
          }
          while ( v89 < v82 );
          LODWORD(v26) = v141;
          v79 = dword_140404A6C[19852365];
        }
      }
      if ( dword_140404A6C[19852372] )
      {
        v91 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v92 = 0;
            if ( v79 > 0 )
            {
              v144 = 0.0;
              v143 = (float)v91;
              do
              {
                v142 = (float)v92;
                sub_140019140(1, &v142);
                v79 = dword_140404A6C[19852365];
                ++v92;
              }
              while ( v92 < (int)dword_140404A6C[19852365] );
              v82 = dword_140404A6C[19852366];
            }
            ++v91;
          }
          while ( v91 < v82 );
          LODWORD(v26) = v141;
          v78 = dword_140404A6C[19852367];
        }
      }
      if ( dword_140404A6C[19852373] )
      {
        v93 = v79 - 1;
        v94 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v95 = 0;
            if ( v78 > 0 )
            {
              v142 = (float)v93;
              v143 = (float)v94;
              do
              {
                v144 = (float)v95;
                sub_140019140(2, &v142);
                v78 = dword_140404A6C[19852367];
                ++v95;
              }
              while ( v95 < (int)dword_140404A6C[19852367] );
              v82 = dword_140404A6C[19852366];
            }
            ++v94;
          }
          while ( v94 < v82 );
          LODWORD(v26) = v141;
          v79 = dword_140404A6C[19852365];
        }
      }
      v96 = 58LL * (int)v26;
      v97 = &dword_140404A6C[v96 + 20074645];
      dword_140404A6C[v96 + 20074645] = v79;
      dword_140404A6C[v96 + 20074646] = v82;
      dword_140404A6C[v96 + 20074647] = v78;
      sub_140017CA0(v26);
      sub_14004D170(++v141, v97);
      sub_140017CA0(v141);
      sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
      sub_140017CA0(++v141);
      sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
      sub_140017CA0(v141 + 1);
      v24 = v147 + 1;
      v25 = v148 + 1;
      LODWORD(v147) = v24;
      ++v148;
      if ( v24 >= (int)dword_140404A6C[293119325] )
      {
        v0 = (int *)&dword_140404A6C[19928872];
        goto LABEL_144;
      }
      v23 = dword_140404A6C[19931214];
      v13 = dword_140404A6C[293512634];
    }
    v65 = &dword_140404A6C[19852382];
    v66 = (char *)&dword_140404A6C[19928791] - (char *)&dword_140404A6C[19852382];
    while ( 1 )
    {
      v67 = v65 + 49;
      v68 = v65;
      v69 = 4;
      do
      {
        v67 += 8;
        *(unsigned int *)((char *)v68 + v66 - 8) = *(v68 - 2);
        *(unsigned int *)((char *)v68 + v66 - 4) = *(v68 - 1);
        *(unsigned int *)((char *)v68 + v66) = *v68;
        v68 += 12;
        *(unsigned int *)((char *)v67 + v66 - 44) = *(v67 - 11);
        *(unsigned int *)((char *)v67 + v66 - 40) = *(v67 - 10);
        *(unsigned int *)((char *)v68 + v66 - 44) = *(v68 - 11);
        *(unsigned int *)((char *)v68 + v66 - 40) = *(v68 - 10);
        *(unsigned int *)((char *)v68 + v66 - 36) = *(v68 - 9);
        *(unsigned int *)((char *)v67 + v66 - 36) = *(v67 - 9);
        *(unsigned int *)((char *)v67 + v66 - 32) = *(v67 - 8);
        *(unsigned int *)((char *)v68 + v66 - 32) = *(v68 - 8);
        *(unsigned int *)((char *)v68 + v66 - 28) = *(v68 - 7);
        *(unsigned int *)((char *)v68 + v66 - 24) = *(v68 - 6);
        *(unsigned int *)((char *)v67 + v66 - 28) = *(v67 - 7);
        *(unsigned int *)((char *)v67 + v66 - 24) = *(v67 - 6);
        *(unsigned int *)((char *)v68 + v66 - 20) = *(v68 - 5);
        *(unsigned int *)((char *)v68 + v66 - 16) = *(v68 - 4);
        *(unsigned int *)((char *)v68 + v66 - 12) = *(v68 - 3);
        *(unsigned int *)((char *)v67 + v66 - 20) = *(v67 - 5);
        *(unsigned int *)((char *)v67 + v66 - 16) = *(v67 - 4);
        --v69;
      }
      while ( v69 );
      v70 = v65[78];
      if ( !v65[79] )
        goto LABEL_91;
      v71 = (float)((float)(*(float *)&dword_140404A6C[19928835] - *(float *)&dword_140404A6C[19928790])
                  * (float)(*(float *)&dword_140404A6C[19928800] - *(float *)&dword_140404A6C[19928791]))
          - (float)((float)(*(float *)&dword_140404A6C[19928836] - *(float *)&dword_140404A6C[19928791])
                  * (float)(*(float *)&dword_140404A6C[19928799] - *(float *)&dword_140404A6C[19928790]));
      v72 = (float)((float)(*(float *)&dword_140404A6C[19928834] - *(float *)&dword_140404A6C[19928789])
                  * (float)(*(float *)&dword_140404A6C[19928799] - *(float *)&dword_140404A6C[19928790]))
          - (float)((float)(*(float *)&dword_140404A6C[19928835] - *(float *)&dword_140404A6C[19928790])
                  * (float)(*(float *)&dword_140404A6C[19928798] - *(float *)&dword_140404A6C[19928789]));
      v73 = (float)((float)(*(float *)&dword_140404A6C[19928836] - *(float *)&dword_140404A6C[19928791])
                  * (float)(*(float *)&dword_140404A6C[19928798] - *(float *)&dword_140404A6C[19928789]))
          - (float)((float)(*(float *)&dword_140404A6C[19928834] - *(float *)&dword_140404A6C[19928789])
                  * (float)(*(float *)&dword_140404A6C[19928800] - *(float *)&dword_140404A6C[19928791]));
      v74 = fsqrt((float)((float)(v73 * v73) + (float)(v71 * v71)) + (float)(v72 * v72));
      if ( v74 == 0.0 )
        break;
      v75 = v73 * (float)(1.0 / v74);
      v76 = v71 * (float)(1.0 / v74);
      v77 = v72 * (float)(1.0 / v74);
      if ( v75 <= 0.70700002 )
      {
        if ( v75 >= -0.70700002 )
        {
          if ( v76 <= 0.70700002 )
          {
            if ( v76 >= -0.70700002 )
            {
              if ( v77 <= 0.70700002 )
                break;
              v70 |= 0x60000u;
            }
            else
            {
              v70 |= 0x10000u;
            }
          }
          else
          {
            v70 |= 0x20000u;
          }
        }
        else
        {
          v70 |= 0x30000u;
        }
      }
      else
      {
        v70 |= 0x40000u;
      }
LABEL_91:
      sub_140001F20(
        (__int64)&dword_140404A6C[19928789],
        (__int64)&dword_140404A6C[19928837],
        *(v65 - 6),
        *(v65 - 4),
        *(v65 - 5),
        *(v65 - 3),
        v70);
      ++v64;
      v65 += 87;
      v66 -= 348LL;
      if ( v64 >= (int)dword_140404A6C[19852374] )
      {
        LODWORD(v26) = v141;
        goto LABEL_93;
      }
    }
    v70 |= 0x50000u;
    goto LABEL_91;
  }
LABEL_144:
  v141 = dword_140404A6C[19928888];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  *(_QWORD *)&dword_140404A6C[19928789] = 0;
  dword_140404A6C[19928791] = 0;
  *(_QWORD *)&dword_140404A6C[19928801] = 0;
  dword_140404A6C[19928803] = 1048576000;
  dword_140404A6C[19928813] = 0;
  dword_140404A6C[19928814] = 1031798784;
  dword_140404A6C[19928815] = 1061158912;
  dword_140404A6C[19928825] = 0;
  dword_140404A6C[19928826] = 1031798784;
  dword_140404A6C[19928827] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928798] = 1065353216;
  dword_140404A6C[19928800] = 0;
  *(_QWORD *)&dword_140404A6C[19928810] = 1065353216;
  dword_140404A6C[19928812] = 1048576000;
  dword_140404A6C[19928822] = 1065353216;
  dword_140404A6C[19928823] = 1031798784;
  dword_140404A6C[19928824] = 1061158912;
  *(_OWORD *)&dword_140404A6C[19928834] = xmmword_140278E40;
  dword_140404A6C[19928838] = 1065353216;
  dword_140404A6C[19928843] = 1065353216;
  dword_140404A6C[19928844] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928861] = 0;
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 8, 3, 0x30000u);
  v98 = v141;
  v99 = 58LL * (int)v141;
  dword_140404A6C[v99 + 20074645] = 1;
  dword_140404A6C[v99 + 20074646] = 1;
  dword_140404A6C[v99 + 20074647] = 1;
  sub_140017CA0(v98);
  v100 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v100;
  }
  while ( v100 );
  v101 = 0;
  LODWORD(v102) = 4;
  do
  {
    v141 = *v0;
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[19928789] = 0;
    *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
    dword_140404A6C[19928798] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
    dword_140404A6C[19928834] = 1065353216;
    dword_140404A6C[19928835] = 1031798784;
    *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
    dword_140404A6C[19928838] = 1065353216;
    dword_140404A6C[19928843] = 1065353216;
    dword_140404A6C[19928844] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928861] = 0;
    sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 5u);
    if ( (v101 & 1) != 0 )
    {
      dword_140404A6C[19928789] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928798] = 0;
      *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 0;
      *(_QWORD *)&dword_140404A6C[19928836] = 0;
      *(_QWORD *)&dword_140404A6C[19928825] = 1065353216;
      dword_140404A6C[19928827] = 0;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 8) != 0 )
    {
      dword_140404A6C[19928789] = 0;
      *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928798] = 0;
      dword_140404A6C[19928799] = 1031798784;
      dword_140404A6C[19928800] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928834] = 0;
      *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 0;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 4) != 0 )
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928791] = 1065353216;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1031798784;
      dword_140404A6C[19928800] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1065353216;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 2) != 0 )
    {
      dword_140404A6C[19928789] = 1065353216;
      dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928791] = 1065353216;
      dword_140404A6C[19928798] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928836] = 0;
      *(_QWORD *)&dword_140404A6C[19928825] = 1065353216;
      dword_140404A6C[19928827] = 1065353216;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    v103 = v141;
    v104 = 58LL * (int)v141;
    dword_140404A6C[v104 + 20074645] = 1;
    dword_140404A6C[v104 + 20074646] = 1;
    dword_140404A6C[v104 + 20074647] = 1;
    sub_140017CA0(v103);
    ++v101;
    ++v0;
  }
  while ( v101 < 16 );
  v105 = v150;
  v106 = 4;
  do
  {
    v107 = 0;
    v108 = 1.0 / (float)(int)v102;
    do
    {
      v109 = 0.0;
      if ( v105 > 0 )
      {
        v110 = v106;
        v111 = (int *)&dword_140404A6C[16 * (v105 + v107) + 19930090];
        do
        {
          v141 = *v111;
          v112 = v109 + 0.0625;
          dword_140404A6C[70425405] = 0;
          dword_140404A6C[70998846] = 0;
          dword_140404A6C[71179071] = 0;
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928791] = 0;
          v113 = v109 + 0.0625;
          dword_140404A6C[19928798] = 1065353216;
          if ( (unsigned __int64)v107 < 2 )
          {
            *(float *)&dword_140404A6C[19928790] = v109 + 0.0625;
            v114 = v109 + 0.0625;
            if ( v107 == 1 )
              goto LABEL_165;
          }
          else
          {
            v113 = v112 + v108;
            *(float *)&dword_140404A6C[19928790] = v112 + v108;
            v114 = v112 + v108;
          }
          if ( v107 == 2 )
          {
LABEL_165:
            *(float *)&dword_140404A6C[19928799] = v109 + 0.0625;
            dword_140404A6C[19928800] = 0;
            *(float *)&v116 = v112 + v108;
            dword_140404A6C[19928834] = 1065353216;
            v115 = v109 + 0.0625;
            if ( v107 == 2 )
              goto LABEL_168;
            goto LABEL_166;
          }
          dword_140404A6C[19928800] = 0;
          v115 = v112 + v108;
          dword_140404A6C[19928834] = 1065353216;
          *(float *)&dword_140404A6C[19928799] = v112 + v108;
          *(float *)&v116 = v112 + v108;
LABEL_166:
          if ( v107 != 3 )
          {
            dword_140404A6C[19928835] = v116;
            v117 = *(float *)&v116;
            dword_140404A6C[19928836] = 1065353216;
            dword_140404A6C[19928825] = 0;
            goto LABEL_169;
          }
LABEL_168:
          *(float *)&dword_140404A6C[19928835] = v109 + 0.0625;
          v117 = v109 + 0.0625;
          dword_140404A6C[19928836] = 1065353216;
          dword_140404A6C[19928825] = 0;
          if ( v107 == 3 )
            goto LABEL_171;
LABEL_169:
          if ( !v107 )
          {
LABEL_171:
            *(float *)&dword_140404A6C[19928826] = v109 + 0.0625;
            goto LABEL_172;
          }
          dword_140404A6C[19928826] = v116;
          v112 = *(float *)&v116;
LABEL_172:
          v160 = v115;
          v163 = v117;
          v165 = v112;
          v157 = v114;
          dword_140404A6C[19928827] = 1065353216;
          *(float *)&v153[1] = v113 - 0.0625;
          *(float *)&v153[4] = v115 - 0.0625;
          *(float *)&v153[7] = v117 - 0.0625;
          v155 = v112 - 0.0625;
          v156 = 1065353216;
          v158 = 0;
          v159 = 1065353216;
          v161 = 0;
          v162 = 1065353216;
          v164 = 1065353216;
          v166 = 1065353216;
          v153[0] = 0;
          v153[2] = 0;
          v153[3] = 1065353216;
          v153[5] = 0;
          v153[6] = 1065353216;
          v154 = 1065353216;
          sub_140019C10((__int64)v153, 0, 62);
          v118 = v141;
          v119 = 58LL * (int)v141;
          dword_140404A6C[v119 + 20074645] = 1;
          dword_140404A6C[v119 + 20074646] = 1;
          if ( *(float *)&v116 >= 1.0 )
            dword_140404A6C[v119 + 20074646] = 2;
          dword_140404A6C[v119 + 20074647] = 1;
          sub_140017CA0(v118);
          ++v111;
          v109 = v109 + v108;
          --v110;
        }
        while ( v110 );
      }
      ++v107;
    }
    while ( v107 < 4 );
    for ( n = 0; n < 4; ++n )
    {
      v121 = 0;
      if ( v105 > 0 )
      {
        v122 = v106;
        v123 = (int *)&dword_140404A6C[16 * (v105 + n) + 19929066];
        do
        {
          v124 = v121;
          v141 = *v123;
          dword_140404A6C[70425405] = 0;
          dword_140404A6C[70998846] = 0;
          dword_140404A6C[71179071] = 0;
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928791] = 0;
          dword_140404A6C[19928798] = 1065353216;
          if ( (unsigned __int64)n < 2 )
          {
            dword_140404A6C[19928790] = v121;
            if ( n == 1 )
              goto LABEL_184;
          }
          else
          {
            *(float *)&dword_140404A6C[19928790] = *(float *)&v121 + v108;
          }
          if ( n == 2 )
          {
LABEL_184:
            dword_140404A6C[19928799] = v121;
            dword_140404A6C[19928800] = 0;
            dword_140404A6C[19928834] = 1065353216;
            if ( n == 2 )
              goto LABEL_187;
            goto LABEL_185;
          }
          *(float *)&dword_140404A6C[19928799] = *(float *)&v121 + v108;
          dword_140404A6C[19928800] = 0;
          dword_140404A6C[19928834] = 1065353216;
LABEL_185:
          if ( n != 3 )
          {
            *(float *)&dword_140404A6C[19928835] = *(float *)&v121 + v108;
            dword_140404A6C[19928836] = 1065353216;
            dword_140404A6C[19928825] = 0;
            goto LABEL_188;
          }
LABEL_187:
          dword_140404A6C[19928835] = v121;
          dword_140404A6C[19928836] = 1065353216;
          dword_140404A6C[19928825] = 0;
          if ( n == 3 )
            goto LABEL_190;
LABEL_188:
          if ( !n )
          {
LABEL_190:
            dword_140404A6C[19928826] = v121;
            goto LABEL_191;
          }
          *(float *)&dword_140404A6C[19928826] = *(float *)&v121 + v108;
LABEL_191:
          dword_140404A6C[19928827] = 1065353216;
          *(_QWORD *)&dword_140404A6C[19928837] = 0;
          *(_QWORD *)&dword_140404A6C[19928843] = 1065353216;
          dword_140404A6C[19928867] = 1065353216;
          dword_140404A6C[19928868] = 1065353216;
          dword_140404A6C[19928861] = 0;
          dword_140404A6C[19928862] = 1065353216;
          sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
          v125 = v141;
          v126 = 58LL * (int)v141;
          dword_140404A6C[v126 + 20074645] = 1;
          dword_140404A6C[v126 + 20074646] = 1;
          dword_140404A6C[v126 + 20074647] = 1;
          sub_140017CA0(v125);
          ++v123;
          *(float *)&v124 = *(float *)&v121 + v108;
          v121 = v124;
          --v122;
        }
        while ( v122 );
      }
    }
    ++v106;
    v102 = (unsigned int)(v149 + 1);
    v105 += 4;
    v149 = v102;
  }
  while ( (int)v102 <= 12 );
  v127 = 0;
  v128 = 3;
  while ( 2 )
  {
    v141 = dword_140404A6C[v127 + 19928918];
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[19928789] = 0;
    if ( v127 && v127 != 3 )
    {
      *(_QWORD *)&dword_140404A6C[19928790] = 0;
      dword_140404A6C[19928798] = 1065353216;
      goto LABEL_199;
    }
    *(_QWORD *)&dword_140404A6C[19928790] = 1065353216;
    dword_140404A6C[19928798] = 1065353216;
    if ( v127 )
    {
LABEL_199:
      if ( v127 != 1 )
      {
        *(_QWORD *)&dword_140404A6C[19928799] = 0;
        dword_140404A6C[19928834] = 1065353216;
        goto LABEL_202;
      }
    }
    *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
    dword_140404A6C[19928834] = 1065353216;
    if ( v127 != 1 )
    {
LABEL_202:
      if ( v127 != 2 )
      {
        dword_140404A6C[19928835] = 0;
        dword_140404A6C[19928836] = 1065353216;
        dword_140404A6C[19928825] = 0;
        goto LABEL_205;
      }
    }
    dword_140404A6C[19928835] = 1065353216;
    dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    if ( v127 == 2 )
    {
LABEL_206:
      dword_140404A6C[19928826] = 1065353216;
    }
    else
    {
LABEL_205:
      dword_140404A6C[19928826] = 0;
      if ( v127 == 3 )
        goto LABEL_206;
    }
    dword_140404A6C[19928827] = 1065353216;
    dword_140404A6C[19928837] = 0;
    dword_140404A6C[19928838] = 1065353216;
    dword_140404A6C[19928843] = 1065353216;
    dword_140404A6C[19928844] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928861] = 0;
    sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    v129 = v141;
    v130 = 58LL * (int)v141;
    dword_140404A6C[v130 + 20074645] = 1;
    dword_140404A6C[v130 + 20074646] = 1;
    dword_140404A6C[v130 + 20074647] = 1;
    sub_140017CA0(v129);
    if ( ++v127 < 4 )
      continue;
    break;
  }
  v141 = dword_140404A6C[19931206];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278EE0);
  v152 = 0x100000001LL;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, v108, 1.0, 0x22u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.3125, 0.0625, 0x2Au, SR_VEC_LANES(128, si128, i32));
  v131 = v141;
  v132 = 58LL * (int)v141;
  dword_140404A6C[v132 + 20074645] = 1;
  dword_140404A6C[v132 + 20074646] = 1;
  dword_140404A6C[v132 + 20074647] = 1;
  sub_140017CA0(v131);
  v133 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v133;
  }
  while ( v133 );
  v141 = dword_140404A6C[19931210];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, v108, 1.0, 0x32u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 0.0625, 0.3125, 0.0625, 0x32u, SR_VEC_LANES(128, si128, i32));
  v134 = v141;
  v135 = 58LL * (int)v141;
  dword_140404A6C[v135 + 20074645] = 1;
  dword_140404A6C[v135 + 20074646] = 1;
  dword_140404A6C[v135 + 20074647] = 1;
  sub_140017CA0(v134);
  v136 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v136;
  }
  while ( v136 );
  v141 = dword_140404A6C[19928892];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.0625, 1.0, 0x2Au, SR_VEC_LANES(128, si128, i32));
  si128 = _mm_cvtsi64_si128((long long)(0));
  v152 = 0;
  sub_140019940(0, 0.5, 0.0, 0.5, 0.0625, 0.3125, 0.0625, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.25, 0.4375, 1.0, 0.1875, 0.125, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  v137 = v141;
  v138 = 58LL * (int)v141;
  dword_140404A6C[v138 + 20074645] = 1;
  dword_140404A6C[v138 + 20074646] = 1;
  dword_140404A6C[v138 + 20074647] = 1;
  sub_140017CA0(v137);
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v128;
  }
  while ( v128 );
  return 0; /* legacy result ignored; native returns void */
}
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef Buffer
#undef k
#undef v147
#undef v148
#undef v149
#undef v150
#undef si128
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159
#undef v160
#undef v161
#undef v162
#undef v163
#undef v164
#undef v165
#undef v166
#undef Str1
#undef v168

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140278E40: using guessed type __int128 xmmword_140278E40;
// 140278EE0: using guessed type __int128 xmmword_140278EE0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144FBFBA0: using guessed type unsigned int;
// 144FBFBA4: using guessed type unsigned int;
// 144FBFBA8: using guessed type unsigned int;
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A5F0: using guessed type unsigned int;
// 14500A5F8: using guessed type unsigned int;
// 14500A614: using guessed type unsigned int;
// 14500A61C: using guessed type unsigned int;
// 14500A620: using guessed type unsigned int;
// 14500A624: using guessed type unsigned int;
// 14500A628: using guessed type unsigned int;
// 14500A644: using guessed type unsigned int;
// 14500A648: using guessed type unsigned int;
// 14500A64C: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 14500A680: using guessed type unsigned int;
// 14500A684: using guessed type unsigned int;
// 14500A698: using guessed type unsigned int;
// 14500A69C: using guessed type unsigned int;
// 14500A6E0: using guessed type unsigned int;
// 14500A6E4: using guessed type unsigned int;
// 14500A6F8: using guessed type unsigned int;
// 14500A6FC: using guessed type unsigned int;
// 14500A700: using guessed type unsigned int;
// 14500A704: using guessed type unsigned int;
// 14500A708: using guessed type unsigned int;
// 14500A74C: using guessed type unsigned int;
// 14500A75C: using guessed type unsigned int;
// 14500A7C4: using guessed type unsigned int;
// 14500CA14: using guessed type unsigned int;
// 14500CB84: using guessed type unsigned int;
// 14500CB94: using guessed type unsigned int;
// 14500CBA4: using guessed type unsigned int;
// 149F54C00: using guessed type unsigned int;
// 149F54C04: using guessed type unsigned int;
// 150F61030: using guessed type unsigned int;
// 150F61034: using guessed type unsigned int;
// 150F61038: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;
// 18622DFE0: using guessed type unsigned int;
// 1863AE154: using guessed type unsigned int;

//----- (0000000140012490) ----------------------------------------------------
__int64            sub_140012490(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int *v7; // rax
  __int64 v9; // rbx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 > 0x1FF )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  if ( a5 < 0 )
    return 0xFFFFFFFFLL;
  v5 = 263004LL * (int)a1;
  if ( (int)((unsigned int)a3 >> 3) >= (int)dword_140404A6C[v5 + 111579650]
    || (int)((unsigned int)a4 >> 3) >= (int)dword_140404A6C[v5 + 111579651]
    || (int)((unsigned int)a5 >> 3) >= (int)dword_140404A6C[v5 + 111579652] )
  {
    return 0xFFFFFFFFLL;
  }
  v6 = 0;
  v7 = &dword_140404A6C[83194357];
  while ( *v7 )
  {
    ++v6;
    v7 += 6930;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[111579637] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 6930LL * (int)v6;
  dword_140404A6C[v9 + 83194357] = 1;
  dword_140404A6C[v9 + 83194358] = a1;
  dword_140404A6C[v9 + 83200507] = a3;
  dword_140404A6C[263004 * a1 + 111579985 + 513 * a2 + 64 * (a4 & 7) + 8 * (a5 & 7) + (a3 & 7)] = v6;
  dword_140404A6C[v9 + 83200508] = a4;
  dword_140404A6C[v9 + 83200509] = a5;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83194359]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83194871]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83197431]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83198967]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83199479]), 0, 0x800u);
  ++dword_140404A6C[v5 + 111842640];
  dword_140404A6C[v9 + 83200513] = 0;
  *(_QWORD *)&dword_140404A6C[v9 + 83200503] = -1;
  *(_QWORD *)&dword_140404A6C[v9 + 83200505] = -1;
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012670) ----------------------------------------------------
void            sub_140012670(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  signed int v9; // r10d
  signed int v10; // r8d
  signed int v11; // eax
  signed int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = 263004LL * (int)a1;
    v9 = dword_140404A6C[v8 + 111579650];
    if ( (int)(a2 >> 6) < v9 )
    {
      v10 = a3 >> 6;
      if ( v10 < (int)dword_140404A6C[v8 + 111579651] )
      {
        v11 = dword_140404A6C[v8 + 111579652];
        v12 = a4 >> 6;
        if ( v12 < v11 )
        {
          v13 = *(int *)(*(_QWORD *)&dword_140404A6C[v8 + 111579655] + 4LL * (int)((a2 >> 6) + v9 * (v12 + v10 * v11)));
          if ( (_DWORD)v13 != -1 )
          {
            v14 = (int)dword_140404A6C[263004 * (int)a1
                                     + 111579985
                                     + 513 * v13
                                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( (_DWORD)v14 != -1 )
            {
              v15 = 6930 * v14 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
              if ( (dword_140404A6C[v15 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                v16 = sub_1400129D0(a1, a2, a3 - 1, a4);
                if ( (v16 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 - 1, a4, v16 | 0x20);
                v17 = sub_1400129D0(a1, a2, a3 + 1, a4);
                if ( (v17 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 + 1, a4, v17 | 1);
                v18 = sub_1400129D0(a1, a2, a3, a4 + 1);
                if ( (v18 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 + 1, v18 | 8);
                v19 = sub_1400129D0(a1, a2, a3, a4 - 1);
                if ( (v19 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 - 1, v19 | 2);
                v20 = sub_1400129D0(a1, a2 - 1, a3, a4);
                if ( (v20 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 - 1, a3, a4, v20 | 0x10);
                v21 = sub_1400129D0(a1, a2 + 1, a3, a4);
                if ( (v21 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 + 1, a3, a4, v21 | 4);
              }
              dword_140404A6C[v15 + 83194359] = 0;
              dword_140404A6C[v15 + 83197431] = 0;
              sub_1400173C0(a1, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

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

//----- (00000001400129D0) ----------------------------------------------------
__int64            sub_1400129D0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012B10) ----------------------------------------------------
__int64            sub_140012B10(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r9d

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0;
  v10 = dword_140404A6C[6930 * v9 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
  if ( (v10 & 0xE0000000) == 0xC0000000 )
    return (unsigned int)sub_1400129D0(a1, a2 - (unsigned __int8)v10, a3 - BYTE2(v10), a4 - BYTE1(v10));
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012CA0) ----------------------------------------------------
__int64            sub_140012CA0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0xFFFFFFFFLL;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0xFFFFFFFFLL;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0xFFFFFFFFLL;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  else
    return HIWORD(dword_140404A6C[6930 * v8 + 83195386 + 256 * (a3 & 7) + 32 * (a4 & 7) + 4 * (a2 & 7)]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012DE0) ----------------------------------------------------
__int64            sub_140012DE0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)&dword_140404A6C[6930 * v9 + 83195383]
           + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)))));
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

//----- (0000000140013020) ----------------------------------------------------
__int64            sub_140013020(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v4 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v4 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v4 + 111579651] )
    return 0xFFFFFFFFLL;
  v5 = dword_140404A6C[v4 + 111579652];
  if ( (int)(a4 >> 6) >= v5 )
    return 0xFFFFFFFFLL;
  v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
  if ( (_DWORD)v6 == -1 )
    return 0xFFFFFFFFLL;
  else
    return dword_140404A6C[263004 * (int)a1
                         + 111579985
                         + 513 * v6
                         + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140013120) ----------------------------------------------------
__int64            sub_140013120(signed int a1, signed int a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // eax
  __m128i v7; // xmm9
  __m128i v8; // xmm10
  __m128i v9; // xmm11
  __int64 v10; // rdi
  unsigned int v11; // edx
  int v12; // r8d
  float v13; // xmm1_4
  signed int v14; // esi
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  int v18; // ecx
  int *v19; // rax
  signed int v20; // r11d
  signed int v21; // r10d
  int v22; // r9d
  unsigned int v23; // r15d
  __int64 v24; // r12
  float v25; // ebx
  int v26; // r14d
  int v27; // ecx
  __int64 v28; // rax
  float v29; // xmm2_4
  __int64 v30; // r9
  __int64 v31; // rbp
  __int64 v32; // r15
  __int64 v33; // r13
  __m128i v34; // xmm4
  float *v35; // r8
  __int64 v36; // rsi
  __m128i v37; // xmm5
  __m128i v38; // xmm3
  unsigned int *v39; // r10
  float v40; // xmm3_4
  unsigned int *v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rbp
  float v44; // xmm4_4
  float v45; // xmm5_4
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  signed int v51; // esi
  int v52; // r13d
  int v53; // r15d
  __int64 v54; // rbp
  int v55; // ebx
  __int64 v56; // rdx
  float v57; // xmm7_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm6_4
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm6_4
  float *v74; // rdx
  float v75; // xmm5_4
  float v76; // xmm2_4
  float v77; // xmm8_4
  float v78; // xmm4_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  unsigned int *v81; // rax
  __int64 v82; // rbp
  char *v83; // rsi
  __int64 v84; // r14
  __int64 v85; // r13
  int v86; // r12d
  int v87; // ecx
  __int16 v88; // ax
  __int64 v89; // r8
  __int64 v90; // rdx
  unsigned int v91; // xmm0_4
  unsigned int v92; // xmm1_4
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __m128 v99; // xmm3
  __m128 v100; // xmm4
  __m128 v101; // xmm12
  __m128 v102; // xmm14
  __m128 v103; // xmm11
  __m128 v104; // xmm13
  char v105; // al
  __int64 v106; // rax
  __m128 v107; // xmm2
  __m128 v108; // xmm1
  __m128 v109; // xmm0
  float v110; // xmm10_4
  float v111; // xmm9_4
  float v112; // xmm8_4
  float v113; // xmm7_4
  __int64 v114; // rax
  float v115; // xmm6_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  __int64 v119; // rax
  float v120; // xmm6_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm3_4
  __int64 v124; // rax
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm2_4
  float v128; // xmm5_4
  float v129; // xmm3_4
  float v130; // xmm4_4
  float v131; // xmm2_4
  float v132; // xmm0_4
  float v133; // xmm6_4
  float v134; // xmm3_4
  __int64 v135; // rcx
  float v136; // xmm2_4
  float v137; // xmm0_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  __int64 v141; // rcx
  float v142; // xmm8_4
  float v143; // xmm4_4
  float v144; // xmm7_4
  __int64 v145; // rdx
  float v146; // xmm4_4
  float v147; // xmm5_4
  float v148; // xmm3_4
  float v149; // xmm6_4
  float *v150; // rcx
  int v151; // ecx
  __int64 v152; // r10
  int *v153; // r9
  _DWORD *v154; // r8
  __int64 v155; // rax
  __int64 v156; // rbx
  int *v157; // rsi
  int *v158; // r12
  int v159; // ecx
  int i; // r13d
  int j; // r15d
  int v162; // eax
  __int64 v163; // rdx
  int v164; // r14d
  int v165; // ebp
  unsigned int v166; // xmm1_4
  __int64 v167; // xmm2_8
  float v168; // xmm2_4
  float v169; // xmm1_4
  __int64 v170; // rcx
  __int64 v171; // rcx
  char *v172; // rcx
  __int64 v173; // xmm2_8
  int v174; // r15d
  int v175; // ebp
  unsigned int *v176; // r8
  unsigned int v177; // eax
  int v178; // r14d
  int k; // r10d
  int m; // r9d
  unsigned int v181; // r11d
  float v182; // xmm3_4
  float v183; // xmm0_4
  float v184; // xmm1_4
  float v185; // xmm0_4
  float v186; // xmm1_4
  float v187; // xmm0_4
  unsigned int v188; // r11d
  float v189; // xmm3_4
  float v190; // xmm0_4
  float v191; // xmm1_4
  float v192; // xmm0_4
  float v193; // xmm1_4
  float v194; // xmm0_4
  unsigned int v195; // r11d
  float v196; // xmm3_4
  float v197; // xmm0_4
  float v198; // xmm1_4
  float v199; // xmm0_4
  float v200; // xmm1_4
  float v201; // xmm0_4
  unsigned int v202; // r11d
  float v203; // xmm3_4
  float v204; // xmm0_4
  float v205; // xmm1_4
  float v206; // xmm0_4
  float v207; // xmm1_4
  float v208; // xmm0_4
  int v209; // ebp
  int v210; // r15d
  unsigned int v212; // eax
  int v213; // ecx
  int v214; // r8d
  int v215; // r9d
  int v216; // r10d
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rcx
  int v222; // r11d
  int v223; // edi
  __int64 v224; // r9
  __int64 v225; // r10
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // r8
  __int64 v231; // rdx
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // rdx
  __int64 v236; // rax
  __int64 v237; // rax
  int v238; // r9d
  int n; // ecx
  __int64 v240; // rax
  int v241; // edx
  __int64 v242; // rax
  signed int v243; // r8d
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // rcx
  __int64 v247; // rcx
  unsigned int v248; // eax
  int v249; // ecx
  unsigned int *v250; // rax
  __int64 v251; // rax
  __int16 v252; // ax
  unsigned int v253; // eax
  int v254; // ecx
  __int64 v255; // rax
  int v256; // r8d
  float v257; // r12d
  float v258; // eax
  int v259; // ecx
  __int64 v260; // rdx
  unsigned int *v261; // r15
  _DWORD *v262; // r9
  unsigned int *v263; // rsi
  __int64 v264; // rdi
  signed __int64 v265; // r10
  unsigned int *v266; // r14
  float v267; // eax
  int v268; // ecx
  int *v269; // r12
  __int64 v270; // rbx
  int v271; // r13d
  int v272; // r11d
  unsigned int *v273; // r8
  __int64 v274; // rcx
  __int64 v275; // rdi
  __int64 v276; // rdx
  __int64 v277; // rdi
  __int64 v278; // rsi
  __int64 v279; // rcx
  __int64 v280; // rcx
  int v281; // edi
  int v282; // ebp
  int v283; // r8d
  int v284; // eax
  unsigned int v285; // ecx
  unsigned int v286; // eax
  unsigned int v287; // r10d
  unsigned int v288; // eax
  unsigned int v289; // r10d
  unsigned int v290; // eax
  unsigned int v291; // edx
  int v292; // r8d
  int v293; // r10d
  __int64 v294; // rcx
  __int64 v295; // rax
  int v296; // r11d
  unsigned int v297; // edx
  __int64 v298; // r8
  int ii; // edi
  int v300; // r10d
  unsigned int *v301; // r8
  unsigned int *v302; // r9
  __int64 v303; // rcx
  __int64 v304; // rax
  int v305; // eax
  __int64 v306; // r9
  char *v307; // rdx
  unsigned int *v308; // r8
  int v309; // eax
  unsigned int v310; // ecx
  int v311; // eax
  int v312; // eax
  int v313; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140013120[176];
#define v314 (*(__int64 (*))(void *)(sr_frame_140013120 + 0)) /* [rsp+0h] */
#define v315 (*(float (*))(void *)(sr_frame_140013120 + 32)) /* [rsp+20h] */
#define v316 (*(float (*))(void *)(sr_frame_140013120 + 36)) /* [rsp+24h] */
#define v317 (*(int (*))(void *)(sr_frame_140013120 + 40)) /* [rsp+28h] */
#define v318 (*(int (*))(void *)(sr_frame_140013120 + 44)) /* [rsp+2Ch] */
#define v319 (*(int (*))(void *)(sr_frame_140013120 + 48)) /* [rsp+30h] */
#define v320 (*(int (*))(void *)(sr_frame_140013120 + 52)) /* [rsp+34h] */
#define v321 (*(int (*))(void *)(sr_frame_140013120 + 56)) /* [rsp+38h] */
#define v322 (*(signed __int64 (*))(void *)(sr_frame_140013120 + 64)) /* [rsp+40h] */
#define v323 (*(__int64 (*))(void *)(sr_frame_140013120 + 72)) /* [rsp+48h] */
#define v324 (*(float (*))(void *)(sr_frame_140013120 + 80)) /* [rsp+50h] */
#define v325 (*(signed int (*))(void *)(sr_frame_140013120 + 84)) /* [rsp+54h] */
#define v326 (*(unsigned int (*))(void *)(sr_frame_140013120 + 88)) /* [rsp+58h] */
#define v327 (*(float (*))(void *)(sr_frame_140013120 + 92)) /* [rsp+5Ch] */
#define v328 (*(float (*))(void *)(sr_frame_140013120 + 96)) /* [rsp+60h] */
#define v329 (*(__int64 (*))(void *)(sr_frame_140013120 + 104)) /* [rsp+68h] */
#define v330 (*(int (*))(void *)(sr_frame_140013120 + 112)) /* [rsp+70h] */
#define v331 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 120)) /* [rsp+78h] */
#define v332 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 128)) /* [rsp+80h] */
#define v333 (*(__int64 (*))(void *)(sr_frame_140013120 + 136)) /* [rsp+88h] */
#define v334 (*(__int64 (*))(void *)(sr_frame_140013120 + 144)) /* [rsp+90h] */
#define v335 (*(__int64 (*))(void *)(sr_frame_140013120 + 152)) /* [rsp+98h] */
#define v336 (*(_QWORD (*)[2])(void *)(sr_frame_140013120 + 160)) /* [rsp+A0h] */

  v2 = a1;
  v3 = a2;
  LODWORD(v322) = a2;
  LODWORD(v323) = a1;
  if ( (unsigned int)a1 <= 0xFFF )
  {
    v4 = 27720LL * a1;
    v333 = v4;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v4) )
    {
      v5 = a2 + 6930LL * a1;
      v335 = v5;
      v6 = dword_140404A6C[v5 + 83200503];
      if ( v6 != -2
        && v6 > 0x3FF
        && ((int)dword_140404A6C[70087022] < 1 || (unsigned int)sub_140198F9B() - dword_140404A6C[70087023] < 0x10) )
      {
        v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200507]);
        v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200508]);
        v9 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200509]);
        v325 = dword_140404A6C[73991661];
        v10 = 263004LL * (int)dword_140404A6C[6930 * v2 + 83194358];
        dword_140404A6C[71654225] = 0;
        *(float *)&v11 = 0.0;
        dword_140404A6C[70425405] = 0;
        v12 = 0;
        dword_140404A6C[70998846] = 0;
        dword_140404A6C[71179071] = 0;
        v13 = *(float *)&dword_140404A6C[v10 + 111579653];
        dword_140404A6C[71655762] = 0;
        v14 = 2 * v3;
        v319 = 2 * v3;
        v15 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 8.0) * v13;
        v16 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v8), f32)[0] * 8.0) * v13;
        v17 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v9), f32)[0] * 8.0) * v13;
        v324 = v15;
        *(float *)&v329 = v16;
        *(float *)&v318 = v17;
        if ( (int)(2 * v3) < (int)(2 * v3 + 2) )
        {
          v18 = 16 * v3;
          v19 = (int *)((char *)&dword_140404A6C[64 * (__int64)(int)(2 * v3) + 83197431] + v4);
          v317 = 16 * v3;
          do
          {
            v20 = 0;
            v321 = 0;
            do
            {
              v21 = 0;
              v320 = 0;
              v332 = (unsigned int *)v19;
              do
              {
                v22 = *v19;
                if ( (*v19 & 0xE0000000) == 0x80000000 )
                {
                  v316 = *(float *)&v11;
                  v330 = 8 * (v21 + 8 * (v18 + v20));
                  v23 = (v22 >> 24) & 3;
                  v24 = 232LL * (unsigned __int16)v22;
                  v25 = *(float *)&v11;
                  v26 = v22 >> 16;
                  v315 = *(float *)&v23;
                  v334 = v24;
                  v27 = *(unsigned int *)((char *)&dword_140404A6C[20074613] + v24);
                  v336[0] = *(_QWORD *)((char *)&dword_140404A6C[83197943] + v4 + v330);
                  if ( v27 > 0 )
                  {
                    v28 = *(_QWORD *)((char *)&dword_140404A6C[20074615] + v24);
                    v29 = *(float *)&dword_140404A6C[v10 + 111579653];
                    v30 = 0;
                    v31 = *(_QWORD *)((char *)&dword_140404A6C[20074619] + v24);
                    v32 = (unsigned int)v27;
                    v33 = *(_QWORD *)((char *)&dword_140404A6C[20074621] + v24);
                    v34 = _mm_cvtsi32_si128(v14);
                    v35 = (float *)(v28 + 8);
                    v36 = *(_QWORD *)((char *)&dword_140404A6C[20074617] + v24);
                    v37 = _mm_cvtsi32_si128(v20);
                    v38 = _mm_cvtsi32_si128(v21);
                    v39 = (unsigned int *)(v31 + 8);
                    v40 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v38), f32)[0];
                    v41 = (unsigned int *)(v36 + 8);
                    v42 = v36 - v28;
                    v43 = v31 - v28;
                    v44 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v34), f32)[0];
                    v45 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v37), f32)[0];
                    do
                    {
                      *(float *)&dword_140404A6C[3 * v11 + 70687550] = (float)(v40 + *(v35 - 2)) * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v44 + *(v35 - 1))
                                                                                           * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v45 + *v35) * v29;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 8;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 16;
                      v46 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v46 + 70687550] = v15
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v46 + 70687551] = v16 + *(float *)&dword_140404A6C[v46 + 70687551];
                      *(float *)&dword_140404A6C[v46 + 70687552] = v17 + *(float *)&dword_140404A6C[v46 + 70687552];
                      v47 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v47 + 70687550] = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v47 + 70687551] = *(float *)&dword_140404A6C[v10 + 111579639]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687551];
                      *(float *)&dword_140404A6C[v47 + 70687552] = *(float *)&dword_140404A6C[v10 + 111579640]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687552];
                      v48 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v48 + 70736702] = *(_DWORD *)((char *)v35 + v42 - 8);
                      dword_140404A6C[v48 + 70736703] = *(v41 - 1);
                      dword_140404A6C[v48 + 70736704] = *v41;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702]
                                                                                          + 1.0) << 24;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736703]
                                                                                          + 1.0) << 26;
                      v41 += 3;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736704]
                                                                                          + 1.0) << 28;
                      v49 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v49 + 70785854] = *(_DWORD *)((char *)v35 + v43 - 8);
                      v35 += 3;
                      dword_140404A6C[v49 + 70785855] = *(v39 - 1);
                      v50 = *v39;
                      v39 += 3;
                      dword_140404A6C[v49 + 70785856] = v50;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v30 + v33);
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v30 + v33 + 4);
                      v30 += 8;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                      v11 = ++dword_140404A6C[70425405];
                      --v32;
                    }
                    while ( v32 );
                    v12 = dword_140404A6C[71655762];
                    v25 = v316;
                    *(float *)&v23 = v315;
                  }
                  v51 = 0;
                  v52 = *(unsigned int *)((char *)&dword_140404A6C[20074651] + v24);
                  if ( v52 > 0 )
                  {
                    v53 = v320;
                    v54 = 40;
                    v55 = v321;
                    do
                    {
                      if ( ((unsigned __int8)(1 << v51) & (unsigned __int8)v26) == 0 && v12 < 256 )
                      {
                        v56 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v24);
                        v57 = *(float *)&dword_140404A6C[v10 + 111579653];
                        v58 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v59 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v60 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v61 = (float)v319;
                        *(float *)&dword_140404A6C[20 * v12 + 71655768] = (float)((float)v53 + *(float *)(v56 + v54 - 4))
                                                                        * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655769] = (float)(v61 + *(float *)(v56 + v54))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655770] = (float)((float)v55 + *(float *)(v56 + v54 + 4))
                                                                                              * v57;
                        v62 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v62 + 71655768] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v62 + 71655769] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655769];
                        *(float *)&dword_140404A6C[2 * v62 + 71655770] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655770];
                        v63 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v63 + 71655768] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v63 + 71655769] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655769];
                        *(float *)&dword_140404A6C[2 * v63 + 71655770] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655770];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771] = (float)((float)v53 + *(float *)(v56 + v54 - 16))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655772] = (float)(v61 + *(float *)(v56 + v54 - 12))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655773] = (float)((float)v55 + *(float *)(v56 + v54 - 8))
                                                                                              * v57;
                        v64 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v64 + 71655771] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v64 + 71655772] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655772];
                        *(float *)&dword_140404A6C[2 * v64 + 71655773] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655773];
                        v65 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v65 + 71655771] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v65 + 71655772] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655772];
                        *(float *)&dword_140404A6C[2 * v65 + 71655773] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655773];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774] = (float)((float)v53 + *(float *)(v56 + v54 - 28))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655775] = (float)(v61 + *(float *)(v56 + v54 - 24))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655776] = (float)((float)v55 + *(float *)(v56 + v54 - 20))
                                                                                              * v57;
                        v66 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v66 + 71655774] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v66 + 71655775] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655775];
                        *(float *)&dword_140404A6C[2 * v66 + 71655776] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655776];
                        v67 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v67 + 71655774] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v67 + 71655775] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655775];
                        *(float *)&dword_140404A6C[2 * v67 + 71655776] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655776];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777] = (float)((float)v53 + *(float *)(v56 + v54 - 40))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655778] = (float)(v61 + *(float *)(v56 + v54 - 36))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655779] = (float)((float)v55 + *(float *)(v56 + v54 - 32))
                                                                                              * v57;
                        v68 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v68 + 71655777] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v68 + 71655778] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655778];
                        *(float *)&dword_140404A6C[2 * v68 + 71655779] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655779];
                        v69 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v69 + 71655777] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v69 + 71655778] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655778];
                        *(float *)&dword_140404A6C[2 * v69 + 71655779] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655779];
                        v70 = 20LL * (int)dword_140404A6C[71655762];
                        v71 = *(float *)&dword_140404A6C[v70 + 71655769];
                        v72 = *(float *)&dword_140404A6C[v70 + 71655768];
                        v73 = *(float *)&dword_140404A6C[v70 + 71655770];
                        v75 = *(float *)&dword_140404A6C[v70 + 71655775] - v71;
                        v76 = *(float *)&dword_140404A6C[v70 + 71655776] - v73;
                        v77 = *(float *)&dword_140404A6C[v70 + 71655772] - v71;
                        v78 = *(float *)&dword_140404A6C[v70 + 71655773] - v73;
                        v79 = *(float *)&dword_140404A6C[v70 + 71655771] - v72;
                        v80 = *(float *)&dword_140404A6C[v70 + 71655774] - v72;
                        v327 = v71;
                        *(float *)&v326 = v72;
                        v328 = v73;
                        v74 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v70 * 4 + 290836476);
                        *v74 = (float)(v75 * v78) - (float)(v76 * v77);
                        v74[1] = (float)(v76 * v79) - (float)(v78 * v80);
                        v74[2] = (float)(v77 * v80) - (float)(v75 * v79);
                        sub_14007A240((__int64)v74, v74);
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655763] = 1;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655764] = v53;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655765] = v319;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655766] = v55;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655767] = v51;
                        v12 = ++dword_140404A6C[71655762];
                      }
                      ++v51;
                      v54 += 48;
                    }
                    while ( v51 < v52 );
                    v11 = dword_140404A6C[70425405];
                    v25 = v316;
                    *(float *)&v23 = v315;
                  }
                  v81 = (unsigned int *)*(unsigned int *)((char *)&dword_140404A6C[20074623] + v24);
                  if ( (int)v81 > 0 )
                  {
                    v82 = 8;
                    v83 = *(char **)((char *)&dword_140404A6C[20074635] + v24);
                    v84 = *(_QWORD *)((char *)&dword_140404A6C[20074631] + v24);
                    v85 = *(_QWORD *)((char *)&dword_140404A6C[20074633] + v24) - (_QWORD)v83;
                    v86 = v330;
                    v331 = v81;
                    do
                    {
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = LODWORD(v25) + *(_DWORD *)(v84 + v82);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 + 4);
                      v87 = *(_DWORD *)&v83[v85];
                      if ( (unsigned __int8)v87 >= 8u )
                      {
                        v88 = *((_WORD *)&dword_140404A6C[6930 * (int)v323 + 83195379] + v86 + (unsigned __int8)v87);
                        if ( v88 >= 0 )
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int16)v88;
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int8)dword_140404A6C[dword_140404A6C[70998846] + 71064383];
                        }
                        else
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = dword_140404A6C[3
                                                                                                * (*((_WORD *)&dword_140404A6C[6930 * (int)v323 + 83195379] + v86 + (unsigned __int8)v87)
                                                                                                 & 0x3FF)
                                                                                                + 421769142];
                        }
                      }
                      else
                      {
                        dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *((unsigned __int8 *)v336
                                                                                + (unsigned __int8)v87);
                      }
                      if ( (*v83 & 1) != 0 )
                      {
                        if ( *(float *)&v23 != 0.0 )
                        {
                          v89 = v23;
                          do
                          {
                            v90 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v91 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835006];
                            v92 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835007];
                            v93 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v90 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998850]
                                                                            + 70835006];
                            dword_140404A6C[v90 + 70835007] = dword_140404A6C[v93 + 70835007];
                            v94 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v95 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v95 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998849]
                                                                            + 70835006];
                            dword_140404A6C[v95 + 70835007] = dword_140404A6C[v94 + 70835007];
                            v96 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v97 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v97 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998848]
                                                                            + 70835006];
                            dword_140404A6C[v97 + 70835007] = dword_140404A6C[v96 + 70835007];
                            v98 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v98 + 70835006] = v91;
                            dword_140404A6C[v98 + 70835007] = v92;
                            --v89;
                          }
                          while ( v89 );
                        }
                        v99 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v100 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v101 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        v102 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v103 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        v104 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        v105 = v23 + (*(int *)&v83[v85] >> 12);
                        v315 = SR_VEC_LANES(128, v99, f32)[0];
                        v316 = SR_VEC_LANES(128, v100, f32)[0];
                        v106 = v105 & 3;
                        if ( (_DWORD)v106 )
                        {
                          do
                          {
                            v107 = v104;
                            v108 = v103;
                            v109 = v101;
                            v101 = _mm_xor_ps(v99, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v103 = _mm_xor_ps(v102, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v104 = _mm_xor_ps(v100, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v99 = v109;
                            v102 = v108;
                            v100 = v107;
                            --v106;
                          }
                          while ( v106 );
                          v316 = SR_VEC_LANES(128, v107, f32)[0];
                          v315 = SR_VEC_LANES(128, v109, f32)[0];
                        }
                        v110 = *(float *)&dword_140404A6C[v10 + 111579654];
                        v111 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v112 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v113 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v114 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v115 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v116 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v117 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v118 = (float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v117) + (float)(v315 * v115)) + (float)(v316 * v116);
                        *(float *)&dword_140404A6C[v114 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v117)
                                                                                    + (float)(SR_VEC_LANES(128, v101, f32)[0] * v115))
                                                                            + (float)(SR_VEC_LANES(128, v104, f32)[0] * v116))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v114 + 70835007] = v118 * v110;
                        v119 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v120 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v121 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v122 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v123 = (float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v121) + (float)(v315 * v120)) + (float)(v316 * v122);
                        *(float *)&dword_140404A6C[v119 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v121)
                                                                                    + (float)(SR_VEC_LANES(128, v101, f32)[0] * v120))
                                                                            + (float)(SR_VEC_LANES(128, v104, f32)[0] * v122))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v119 + 70835007] = v123 * v110;
                        v124 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v125 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v126 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v127 = SR_VEC_LANES(128, v103, f32)[0] * v126;
                        v128 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v129 = SR_VEC_LANES(128, v102, f32)[0] * v126;
                        v130 = v315;
                        v131 = v127 + (float)(SR_VEC_LANES(128, v101, f32)[0] * v125);
                        v132 = v315 * v125;
                        v133 = v316;
                        v134 = (float)(v129 + v132) + (float)(v316 * v128);
                        *(float *)&dword_140404A6C[v124 + 70835006] = (float)(v131 + (float)(SR_VEC_LANES(128, v104, f32)[0] * v128))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v124 + 70835007] = v134 * v110;
                        v135 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v136 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687550] - v324) - v111;
                        v137 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687551] - *(float *)&v329) - v112;
                        v138 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687552] - *(float *)&v318) - v113;
                        *(float *)&dword_140404A6C[3 * v135 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v137)
                                                                                        + (float)(SR_VEC_LANES(128, v101, f32)[0] * v136))
                                                                                + (float)(SR_VEC_LANES(128, v104, f32)[0] * v138))
                                                                        * v110;
                        *(float *)&dword_140404A6C[3 * v135 + 70835007] = (float)((float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v137)
                                                                                        + (float)(v130 * v136))
                                                                                + (float)(v133 * v138))
                                                                        * v110;
                      }
                      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
                      if ( *v83 < 0 )
                        dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 128;
                      v139 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v140 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v141 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v326 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70687550];
                      v142 = *(float *)&dword_140404A6C[v141 + 70687550] - *(float *)&v326;
                      v143 = *(float *)&dword_140404A6C[v141 + 70687552];
                      v144 = *(float *)&dword_140404A6C[v141 + 70687551] - v139;
                      v145 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v327 = v139;
                      v146 = v143 - v140;
                      v147 = *(float *)&dword_140404A6C[v145 + 70687551] - v139;
                      v148 = *(float *)&dword_140404A6C[v145 + 70687552] - v140;
                      v149 = *(float *)&dword_140404A6C[v145 + 70687550] - *(float *)&v326;
                      v328 = v140;
                      v150 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * (int)dword_140404A6C[70998846] + 288667496);
                      *v150 = (float)(v147 * v146) - (float)(v148 * v144);
                      v150[1] = (float)(v142 * v148) - (float)(v149 * v146);
                      v150[2] = (float)(v149 * v144) - (float)(v142 * v147);
                      sub_14007A240((__int64)v150, v150);
                      ++dword_140404A6C[70998846];
                      v82 += 16;
                      v83 += 4;
                      v331 = (unsigned int *)((char *)v331 - 1);
                    }
                    while ( v331 );
                    v12 = dword_140404A6C[71655762];
                    v11 = dword_140404A6C[70425405];
                    v15 = v324;
                    v16 = *(float *)&v329;
                    v17 = *(float *)&v318;
                    v24 = v334;
                  }
                  v151 = *(unsigned int *)((char *)&dword_140404A6C[20074639] + v24);
                  if ( v151 > 0 )
                  {
                    v152 = (unsigned int)v151;
                    v153 = *(int **)((char *)&dword_140404A6C[20074643] + v24);
                    v154 = (_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[20074641] + v24) + 8LL);
                    do
                    {
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = LODWORD(v25) + *(v154 - 2);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = LODWORD(v25) + *(v154 - 1);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = LODWORD(v25) + *v154;
                      v155 = *v153;
                      if ( (int)v155 >= 8 )
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = 0;
                      else
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *((unsigned __int8 *)v336 + v155);
                      v154 += 3;
                      ++v153;
                      dword_140404A6C[dword_140404A6C[71179071] + 71293761] = 0;
                      ++dword_140404A6C[71179071];
                      --v152;
                    }
                    while ( v152 );
                    v12 = dword_140404A6C[71655762];
                    v11 = dword_140404A6C[70425405];
                  }
                  v4 = v333;
                  v18 = v317;
                  v14 = v319;
                  v20 = v321;
                  v21 = v320;
                }
                ++v21;
                v19 = (int *)(v332 + 1);
                v320 = v21;
                ++v332;
              }
              while ( v21 < 8 );
              v321 = ++v20;
            }
            while ( v20 < 8 );
            ++v14;
            v18 += 8;
            v319 = v14;
            v317 = v18;
          }
          while ( v14 < 2 * (int)v322 + 2 );
          v156 = 35876LL * v325;
          v157 = (int *)((char *)&dword_140404A6C[73991666] + v156);
          v329 = v156;
          v158 = (int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v322) + 83198967] + v4);
          v317 = 2 * v322;
          *(unsigned int *)((char *)&dword_140404A6C[73991666] + v156) = 0;
          v159 = 0;
          while ( 1 )
          {
            for ( i = 0; i < 8; ++i )
            {
              for ( j = 0; j < 8; ++j )
              {
                v162 = *v158;
                if ( *v158 <= 0 )
                  goto LABEL_72;
                v163 = v162 & 0x7F;
                v164 = (v162 >> 12) & 0xFFF;
                v165 = (v162 >> 10) & 3;
                *(unsigned int *)((char *)&dword_140404A6C[15 * v159 + 73991667] + v156) = v163;
                v166 = dword_140404A6C[2310 * v163 + 432533577];
                v326 = dword_140404A6C[2310 * v163 + 432533576];
                v328 = *(float *)&dword_140404A6C[2310 * v163 + 432533578];
                v327 = *(float *)&v166;
                switch ( v165 )
                {
                  case 1:
                    v167 = 1070141403;
                    break;
                  case 2:
                    v167 = 1078530011;
                    break;
                  case 3:
                    v167 = 1083624420;
                    break;
                  default:
                    goto LABEL_64;
                }
                sub_14007B4D0((float *)&v326, (float *)&dword_1402F6188, *(double *)&v167);
LABEL_64:
                v168 = *(float *)&dword_140404A6C[v10 + 111579653];
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991670] + v156) = (float)((float)((float)j + 0.5)
                                                                                           * v168)
                                                                                   + *(float *)&v326;
                v169 = (float)((float)((float)i + 0.5) * v168) + v328;
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991671] + v156) = (float)((float)v317 * v168) + v327;
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991672] + v156) = v169;
                v170 = v156 + 60LL * *v157;
                *(float *)((char *)&dword_140404A6C[73991670] + v170) = v15
                                                                      + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                 + v170);
                *(float *)((char *)&dword_140404A6C[73991671] + v170) = v16
                                                                      + *(float *)((char *)&dword_140404A6C[73991671]
                                                                                 + v170);
                *(float *)((char *)&dword_140404A6C[73991672] + v170) = v17
                                                                      + *(float *)((char *)&dword_140404A6C[73991672]
                                                                                 + v170);
                v171 = v156 + 60LL * *v157;
                *(float *)((char *)&dword_140404A6C[73991670] + v171) = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                      + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                 + v171);
                *(float *)((char *)&dword_140404A6C[73991671] + v171) = *(float *)((char *)&dword_140404A6C[73991671]
                                                                                 + v171)
                                                                      + *(float *)&dword_140404A6C[v10 + 111579639];
                *(float *)((char *)&dword_140404A6C[73991672] + v171) = *(float *)((char *)&dword_140404A6C[73991672]
                                                                                 + v171)
                                                                      + *(float *)&dword_140404A6C[v10 + 111579640];
                v172 = (char *)&dword_140404A6C[15 * *v157 + 73991673] + v156;
                *(_QWORD *)v172 = 1065353216;
                *((_QWORD *)v172 + 1) = 0;
                *((_QWORD *)v172 + 2) = 1065353216;
                *((_QWORD *)v172 + 3) = 0;
                *((_DWORD *)v172 + 8) = 1065353216;
                switch ( v165 )
                {
                  case 1:
                    v173 = 1070141403;
LABEL_70:
                    sub_14007B2A0(
                      (__int64)&dword_140404A6C[15 * *v157 + 73991673] + v156,
                      (float *)&dword_1402F6188,
                      *(double *)&v173);
                    break;
                  case 2:
                    v173 = 1078530011;
                    goto LABEL_70;
                  case 3:
                    v173 = 1083624420;
                    goto LABEL_70;
                }
                *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991668] + v156) = v164;
                *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991669] + v156) = ((_BYTE)v165 - 2) & 3;
                v159 = *v157 + 1;
                *v157 = v159;
LABEL_72:
                ++v158;
              }
            }
            v3 = v322;
            ++v317;
            v174 = 2 * v322 + 2;
            if ( v317 >= v174 )
            {
              v175 = 2 * v322;
              v176 = (unsigned int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v322) + 83199991] + v333);
              *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
              v177 = 0;
              v178 = 16 * v3;
              do
              {
                for ( k = 0; k < 8; ++k )
                {
                  for ( m = 0; m < 8; m += 4 )
                  {
                    v181 = *(v176 - 512);
                    if ( v181 )
                    {
                      v182 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v183 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 512) & 0x3FF;
                      v184 = (float)((float)((float)m + 0.5) * v182) + v183;
                      v185 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = *v176;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k);
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v181) & 3;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v184;
                      v186 = (float)((float)v175 * v182) + v185;
                      v187 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v186;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v182) + v187;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v188 = *(v176 - 511);
                    if ( v188 )
                    {
                      v189 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v190 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 511) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[1];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v188) & 3;
                      v191 = (float)((float)((float)(m + 1) + 0.5) * v189) + v190;
                      v192 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v191;
                      v193 = (float)((float)v175 * v189) + v192;
                      v194 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v193;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v189) + v194;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v195 = *(v176 - 510);
                    if ( v195 )
                    {
                      v196 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v197 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 510) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[2];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 2;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v195) & 3;
                      v198 = (float)((float)((float)(m + 2) + 0.5) * v196) + v197;
                      v199 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v198;
                      v200 = (float)((float)v175 * v196) + v199;
                      v201 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v200;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v196) + v201;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v202 = *(v176 - 509);
                    if ( v202 )
                    {
                      v203 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v204 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 509) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[3];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 3;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v202) & 3;
                      v205 = (float)((float)((float)(m + 3) + 0.5) * v203) + v204;
                      v206 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v205;
                      v207 = (float)((float)v175 * v203) + v206;
                      v208 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v207;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v203) + v208;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v176 += 4;
                  }
                }
                ++v175;
                v178 += 8;
              }
              while ( v175 < v174 );
              v5 = v335;
              LODWORD(v2) = v323;
              v209 = 0;
              v210 = v325;
              goto LABEL_91;
            }
          }
        }
        v210 = v325;
        v156 = 35876LL * v325;
        v329 = v156;
        v157 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v156 + 300180020);
        v209 = 0;
        v177 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
        *v157 = 0;
LABEL_91:
        if ( dword_140404A6C[70998846] || dword_140404A6C[71179071] || *v157 || v177 )
        {
          ++dword_140404A6C[70087022];
          sub_140185D00();
          v212 = dword_140404A6C[73006973];
          v213 = dword_140404A6C[70998846];
          v214 = 0;
          if ( (int)dword_140404A6C[73006973] < (int)dword_140404A6C[70998846] )
            v212 = dword_140404A6C[70998846];
          dword_140404A6C[73006973] = v212;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v215 = 0;
            v216 = 0;
            do
            {
              v217 = v215;
              v215 += 9;
              v218 = v216;
              v216 += 3;
              dword_140404A6C[v218 + 71359297] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506753] = 0;
              dword_140404A6C[v217 + 71506755] = 0;
              dword_140404A6C[v218 + 71359298] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506756] = 0;
              dword_140404A6C[v217 + 71506758] = 0;
              dword_140404A6C[v218 + 71359299] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506759] = 0;
              dword_140404A6C[v217 + 71506761] = 0;
              v219 = v214++;
              v220 = 3 * v219;
              v221 = 3LL * (int)dword_140404A6C[3 * v219 + 71179072];
              dword_140404A6C[v220 + 71310145] = dword_140404A6C[3 * dword_140404A6C[3 * v219 + 71179072] + 70736702];
              dword_140404A6C[v220 + 71310146] = dword_140404A6C[v221 + 70736703];
              dword_140404A6C[v220 + 71310147] = dword_140404A6C[v221 + 70736704];
            }
            while ( v214 < (int)dword_140404A6C[71179071] );
            v213 = dword_140404A6C[70998846];
          }
          v222 = 2;
          v223 = 0;
          v318 = 2;
          if ( v213 > 0 )
          {
            do
            {
              v224 = v223;
              v225 = 2LL * v223;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v223 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v223 + 70998848];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v223 + 70998849];
              v226 = 3LL * (int)dword_140404A6C[4 * v223 + 70998847];
              v227 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v227 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v223 + 70998847] + 70736702];
              dword_140404A6C[v227 + 71310146] = dword_140404A6C[v226 + 70736703];
              dword_140404A6C[v227 + 71310147] = dword_140404A6C[v226 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v223 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v223 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = -1;
              v228 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v228 + 71506753] = 0;
              dword_140404A6C[v228 + 71506755] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v229 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v229 + 71506756] = 0;
              dword_140404A6C[v229 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = dword_140404A6C[71179071] + 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408454] = 2;
              v230 = 3LL * (int)dword_140404A6C[4 * v223 + 70998847];
              v231 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v231 + 71506759] = dword_140404A6C[3 * dword_140404A6C[4 * v223 + 70998847] + 70736702];
              dword_140404A6C[v231 + 71506760] = dword_140404A6C[v230 + 70736703];
              dword_140404A6C[v231 + 71506761] = dword_140404A6C[v230 + 70736704];
              ++dword_140404A6C[71179071];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v223 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v223++ + 70998849];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[2 * v225 + 70998850];
              v232 = 3LL * (int)dword_140404A6C[2 * v225 + 70998847];
              v233 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v233 + 71310145] = dword_140404A6C[3 * dword_140404A6C[2 * v225 + 70998847] + 70736702];
              dword_140404A6C[v233 + 71310146] = dword_140404A6C[v232 + 70736703];
              dword_140404A6C[v233 + 71310147] = dword_140404A6C[v232 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v224 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v224 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = dword_140404A6C[71179071] - 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408450] = 1;
              v234 = 3LL * (int)dword_140404A6C[2 * v225 + 70998847];
              v235 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v235 + 71506753] = dword_140404A6C[3 * dword_140404A6C[2 * v225 + 70998847] + 70736702];
              dword_140404A6C[v235 + 71506754] = dword_140404A6C[v234 + 70736703];
              dword_140404A6C[v235 + 71506755] = dword_140404A6C[v234 + 70736704];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v236 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v236 + 71506756] = 0;
              dword_140404A6C[v236 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = -1;
              v237 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v237 + 71506759] = 0;
              dword_140404A6C[v237 + 71506761] = 0;
              ++dword_140404A6C[71179071];
            }
            while ( v223 < (int)dword_140404A6C[70998846] );
          }
          v238 = dword_140404A6C[70425405];
          for ( n = 0; n < (int)dword_140404A6C[70425405]; v238 = dword_140404A6C[70425405] )
          {
            v240 = n++;
            dword_140404A6C[v240 + 70982462] = 0;
          }
          v241 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            do
            {
              v242 = v241++;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179072] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179073] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179074] + 70982462] = 1;
            }
            while ( v241 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
          }
          v243 = 0;
          while ( v243 < v238 )
          {
            if ( dword_140404A6C[v243 + 70982462] )
            {
              ++v243;
            }
            else
            {
              dword_140404A6C[70425405] = --v238;
              if ( v243 >= v238 )
                break;
              v244 = 3LL * v243;
              dword_140404A6C[v244 + 70687550] = dword_140404A6C[3 * v238 + 70687550];
              dword_140404A6C[v244 + 70687551] = dword_140404A6C[3 * v238 + 70687551];
              dword_140404A6C[v244 + 70687552] = dword_140404A6C[3 * v238 + 70687552];
              v245 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
              dword_140404A6C[v244 + 70736703] = dword_140404A6C[v245 + 70736703];
              dword_140404A6C[v244 + 70736704] = dword_140404A6C[v245 + 70736704];
              v246 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
              dword_140404A6C[v244 + 70785855] = dword_140404A6C[v246 + 70785855];
              dword_140404A6C[v244 + 70785856] = dword_140404A6C[v246 + 70785856];
              dword_140404A6C[v244 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
              dword_140404A6C[v244 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
              dword_140404A6C[v244 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
              v247 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
              dword_140404A6C[v244 + 70884159] = dword_140404A6C[v247 + 70884159];
              v248 = dword_140404A6C[v247 + 70884160];
              v249 = 0;
              dword_140404A6C[v244 + 70884160] = v248;
              dword_140404A6C[v243 + 70933310] = dword_140404A6C[dword_140404A6C[70425405] + 70933310];
              dword_140404A6C[v243 + 70982462] = dword_140404A6C[dword_140404A6C[70425405] + 70982462];
              v238 = dword_140404A6C[70425405];
              if ( (int)dword_140404A6C[71179071] > 0 )
              {
                v250 = &dword_140404A6C[71179073];
                do
                {
                  if ( *(v250 - 1) == v238 )
                  {
                    *(v250 - 1) = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  if ( *v250 == v238 )
                  {
                    *v250 = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  if ( v250[1] == v238 )
                  {
                    v250[1] = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  ++v249;
                  v250 += 3;
                }
                while ( v249 < (int)dword_140404A6C[71179071] );
              }
            }
          }
          v251 = *(int *)((char *)&dword_140404A6C[73991662] + v156);
          if ( (_DWORD)v251 != -1 )
            dword_140404A6C[6930 * v251 + 83200503 + *(int *)((char *)&dword_140404A6C[73991663] + v156)] = -1;
          ++dword_140404A6C[179955279];
          dword_140404A6C[179955278] += v238;
          *(unsigned int *)((char *)&dword_140404A6C[73991662] + v156) = v2;
          *(unsigned int *)((char *)&dword_140404A6C[73991663] + v156) = v3;
          v252 = LOWORD(dword_140404A6C[73991661]) + 1;
          dword_140404A6C[v5 + 83200503] = v210;
          dword_140404A6C[73991661] = v252 & 0x3FF;
          if ( v238 > 0 && (!dword_140404A6C[179955281] || (int)dword_140404A6C[179955281] > v238) )
            dword_140404A6C[179955281] = v238;
          v253 = dword_140404A6C[179955280];
          v254 = 0;
          if ( (int)dword_140404A6C[179955280] < v238 )
            v253 = v238;
          dword_140404A6C[179955280] = v253;
          if ( v238 > 0 )
          {
            do
            {
              v255 = v254++;
              HIBYTE(dword_140404A6C[v255 + 70933310]) = 0;
              dword_140404A6C[v255 + 70966078] = -1;
              v238 = dword_140404A6C[70425405];
            }
            while ( v254 < (int)dword_140404A6C[70425405] );
          }
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v256 = 0;
            v257 = 0.0;
            v319 = 0;
            v258 = 0.0;
            v315 = 0.0;
            v316 = 0.0;
            do
            {
              v259 = v209 + 1;
              v330 = v209 + 1;
              v320 = v209 + 1;
              if ( v209 + 1 < (int)dword_140404A6C[71179071] )
              {
                v260 = 3LL * v259;
                v261 = &dword_140404A6C[v260 + 71310147];
                v262 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v259 + 290240376);
                v336[0] = (uint64)(uintptr_t)(v262);
                v263 = &dword_140404A6C[v260 + 71359297];
                v264 = 3LL * v259;
                v265 = (_UNKNOWN *)((char *)&unk_1402F61A8 - v260 * 4) - (_UNKNOWN *)&dword_140404A6C[71359297];
                v323 = v264;
                v266 = &dword_140404A6C[6 * v259 + 71408450];
                v322 = v265;
                v331 = &dword_140404A6C[v260 + 71359297];
                v332 = v266;
                do
                {
                  v267 = v316;
                  v268 = LODWORD(v257);
                  v317 = LODWORD(v257);
                  v269 = (int *)&unk_1402F61A8;
                  v270 = 0;
                  v321 = LODWORD(v316);
                  v271 = v256;
                  do
                  {
                    if ( dword_140404A6C[v271 + 71359297] == -1 )
                    {
                      v272 = 0;
                      v273 = v263;
                      do
                      {
                        if ( *v273 == -1 )
                        {
                          v274 = (int)dword_140404A6C[v264 + 71179072 + *(int *)((char *)v273 + v265)];
                          v275 = 3LL * v209;
                          v276 = (int)dword_140404A6C[v270 + 71179072 + v275];
                          if ( dword_140404A6C[v276 + 70933310] == dword_140404A6C[v274 + 70933310] )
                          {
                            v277 = (int)dword_140404A6C[v275 + 71179072 + *v269];
                            v278 = (int)*(v273 - 180225);
                            if ( dword_140404A6C[v277 + 70933310] == dword_140404A6C[v278 + 70933310] )
                            {
                              v279 = 3 * v274;
                              if ( fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687550]
                                   - *(float *)&dword_140404A6C[v279 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687551]
                                   - *(float *)&dword_140404A6C[v279 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687552]
                                   - *(float *)&dword_140404A6C[v279 + 70687552]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687550]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687551]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687552]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687552]) < 0.000099999997 )
                              {
                                dword_140404A6C[v271 + 71359297] = v320;
                                dword_140404A6C[v317 + 71408450] = (v272 + 2) % 3;
                                v280 = v321;
                                dword_140404A6C[v321 + 71506753] = *(v261 - 2);
                                dword_140404A6C[v280 + 71506754] = *(v261 - 1);
                                dword_140404A6C[v280 + 71506755] = *v261;
                                LODWORD(v280) = v318;
                                *v273 = v209;
                                *v266 = (v271 + (int)v280) % 3;
                                *(v262 - 2) = dword_140404A6C[3 * v209 + 71310145];
                                *(v262 - 1) = dword_140404A6C[3 * v209 + 71310146];
                                *v262 = dword_140404A6C[3 * v209 + 71310147];
                              }
                            }
                          }
                          v265 = v322;
                          v264 = v323;
                        }
                        ++v272;
                        v266 += 2;
                        v262 += 3;
                        ++v273;
                      }
                      while ( v272 < 3 );
                      v267 = *(float *)&v321;
                      v268 = v317;
                      v262 = (_DWORD *)v336[0];
                      v263 = v331;
                      v266 = v332;
                    }
                    v268 += 2;
                    LODWORD(v267) += 3;
                    v317 = v268;
                    ++v271;
                    v321 = LODWORD(v267);
                    ++v270;
                    ++v269;
                  }
                  while ( (__int64)v269 < (__int64)&dword_1402F61B4 );
                  v264 += 3;
                  v257 = v315;
                  v266 += 6;
                  ++v320;
                  v262 += 9;
                  v323 = v264;
                  v263 += 3;
                  v332 = v266;
                  v265 -= 12LL;
                  v336[0] = (uint64)(uintptr_t)(v262);
                  v261 += 3;
                  v331 = v263;
                  v256 = v319;
                  v322 = v265;
                }
                while ( v320 < (int)dword_140404A6C[71179071] );
                v222 = v318;
                v258 = v316;
                v259 = v330;
              }
              LODWORD(v258) += 9;
              LODWORD(v257) += 6;
              v256 += 3;
              v316 = v258;
              v222 -= 3;
              v315 = v257;
              v209 = v259;
              v319 = v256;
              v318 = v222;
            }
            while ( v259 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
            v156 = v329;
            v210 = v325;
          }
          v281 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v282 = 0;
            v283 = 3;
            do
            {
              dword_140404A6C[v283 + 71408446] = dword_140404A6C[3 * v281 + 71179072];
              v284 = v283 - 2;
              v285 = dword_140404A6C[v282 + 71359297];
              if ( v285 == -1 )
              {
                v286 = dword_140404A6C[3 * v281 + 71179072];
              }
              else
              {
                v287 = dword_140404A6C[v284 + 71408449];
                if ( v287 > 2 )
                {
                  dword_140404A6C[v284 + 71408449] = 0;
                  v287 = 0;
                  v285 = dword_140404A6C[v282 + 71359297];
                }
                v286 = dword_140404A6C[3 * v285 + 71179072 + v287];
              }
              dword_140404A6C[v283 + 71408447] = v286;
              dword_140404A6C[v283 + 71408448] = dword_140404A6C[3 * v281 + 71179073];
              if ( dword_140404A6C[v282 + 71359298] == -1 )
              {
                v288 = dword_140404A6C[3 * v281 + 71179073];
              }
              else
              {
                v289 = dword_140404A6C[v283 + 71408449];
                if ( v289 > 2 )
                {
                  dword_140404A6C[v283 + 71408449] = 0;
                  v289 = 0;
                }
                v288 = dword_140404A6C[3 * dword_140404A6C[v282 + 71359298] + 71179072 + v289];
              }
              dword_140404A6C[v283 + 71408449] = v288;
              dword_140404A6C[v283 + 71408450] = dword_140404A6C[3 * v281 + 71179074];
              if ( dword_140404A6C[v282 + 71359299] == -1 )
              {
                v290 = dword_140404A6C[3 * v281 + 71179074];
              }
              else
              {
                v291 = dword_140404A6C[v283 + 71408451];
                if ( v291 > 2 )
                {
                  dword_140404A6C[v283 + 71408451] = 0;
                  v291 = 0;
                }
                v290 = dword_140404A6C[3 * dword_140404A6C[v282 + 71359299] + 71179072 + v291];
              }
              ++v281;
              dword_140404A6C[v283 + 71408451] = v290;
              v282 += 3;
              v283 += 6;
            }
            while ( v281 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
          }
          *(unsigned int *)((char *)&dword_140404A6C[73991664] + v156) = v238;
          v292 = 0;
          if ( v238 > 0 )
          {
            v293 = 0;
            do
            {
              v294 = v293;
              v293 += 16;
              v295 = v292++;
              *(_QWORD *)&dword_140404A6C[v294 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70687550];
              dword_140404A6C[v294 + 70425408] = dword_140404A6C[3 * v295 + 70687552];
              *(_QWORD *)&dword_140404A6C[v294 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70736702];
              dword_140404A6C[v294 + 70425411] = dword_140404A6C[3 * v295 + 70736704];
              *(_QWORD *)&dword_140404A6C[v294 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70785854];
              dword_140404A6C[v294 + 70425414] = dword_140404A6C[3 * v295 + 70785856];
              *(_QWORD *)&dword_140404A6C[v294 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70835006];
              dword_140404A6C[v294 + 70425417] = dword_140404A6C[3 * v295 + 70835008];
              v238 = dword_140404A6C[70425405];
            }
            while ( v292 < (int)dword_140404A6C[70425405] );
          }
          sub_140193FE0(0, v210, (__int64)&dword_140404A6C[70425406], v238 << 6);
          v296 = dword_140404A6C[71179071];
          v297 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73991665] + v156) = dword_140404A6C[71179071];
          dword_140404A6C[71228224] = 0;
          LODWORD(v298) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = 0;
          for ( ii = 0; ii < 256; ++ii )
          {
            v300 = 0;
            *((_BYTE *)&dword_140404A6C[3 * (int)v298 + 73994485] + v156) = ii;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994486]
                            + v156) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994487]
                            + v156) = v297;
            if ( v296 > 0 )
            {
              v301 = &dword_140404A6C[71179072];
              v302 = &dword_140404A6C[71277377];
              do
              {
                if ( *v302 == ii )
                {
                  v303 = (int)(3 * v297);
                  *(_QWORD *)&dword_140404A6C[v303 + 71228225] = *(_QWORD *)v301;
                  dword_140404A6C[v303 + 71228227] = v301[2];
                  v304 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
                  v296 = dword_140404A6C[71179071];
                  v297 = ++dword_140404A6C[71228224];
                  ++*(unsigned int *)((char *)&dword_140404A6C[3 * v304 + 73994486] + v156);
                }
                ++v300;
                ++v302;
                v301 += 3;
              }
              while ( v300 < v296 );
            }
            v298 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
            if ( *(int *)((char *)&dword_140404A6C[3 * v298 + 73994486] + v156) > 0 )
            {
              LODWORD(v298) = v298 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = v298;
            }
          }
          sub_140193FE0(3, v210, (__int64)&dword_140404A6C[71228225], 12 * v296);
          sub_140193FE0(5, v210, (__int64)&dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
          v305 = dword_140404A6C[71655762];
          *(unsigned int *)((char *)&dword_140404A6C[73995254] + v156) = dword_140404A6C[71655762];
          if ( v305 > 0 )
          {
            v306 = (unsigned int)v305;
            v307 = (char *)&dword_140404A6C[73995263] + v156;
            v308 = &dword_140404A6C[71655770];
            do
            {
              v309 = *(v308 - 7);
              v310 = v308[9];
              v308 += 20;
              *((_DWORD *)v307 - 7) = v309;
              v311 = *(v308 - 26);
              *((_DWORD *)v307 - 8) = 1;
              *((_DWORD *)v307 - 6) = v311;
              v307 += 84;
              *((_DWORD *)v307 - 26) = *(v308 - 25);
              *((_DWORD *)v307 - 25) = *(v308 - 24);
              *((_DWORD *)v307 - 24) = *(v308 - 23);
              *((_DWORD *)v307 - 23) = *(v308 - 22);
              *((_DWORD *)v307 - 22) = *(v308 - 21);
              *((_DWORD *)v307 - 21) = *(v308 - 20);
              *((_DWORD *)v307 - 20) = *(v308 - 19);
              *((_DWORD *)v307 - 19) = *(v308 - 18);
              *((_DWORD *)v307 - 18) = *(v308 - 17);
              *((_DWORD *)v307 - 17) = *(v308 - 16);
              *((_DWORD *)v307 - 16) = *(v308 - 15);
              *((_DWORD *)v307 - 15) = *(v308 - 14);
              v312 = *(v308 - 13);
              *((_DWORD *)v307 - 12) = v310;
              v313 = *(v308 - 10);
              *((_DWORD *)v307 - 14) = v312;
              *((_DWORD *)v307 - 13) = *(v308 - 12);
              *((_DWORD *)v307 - 11) = v313;
              *((_DWORD *)v307 - 10) = *(v308 - 9);
              *((_DWORD *)v307 - 9) = *(v308 - 8);
              --v306;
            }
            while ( v306 );
          }
        }
        else
        {
          dword_140404A6C[v5 + 83200503] = -2;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v331
#undef v332
#undef v333
#undef v334
#undef v335
#undef v336

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 1402F61B4: using guessed type int dword_1402F61B4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61024: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 1513BB76C: using guessed type unsigned int;
// 15155B7B0: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;
// 151A84860: using guessed type unsigned int;
// 151E46220: using guessed type unsigned int;
// 16B27E3A8: using guessed type unsigned int;
// 16B27E3AC: using guessed type unsigned int;
// 16B27E3B0: using guessed type unsigned int;

//----- (0000000140016130) ----------------------------------------------------
void            sub_140016130(
        signed int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v10; // r10
  int v11; // edx
  signed int v12; // ecx
  int v13; // r8d
  signed int v14; // eax
  int v15; // r9d
  unsigned int v16; // r10d
  signed int v17; // r13d
  signed int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  signed int i; // edi
  signed int j; // ebx
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-38h]

  v6 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v10 = 263004LL * a1;
    v11 = a2 >> 6;
    v12 = dword_140404A6C[v10 + 111579650];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < (int)dword_140404A6C[v10 + 111579651] )
      {
        v14 = dword_140404A6C[v10 + 111579652];
        v15 = a4 >> 6;
        if ( v15 < v14 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655] + 4LL * (v11 + v12 * (v15 + v13 * v14)));
          if ( v16 != -1 || (v16 = sub_140010020(v6, v11, v13, v15), v16 != -1) )
          {
            v17 = dword_140404A6C[263004 * v6
                                + 111579985
                                + 513 * (int)v16
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v17 != -1 || (v17 = sub_140012490(v6, v16, a2 >> 3, a3 >> 3, a4 >> 3), v17 != -1) )
            {
              if ( (a5 & 0xE0000000) == 0x80000000 )
              {
                v18 = 0;
                v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
                dword_140404A6C[6930 * v17 + 83197431 + v19] = a5;
                v20 = 2 * (v19 + 3465LL * v17);
                LOBYTE(dword_140404A6C[v20 + 83197943]) = *a6;
                BYTE1(dword_140404A6C[v20 + 83197943]) = a6[2];
                BYTE2(dword_140404A6C[v20 + 83197943]) = a6[4];
                HIBYTE(dword_140404A6C[v20 + 83197943]) = a6[6];
                LOBYTE(dword_140404A6C[v20 + 83197944]) = a6[8];
                BYTE1(dword_140404A6C[v20 + 83197944]) = a6[10];
                BYTE2(dword_140404A6C[v20 + 83197944]) = a6[12];
                HIBYTE(dword_140404A6C[v20 + 83197944]) = a6[14];
                v21 = 232LL * (unsigned __int16)a5;
                v25 = v21;
                if ( *(int *)((char *)&dword_140404A6C[20074646] + v21) > 0 )
                {
                  do
                  {
                    for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v21); ++i )
                    {
                      for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v21); ++j )
                      {
                        if ( v18 || i || j )
                        {
                          sub_140016C80(v6, j + a2, v18 + a3, i + a4, j | ((i | (v18 << 8)) << 8) | 0xC0000000);
                          v21 = v25;
                        }
                      }
                    }
                    ++v18;
                  }
                  while ( v18 < *(int *)((char *)&dword_140404A6C[20074646] + v21) );
                }
              }
              v24 = (a3 >> 1) & 3;
              if ( (dword_140404A6C[6930 * v17 + 83200503 + v24] & 0x80000000) == 0 )
                sub_140012940(v17, v24);
              sub_1400173C0(v6, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016450) ----------------------------------------------------
__int64            sub_140016450(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016590) ----------------------------------------------------
__int64            sub_140016590(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r9d

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0;
  v10 = dword_140404A6C[6930 * v9 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
  if ( (v10 & 0xE0000000) == 0xC0000000 )
    return (unsigned int)sub_140016450(a1, a2 - (unsigned __int8)v10, a3 - BYTE2(v10), a4 - BYTE1(v10));
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016720) ----------------------------------------------------
__int64            sub_140016720(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int8 *)&dword_140404A6C[6930 * v9 + 83197943]
           + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)))));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016870) ----------------------------------------------------
__int64            sub_140016870(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83199479 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400169B0) ----------------------------------------------------
__int64            sub_1400169B0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83199991 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016AF0) ----------------------------------------------------
void            sub_140016AF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // edi
  signed int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  signed int v13; // edx
  int v14; // r10d
  unsigned int *v15; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    v7 = dword_140404A6C[v6 + 111579650];
    if ( (int)(a2 >> 6) < v7 && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v8 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + v7 * ((a4 >> 6) + v8 * (a3 >> 6))));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = (int)dword_140404A6C[6930 * v10 + 83200503 + ((unsigned __int64)(a3 & 6) >> 1)];
            if ( (_DWORD)v11 != -1 )
            {
              v12 = 8969 * v11;
              v13 = 0;
              if ( (int)dword_140404A6C[8969 * v11 + 73995254] > 0 )
              {
                v14 = a2 & 7;
                v15 = &dword_140404A6C[v12 + 73995258];
                do
                {
                  if ( *(v15 - 1) == v14 && *v15 == (a3 & 7) && v15[1] == (a4 & 7) && v15[2] == a5 )
                    *(v15 - 3) = 0;
                  ++v13;
                  v15 += 21;
                }
                while ( v13 < (int)dword_140404A6C[v12 + 73995254] );
              }
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016C80) ----------------------------------------------------
void            sub_140016C80(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r11d
  signed int v16; // r10d
  __int64 v17; // r8

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              v17 = 6930LL * v16;
              dword_140404A6C[64 * (a3 & 7) + 83197431 + 8 * (a4 & 7) + v17 + (a2 & 7)] = a5;
              if ( (dword_140404A6C[v17 + 83200503 + ((a3 >> 1) & 3)] & 0x80000000) == 0 )
                sub_140012940(v16, (a3 >> 1) & 3);
              sub_1400173C0(v5, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016E30) ----------------------------------------------------
void            sub_140016E30(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rcx

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v6 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v7 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v7 )
      {
        v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
        if ( (_DWORD)v8 != -1 )
        {
          v9 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v8
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v9 != -1 )
            dword_140404A6C[6930 * v9 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016F60) ----------------------------------------------------
void            sub_140016F60(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r11d
  signed int v16; // r10d
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rcx

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              v17 = 6930LL * v16;
              v18 = a3 & 7;
              v19 = (a3 >> 1) & 3;
              v20 = v17 + (a2 & 7) + 8 * ((a4 & 7) + 8 * v18);
              dword_140404A6C[v20 + 83199479] = a5;
              dword_140404A6C[v20 + 83199991] = 0;
              if ( (dword_140404A6C[v17 + 83200503 + v19] & 0x80000000) == 0 )
                sub_140012940(v16, v19);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017110) ----------------------------------------------------
void            sub_140017110(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v6 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v7 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v7 )
      {
        v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
        if ( (_DWORD)v8 != -1 )
        {
          v9 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v8
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v9 != -1 )
          {
            dword_140404A6C[6930 * v9 + 83199991 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
            dword_140404A6C[6930 * v9 + 83200511] = 1;
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017260) ----------------------------------------------------
void            sub_140017260(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdx
  signed int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r10

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v7 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v7 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v7 + 111579651] )
    {
      v8 = dword_140404A6C[v7 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v7 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v8)));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = a3 & 7;
            v12 = (a3 >> 1) & 3;
            dword_140404A6C[6930 * v10 + 83198967 + 64 * v11 + 8 * (a4 & 7) + (a2 & 7)] = a5;
            if ( (dword_140404A6C[6930 * v10 + 83200503 + v12] & 0x80000000) == 0 )
              sub_140012940(v10, v12);
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400173C0) ----------------------------------------------------
void            sub_1400173C0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v4 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v4 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v4 + 111579651] )
    {
      v5 = dword_140404A6C[v4 + 111579652];
      if ( (int)(a4 >> 6) < v5 )
      {
        v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
        if ( (_DWORD)v6 != -1 )
        {
          v7 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v6
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v7 != -1 )
            dword_140404A6C[6930 * v7 + 83200510] = 1;
        }
      }
    }
  }
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

//----- (0000000140017910) ----------------------------------------------------
void            sub_140017910(signed int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  signed int v6; // edx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed int v11; // edx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  signed int v16; // edx
  unsigned int *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  signed int v21; // edx
  unsigned int *v22; // rcx
  __int64 v23; // rax

  if ( (unsigned int)a1 <= 0xFFF )
  {
    v1 = a1;
    v2 = 6930LL * a1;
    if ( dword_140404A6C[v2 + 83194357] )
    {
      sub_14000C4C0(a1);
      v3 = 6930 * v1;
      v4 = (int)dword_140404A6C[6930 * v1 + 83200503];
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 8969 * v4;
        v6 = 0;
        if ( (int)dword_140404A6C[8969 * v4 + 73993587] > 0 )
        {
          v7 = &dword_140404A6C[v5 + 73993590];
          do
          {
            v8 = (int)*(v7 - 1);
            v7 += 7;
            ++v6;
            *(v7 - 7) = dword_140404A6C[v3 + 83199991 + v8];
          }
          while ( v6 < (int)dword_140404A6C[v5 + 73993587] );
        }
      }
      v9 = (int)dword_140404A6C[6930 * v1 + 83200504];
      if ( (_DWORD)v9 != -1 )
      {
        v10 = 8969 * v9;
        v11 = 0;
        if ( (int)dword_140404A6C[8969 * v9 + 73993587] > 0 )
        {
          v12 = &dword_140404A6C[v10 + 73993590];
          do
          {
            v13 = (int)*(v12 - 1);
            v12 += 7;
            ++v11;
            *(v12 - 7) = dword_140404A6C[v3 + 83199991 + v13];
          }
          while ( v11 < (int)dword_140404A6C[v10 + 73993587] );
        }
      }
      v14 = (int)dword_140404A6C[6930 * v1 + 83200505];
      if ( (_DWORD)v14 != -1 )
      {
        v15 = 8969 * v14;
        v16 = 0;
        if ( (int)dword_140404A6C[8969 * v14 + 73993587] > 0 )
        {
          v17 = &dword_140404A6C[v15 + 73993590];
          do
          {
            v18 = (int)*(v17 - 1);
            v17 += 7;
            ++v16;
            *(v17 - 7) = dword_140404A6C[v3 + 83199991 + v18];
          }
          while ( v16 < (int)dword_140404A6C[v15 + 73993587] );
        }
      }
      v19 = (int)dword_140404A6C[6930 * v1 + 83200506];
      if ( (_DWORD)v19 != -1 )
      {
        v20 = 8969 * v19;
        v21 = 0;
        if ( (int)dword_140404A6C[8969 * v19 + 73993587] > 0 )
        {
          v22 = &dword_140404A6C[v20 + 73993590];
          do
          {
            v23 = (int)*(v22 - 1);
            v22 += 7;
            ++v21;
            *(v22 - 7) = dword_140404A6C[v3 + 83199991 + v23];
          }
          while ( v21 < (int)dword_140404A6C[v20 + 73993587] );
        }
      }
      dword_140404A6C[v2 + 83200511] = 0;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017AC0) ----------------------------------------------------
void            sub_140017AC0(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // eax

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              dword_140404A6C[6930 * v16 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
              sub_1400173C0(v5, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140017CA0) ----------------------------------------------------
__int64            sub_140017CA0(int a1)
{
  signed int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r14
  bool v4; // cc
  unsigned int v5; // eax
  int v6; // r15d
  int v7; // r9d
  __int64 v8; // r12
  signed int v9; // edi
  int v10; // edx
  __int64 v11; // rsi
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  unsigned int *v23; // r8
  unsigned int *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  void *v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // xmm0_8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  void *v45; // rcx
  __int64 v46; // rax
  void *v47; // rcx
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // rax
  void *v51; // rcx
  __int64 v52; // rax
  void *v53; // rcx
  __int64 v54; // rax
  void *v55; // rcx
  __int64 v56; // rax
  __m128i *v57; // rcx
  signed int v58; // edx
  __int64 v59; // rcx
  void *v60; // rcx
  __int64 result; // rax
  __int64 v62; // rdx
  unsigned int *v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = 58LL * a1;
  v3 = 58LL * a1;
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  v5 = 0;
  dword_140404A6C[v2 + 20074624] = 0;
  v6 = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074625] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074627] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074629] = 0;
  if ( !v4 )
  {
    v7 = v69;
    v8 = 0;
    do
    {
      v9 = -1;
      v10 = 0;
      v11 = 3LL * (int)dword_140404A6C[4 * v8 + 70998847];
      do
      {
        if ( !v10 || v10 == 5 )
          v7 = 0;
        if ( v10 == 1 || v10 == 4 )
          v7 = 1;
        if ( (unsigned int)(v10 - 2) <= 1 )
          v7 = 2;
        if ( v10 >= 3 )
          v12 = 1.0;
        else
          v12 = 0.0;
        if ( v12 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10;
        }
        if ( v10 == -1 || v10 == 4 )
          v7 = 0;
        if ( !v10 || v10 == 3 )
          v7 = 1;
        if ( (unsigned int)(v10 - 1) <= 1 )
          v7 = 2;
        if ( v10 + 1 >= 3 )
          v13 = 1.0;
        else
          v13 = 0.0;
        if ( v13 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 1;
        }
        if ( v10 == -2 || v10 == 3 )
          v7 = 0;
        if ( v10 == -1 || v10 == 2 )
          v7 = 1;
        if ( (unsigned int)v10 <= 1 )
          v7 = 2;
        if ( v10 + 2 >= 3 )
          v14 = 1.0;
        else
          v14 = 0.0;
        if ( v14 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 2;
        }
        if ( v10 == -3 || v10 == 2 )
          v7 = 0;
        if ( v10 == -2 || v10 == 1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 1) <= 1 )
          v7 = 2;
        if ( v10 + 3 >= 3 )
          v15 = 1.0;
        else
          v15 = 0.0;
        if ( v15 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 3;
        }
        if ( v10 == -4 || v10 == 1 )
          v7 = 0;
        if ( v10 == -3 || !v10 )
          v7 = 1;
        if ( (unsigned int)(v10 + 2) <= 1 )
          v7 = 2;
        if ( v10 + 4 >= 3 )
          v16 = 1.0;
        else
          v16 = 0.0;
        if ( v16 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 4;
        }
        if ( v10 == -5 || !v10 )
          v7 = 0;
        if ( v10 == -4 || v10 == -1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 3) <= 1 )
          v7 = 2;
        if ( v10 + 5 >= 3 )
          v17 = 1.0;
        else
          v17 = 0.0;
        if ( v17 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 5;
        }
        v10 += 6;
      }
      while ( v10 < 6 );
      if ( v9 != -1 )
      {
        v18 = (int)dword_140404A6C[v2 + 20074624];
        if ( v6 > (int)v18 )
        {
          v19 = (int)dword_140404A6C[v2 + 20074624];
          dword_140404A6C[71002943] = dword_140404A6C[4 * v19 + 70998847];
          dword_140404A6C[71002944] = dword_140404A6C[4 * v19 + 70998848];
          dword_140404A6C[71002945] = dword_140404A6C[4 * v19 + 70998849];
          dword_140404A6C[71002946] = dword_140404A6C[4 * v19 + 70998850];
          v20 = 2 * v19;
          dword_140404A6C[71065407] = dword_140404A6C[v18 + 71064383];
          dword_140404A6C[71098175] = dword_140404A6C[v18 + 71097151];
          dword_140404A6C[2 * v20 + 70998847] = dword_140404A6C[4 * v8 + 70998847];
          dword_140404A6C[2 * v20 + 70998848] = dword_140404A6C[4 * v8 + 70998848];
          dword_140404A6C[2 * v20 + 70998849] = dword_140404A6C[4 * v8 + 70998849];
          dword_140404A6C[2 * v20 + 70998850] = dword_140404A6C[4 * v8 + 70998850];
          dword_140404A6C[v18 + 71064383] = dword_140404A6C[v8 + 71064383];
          dword_140404A6C[v18 + 71097151] = dword_140404A6C[v8 + 71097151];
          dword_140404A6C[4 * v8 + 70998847] = dword_140404A6C[71002943];
          dword_140404A6C[4 * v8 + 70998848] = dword_140404A6C[71002944];
          dword_140404A6C[4 * v8 + 70998849] = dword_140404A6C[71002945];
          dword_140404A6C[4 * v8 + 70998850] = dword_140404A6C[71002946];
          dword_140404A6C[v8 + 71064383] = dword_140404A6C[71065407];
          dword_140404A6C[v8 + 71097151] = dword_140404A6C[71098175];
        }
        dword_140404A6C[v3 + 20074625 + v9] |= 1 << v18;
        v21 = (int)dword_140404A6C[v2 + 20074624];
        dword_140404A6C[v21 + 71080767] = v9;
        dword_140404A6C[v2 + 20074624] = v21 + 1;
      }
      ++v6;
      ++v8;
    }
    while ( v6 < (int)dword_140404A6C[70998846] );
    v5 = dword_140404A6C[v3 + 20074625];
  }
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  dword_140404A6C[v3 + 20074626] = ~dword_140404A6C[v3 + 20074626];
  v22 = 0;
  dword_140404A6C[v3 + 20074627] = ~dword_140404A6C[v3 + 20074627];
  dword_140404A6C[v3 + 20074628] = ~dword_140404A6C[v3 + 20074628];
  dword_140404A6C[v3 + 20074629] = ~dword_140404A6C[v3 + 20074629];
  dword_140404A6C[v3 + 20074630] = ~dword_140404A6C[v3 + 20074630];
  dword_140404A6C[v3 + 20074625] = ~v5;
  if ( !v4 )
  {
    v23 = &dword_140404A6C[71097151];
    v24 = &dword_140404A6C[70998848];
    do
    {
      v25 = *(v23 - 0x8000) & 0xF0000;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 65536:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_122;
          case 131072:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_123;
          case 196608:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687552];
LABEL_124:
            dword_140404A6C[v28 + 70835007] = v29;
            break;
          case 262144:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835007] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            *(float *)&dword_140404A6C[3 * *v24 + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            *v23 |= 1u;
            break;
          case 327680:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687550];
LABEL_123:
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687551];
            goto LABEL_124;
          case 393216:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687550];
LABEL_122:
            dword_140404A6C[v26 + 70835006] = v27;
            goto LABEL_123;
        }
      }
      ++v22;
      ++v23;
      v24 += 4;
    }
    while ( v22 < (int)dword_140404A6C[70998846] );
  }
  v30 = *(void **)&dword_140404A6C[v2 + 20074615];
  dword_140404A6C[v2 + 20074613] = dword_140404A6C[70425405];
  free(v30);
  v31 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v32 = *(void **)&dword_140404A6C[v2 + 20074617];
  *(_QWORD *)&dword_140404A6C[v2 + 20074615] = v31;
  free(v32);
  v33 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v34 = *(void **)&dword_140404A6C[v2 + 20074619];
  *(_QWORD *)&dword_140404A6C[v2 + 20074617] = v33;
  free(v34);
  v35 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v36 = *(void **)&dword_140404A6C[v2 + 20074621];
  *(_QWORD *)&dword_140404A6C[v2 + 20074619] = v35;
  free(v36);
  v37 = sr_path_malloc(8 * dword_140404A6C[70425405]);
  v4 = (signed int)dword_140404A6C[70425405] <= 0;
  v38 = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 20074621] = v37;
  if ( !v4 )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = *(_QWORD *)&dword_140404A6C[v40 + 70687550];
      v40 += 3;
      v42 = *(_QWORD *)&dword_140404A6C[v2 + 20074615];
      v39 += 8;
      ++v38;
      *(_QWORD *)(v42 + v40 * 4 - 12) = v41;
      *(_DWORD *)(v42 + v40 * 4 - 4) = dword_140404A6C[v40 + 70687549];
      v43 = *(_QWORD *)&dword_140404A6C[v2 + 20074617];
      *(_QWORD *)(v43 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70736699];
      *(_DWORD *)(v43 + v40 * 4 - 4) = dword_140404A6C[v40 + 70736701];
      v44 = *(_QWORD *)&dword_140404A6C[v2 + 20074619];
      *(_QWORD *)(v44 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70785851];
      *(_DWORD *)(v44 + v40 * 4 - 4) = dword_140404A6C[v40 + 70785853];
      *(_QWORD *)(v39 + *(_QWORD *)&dword_140404A6C[v2 + 20074621] - 8) = *(_QWORD *)&dword_140404A6C[v40 + 70835003];
    }
    while ( v38 < (int)dword_140404A6C[70425405] );
  }
  v45 = *(void **)&dword_140404A6C[v2 + 20074631];
  dword_140404A6C[v2 + 20074623] = dword_140404A6C[70998846];
  dword_140404A6C[v2 + 20074639] = dword_140404A6C[71179071];
  free(v45);
  v46 = sr_path_malloc(16 * dword_140404A6C[70998846]);
  v47 = *(void **)&dword_140404A6C[v2 + 20074633];
  *(_QWORD *)&dword_140404A6C[v2 + 20074631] = v46;
  free(v47);
  v48 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v49 = *(void **)&dword_140404A6C[v2 + 20074637];
  *(_QWORD *)&dword_140404A6C[v2 + 20074633] = v48;
  free(v49);
  v50 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v51 = *(void **)&dword_140404A6C[v2 + 20074635];
  *(_QWORD *)&dword_140404A6C[v2 + 20074637] = v50;
  free(v51);
  v52 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v53 = *(void **)&dword_140404A6C[v2 + 20074641];
  *(_QWORD *)&dword_140404A6C[v2 + 20074635] = v52;
  free(v53);
  v54 = sr_path_malloc(12 * dword_140404A6C[71179071]);
  v55 = *(void **)&dword_140404A6C[v2 + 20074643];
  *(_QWORD *)&dword_140404A6C[v2 + 20074641] = v54;
  free(v55);
  v56 = sr_path_malloc(4 * dword_140404A6C[71179071]);
  v57 = *(__m128i **)&dword_140404A6C[v2 + 20074631];
  *(_QWORD *)&dword_140404A6C[v2 + 20074643] = v56;
  sub_1401FC920(v57, (     __m128i *)&dword_140404A6C[70998847], 16 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074633],
    (     __m128i *)&dword_140404A6C[71064383],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074637],
    (     __m128i *)&dword_140404A6C[71080767],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074635],
    (     __m128i *)&dword_140404A6C[71097151],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074641],
    (     __m128i *)&dword_140404A6C[71179072],
    12 * dword_140404A6C[71179071]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074643],
    (     __m128i *)&dword_140404A6C[71277377],
    4 * dword_140404A6C[71179071]);
  v58 = 0;
  if ( (int)dword_140404A6C[v2 + 20074623] > 0 )
  {
    v59 = 0;
    do
    {
      v59 += 4;
      ++v58;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 20074633] + v59 - 4) &= 0xFFFu;
    }
    while ( v58 < (int)dword_140404A6C[v2 + 20074623] );
  }
  v60 = *(void **)&dword_140404A6C[v2 + 20074653];
  dword_140404A6C[v2 + 20074651] = dword_140404A6C[71655762];
  free(v60);
  result = sr_path_malloc(48 * dword_140404A6C[71655762]);
  *(_QWORD *)&dword_140404A6C[v2 + 20074653] = result;
  if ( (int)dword_140404A6C[v2 + 20074651] > 0 )
  {
    v62 = 0;
    v63 = &dword_140404A6C[71655770];
    do
    {
      v64 = *(v63 - 2);
      v63 += 20;
      v65 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      v62 += 48;
      ++v1;
      *(_DWORD *)(v62 + v65 - 48) = v64;
      *(_DWORD *)(v62 + v65 - 44) = *(v63 - 21);
      *(_DWORD *)(v62 + v65 - 40) = *(v63 - 20);
      v66 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v66 + v62 - 36) = *(v63 - 19);
      *(_DWORD *)(v66 + v62 - 32) = *(v63 - 18);
      *(_DWORD *)(v66 + v62 - 28) = *(v63 - 17);
      v67 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v67 + v62 - 24) = *(v63 - 16);
      *(_DWORD *)(v67 + v62 - 20) = *(v63 - 15);
      *(_DWORD *)(v67 + v62 - 16) = *(v63 - 14);
      v68 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v68 + v62 - 12) = *(v63 - 13);
      *(_DWORD *)(v68 + v62 - 8) = *(v63 - 12);
      result = *(v63 - 11);
      *(_DWORD *)(v68 + v62 - 4) = result;
    }
    while ( v1 < (int)dword_140404A6C[v2 + 20074651] );
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 1512DF768: using guessed type unsigned int;
// 1512DF76C: using guessed type unsigned int;
// 1512DF770: using guessed type unsigned int;
// 1512DF774: using guessed type unsigned int;
// 15131C768: using guessed type unsigned int;
// 15133C768: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (0000000140018CA0) ----------------------------------------------------
__int64            sub_140018CA0(int *a1, int a2, int *a3, unsigned __int16 a4, float a5)
{
  signed int v6; // r11d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm15_4
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // xmm9_4
  int v19; // xmm10_4
  int v20; // xmm11_4
  __int64 v21; // rax
  int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rax
  int v26; // xmm3_4
  int v27; // xmm4_4
  int v28; // xmm5_4
  __int64 v29; // rax
  float v30; // xmm7_4
  float v31; // xmm8_4
  int v32; // xmm6_4
  int v33; // xmm7_4
  int v34; // xmm8_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx

  v6 = 0;
  result = a2;
  v8 = 263004LL * a2;
  v9 = 58LL * a4;
  v10 = (float)((float)*a3 * a5) + *(float *)&dword_140404A6C[v8 + 111579638];
  v11 = (float)((float)a3[1] * a5) + *(float *)&dword_140404A6C[v8 + 111579639];
  v12 = (float)((float)a3[2] * a5) + *(float *)&dword_140404A6C[v8 + 111579640];
  if ( (int)dword_140404A6C[v9 + 20074623] > 0 )
  {
    v13 = *a1;
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
      v16 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
      v17 = 3 * *(_DWORD *)(v16 + v14);
      *(float *)&v18 = (float)(a5 * *(float *)(v15 + 4 * v17)) + v10;
      *(float *)&v19 = (float)(a5 * *(float *)(v15 + 4 * v17 + 4)) + v11;
      *(float *)&v20 = (float)(a5 * *(float *)(v15 + 4 * v17 + 8)) + v12;
      v21 = 3 * *(_DWORD *)(v16 + v14 + 4);
      *(float *)&v22 = (float)(a5 * *(float *)(v15 + 4 * v21)) + v10;
      *(float *)&v23 = (float)(a5 * *(float *)(v15 + 4 * v21 + 4)) + v11;
      *(float *)&v24 = (float)(a5 * *(float *)(v15 + 4 * v21 + 8)) + v12;
      v25 = 3 * *(_DWORD *)(v16 + v14 + 8);
      *(float *)&v26 = (float)(a5 * *(float *)(v15 + 4 * v25)) + v10;
      *(float *)&v27 = (float)(a5 * *(float *)(v15 + 4 * v25 + 4)) + v11;
      *(float *)&v28 = (float)(a5 * *(float *)(v15 + 4 * v25 + 8)) + v12;
      v29 = 3 * *(_DWORD *)(v16 + v14 + 12);
      v30 = a5 * *(float *)(v15 + 4 * v29 + 4);
      v31 = a5 * *(float *)(v15 + 4 * v29 + 8);
      *(float *)&v32 = (float)(a5 * *(float *)(v15 + 4 * v29)) + v10;
      result = (unsigned int)v13;
      *(float *)&v33 = v30 + v11;
      *(float *)&v34 = v31 + v12;
      if ( v13 < 256 )
      {
        v35 = 3LL * v13;
        a1[2 * v35 + 1] = v18;
        a1[2 * v35 + 2] = v19;
        a1[2 * v35 + 3] = v20;
        v36 = 3LL * *a1;
        a1[2 * v36 + 4] = v22;
        a1[2 * v36 + 5] = v23;
        a1[2 * v36 + 6] = v24;
        result = (unsigned int)++*a1;
      }
      v13 = result;
      if ( (int)result < 256 )
      {
        v37 = 3LL * (int)result;
        a1[2 * v37 + 1] = v22;
        a1[2 * v37 + 2] = v23;
        a1[2 * v37 + 3] = v24;
        result = *a1;
        v38 = 3 * result;
        a1[2 * v38 + 4] = v26;
        a1[2 * v38 + 5] = v27;
        a1[2 * v38 + 6] = v28;
        v13 = ++*a1;
      }
      if ( v13 < 256 )
      {
        v39 = 3LL * v13;
        a1[2 * v39 + 1] = v26;
        a1[2 * v39 + 2] = v27;
        a1[2 * v39 + 3] = v28;
        result = *a1;
        v40 = 3 * result;
        a1[2 * v40 + 4] = v32;
        a1[2 * v40 + 5] = v33;
        a1[2 * v40 + 6] = v34;
        v13 = ++*a1;
        if ( *a1 < 256 )
        {
          v41 = 3LL * v13;
          a1[2 * v41 + 1] = v32;
          a1[2 * v41 + 2] = v33;
          a1[2 * v41 + 3] = v34;
          result = *a1;
          v42 = 3 * result;
          a1[2 * v42 + 4] = v18;
          a1[2 * v42 + 5] = v19;
          a1[2 * v42 + 6] = v20;
          v13 = ++*a1;
        }
      }
      ++v6;
      v14 += 16;
    }
    while ( v6 < (int)dword_140404A6C[v9 + 20074623] );
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


//----- (0000000140019140) ----------------------------------------------------
unsigned int *           sub_140019140(int a1, float *a2)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v4 = 0.875;
      v5 = 0.0;
      v7 = 1.0;
      v13 = 0.0;
      v9 = 0.0;
      dword_140404A6C[19928789] = 0;
      v15 = 0.0;
      dword_140404A6C[19928790] = 1063256064;
      dword_140404A6C[19928791] = 1065353216;
      v6 = 1.0;
      dword_140404A6C[19928798] = 1065353216;
      v10 = 0.875;
      dword_140404A6C[19928799] = 1063256064;
      v8 = 1.0;
      dword_140404A6C[19928800] = 1065353216;
      v11 = 1.0;
      dword_140404A6C[19928834] = 1065353216;
      v12 = 0.875;
      dword_140404A6C[19928835] = 1063256064;
      v14 = 0.875;
      dword_140404A6C[19928836] = 0;
      v16 = 196608;
      dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928826] = 1063256064;
      dword_140404A6C[19928827] = 0;
    }
    else
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1065353216;
      dword_140404A6C[19928791] = 1031798784;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1065353216;
      dword_140404A6C[19928800] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928836] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1031798784;
      v16 = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      v8 = *(float *)&dword_140404A6C[19928800];
      v10 = *(float *)&dword_140404A6C[19928799];
      v6 = *(float *)&dword_140404A6C[19928798];
      v7 = *(float *)&dword_140404A6C[19928791];
      v4 = *(float *)&dword_140404A6C[19928790];
      v5 = *(float *)&dword_140404A6C[19928789];
      v13 = *(float *)&dword_140404A6C[19928836];
      v12 = *(float *)&dword_140404A6C[19928835];
      v11 = *(float *)&dword_140404A6C[19928834];
      v15 = *(float *)&dword_140404A6C[19928827];
      v14 = *(float *)&dword_140404A6C[19928826];
      v9 = *(float *)&dword_140404A6C[19928825];
    }
  }
  else
  {
    v4 = 0.0625;
    v5 = 0.0;
    v6 = 1.0;
    v7 = 0.0;
    v8 = 0.0;
    dword_140404A6C[19928789] = 0;
    v9 = 0.0;
    dword_140404A6C[19928790] = 1031798784;
    dword_140404A6C[19928791] = 0;
    v10 = 0.0625;
    dword_140404A6C[19928798] = 1065353216;
    v11 = 1.0;
    dword_140404A6C[19928799] = 1031798784;
    v12 = 0.0625;
    dword_140404A6C[19928800] = 0;
    v13 = 1.0;
    dword_140404A6C[19928834] = 1065353216;
    v14 = 0.0625;
    dword_140404A6C[19928835] = 1031798784;
    v15 = 1.0;
    dword_140404A6C[19928836] = 1065353216;
    v16 = 0x40000;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
  }
  *(float *)&dword_140404A6C[19928789] = v5 + *a2;
  *(float *)&dword_140404A6C[19928790] = v4 + a2[1];
  *(float *)&dword_140404A6C[19928791] = v7 + a2[2];
  *(float *)&dword_140404A6C[19928798] = v6 + *a2;
  *(float *)&dword_140404A6C[19928799] = v10 + a2[1];
  *(float *)&dword_140404A6C[19928800] = v8 + a2[2];
  *(float *)&dword_140404A6C[19928834] = v11 + *a2;
  *(float *)&dword_140404A6C[19928835] = v12 + a2[1];
  *(float *)&dword_140404A6C[19928836] = v13 + a2[2];
  *(float *)&dword_140404A6C[19928825] = v9 + *a2;
  *(float *)&dword_140404A6C[19928826] = v14 + a2[1];
  *(float *)&dword_140404A6C[19928827] = v15 + a2[2];
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, a1 | v16);
  dword_140404A6C[dword_140404A6C[70998846] + 71097150] = 128;
  return &dword_140404A6C[71097151];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (00000001400194B0) ----------------------------------------------------
unsigned int *           sub_1400194B0(int a1, float *a2, char a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm12_4
  float v14; // xmm6_4
  float v15; // xmm13_4
  float v16; // xmm7_4
  int v17; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v5 = 0.875;
      v6 = 0.0;
      v8 = 1.0;
      v14 = 0.0;
      v10 = 0.0;
      v16 = 0.0;
      dword_140404A6C[19928789] = 0;
      v7 = 1.0;
      dword_140404A6C[19928790] = 1063256064;
      v11 = 0.875;
      dword_140404A6C[19928791] = 1065353216;
      v9 = 1.0;
      dword_140404A6C[19928798] = 1065353216;
      v12 = 1.0;
      dword_140404A6C[19928799] = 1063256064;
      v13 = 0.875;
      dword_140404A6C[19928800] = 1065353216;
      v15 = 0.875;
      dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928835] = 1063256064;
      dword_140404A6C[19928836] = 0;
      dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928826] = 1063256064;
      dword_140404A6C[19928827] = 0;
      if ( (a3 & 2) != 0 )
      {
        v14 = 0.0625;
        v16 = 0.0625;
        dword_140404A6C[19928836] = 1031798784;
        dword_140404A6C[19928827] = 1031798784;
      }
      if ( (a3 & 4) != 0 )
      {
        v7 = 0.9375;
        dword_140404A6C[19928834] = 1064304640;
        dword_140404A6C[19928798] = 1064304640;
        v12 = 0.9375;
      }
      if ( (a3 & 8) != 0 )
      {
        v8 = 0.9375;
        v9 = 0.9375;
        dword_140404A6C[19928791] = 1064304640;
        dword_140404A6C[19928800] = 1064304640;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v6 = 0.0625;
        v10 = 0.0625;
        dword_140404A6C[19928789] = 1031798784;
        dword_140404A6C[19928825] = 1031798784;
      }
      v17 = 196608;
    }
    else
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1065353216;
      dword_140404A6C[19928791] = 1031798784;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1065353216;
      dword_140404A6C[19928800] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928836] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1031798784;
      v17 = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      v10 = *(float *)&dword_140404A6C[19928825];
      v9 = *(float *)&dword_140404A6C[19928800];
      v7 = *(float *)&dword_140404A6C[19928798];
      v8 = *(float *)&dword_140404A6C[19928791];
      v5 = *(float *)&dword_140404A6C[19928790];
      v6 = *(float *)&dword_140404A6C[19928789];
      v14 = *(float *)&dword_140404A6C[19928836];
      v13 = *(float *)&dword_140404A6C[19928835];
      v12 = *(float *)&dword_140404A6C[19928834];
      v16 = *(float *)&dword_140404A6C[19928827];
      v15 = *(float *)&dword_140404A6C[19928826];
      v11 = *(float *)&dword_140404A6C[19928799];
    }
  }
  else
  {
    v5 = 0.0625;
    v6 = 0.0;
    v7 = 1.0;
    v8 = 0.0;
    dword_140404A6C[19928789] = 0;
    v9 = 0.0;
    dword_140404A6C[19928790] = 1031798784;
    v10 = 0.0;
    dword_140404A6C[19928791] = 0;
    v11 = 0.0625;
    dword_140404A6C[19928798] = 1065353216;
    v12 = 1.0;
    dword_140404A6C[19928799] = 1031798784;
    v13 = 0.0625;
    dword_140404A6C[19928800] = 0;
    v14 = 1.0;
    dword_140404A6C[19928834] = 1065353216;
    v15 = 0.0625;
    dword_140404A6C[19928835] = 1031798784;
    v16 = 1.0;
    dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
    if ( (a3 & 2) != 0 )
    {
      dword_140404A6C[19928791] = 1031798784;
      v8 = 0.0625;
      dword_140404A6C[19928800] = 1031798784;
      v9 = 0.0625;
    }
    if ( (a3 & 4) != 0 )
    {
      v7 = 0.9375;
      dword_140404A6C[19928834] = 1064304640;
      dword_140404A6C[19928798] = 1064304640;
      v12 = 0.9375;
    }
    if ( (a3 & 8) != 0 )
    {
      v14 = 0.9375;
      v16 = 0.9375;
      dword_140404A6C[19928836] = 1064304640;
      dword_140404A6C[19928827] = 1064304640;
    }
    if ( (a3 & 0x10) != 0 )
    {
      dword_140404A6C[19928789] = 1031798784;
      v6 = 0.0625;
      dword_140404A6C[19928825] = 1031798784;
      v10 = 0.0625;
    }
    v17 = 0x40000;
  }
  *(float *)&dword_140404A6C[19928789] = v6 + *a2;
  *(float *)&dword_140404A6C[19928790] = v5 + a2[1];
  *(float *)&dword_140404A6C[19928791] = v8 + a2[2];
  *(float *)&dword_140404A6C[19928798] = v7 + *a2;
  *(float *)&dword_140404A6C[19928799] = v11 + a2[1];
  *(float *)&dword_140404A6C[19928800] = v9 + a2[2];
  *(float *)&dword_140404A6C[19928834] = v12 + *a2;
  *(float *)&dword_140404A6C[19928835] = v13 + a2[1];
  *(float *)&dword_140404A6C[19928836] = v14 + a2[2];
  *(float *)&dword_140404A6C[19928825] = v10 + *a2;
  *(float *)&dword_140404A6C[19928826] = v15 + a2[1];
  *(float *)&dword_140404A6C[19928827] = v16 + a2[2];
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, a1 | v17);
  dword_140404A6C[dword_140404A6C[70998846] + 71097150] = 128;
  return &dword_140404A6C[71097151];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (0000000140019940) ----------------------------------------------------
unsigned __int64            sub_140019940(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        unsigned int a8,
        int *a9)
{
  int *v10; // r14
  int v11; // ebx
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // edx

  v10 = dword_1402B3664;
  v11 = 0;
  v12 = 1;
  do
  {
    result = a8 & v12;
    if ( (_DWORD)result == v12 )
    {
      v15 = 3LL * *(v10 - 1);
      v16 = *v10;
      *(float *)&dword_140404A6C[19928789] = (float)(a5 * *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) + a2;
      *(float *)&dword_140404A6C[19928790] = (float)(a6 * *(float *)&dword_1402B34F0[v15 + 1]) + a3;
      v17 = a7 * *(float *)&dword_1402B34F0[v15 + 2];
      v18 = 3 * v16;
      v19 = v10[1];
      *(float *)&dword_140404A6C[19928791] = v17 + a4;
      *(float *)&dword_140404A6C[19928798] = (float)(a5 * *(float *)&dword_1402B34F0[v18]) + a2;
      *(float *)&dword_140404A6C[19928799] = (float)(a6 * *(float *)&dword_1402B34F0[v18 + 1]) + a3;
      v20 = a7 * *(float *)&dword_1402B34F0[v18 + 2];
      v21 = 3 * v19;
      v22 = v10[2];
      *(float *)&dword_140404A6C[19928800] = v20 + a4;
      *(float *)&dword_140404A6C[19928834] = (float)(a5 * *(float *)&dword_1402B34F0[v21]) + a2;
      *(float *)&dword_140404A6C[19928835] = (float)(a6 * *(float *)&dword_1402B34F0[v21 + 1]) + a3;
      *(float *)&dword_140404A6C[19928836] = (float)(a7 * *(float *)&dword_1402B34F0[v21 + 2]) + a4;
      *(float *)&dword_140404A6C[19928825] = (float)(a5 * *(float *)&dword_1402B34F0[3 * v22]) + a2;
      *(float *)&dword_140404A6C[19928826] = (float)(a6 * *(float *)&dword_1402B34F0[3 * v22 + 1]) + a3;
      *(float *)&dword_140404A6C[19928827] = (float)(a7 * *(float *)&dword_1402B34F0[3 * v22 + 2]) + a4;
      if ( v11 )
      {
        switch ( v11 )
        {
          case 1:
            v23 = 393216;
            break;
          case 2:
            v23 = 0x10000;
            break;
          case 3:
            v23 = 327680;
            break;
          default:
            v23 = 0x40000;
            if ( v11 == 4 )
              v23 = 0x20000;
            break;
        }
      }
      else
      {
        v23 = 196608;
      }
      v24 = sub_14001B5C0(a1, v23);
      v25 = *a9;
      if ( (unsigned int)(*a9 - 1) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 1;
      if ( (unsigned int)(v25 - 9) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 9;
      result = sub_140001F20(
                 (__int64)&dword_140404A6C[19928789],
                 (__int64)&dword_140404A6C[19928837],
                 1,
                 1,
                 1,
                 1,
                 v24 | (unsigned int)v25);
    }
    ++v11;
    v12 = __ROL4__(v12, 1);
    v10 += 4;
    ++a9;
  }
  while ( v11 < 6 );
  return result;
}

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140019C10) ----------------------------------------------------
__int64            sub_140019C10(__int64 a1, int a2, int a3)
{
  int *v3; // r11
  int v4; // r9d
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm12_4
  float v18; // xmm5_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm2_4
  unsigned int v26; // xmm0_4
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx

  v3 = dword_1402B3664;
  v4 = 1;
  v8 = 6;
  do
  {
    result = a3 & (unsigned int)v4;
    if ( (_DWORD)result == v4 )
    {
      v10 = 3LL * v3[1];
      v11 = 3LL * *v3;
      v12 = *(v3 - 1);
      v13 = *(float *)(a1 + 12LL * *v3 + 8) - *(float *)(a1 + 12 * v12 + 8);
      v14 = *(float *)(a1 + 12LL * v3[1] + 4) - *(float *)(a1 + 12 * v12 + 4);
      v15 = *(float *)(a1 + 12LL * v3[1] + 8) - *(float *)(a1 + 12 * v12 + 8);
      v16 = *(float *)(a1 + 12LL * *v3 + 4) - *(float *)(a1 + 12 * v12 + 4);
      v17 = *(float *)(a1 + 12 * v12);
      v18 = *(float *)(a1 + 12LL * *v3) - v17;
      v19 = (float)(v14 * v13) - (float)(v15 * v16);
      v20 = *(float *)(a1 + 12LL * v3[1]) - v17;
      v21 = (float)(v20 * v16) - (float)(v14 * v18);
      v22 = (float)(v15 * v18) - (float)(v20 * v13);
      v23 = fsqrt((float)((float)(v22 * v22) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v23 == 0.0 )
      {
        *(float *)&v24 = 0.0;
        *(float *)&v25 = 0.0;
        *(float *)&v26 = 0.0;
      }
      else
      {
        *(float *)&v24 = (float)(1.0 / v23) * v19;
        *(float *)&v25 = (float)(1.0 / v23) * v22;
        *(float *)&v26 = (float)(1.0 / v23) * v21;
      }
      v27 = dword_140404A6C[70425405];
      v28 = 3LL * (int)dword_140404A6C[70425405];
      *(float *)&dword_140404A6C[v28 + 70687550] = v17;
      dword_140404A6C[v28 + 70687551] = *(_DWORD *)(a1 + 12 * v12 + 4);
      dword_140404A6C[v28 + 70687552] = *(_DWORD *)(a1 + 12 * v12 + 8);
      v29 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v29 + 70736702] = v24;
      dword_140404A6C[v29 + 70736703] = v25;
      dword_140404A6C[v29 + 70736704] = v26;
      v30 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v30 + 70687550] = *(_DWORD *)(a1 + 4 * v11);
      dword_140404A6C[v30 + 70687551] = *(_DWORD *)(a1 + 4 * v11 + 4);
      dword_140404A6C[v30 + 70687552] = *(_DWORD *)(a1 + 4 * v11 + 8);
      v31 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v31 + 70736702] = v24;
      dword_140404A6C[v31 + 70736703] = v25;
      dword_140404A6C[v31 + 70736704] = v26;
      v32 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v32 + 70687550] = *(_DWORD *)(a1 + 4 * v10);
      dword_140404A6C[v32 + 70687551] = *(_DWORD *)(a1 + 4 * v10 + 4);
      dword_140404A6C[v32 + 70687552] = *(_DWORD *)(a1 + 4 * v10 + 8);
      v33 = 3LL * (int)dword_140404A6C[70425405];
      v34 = v3[2];
      dword_140404A6C[v33 + 70736702] = v24;
      dword_140404A6C[v33 + 70736703] = v25;
      dword_140404A6C[v33 + 70736704] = v26;
      v35 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v35 + 70687550] = *(_DWORD *)(a1 + 12 * v34);
      dword_140404A6C[v35 + 70687551] = *(_DWORD *)(a1 + 12 * v34 + 4);
      dword_140404A6C[v35 + 70687552] = *(_DWORD *)(a1 + 12 * v34 + 8);
      v36 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v36 + 70736702] = v24;
      dword_140404A6C[v36 + 70736703] = v25;
      dword_140404A6C[v36 + 70736704] = v26;
      ++dword_140404A6C[70425405];
      if ( *(float *)&v25 <= 0.70700002 )
      {
        if ( *(float *)&v25 >= -0.70700002 )
        {
          if ( *(float *)&v24 <= 0.70700002 )
          {
            if ( *(float *)&v24 >= -0.70700002 )
            {
              v37 = 327680;
              if ( *(float *)&v26 > 0.70700002 )
                v37 = 393216;
            }
            else
            {
              v37 = 0x10000;
            }
          }
          else
          {
            v37 = 0x20000;
          }
        }
        else
        {
          v37 = 196608;
        }
      }
      else
      {
        v37 = 0x40000;
      }
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = v27;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v27 + 1;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v27 + 2;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v27 + 3;
      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v37 | a2;
      result = (int)dword_140404A6C[70998846];
      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
      ++dword_140404A6C[70998846];
    }
    v4 = __ROL4__(v4, 1);
    v3 += 4;
    --v8;
  }
  while ( v8 );
  return result;
}

// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (000000014001A050) ----------------------------------------------------
unsigned __int64            sub_14001A050(__int64 a1, float a2, float a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax

  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  v3 = a1;
  *(float *)&dword_140404A6C[19928800] = a3;
  *(float *)&dword_140404A6C[19928836] = a3;
  *(float *)&dword_140404A6C[19928827] = a3;
  *(float *)&dword_140404A6C[19928834] = a2;
  dword_140404A6C[19928789] = 0;
  dword_140404A6C[19928790] = 1065353216;
  dword_140404A6C[19928799] = 1065353216;
  dword_140404A6C[19928835] = 0;
  *(_QWORD *)&dword_140404A6C[19928825] = 0;
  v4 = sub_14001B5C0(a1, 0x60000u);
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, v4 | (v3 + 1));
  *(float *)&dword_140404A6C[19928789] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928834] = a2;
  *(float *)&dword_140404A6C[19928825] = a2;
  *(float *)&dword_140404A6C[19928827] = a3;
  dword_140404A6C[19928790] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928835] = 0;
  dword_140404A6C[19928826] = 0;
  v5 = sub_14001B5C0(v3, 0x20000u);
  return sub_140001F20(
           (__int64)&dword_140404A6C[19928789],
           (__int64)&dword_140404A6C[19928837],
           1,
           1,
           1,
           1,
           v5 | ((((_BYTE)v3 - 1) & 3u) + 1));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;

//----- (000000014001A1C0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14001A1C0(signed int a1, int a2, int a3)
{
  signed int v3; // r14d
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r15
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  int v13; // ebx
  float v14; // xmm8_4
  int v15; // ebx
  float v16; // xmm7_4
  float *v17; // rbx
  float v18; // xmm1_4
  float v19; // xmm2_4
  int v20; // eax
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A1C0[128];
#define v25 (*(__int64 (*))(void *)(sr_frame_14001A1C0 + 0)) /* [rsp+8h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_14001A1C0 + 80)) /* [rsp+58h] */
#define v27 (*(int (*))(void *)(sr_frame_14001A1C0 + 96)) /* [rsp+68h] */
#define v28 (*(int (*))(void *)(sr_frame_14001A1C0 + 100)) /* [rsp+6Ch] */
#define v29 (*(sr_frame_i128 (*))(void *)(sr_frame_14001A1C0 + 104)) /* [rsp+70h] */

  v3 = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279000);
  v27 = 4;
  v28 = 5;
  v5 = 768LL * a3 + 12352LL * a2;
  if ( *(unsigned int *)((char *)&dword_140404A6C[451023989] + v5) == 1 )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a1 >= 2 )
    {
      v9 = *(float *)((char *)&dword_140404A6C[451023990] + v5);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  v9 = 1.0
     - (float)(*(float *)((char *)&dword_140404A6C[451023991] + v5)
             + *(float *)((char *)&dword_140404A6C[451023990] + v5));
LABEL_6:
  v10 = *(float *)((char *)&dword_140404A6C[451023991] + v5);
  v11 = *(float *)((char *)&dword_140404A6C[451023992] + v5);
  v12 = *(float *)((char *)&dword_140404A6C[451023993] + v5);
  if ( v9 <= 0.0 )
  {
    v13 = v6 ^ 1;
  }
  else
  {
    v27 = 6;
    v13 = v7 ^ 1;
    sub_140019940(a1, 0.0, 0.0, 0.0, v9, 1.0, 0.0625, 8 * v13 + 18, SR_VEC_LANES(128, si128, i32));
  }
  v14 = v10 + v9;
  v15 = 8 * v13;
  if ( v14 < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[2] = 6;
    sub_140019940(a1, v14, 0.0, 0.0, 1.0 - v14, 1.0, 0.0625, v15 + 6, SR_VEC_LANES(128, si128, i32));
  }
  if ( v11 > 0.0 )
  {
    v28 = 6;
    sub_140019940(a1, 0.0, 0.0, 0.0, 1.0, v11, 0.0625, v15 + 34, SR_VEC_LANES(128, si128, i32));
  }
  v16 = v12 + v11;
  if ( v16 < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[0] = 6;
    sub_140019940(a1, 0.0, v16, 0.0, 1.0, 1.0 - v16, 0.0625, v15 + 3, SR_VEC_LANES(128, si128, i32));
  }
  if ( *(int *)((char *)&dword_140404A6C[451024083] + v5) > 0 )
  {
    v17 = (float *)((char *)&dword_140404A6C[451024087] + v5);
    do
    {
      if ( v8 && a1 >= 2 )
      {
        v18 = *(v17 - 1);
        v19 = *v17;
      }
      else
      {
        v19 = *v17;
        v18 = 1.0 - (float)(*v17 + *(v17 - 1));
      }
      v20 = *((_DWORD *)v17 - 3);
      v21 = v17[2];
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.1875;
          v28 = 6;
        }
        else if ( v20 == 2 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.3125;
          v28 = 6;
        }
        else
        {
          v22 = 0.0078125;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FC0);
          v27 = 7;
          v23 = 0.015625;
          v28 = 7;
        }
      }
      else
      {
        v22 = 0.0;
        v23 = 0.0625;
      }
      sub_140019940(a1, v18, v17[1], v22, v19, v21, v23, 0x3Fu, SR_VEC_LANES(128, si128, i32));
      ++v3;
      v17 += 6;
    }
    while ( v3 < *(int *)((char *)&dword_140404A6C[451024083] + v5) );
  }
  return 0; /* caller ignores native EAX */
}
#undef v25
#undef si128
#undef v27
#undef v28
#undef v29

// 140278FA0: using guessed type __int128 xmmword_140278FA0;
// 140278FC0: using guessed type __int128 xmmword_140278FC0;
// 140279000: using guessed type __int128 xmmword_140279000;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001A590) ----------------------------------------------------
__int64            sub_14001A590(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // xmm13_4
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // r11d
  float *v11; // r9
  signed int v12; // r8d
  unsigned int v13; // xmm1_4
  float v14; // xmm2_4
  unsigned int v15; // xmm4_4
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm5_4
  unsigned int v19; // xmm7_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm6_4
  unsigned int v22; // xmm9_4
  unsigned int v23; // xmm10_4
  unsigned int v24; // xmm11_4
  unsigned int v25; // xmm12_4
  __int64 v26; // rdx
  unsigned int *v27; // rax
  float v28; // xmm0_4
  unsigned int v29; // xmm2_4
  unsigned int v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx

  v3 = 3088LL * a2;
  v4 = 1015021568;
  result = a3;
  v6 = a1;
  v7 = 192LL * a3;
  v8 = v7 * 4 + v3 * 4;
  if ( dword_140404A6C[v7 + 451023989 + v3] == 1 )
    v4 = 998244352;
  v9 = *(int *)((char *)&dword_140404A6C[451024002] + v8);
  if ( v9 > 0 )
  {
    v10 = dword_140404A6C[v7 + 451023989 + v3];
    v11 = (float *)((char *)&dword_140404A6C[451024005] + v8);
    v12 = dword_140404A6C[71655762];
    do
    {
      if ( v10 == 1 && (int)v6 >= 2 )
      {
        v13 = *((unsigned int *)v11 - 1);
        v14 = *v11;
      }
      else
      {
        v14 = *v11;
        *(float *)&v13 = 1.0 - (float)(*v11 + *(v11 - 1));
      }
      v15 = *((unsigned int *)v11 + 1);
      *(float *)&v16 = v14 + *(float *)&v13;
      dword_140404A6C[19928789] = v13;
      *(float *)&v17 = *(float *)&v15 + v11[2];
      dword_140404A6C[19928835] = v15;
      dword_140404A6C[19928836] = v4;
      v18 = v4;
      dword_140404A6C[19928791] = v4;
      v19 = v4;
      dword_140404A6C[19928798] = v16;
      v20 = v16;
      dword_140404A6C[19928790] = v17;
      v21 = v17;
      dword_140404A6C[19928799] = v17;
      v22 = v4;
      dword_140404A6C[19928800] = v4;
      v23 = v13;
      dword_140404A6C[19928834] = v16;
      v24 = v15;
      dword_140404A6C[19928825] = v13;
      v25 = v4;
      dword_140404A6C[19928826] = v15;
      dword_140404A6C[19928827] = v4;
      if ( (int)v6 > 0 )
      {
        v26 = v6;
        do
        {
          v27 = &dword_140404A6C[19928791];
          do
          {
            v28 = 1.0 - *(float *)v27;
            v29 = v27[1];
            *v27 = *(v27 - 2);
            v30 = v27[4];
            *((float *)v27 - 2) = v28;
            v31 = 1.0 - *((float *)v27 + 3);
            v27[3] = v29;
            v32 = v27[7];
            *((float *)v27 + 1) = v31;
            v33 = 1.0 - *((float *)v27 + 6);
            v27[6] = v30;
            *((float *)v27 + 4) = v33;
            v34 = 1.0 - *((float *)v27 + 9);
            v27[9] = v32;
            *((float *)v27 + 7) = v34;
            v27 += 12;
          }
          while ( (__int64)v27 < (__int64)&dword_140404A6C[19928839] );
          --v26;
        }
        while ( v26 );
        v22 = dword_140404A6C[19928836];
        v15 = dword_140404A6C[19928835];
        v20 = dword_140404A6C[19928834];
        v25 = dword_140404A6C[19928827];
        v24 = dword_140404A6C[19928826];
        v23 = dword_140404A6C[19928825];
        v19 = dword_140404A6C[19928800];
        v21 = dword_140404A6C[19928799];
        v16 = dword_140404A6C[19928798];
        v18 = dword_140404A6C[19928791];
        v17 = dword_140404A6C[19928790];
        v13 = dword_140404A6C[19928789];
      }
      v11 += 5;
      v35 = 10LL * v12;
      dword_140404A6C[2 * v35 + 71655768] = v13;
      dword_140404A6C[2 * v35 + 71655769] = v17;
      dword_140404A6C[2 * v35 + 71655770] = v18;
      v36 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v36 + 71655771] = v16;
      dword_140404A6C[2 * v36 + 71655772] = v21;
      dword_140404A6C[2 * v36 + 71655773] = v19;
      v37 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v37 + 71655774] = v20;
      dword_140404A6C[2 * v37 + 71655775] = v15;
      dword_140404A6C[2 * v37 + 71655776] = v22;
      result = (int)dword_140404A6C[71655762];
      v38 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v38 + 71655777] = v23;
      dword_140404A6C[2 * v38 + 71655778] = v24;
      dword_140404A6C[2 * v38 + 71655779] = v25;
      v12 = ++dword_140404A6C[71655762];
      --v9;
    }
    while ( v9 );
  }
  return result;
}

// 14001A7D8: conditional instruction was optimized away because ecx.4==0
// 14001A7E7: conditional instruction was optimized away because ecx.4==0
// 14001A7F6: conditional instruction was optimized away because ecx.4==0
// 14001A805: conditional instruction was optimized away because ecx.4==0
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (000000014001A990) ----------------------------------------------------
__int64            sub_14001A990(int a1, int a2)
{
  __int64 v2; // rdx
  signed int v3; // ecx
  signed int v4; // ebx
  int *v5; // rdi
  int v6; // r13d
  __int64 v7; // rsi
  int v8; // r14d
  signed int v9; // r15d
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // edx
  bool v14; // zf
  char v15; // al
  int v16; // edi
  char v17; // bl
  int *v18; // r14
  signed int i; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  signed int v23; // ecx
  signed int v24; // r9d
  _WORD *v25; // r8
  unsigned int *j; // rdx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A990[128];
#define v33 (*(__int64 (*))(void *)(sr_frame_14001A990 + 0)) /* [rsp+0h] */
#define v34 (*(int (*))(void *)(sr_frame_14001A990 + 64)) /* [rsp+40h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14001A990 + 72)) /* [rsp+48h] */
#define v36 (*(int (*))(void *)(sr_frame_14001A990 + 80)) /* [rsp+50h] */
#define v37 (*(int (*))(void *)(sr_frame_14001A990 + 88)) /* [rsp+58h] */
#define v38 (*(int (*))(void *)(sr_frame_14001A990 + 92)) /* [rsp+5Ch] */
#define v39 (*(int (*))(void *)(sr_frame_14001A990 + 96)) /* [rsp+60h] */
#define v40 (*(_DWORD (*)[4])(void *)(sr_frame_14001A990 + 104)) /* [rsp+68h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_14001A990 + 120)) /* [rsp+78h] */

  v2 = a2 & 0xFFFFFF;
  v39 = a1;
  if ( a1 )
  {
    v3 = 0xFFFF;
    v34 = 0xFFFF;
LABEL_6:
    v4 = 0;
    v5 = v40;
    v6 = v2 & 0xF;
    v7 = 58LL * v3;
    v37 = v2 & 0x10000;
    v8 = (unsigned __int8)v2 >> 4;
    v9 = ((unsigned int)v2 >> 8) & 0xF;
    dword_140404A6C[v7 + 20074648] = 0;
    v10 = (unsigned __int16)v2 >> 12;
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[71655762] = 0;
    v38 = v2 & 0x20000;
    v40[0] = (unsigned __int8)v6;
    v40[1] = (unsigned __int8)v8;
    v40[2] = v9;
    v40[3] = (unsigned __int16)v10;
    v11 = ((unsigned int)v2 >> 18) & 0xF;
    do
    {
      v12 = *v5;
      if ( (unsigned int)(v12 - 3) <= 0xC
        && (!dword_140404A6C[3088 * v11 + 451023413 + 192 * v12] || (unsigned int)v4 < 2) )
      {
        sub_14001A590(v4, v11, v12 - 3);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    v13 = v37;
    v14 = v37 == 0;
    dword_140404A6C[v7 + 20074649] = 0;
    v15 = !v14;
    if ( v6 > 0 && v6 != 2 )
      v15 |= 2u;
    if ( v8 > 0 && v8 != 2 )
      v15 |= 4u;
    if ( v9 > 0 && v9 != 2 )
      v15 |= 8u;
    if ( v10 > 0 && v10 != 2 )
      v15 |= 0x10u;
    v16 = v38;
    v17 = v15 | 0x20;
    if ( !v38 )
      v17 = v15;
    if ( v13 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(0, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 1u;
    }
    if ( v16 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(5, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 0x20u;
    }
    v18 = v40;
    for ( i = 0; i < 4; ++i )
    {
      v20 = *v18;
      if ( *v18 == 1 )
      {
        v35 = 0;
        v36 = 0;
        sub_140019140(i + 1, (float *)&v35);
        dword_140404A6C[v7 + 20074649] |= 1 << (i + 1);
      }
      else
      {
        if ( (unsigned int)(v20 - 3) <= 0xC )
          sub_14001A1C0(i, v11, v20 - 3);
        if ( v20 == 2 )
        {
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          dword_140404A6C[19928799] = 1065353216;
          dword_140404A6C[19928800] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928825] = 0;
          dword_140404A6C[19928827] = 1031798784;
          v21 = sub_14001B5C0((unsigned int)i, 0x60000u);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v21 | (i + 1));
          dword_140404A6C[19928789] = 1031798784;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 0;
          *(_QWORD *)&dword_140404A6C[19928825] = 1031798784;
          dword_140404A6C[19928827] = 1031798784;
          v22 = sub_14001B5C0((unsigned int)i, 0x20000u);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v22 | ((((_BYTE)i - 1) & 3) + 1));
        }
      }
      ++v18;
    }
    dword_140404A6C[v7 + 20074645] = 1;
    dword_140404A6C[v7 + 20074646] = 1;
    dword_140404A6C[v7 + 20074647] = 1;
    if ( !v39 )
    {
      sub_140017CA0(v34);
      return v34; /* native EAX restored from [rsp+0x40] */
    }
    v23 = dword_140404A6C[70998846];
    v24 = 0;
    if ( (int)dword_140404A6C[70998846] <= 0 )
      return v34; /* native EAX restored from [rsp+0x40] */
    v25 = (_WORD *)&dword_140404A6C[71064383] + 1;
    for ( j = &dword_140404A6C[70998848]; ; j += 4 )
    {
      v27 = *(_DWORD *)(v25 - 1) & 0xF0000;
      if ( v27 )
        break;
LABEL_59:
      ++v24;
      v25 += 2;
      if ( v24 >= v23 )
        return v34; /* native EAX restored from [rsp+0x40] */
    }
    switch ( v27 )
    {
      case 65536:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_55:
        dword_140404A6C[v28 + 70835006] = v29;
        goto LABEL_56;
      case 131072:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
LABEL_56:
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687551];
        goto LABEL_57;
      case 196608:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_57:
        dword_140404A6C[v30 + 70835007] = v31;
        break;
      case 262144:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        *(float *)&dword_140404A6C[3 * *j + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        *(float *)&dword_140404A6C[3 * j[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        *(float *)&dword_140404A6C[3 * j[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
        break;
      case 327680:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_56;
      case 393216:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_55;
    }
    *v25 = 0;
    v23 = dword_140404A6C[70998846];
    goto LABEL_59;
  }
  if ( dword_140404A6C[v2 + 23937125] == -1 )
  {
    v3 = dword_140404A6C[19928869];
    v34 = dword_140404A6C[19928869];
    if ( (int)dword_140404A6C[19928869] < 0x10000 )
    {
      dword_140404A6C[v2 + 23937125] = dword_140404A6C[19928869];
      dword_140404A6C[19928869] = v3 + 1;
      goto LABEL_6;
    }
  }
  return v34; /* native EAX restored from [rsp+0x40] */
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 14500A700: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (000000014001B390) ----------------------------------------------------
__int64            sub_14001B390(int a1, int a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  int v7; // ebp
  int v8; // r8d
  __int64 v9; // r12
  unsigned int v10; // r13d
  signed int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rdi
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B390[128];
#define v24 (*(int (*))(void *)(sr_frame_14001B390 + 0)) /* [rsp+0h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_14001B390 + 8)) /* [rsp+8h] */
#define v26 (*(_DWORD * (*))(void *)(sr_frame_14001B390 + 16)) /* [rsp+10h] */
#define v27 (*(int (*))(void *)(sr_frame_14001B390 + 96)) /* [rsp+60h] */
#define v29 (*(signed int (*))(void *)(sr_frame_14001B390 + 112)) /* [rsp+70h] */

  v4 = a2;
  v5 = a1;
  v7 = a2;
  v8 = 5 - a2;
  v27 = 5 - a2;
  if ( a2 >= 3 )
    v7 = 5 - a2;
  v9 = 58LL * a1;
  v10 = dword_140404A6C[58 * a1 + 20074625 + a2] & a3;
  v11 = 0;
  v29 = 0;
  if ( (int)dword_140404A6C[58 * v5 + 20074624] > 0 )
  {
    v12 = *(_DWORD **)&dword_140404A6C[v9 + 20074637];
    v13 = 8;
    v14 = 58LL * a4;
    v26 = v12;
    do
    {
      if ( *v12 == v4 )
      {
        v15 = dword_140404A6C[v14 + 20074624];
        if ( (int)v15 > 0 )
        {
          v16 = *(_DWORD **)&dword_140404A6C[v14 + 20074637];
          v17 = 12;
          v24 = __ROL4__(1, v11);
          v25 = dword_140404A6C[v14 + 20074624];
          do
          {
            if ( *v16 == v8 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v18 != v7 )
                {
                  v19 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
                  v20 = *(_QWORD *)&dword_140404A6C[v14 + 20074631];
                  v21 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
                  v22 = *(_QWORD *)&dword_140404A6C[v14 + 20074615];
                  if ( *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 8) + v18 + 2 * *(_DWORD *)(v20 + v17 - 8))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 8) + *(_DWORD *)(v19 + v13 - 8)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 12) + v18 + 2 * *(_DWORD *)(v20 + v17 - 12))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 4) + *(_DWORD *)(v19 + v13 - 4)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17) + v18 + 2 * *(_DWORD *)(v20 + v17))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13) + *(_DWORD *)(v19 + v13)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 4) + v18 + 2 * *(_DWORD *)(v20 + v17 - 4))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 + 4) + *(_DWORD *)(v19 + v13 + 4))) )
                  {
                    break;
                  }
                }
                if ( ++v18 >= 3 )
                {
                  v10 |= v24;
                  break;
                }
              }
              v15 = v25;
              v8 = v27;
            }
            ++v16;
            v17 += 16;
            v25 = --v15;
          }
          while ( v15 );
          v11 = v29;
          v12 = v26;
          v4 = a2;
        }
      }
      ++v11;
      ++v12;
      v13 += 16;
      v29 = v11;
      v26 = v12;
    }
    while ( v11 < (int)dword_140404A6C[v9 + 20074624] );
  }
  return v10;
}
#undef v24
#undef v25
#undef v26
#undef v27
#undef v29

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (000000014001B6A0) ----------------------------------------------------
__int64 sub_14001B6A0()
{
  unsigned int *v0; // r14
  int v1; // edi
  int i; // esi
  int j; // ebx
  __int64 v4; // r8
  __int64 v5; // xmm2_8
  float *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _Alignas(16) unsigned sr_cube_filter_rotation[12];
  _Alignas(16) unsigned sr_cube_filter_vertices[28];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B6A0[624];
#define v10 (*(_DWORD (*)[10])(void *)(sr_frame_14001B6A0 + 0)) /* [rsp+8h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 40)) /* [rsp+30h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 608)) /* [rsp+268h] */

  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D40;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278DA0;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278EB0;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279730;
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  qword_1404042E0(dword_140404A6C[71738285]);
  qword_140404378(dword_140404A6C[71738294], 1, 0, &dword_140404A6C[431564565]);
  v0 = &dword_140404A6C[283790138];
  v1 = 256;
  for ( i = 1; i < 10; ++i )
  {
    qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    unk_1404046F0(36160, dword_140404A6C[2 * *v0 + 283791765]);
    ((void (*)(int,float))unk_1404042E8)((int)dword_140404A6C[71738298],_mm_cvtss_f32(_mm_cvtepi32_ps(_mm_setr_epi32(i-1,0,0,0))));
    for ( j = 0; j < 6; ++j )
    {
      unk_140404718(
        36160,
        36064,
        (unsigned int)(j + 34069),
        dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944],
        i);
      qword_140302FE8(0, 0, (unsigned int)v1, (unsigned int)v1);
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
      v7 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
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
      qword_140404170(34962, v7, v4);
      qword_140404198(34962, 0, 96, (char *)((uint64_t *)(void *)sr_cube_filter_vertices) + 4);
      qword_140404238(0);
      qword_140404238(1);
      qword_140404238(2);
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
      v11 = 24;
      v10[8] = 24;
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(24));
      qword_140302FF8(6, 0, 4);
      qword_140404230(0);
      qword_140404230(1);
      qword_140404230(2);
    }
    v1 >>= 1;
    ++v0;
  }
  unk_1404046F0(36160, 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v8) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v8);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v10
#undef v11
#undef v35

// 14001BAF3: variable 'v4' is possibly undefined
// 14001BC11: variable 'v8' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D40: using guessed type __int128 xmmword_140278D40;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DA0: using guessed type __int128 xmmword_140278DA0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278EB0: using guessed type __int128 xmmword_140278EB0;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279730: using guessed type __int128 xmmword_140279730;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 1404042E8: using guessed type __int64 (__fastcall *unk_1404042E8)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014001BF70) ----------------------------------------------------
__int64            sub_14001BF70(int a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  float v3; // xmm7_4
  float v4; // xmm15_4
  float v5; // xmm4_4
  float v6; // xmm12_4
  float v7; // xmm14_4
  __int64 v8; // rdx
  __int64 v9; // r8
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm12_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm14_4
  float v30; // xmm15_4
  __int64 result; // rax
  float v32; // xmm4_4
  float v33; // xmm9_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm9_4
  float v38; // xmm2_4
  float v39; // xmm9_4
  float v40; // xmm1_4
  float v41; // xmm10_4
  float v42; // xmm9_4
  float v43; // xmm15_4
  float v44; // xmm14_4
  float v45; // xmm10_4
  float v46; // xmm3_4
  float v47; // xmm11_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm12_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  float v55; // xmm5_4
  float v56; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001BF70[32];
#define v57 (*(float (*))(void *)(sr_frame_14001BF70 + 0)) /* [rsp+B0h] */
#define v58 (*(float (*))(void *)(sr_frame_14001BF70 + 16)) /* [rsp+C0h] */

  v1 = a1;
  v2 = 18LL * a1;
  v3 = *(float *)&dword_140404A6C[2 * v2 + 485543046];
  v4 = *(float *)&dword_140404A6C[2 * v2 + 485543038];
  v5 = -v3;
  v6 = *(float *)&dword_140404A6C[2 * v2 + 485543039];
  v7 = *(float *)&dword_140404A6C[2 * v2 + 485543037];
  v8 = 47LL * LOWORD(dword_140404A6C[2 * v2 + 485543029]);
  v9 = 47LL * HIWORD(dword_140404A6C[2 * v2 + 485543029]);
  v10 = (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215738] * v4)
                                      - (float)(*(float *)&dword_140404A6C[v8 + 18215737] * v6))
                              + *(float *)&dword_140404A6C[v8 + 18215718])
                      * v3)
              + *(float *)&dword_140404A6C[2 * v2 + 485543056])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215738]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543041])
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215737]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543042]))
                      + *(float *)&dword_140404A6C[v9 + 18215718])
              * (float)-v3);
  v11 = (float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215737] * v7)
                      - (float)(*(float *)&dword_140404A6C[v8 + 18215736] * v4))
              + *(float *)&dword_140404A6C[v8 + 18215720])
      * v3;
  v12 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215736] * v6)
                              - (float)(*(float *)&dword_140404A6C[v8 + 18215738] * v7))
                      + *(float *)&dword_140404A6C[v8 + 18215719])
              * v3)
      + *(float *)&dword_140404A6C[2 * v2 + 485543057];
  v13 = *(float *)&dword_140404A6C[2 * v2 + 485543040];
  v14 = v12
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543042])
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215738] * v13))
                      + *(float *)&dword_140404A6C[v9 + 18215719])
              * v5);
  v15 = (float)(v11 + *(float *)&dword_140404A6C[2 * v2 + 485543058])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215737] * v13)
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543041]))
                      + *(float *)&dword_140404A6C[v9 + 18215720])
              * v5);
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v10 * v10)) + (float)(v15 * v15));
  if ( v16 > 0.033333335f )
  {
    v10 = (float)(0.033333335f / v16) * v10;
    v14 = (float)(0.033333335f / v16) * v14;
    v15 = (float)(0.033333335f / v16) * v15;
  }
  v17 = *(float *)&dword_140404A6C[2 * v2 + 485543045];
  v18 = *(float *)&dword_140404A6C[2 * v2 + 485543044];
  v19 = *(float *)&dword_140404A6C[2 * v2 + 485543039];
  v58 = v18;
  *(float *)&dword_140404A6C[v8 + 18215721] = (float)(v10 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215721];
  *(float *)&dword_140404A6C[v8 + 18215722] = (float)(v14 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215722];
  *(float *)&dword_140404A6C[v8 + 18215723] = (float)(v15 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215723];
  v20 = (float)(v14 * v19) - (float)(v4 * v15);
  v21 = v10 * v19;
  v22 = *(float *)&dword_140404A6C[2 * v2 + 485543042];
  *(float *)&dword_140404A6C[v8 + 18215739] = (float)(v20 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215739];
  *(float *)&dword_140404A6C[v8 + 18215740] = (float)((float)((float)(v7 * v15) - v21) * (float)-v18)
                                            + *(float *)&dword_140404A6C[v8 + 18215740];
  v23 = *(float *)&dword_140404A6C[2 * v2 + 485543041];
  *(float *)&dword_140404A6C[v8 + 18215741] = (float)((float)((float)(v10 * v4) - (float)(v14 * v7)) * (float)-v18)
                                            + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v9 + 18215721] = (float)(v10 * v17) + *(float *)&dword_140404A6C[v9 + 18215721];
  *(float *)&dword_140404A6C[v9 + 18215722] = (float)(v14 * v17) + *(float *)&dword_140404A6C[v9 + 18215722];
  *(float *)&dword_140404A6C[v9 + 18215723] = (float)(v17 * v15) + *(float *)&dword_140404A6C[v9 + 18215723];
  *(float *)&dword_140404A6C[v9 + 18215739] = (float)((float)((float)(v14 * v22) - (float)(v23 * v15)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215739];
  *(float *)&dword_140404A6C[v9 + 18215740] = (float)((float)((float)(v13 * v15) - (float)(v10 * v22)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215740];
  *(float *)&dword_140404A6C[v9 + 18215741] = (float)((float)((float)(v10 * v23) - (float)(v14 * v13)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215741];
  v24 = *(float *)&dword_140404A6C[v8 + 18215737];
  v25 = *(float *)&dword_140404A6C[v8 + 18215736];
  v57 = v24;
  v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[v9 + 18215736];
  v29 = *(float *)&dword_140404A6C[v9 + 18215737];
  v30 = *(float *)&dword_140404A6C[v9 + 18215738];
  v26 = *(float *)&dword_140404A6C[v8 + 18215738];
  result = 244 * v1;
  v32 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543059] - (float)(v25 * 0.875)) + (float)(v28 * 0.875);
  v33 = *(float *)&dword_140404A6C[61 * v1 + 486149287];
  v34 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543060] - (float)(v24 * 0.875)) + (float)(v29 * 0.875);
  v35 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543061] - (float)(v26 * 0.875)) + (float)(v30 * 0.875);
  if ( v33 != 0.0 )
  {
    v36 = fsqrt((float)((float)(v34 * v34) + (float)(v32 * v32)) + (float)(v35 * v35));
    if ( v36 > v33 )
    {
      v37 = v33 / v36;
      v32 = v37 * v32;
      v34 = v37 * v34;
      v35 = v37 * v35;
    }
    v38 = *(float *)&dword_140404A6C[2 * v2 + 485543064];
    v39 = v29 - v24;
    v40 = v28 - v25;
    v41 = v30 - *(float *)&dword_140404A6C[v8 + 18215738];
    if ( v38 == 0.0 )
    {
      v32 = v32 + (float)(v40 * 0.125);
      v34 = v34 + (float)(v39 * 0.125);
      v35 = v35 + (float)(v41 * 0.125);
    }
    else
    {
      v32 = v32 + (float)(v38 * v40);
      v34 = v34 + (float)(v38 * v39);
      v35 = v35 + (float)(v38 * v41);
    }
    v26 = *(float *)&dword_140404A6C[v8 + 18215738];
    v24 = v57;
  }
  if ( dword_140404A6C[2 * v2 + 485543048] )
  {
    v42 = *(float *)&dword_140404A6C[2 * v2 + 485543049];
    v43 = v30 - v26;
    v44 = v29 - v24;
    v45 = *(float *)&dword_140404A6C[2 * v2 + 485543050];
    v46 = v28 - v25;
    v47 = *(float *)&dword_140404A6C[2 * v2 + 485543051];
    v48 = fsqrt((float)((float)(v42 * v42) + (float)(v45 * v45)) + (float)(v47 * v47));
    if ( v48 == 0.0 )
    {
      v49 = 0.0;
      v50 = 0.0;
    }
    else
    {
      v27 = v42 * (float)(1.0 / v48);
      v49 = v45 * (float)(1.0 / v48);
      v50 = v47 * (float)(1.0 / v48);
    }
    v51 = (float)((float)(v46 * v27) + (float)(v44 * v49)) + (float)(v43 * v50);
    v52 = v51 * v50;
    v18 = v58;
    v32 = v32 + (float)((float)((float)(v51 * v27) * 0.875) + (float)(v42 * 0.875));
    v34 = v34 + (float)((float)((float)(v51 * v49) * 0.875) + (float)(v45 * 0.875));
    v35 = v35 + (float)((float)(v52 * 0.875) + (float)(v47 * 0.875));
  }
  v53 = *(float *)&dword_140404A6C[2 * v2 + 485543062];
  v54 = v32 * v53;
  v55 = v34 * v53;
  v56 = v53 * v35;
  *(float *)&dword_140404A6C[v8 + 18215739] = (float)(v54 * v18) + *(float *)&dword_140404A6C[v8 + 18215739];
  *(float *)&dword_140404A6C[v8 + 18215740] = (float)(v55 * v18) + *(float *)&dword_140404A6C[v8 + 18215740];
  *(float *)&dword_140404A6C[v8 + 18215741] = (float)(v56 * v18) + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v9 + 18215739] = (float)((float)-v17 * v54) + *(float *)&dword_140404A6C[v9 + 18215739];
  *(float *)&dword_140404A6C[v9 + 18215740] = (float)((float)-v17 * v55) + *(float *)&dword_140404A6C[v9 + 18215740];
  *(float *)&dword_140404A6C[v9 + 18215741] = (float)((float)-v17 * v56) + *(float *)&dword_140404A6C[v9 + 18215741];
  return result;
}
#undef v57
#undef v58

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001C780) ----------------------------------------------------
__int64            sub_14001C780(int a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  __int64 v7; // rcx
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  __int64 v11; // rdx
  float v12; // xmm4_4
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  unsigned int v20; // xmm7_4
  float v21; // xmm2_4
  unsigned int v22; // xmm9_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  unsigned int v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  unsigned int v32; // xmm6_4
  unsigned int v33; // xmm3_4
  float v34; // xmm8_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm9_4
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4

  result = a1;
  v2 = 61LL * a1;
  v3 = 18LL * a1;
  v4 = *(float *)&dword_140404A6C[v2 + 486149267];
  v5 = *(float *)&dword_140404A6C[v2 + 486149269];
  v6 = *(float *)&dword_140404A6C[v2 + 486149268];
  v7 = (int)dword_140404A6C[v2 + 486149291];
  v8 = *(float *)&dword_140404A6C[v2 + 486149270];
  v9 = v6;
  v10 = *(float *)&dword_140404A6C[v2 + 486149271];
  v11 = (int)dword_140404A6C[v2 + 486149292];
  v12 = v10;
  LOWORD(dword_140404A6C[2 * v3 + 485543029]) = v7;
  v13 = 47 * v7;
  HIWORD(dword_140404A6C[2 * v3 + 485543029]) = v11;
  v14 = 47 * v11;
  *(float *)&v15 = (float)((float)(v6 * *(float *)&dword_140404A6C[v13 + 18215727])
                         + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215724]))
                 + (float)(v5 * *(float *)&dword_140404A6C[v13 + 18215730]);
  v16 = (float)(v6 * *(float *)&dword_140404A6C[v13 + 18215729])
      + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215726]);
  v17 = v5;
  v18 = (float)(v9 * *(float *)&dword_140404A6C[v13 + 18215728])
      + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215725]);
  v19 = v10 * *(float *)&dword_140404A6C[v14 + 18215728];
  *(float *)&v20 = v16 + (float)(v5 * *(float *)&dword_140404A6C[v13 + 18215732]);
  v21 = *(float *)&dword_140404A6C[v2 + 486149272];
  *(float *)&v22 = v18 + (float)(v17 * *(float *)&dword_140404A6C[v13 + 18215731]);
  v23 = v10 * *(float *)&dword_140404A6C[v14 + 18215729];
  v24 = v21 * *(float *)&dword_140404A6C[v14 + 18215730];
  v25 = (float)(v12 * *(float *)&dword_140404A6C[v14 + 18215727])
      + (float)(v8 * *(float *)&dword_140404A6C[v14 + 18215724]);
  dword_140404A6C[2 * v3 + 485543037] = v15;
  v26 = v8 * *(float *)&dword_140404A6C[v14 + 18215725];
  v27 = *(float *)&v15 + *(float *)&dword_140404A6C[v13 + 18215715];
  v28 = v8 * *(float *)&dword_140404A6C[v14 + 18215726];
  *(float *)&v29 = v25 + v24;
  dword_140404A6C[2 * v3 + 485543038] = v22;
  v30 = *(float *)&v22 + *(float *)&dword_140404A6C[v13 + 18215716];
  dword_140404A6C[2 * v3 + 485543039] = v20;
  v31 = *(float *)&v20 + *(float *)&dword_140404A6C[v13 + 18215717];
  dword_140404A6C[2 * v3 + 485543040] = v29;
  *(float *)&v32 = (float)(v23 + v28) + (float)(v21 * *(float *)&dword_140404A6C[v14 + 18215732]);
  *(float *)&v33 = (float)(v19 + v26) + (float)(v21 * *(float *)&dword_140404A6C[v14 + 18215731]);
  v34 = v27 - (float)(*(float *)&v29 + *(float *)&dword_140404A6C[v14 + 18215715]);
  dword_140404A6C[2 * v3 + 485543042] = v32;
  v35 = *(float *)&v32 + *(float *)&dword_140404A6C[v14 + 18215717];
  dword_140404A6C[2 * v3 + 485543041] = v33;
  v36 = v31 - v35;
  v37 = v30 - (float)(*(float *)&v33 + *(float *)&dword_140404A6C[v14 + 18215716]);
  v38 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
  if ( v38 > 0.0625 )
  {
    v34 = (float)(v34 * (float)(1.0 / v38)) * 0.0625;
    v37 = (float)(v37 * (float)(1.0 / v38)) * 0.0625;
    v36 = (float)(v36 * (float)(1.0 / v38)) * 0.0625;
  }
  if ( dword_140404A6C[v2 + 486149294] == 1111 )
  {
    v39 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v39 > 0.015625 )
    {
      v34 = (float)((float)(1.0 / v39) * v34) * 0.015625;
      v37 = (float)((float)(1.0 / v39) * v37) * 0.015625;
      v36 = (float)((float)(1.0 / v39) * v36) * 0.015625;
    }
  }
  v40 = *(float *)&dword_140404A6C[v14 + 18215714];
  v41 = *(float *)&dword_140404A6C[v13 + 18215714];
  *(float *)&dword_140404A6C[2 * v3 + 485543056] = v34 * 0.1875;
  *(float *)&dword_140404A6C[2 * v3 + 485543057] = v37 * 0.1875;
  *(float *)&dword_140404A6C[2 * v3 + 485543058] = v36 * 0.1875;
  dword_140404A6C[2 * v3 + 485543046] = 1044381696;
  v42 = 1.0 / (float)(v40 + v41);
  *(float *)&dword_140404A6C[2 * v3 + 485543045] = v42 * v41;
  *(float *)&dword_140404A6C[2 * v3 + 485543044] = v42 * v40;
  *(float *)&dword_140404A6C[2 * v3 + 485543059] = *(float *)&dword_140404A6C[2 * v3 + 485543033] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543060] = *(float *)&dword_140404A6C[2 * v3 + 485543034] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543061] = *(float *)&dword_140404A6C[2 * v3 + 485543035] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543062] = fminf(
                                                     (float)(*(float *)&dword_140404A6C[2 * v3 + 485543045]
                                                           + *(float *)&dword_140404A6C[2 * v3 + 485543045])
                                                   * *(float *)&dword_140404A6C[v14 + 18215748],
                                                     (float)(*(float *)&dword_140404A6C[2 * v3 + 485543044]
                                                           + *(float *)&dword_140404A6C[2 * v3 + 485543044])
                                                   * *(float *)&dword_140404A6C[v13 + 18215748]);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001CBB0) ----------------------------------------------------
__int64            sub_14001CBB0(int a1)
{
  __int64 v1; // r8
  float v2; // xmm7_4
  float v3; // xmm12_4
  float v4; // xmm14_4
  float v5; // xmm15_4
  float v6; // xmm4_4
  float v7; // xmm13_4
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  unsigned int v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm12_4
  float v24; // xmm2_4

  v1 = 18LL * a1;
  v2 = *(float *)&dword_140404A6C[36 * a1 + 485543046];
  v3 = *(float *)&dword_140404A6C[36 * a1 + 485543038];
  v4 = *(float *)&dword_140404A6C[36 * a1 + 485543039];
  v5 = *(float *)&dword_140404A6C[36 * a1 + 485543037];
  v6 = -v2;
  v7 = *(float *)&dword_140404A6C[36 * a1 + 485543041];
  v8 = 47LL * LOWORD(dword_140404A6C[36 * a1 + 485543029]);
  result = HIWORD(dword_140404A6C[2 * v1 + 485543029]);
  v10 = 47 * result;
  v11 = *(float *)&dword_140404A6C[47 * result + 18215738];
  v12 = (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215738] * v3)
                                      - (float)(*(float *)&dword_140404A6C[v8 + 18215737] * v4))
                              + *(float *)&dword_140404A6C[v8 + 18215718])
                      * v2)
              + *(float *)&dword_140404A6C[2 * v1 + 485543033])
      + (float)((float)((float)((float)(v11 * v7)
                              - (float)(*(float *)&dword_140404A6C[47 * result + 18215737]
                                      * *(float *)&dword_140404A6C[2 * v1 + 485543042]))
                      + *(float *)&dword_140404A6C[47 * result + 18215718])
              * (float)-v2);
  v13 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215736] * v4)
                              - (float)(*(float *)&dword_140404A6C[v8 + 18215738] * v5))
                      + *(float *)&dword_140404A6C[v8 + 18215719])
              * v2)
      + *(float *)&dword_140404A6C[2 * v1 + 485543034];
  v14 = (float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215737] * v5)
                      - (float)(*(float *)&dword_140404A6C[v8 + 18215736] * v3))
              + *(float *)&dword_140404A6C[v8 + 18215720])
      * v2;
  v15 = *(float *)&dword_140404A6C[2 * v1 + 485543040];
  v16 = v13
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[47 * result + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v1 + 485543042])
                              - (float)(v11 * v15))
                      + *(float *)&dword_140404A6C[47 * result + 18215719])
              * v6);
  v17 = (float)(v14 + *(float *)&dword_140404A6C[2 * v1 + 485543035])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[47 * result + 18215737] * v15)
                              - (float)(*(float *)&dword_140404A6C[47 * result + 18215736] * v7))
                      + *(float *)&dword_140404A6C[47 * result + 18215720])
              * v6);
  v18 = fsqrt((float)((float)(v16 * v16) + (float)(v12 * v12)) + (float)(v17 * v17));
  if ( v18 > 0.033333335f )
  {
    v12 = (float)(0.033333335f / v18) * v12;
    v16 = (float)(0.033333335f / v18) * v16;
    v17 = (float)(0.033333335f / v18) * v17;
  }
  v19 = *(float *)&dword_140404A6C[2 * v1 + 485543045];
  v20 = -*(float *)&dword_140404A6C[2 * v1 + 485543044];
  *(float *)&dword_140404A6C[v8 + 18215721] = (float)(v12 * v20) + *(float *)&dword_140404A6C[v8 + 18215721];
  *(float *)&dword_140404A6C[v8 + 18215722] = (float)(v16 * v20) + *(float *)&dword_140404A6C[v8 + 18215722];
  *(float *)&dword_140404A6C[v8 + 18215723] = (float)(v17 * v20) + *(float *)&dword_140404A6C[v8 + 18215723];
  *(float *)&v21 = (float)((float)((float)(v4 * v16) - (float)(v3 * v17)) * v20)
                 + *(float *)&dword_140404A6C[v8 + 18215739];
  v22 = (float)((float)(v5 * v17) - (float)(v4 * v12)) * v20;
  v23 = (float)((float)(v3 * v12) - (float)(v5 * v16)) * v20;
  v24 = *(float *)&dword_140404A6C[2 * v1 + 485543042];
  dword_140404A6C[v8 + 18215739] = v21;
  *(float *)&dword_140404A6C[v8 + 18215740] = v22 + *(float *)&dword_140404A6C[v8 + 18215740];
  *(float *)&dword_140404A6C[v8 + 18215741] = v23 + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v10 + 18215721] = (float)(v19 * v12) + *(float *)&dword_140404A6C[v10 + 18215721];
  *(float *)&dword_140404A6C[v10 + 18215722] = (float)(v19 * v16) + *(float *)&dword_140404A6C[v10 + 18215722];
  *(float *)&dword_140404A6C[v10 + 18215723] = (float)(v19 * v17) + *(float *)&dword_140404A6C[v10 + 18215723];
  *(float *)&dword_140404A6C[v10 + 18215739] = (float)((float)((float)(v24 * v16) - (float)(v7 * v17)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215739];
  *(float *)&dword_140404A6C[v10 + 18215740] = (float)((float)((float)(v15 * v17) - (float)(v24 * v12)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215740];
  *(float *)&dword_140404A6C[v10 + 18215741] = (float)((float)((float)(v7 * v12) - (float)(v15 * v16)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215741];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001D080) ----------------------------------------------------
unsigned int *sub_14001D080()
{
  unsigned int *v0; // rbx
  unsigned int *v1; // rdi
  int i; // esi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  unsigned int v16; // eax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  __int64 v24; // rcx
  unsigned int v25; // eax
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm6_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38; // xmm3_4
  float v39; // xmm3_4
  float v40; // xmm7_4
  float v41; // xmm2_4
  __int64 v42; // rax
  __int64 v43; // rcx
  float v44; // xmm10_4
  float v45; // xmm4_4
  float v46; // xmm6_4
  __int64 v47; // r8
  __int64 v48; // r9
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm9_4
  float v52; // xmm5_4
  float v53; // xmm9_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  float v56; // xmm7_4
  float v57; // xmm2_4
  float v58; // xmm10_4
  float v59; // xmm3_4
  float v60; // xmm5_4
  float v61; // xmm6_4
  float v62; // xmm0_4
  float v63; // xmm9_4
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm10_4
  float v70; // xmm7_4
  float v71; // xmm3_4
  float v72; // xmm5_4
  float v73; // xmm6_4
  float v74; // xmm3_4
  float v75; // xmm9_4
  float v76; // xmm10_4
  float v77; // xmm7_4
  float v78; // xmm3_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm4_4
  float v82; // xmm5_4
  bool v83; // zf
  float v84; // xmm6_4
  float v85; // xmm0_4
  float v86; // xmm5_4
  int v87; // xmm7_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  float v90; // xmm1_4
  float v91; // xmm1_4
  float v92; // xmm3_4
  float v93; // xmm2_4
  float v94; // xmm0_4
  float v95; // xmm2_4
  __int64 v96; // rax
  __int64 v97; // rcx
  float v98; // xmm3_4
  float v99; // xmm1_4
  float v100; // xmm1_4
  int v101; // r8d
  int v102; // r10d
  float *v103; // rcx
  unsigned int *v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // r9
  __int64 v107; // r11
  int v108; // eax
  unsigned int *v109; // rdx
  float *v110; // rcx
  __int64 v111; // r9
  int v112; // eax
  int v113; // r10d
  unsigned int *v114; // r9
  int v115; // edx
  unsigned int *v116; // rcx
  unsigned int *v117; // rax
  unsigned int v118; // r11d
  int v119; // r15d
  __int64 v120; // r13
  float *v121; // rax
  __int64 v122; // rcx
  float *v123; // rax
  __int64 v124; // rcx
  unsigned int *v125; // rax
  int v126; // ebp
  unsigned int *v127; // rdi
  unsigned int *v128; // rbx
  __int64 v129; // r14
  int v130; // eax
  float v131; // xmm4_4
  float v132; // xmm5_4
  float v133; // xmm6_4
  __int64 v134; // rax
  __int64 v135; // rcx
  float v136; // xmm2_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm3_4
  float v140; // xmm6_4
  float v141; // xmm4_4
  float v142; // xmm11_4
  __int64 v143; // rax
  float v144; // xmm7_4
  float v145; // xmm8_4
  float v146; // xmm6_4
  float v147; // xmm5_4
  float v148; // xmm10_4
  float v149; // xmm9_4
  float v150; // xmm8_4
  float v151; // xmm5_4
  float v152; // xmm7_4
  float v153; // xmm6_4
  float v154; // xmm11_4
  float v155; // xmm3_4
  float v156; // xmm2_4
  float v157; // xmm3_4
  __int64 v158; // r8
  float v159; // xmm12_4
  float v160; // xmm11_4
  __int64 v161; // rcx
  __int64 v162; // rdx
  float v163; // xmm5_4
  float v164; // xmm4_4
  float v165; // xmm7_4
  float v166; // xmm13_4
  float v167; // xmm8_4
  float v168; // xmm9_4
  float v169; // xmm6_4
  float v170; // xmm10_4
  float v171; // xmm7_4
  float v172; // xmm13_4
  float v173; // xmm5_4
  float v174; // xmm11_4
  float v175; // xmm12_4
  float v176; // xmm5_4
  float v177; // xmm8_4
  float v178; // xmm9_4
  float v179; // xmm6_4
  float v180; // xmm0_4
  float v181; // xmm3_4
  float v182; // xmm10_4
  float v183; // xmm0_4
  float v184; // xmm7_4
  float v185; // xmm8_4
  float v186; // xmm12_4
  float v187; // xmm9_4
  float v188; // xmm13_4
  float v189; // xmm10_4
  float v190; // xmm2_4
  __int64 v191; // r9
  float v192; // xmm5_4
  __int64 v193; // r10
  float v194; // xmm7_4
  __int64 v195; // r11
  __int64 v196; // rsi
  float v197; // xmm4_4
  float v198; // xmm3_4
  float v199; // xmm8_4
  float v200; // xmm7_4
  float v201; // xmm6_4
  float v202; // xmm4_4
  float v203; // xmm5_4
  float v204; // xmm8_4
  float v205; // xmm3_4
  float v206; // xmm2_4
  float v207; // xmm9_4
  float v208; // xmm10_4
  float v209; // xmm11_4
  float v210; // xmm6_4
  float v211; // xmm4_4
  float v212; // xmm5_4
  float v213; // xmm7_4
  float v214; // xmm0_4
  float v215; // xmm3_4
  float v216; // xmm12_4
  float v217; // xmm13_4
  float v218; // xmm8_4
  int v219; // eax
  float v220; // xmm10_4
  __int64 v221; // r8
  float v222; // xmm9_4
  float v223; // xmm4_4
  float v224; // xmm5_4
  unsigned int *v225; // rcx
  __int64 v226; // rdx
  float v227; // xmm11_4
  float v228; // xmm12_4
  float v229; // xmm13_4
  float v230; // xmm6_4
  float v231; // xmm7_4
  float v232; // xmm8_4
  float v233; // xmm5_4
  float v234; // xmm0_4
  float v235; // xmm1_4
  float v236; // xmm3_4
  float v237; // xmm0_4
  float v238; // xmm3_4
  float v239; // xmm13_4
  float v240; // xmm5_4
  float v241; // xmm12_4
  float v242; // xmm6_4
  float v243; // xmm10_4
  float v244; // xmm11_4
  float v245; // xmm7_4
  float v246; // xmm4_4
  __int64 v247; // rcx
  float v248; // xmm8_4
  float v249; // xmm9_4
  float v250; // xmm10_4
  float v251; // xmm2_4
  float v252; // xmm6_4
  float v253; // xmm11_4
  float v254; // xmm4_4
  float v255; // xmm7_4
  float v256; // xmm8_4
  float v257; // xmm9_4
  float v258; // xmm10_4
  float v259; // xmm3_4
  float v260; // xmm13_4
  float v261; // xmm8_4
  float v262; // xmm1_4
  float v263; // xmm5_4
  float v264; // xmm0_4
  float v265; // xmm4_4
  float v266; // xmm0_4
  float v267; // xmm1_4
  float v268; // xmm11_4
  float v269; // xmm0_4
  float v270; // xmm7_4
  float v271; // xmm6_4
  float v272; // xmm8_4
  float v273; // xmm9_4
  float v274; // xmm2_4
  __int64 v275; // rcx
  float v276; // xmm5_4
  float v277; // xmm3_4
  float v278; // xmm7_4
  float v279; // xmm4_4
  float v280; // xmm5_4
  float v281; // xmm8_4
  float v282; // xmm13_4
  __int64 v283; // r8
  __int64 v284; // rdx
  float v285; // xmm10_4
  float v286; // xmm6_4
  float v287; // xmm3_4
  float v288; // xmm0_4
  float v289; // xmm9_4
  float v290; // xmm11_4
  float v291; // xmm1_4
  float v292; // xmm10_4
  float v293; // xmm12_4
  float v294; // xmm0_4
  float v295; // xmm5_4
  float v296; // xmm7_4
  float v297; // xmm6_4
  float v298; // xmm5_4
  float v299; // xmm11_4
  float v300; // xmm7_4
  float v301; // xmm10_4
  float v302; // xmm12_4
  float v303; // xmm8_4
  float v304; // xmm3_4
  float v305; // xmm2_4
  float v306; // xmm0_4
  float v307; // xmm1_4
  float v308; // xmm1_4
  float v309; // xmm2_4
  float v310; // xmm1_4
  float v311; // xmm0_4
  float v312; // xmm6_4
  float v313; // xmm3_4
  unsigned int v314; // eax
  unsigned int v315; // r9d
  float v316; // xmm1_4
  float v317; // xmm0_4
  float v318; // xmm2_4
  float v319; // xmm1_4
  float v320; // xmm9_4
  float v321; // xmm5_4
  float v322; // xmm4_4
  float v323; // xmm0_4
  float v324; // xmm3_4
  float v325; // xmm14_4
  float v326; // xmm11_4
  float v327; // xmm9_4
  float v328; // xmm12_4
  float v329; // xmm13_4
  float v330; // xmm0_4
  float v331; // xmm3_4
  float v332; // xmm4_4
  float v333; // xmm5_4
  float v334; // xmm2_4
  float v335; // xmm2_4
  float v336; // xmm3_4
  float v337; // xmm12_4
  float v338; // xmm9_4
  float v339; // xmm3_4
  float v340; // xmm8_4
  float v341; // xmm13_4
  __int64 v342; // rcx
  float v343; // xmm5_4
  float v344; // xmm4_4
  float v345; // xmm6_4
  float v346; // xmm7_4
  float v347; // xmm9_4
  float v348; // xmm8_4
  float v349; // xmm5_4
  float v350; // xmm10_4
  float v351; // xmm6_4
  float v352; // xmm4_4
  float v353; // xmm11_4
  float v354; // xmm0_4
  float v355; // xmm4_4
  float v356; // xmm8_4
  float v357; // xmm7_4
  float v358; // xmm5_4
  float v359; // xmm4_4
  float v360; // xmm2_4
  float v361; // xmm0_4
  unsigned int v362; // xmm1_4
  float v363; // xmm5_4
  int v364; // r10d
  __int64 v365; // rdx
  float *v366; // rcx
  unsigned int v367; // eax
  __int64 v368; // r9
  float *v369; // rdx
  __int64 v370; // rcx
  __m128 *v371; // rax
  __int64 v372; // rcx
  float *v373; // rax
  float v374; // xmm3_4
  float v375; // xmm13_4
  float v376; // xmm14_4
  float v377; // xmm0_4
  float v378; // xmm4_4
  float v379; // xmm0_4
  float v380; // xmm4_4
  float v381; // xmm12_4
  float v382; // xmm1_4
  float v383; // xmm9_4
  float v384; // xmm13_4
  int v385; // r11d
  unsigned int v386; // eax
  unsigned int *v387; // rcx
  __int64 v388; // r10
  float *v389; // rdx
  __int64 v390; // r9
  unsigned int v391; // eax
  unsigned int *v392; // rcx
  float *v393; // r9
  __int64 v394; // rdx
  unsigned int v395; // eax
  unsigned int *result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001D080[16];
#define v397 (*(float (*))(void *)(sr_frame_14001D080 + 0)) /* [rsp+108h] */
#define v398 (*(float (*))(void *)(sr_frame_14001D080 + 8)) /* [rsp+110h] */

  v0 = &dword_140404A6C[485543039];
  v1 = &dword_140404A6C[486149266];
  for ( i = 0; i < 0x4000; ++i )
  {
    if ( *(v1 - 13) && (int)*(v1 - 9) <= 255 )
    {
      v3 = *(v1 - 12);
      if ( v3 )
      {
        if ( v3 == 4 )
        {
          v21 = *((float *)v1 + 1);
          v22 = *((float *)v1 + 2);
          v23 = *((float *)v1 + 3);
          v24 = 47LL * (int)v1[25];
          *((_WORD *)v0 - 20) = v1[25];
          v25 = v1[16];
          v26 = (float)((float)(v21 * *(float *)&dword_140404A6C[v24 + 18215724])
                      + (float)(v22 * *(float *)&dword_140404A6C[v24 + 18215727]))
              + (float)(v23 * *(float *)&dword_140404A6C[v24 + 18215730]);
          v27 = v23 * *(float *)&dword_140404A6C[v24 + 18215731];
          v28 = (float)(v22 * *(float *)&dword_140404A6C[v24 + 18215728])
              + (float)(v21 * *(float *)&dword_140404A6C[v24 + 18215725]);
          v29 = *((float *)v1 + 15);
          v30 = (float)(v22 * *(float *)&dword_140404A6C[v24 + 18215729])
              + (float)(v21 * *(float *)&dword_140404A6C[v24 + 18215726]);
          v31 = v23 * *(float *)&dword_140404A6C[v24 + 18215732];
          *((float *)v0 - 2) = v26;
          v32 = v28 + v27;
          v33 = v26 + *(float *)&dword_140404A6C[v24 + 18215715];
          v34 = v30 + v31;
          *((float *)v0 - 1) = v32;
          v35 = v32 + *(float *)&dword_140404A6C[v24 + 18215716];
          v36 = v33 - *((float *)v1 - 2);
          *(float *)v0 = v34;
          v37 = (float)(v34 + *(float *)&dword_140404A6C[v24 + 18215717]) - *(float *)v1;
          v38 = (float)(v35 - *((float *)v1 - 1)) * v29;
          *((float *)v0 - 6) = v36 * v29;
          *((float *)v0 - 5) = v38;
          *((float *)v0 - 4) = v37 * v29;
          v0[7] = v25;
          goto LABEL_28;
        }
        if ( v3 == 10 )
        {
          sub_14001C780(i);
          v3 = *(v1 - 12);
        }
        if ( v3 == 7 )
        {
          v39 = *((float *)v1 + 1);
          v40 = *((float *)v1 + 2);
          v41 = *((float *)v1 + 3);
          v42 = (int)v1[25];
          v43 = (int)v1[26];
          v44 = v40;
          v45 = *((float *)v1 + 4);
          v46 = *((float *)v1 + 5);
          v47 = 47 * v42;
          v48 = 47 * v43;
          v49 = v39 * *(float *)&dword_140404A6C[47 * v42 + 18215724];
          v50 = v41 * *(float *)&dword_140404A6C[47 * v42 + 18215730];
          *((_WORD *)v0 - 19) = v43;
          v51 = v40 * *(float *)&dword_140404A6C[47 * v42 + 18215727];
          *((_WORD *)v0 - 20) = v42;
          v52 = v45 * *(float *)&dword_140404A6C[47 * v43 + 18215724];
          v53 = (float)(v51 + v49) + v50;
          v54 = v41;
          v55 = v46 * *(float *)&dword_140404A6C[47 * v43 + 18215727];
          v56 = (float)((float)(v40 * *(float *)&dword_140404A6C[v47 + 18215729])
                      + (float)(v39 * *(float *)&dword_140404A6C[v47 + 18215726]))
              + (float)(v41 * *(float *)&dword_140404A6C[v47 + 18215732]);
          v57 = *((float *)v1 + 6);
          v58 = (float)((float)(v44 * *(float *)&dword_140404A6C[v47 + 18215728])
                      + (float)(v39 * *(float *)&dword_140404A6C[v47 + 18215725]))
              + (float)(v54 * *(float *)&dword_140404A6C[v47 + 18215731]);
          *((float *)v0 - 2) = v53;
          v59 = v46 * *(float *)&dword_140404A6C[47 * v43 + 18215728];
          v60 = v52 + v55;
          v61 = v46 * *(float *)&dword_140404A6C[47 * v43 + 18215729];
          v62 = v45 * *(float *)&dword_140404A6C[47 * v43 + 18215725];
          v63 = v53 + *(float *)&dword_140404A6C[47 * v42 + 18215715];
          v64 = v45 * *(float *)&dword_140404A6C[47 * v43 + 18215726];
          v65 = v60 + (float)(v57 * *(float *)&dword_140404A6C[47 * v43 + 18215730]);
          v66 = v57;
          *((float *)v0 - 1) = v58;
          v67 = v57 * *(float *)&dword_140404A6C[47 * v43 + 18215732];
          v68 = v66 * *(float *)&dword_140404A6C[47 * v43 + 18215731];
          v69 = v58 + *(float *)&dword_140404A6C[47 * v42 + 18215716];
          *(float *)v0 = v56;
          v70 = v56 + *(float *)&dword_140404A6C[47 * v42 + 18215717];
          v71 = (float)(v59 + v62) + v68;
          *((float *)v0 + 1) = v65;
          v72 = v65 + *(float *)&dword_140404A6C[47 * v43 + 18215715];
          v73 = (float)(v61 + v64) + v67;
          *((float *)v0 + 2) = v71;
          v74 = v71 + *(float *)&dword_140404A6C[47 * v43 + 18215716];
          v75 = v63 - v72;
          *((float *)v0 + 3) = v73;
          v76 = v69 - v74;
          v77 = v70 - (float)(v73 + *(float *)&dword_140404A6C[47 * v43 + 18215717]);
          v78 = fsqrt((float)((float)(v75 * v75) + (float)(v76 * v76)) + (float)(v77 * v77));
          if ( v78 == 0.0 )
          {
            v80 = 0.0;
            v81 = 0.0;
            v82 = 0.0;
          }
          else
          {
            v79 = 1.0 / v78;
            v80 = v75 * (float)(1.0 / v78);
            v81 = v76 * v79;
            v82 = v77 * v79;
          }
          v83 = dword_140404A6C[47 * v42 + 18215710] == 1;
          v84 = 0.1875;
          v85 = -*((float *)v1 + 12);
          v1[15] = 1044381696;
          v1[16] = 1044381696;
          v86 = (float)(v82 * v85) + v77;
          v87 = 1044381696;
          v88 = (float)(v80 * v85) + v75;
          v89 = (float)(v81 * v85) + v76;
          if ( v83 && dword_140404A6C[v48 + 18215710] == 1 )
          {
            v84 = 0.00390625;
            v87 = 1040187392;
            v1[15] = 998244352;
            v1[16] = 1040187392;
          }
          if ( dword_140404A6C[v48 + 18215710] == 3 )
          {
            v90 = fsqrt((float)((float)(v89 * v89) + (float)(v88 * v88)) + (float)(v86 * v86));
            if ( v90 > 0.125 )
            {
              v88 = v88 * (float)(0.125 / v90);
              v89 = v89 * (float)(0.125 / v90);
              v86 = v86 * (float)(0.125 / v90);
            }
          }
          v91 = *(float *)&dword_140404A6C[v48 + 18215714];
          *((float *)v0 - 6) = v88 * v84;
          v92 = *(float *)&dword_140404A6C[47 * v42 + 18215714];
          *((float *)v0 - 5) = v89 * v84;
          v93 = 1.0 / (float)(v91 + v92);
          *((float *)v0 - 4) = v86 * v84;
          v0[7] = v87;
          v94 = v93 * v91;
          v95 = v93 * v92;
          *((float *)v0 + 5) = v94;
          goto LABEL_27;
        }
        if ( v3 != 8 )
          goto LABEL_28;
        v96 = (int)v1[26];
        v97 = (int)v1[25];
        *((_WORD *)v0 - 20) = v97;
        *((_WORD *)v0 - 19) = v96;
        v0[7] = 1063256064;
        v97 *= 188;
        v98 = *(float *)&dword_140404A6C[47 * v96 + 18215714];
        v99 = 1.0 / (float)(*(float *)((char *)&dword_140404A6C[18215714] + v97) + v98);
        v19 = v98 * v99;
        v18 = *(float *)((char *)&dword_140404A6C[18215714] + v97) * v99;
        *((float *)v0 - 6) = *((float *)v0 - 6) * 0.875;
        *((float *)v0 - 5) = *((float *)v0 - 5) * 0.875;
        v100 = (float)(v18 + v18) * *(float *)&dword_140404A6C[47 * v96 + 18215748];
        *((float *)v0 - 4) = *((float *)v0 - 4) * 0.875;
        v20 = fminf(v100, (float)(v19 + v19) * *(float *)((char *)&dword_140404A6C[18215748] + v97));
      }
      else
      {
        v4 = (int)*(v1 - 6);
        v5 = (int)*(v1 - 7);
        v6 = 60 * v5;
        *((_WORD *)v0 - 19) = v4;
        v7 = 60 * v4;
        *((_WORD *)v0 - 20) = v5;
        v8 = *(float *)&dword_140404A6C[v7 + 73007026] - *(float *)&dword_140404A6C[60 * v5 + 73007026];
        v9 = *(float *)&dword_140404A6C[v7 + 73007027] - *(float *)&dword_140404A6C[60 * v5 + 73007027];
        v10 = *(float *)&dword_140404A6C[v7 + 73007028] - *(float *)&dword_140404A6C[60 * v5 + 73007028];
        v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
        if ( v11 <= 0.000015258789 )
        {
          v12 = 0.0;
          v13 = 0.0;
          v14 = 0.0;
        }
        else
        {
          v12 = (float)(1.0 / v11) * v8;
          v13 = (float)(1.0 / v11) * v9;
          v14 = (float)(1.0 / v11) * v10;
        }
        v15 = v11 - *((float *)v1 + 12);
        v16 = v1[16];
        *((float *)v0 - 6) = v12;
        *((float *)v0 - 4) = v14;
        *((float *)v0 - 5) = v13;
        v17 = v15 * *((float *)v1 + 15);
        v0[7] = v16;
        v18 = *(float *)&dword_140404A6C[v6 + 73007023];
        *((float *)v0 - 3) = v17;
        v19 = *(float *)&dword_140404A6C[v7 + 73007023];
        v20 = 1.0 / (float)(v18 + v19);
      }
      v95 = v18 * v20;
      *((float *)v0 + 5) = v19 * v20;
LABEL_27:
      *((float *)v0 + 6) = v95;
    }
LABEL_28:
    v1 += 61;
    v0 += 36;
  }
  v101 = dword_140404A6C[73990061];
  v102 = 0;
  if ( (int)dword_140404A6C[73990061] < 4 )
  {
    if ( (int)dword_140404A6C[73990061] > 0 )
    {
      v107 = 0;
      goto LABEL_36;
    }
  }
  else
  {
    v103 = &flt_140384000[2];
    v104 = &dword_140404A6C[73007034];
    v105 = ((dword_140404A6C[73990061] - 4) >> 2) + 1;
    v106 = v105;
    v102 = 4 * v105;
    v107 = 4LL * v105;
    do
    {
      v108 = *(v104 - 2);
      v104 += 240;
      *((_DWORD *)v103 - 2) = v108;
      v103 += 32;
      *((_DWORD *)v103 - 33) = *(v104 - 241);
      *((_DWORD *)v103 - 32) = *(v104 - 240);
      *((_DWORD *)v103 - 26) = *(v104 - 182);
      *((_DWORD *)v103 - 25) = *(v104 - 181);
      *((_DWORD *)v103 - 24) = *(v104 - 180);
      *((_DWORD *)v103 - 18) = *(v104 - 122);
      *((_DWORD *)v103 - 17) = *(v104 - 121);
      *((_DWORD *)v103 - 16) = *(v104 - 120);
      *((_DWORD *)v103 - 10) = *(v104 - 62);
      *((_DWORD *)v103 - 9) = *(v104 - 61);
      *((_DWORD *)v103 - 8) = *(v104 - 60);
      --v106;
    }
    while ( v106 );
    if ( v102 >= v101 )
      goto LABEL_38;
LABEL_36:
    v109 = &dword_140404A6C[60 * v107 + 73007034];
    v110 = &flt_140384000[8 * v107 + 2];
    v111 = (unsigned int)(v101 - v102);
    do
    {
      v112 = *(v109 - 2);
      v109 += 60;
      *((_DWORD *)v110 - 2) = v112;
      v110 += 8;
      *((_DWORD *)v110 - 9) = *(v109 - 61);
      *((_DWORD *)v110 - 8) = *(v109 - 60);
      --v111;
    }
    while ( v111 );
  }
LABEL_38:
  v113 = 0;
  v114 = &dword_140404A6C[485543032];
  v115 = 0;
  v116 = &dword_140404A6C[486149257];
  do
  {
    if ( *(v116 - 4) )
    {
      v113 = v115;
      *(v114 - 1) = *v116;
      *v114 = *(v116 - 3);
    }
    ++v115;
    v116 += 61;
    v114 += 36;
  }
  while ( v115 < 0x4000 );
  v117 = &dword_140404A6C[18215755];
  do
  {
    if ( *(v117 - 46) )
      *v117 = 0;
    if ( v117[1] )
      v117[47] = 0;
    if ( v117[48] )
      v117[94] = 0;
    if ( v117[95] )
      v117[141] = 0;
    if ( v117[142] )
      v117[188] = 0;
    if ( v117[189] )
      v117[235] = 0;
    if ( v117[236] )
      v117[282] = 0;
    if ( v117[283] )
      v117[329] = 0;
    v117 += 376;
  }
  while ( (__int64)v117 < (__int64)&dword_140404A6C[18600779] );
  v118 = dword_140404A6C[278520507];
  v119 = 0;
  v120 = v113;
  do
  {
    LODWORD(flt_140384000[0x20000]) = v119;
    if ( v118 )
    {
      if ( v101 > 0 )
      {
        v123 = &flt_140384000[4];
        v124 = (unsigned int)v101;
        do
        {
          *(_OWORD *)v123 = 0;
          v123 += 8;
          --v124;
        }
        while ( v124 );
      }
    }
    else if ( v101 > 0 )
    {
      v121 = &flt_140384000[6];
      v122 = (unsigned int)v101;
      do
      {
        *((_QWORD *)v121 - 1) = 0;
        *v121 = 0.0;
        v121 += 8;
        --v122;
      }
      while ( v122 );
    }
    v125 = &dword_140404A6C[18215723];
    do
    {
      if ( *(v125 - 14) )
      {
        *((_QWORD *)v125 - 1) = 0;
        *v125 = 0;
        *((_QWORD *)v125 + 8) = 0;
        v125[18] = 0;
      }
      if ( v125[33] )
      {
        *(_QWORD *)(v125 + 45) = 0;
        v125[47] = 0;
        *(_QWORD *)(v125 + 63) = 0;
        v125[65] = 0;
      }
      if ( v125[80] )
      {
        *((_QWORD *)v125 + 46) = 0;
        v125[94] = 0;
        *((_QWORD *)v125 + 55) = 0;
        v125[112] = 0;
      }
      if ( v125[127] )
      {
        *(_QWORD *)(v125 + 139) = 0;
        v125[141] = 0;
        *(_QWORD *)(v125 + 157) = 0;
        v125[159] = 0;
      }
      if ( v125[174] )
      {
        *((_QWORD *)v125 + 93) = 0;
        v125[188] = 0;
        *((_QWORD *)v125 + 102) = 0;
        v125[206] = 0;
      }
      if ( v125[221] )
      {
        *(_QWORD *)(v125 + 233) = 0;
        v125[235] = 0;
        *(_QWORD *)(v125 + 251) = 0;
        v125[253] = 0;
      }
      if ( v125[268] )
      {
        *((_QWORD *)v125 + 140) = 0;
        v125[282] = 0;
        *((_QWORD *)v125 + 149) = 0;
        v125[300] = 0;
      }
      if ( v125[315] )
      {
        *(_QWORD *)(v125 + 327) = 0;
        v125[329] = 0;
        *(_QWORD *)(v125 + 345) = 0;
        v125[347] = 0;
      }
      v125 += 376;
    }
    while ( (__int64)v125 < (__int64)&dword_140404A6C[18600747] );
    sub_14010D610();
    v126 = 0;
    if ( v120 >= 0 )
    {
      v127 = &dword_140404A6C[486149285];
      v128 = &dword_140404A6C[485543039];
      v129 = v120 + 1;
      do
      {
        if ( *(v127 - 32) && (v119 & *(v128 - 8)) == *(v128 - 8) )
        {
          v130 = *(v128 - 7);
          if ( v130 )
          {
            switch ( v130 )
            {
              case 1:
                v139 = *((float *)v127 - 7) * *((float *)v127 - 4);
                v140 = -*((float *)v127 - 3);
                v141 = *((float *)v127 - 2);
                v142 = *((float *)v127 - 1);
                v143 = 8LL * (int)*(v127 - 26);
                v144 = (float)((float)(v140 * flt_140384000[v143]) + (float)(v139 * v141))
                     + (float)(*((float *)v127 - 3) * *((float *)v127 + 17));
                v145 = (float)((float)(v140 * flt_140384000[v143 + 1]) + (float)(v139 * v142))
                     + (float)(*((float *)v127 - 3) * *((float *)v127 + 18));
                v146 = (float)((float)(v140 * flt_140384000[v143 + 2]) + (float)(v139 * *(float *)v127))
                     + (float)(*((float *)v127 - 3) * *((float *)v127 + 19));
                v147 = (float)((float)(v144 * v141) + (float)(v145 * v142)) + (float)(v146 * *(float *)v127);
                if ( v147 > 0.0 )
                {
                  v148 = v147 * v142;
                  v149 = v147 * v141;
                  v150 = v145 - (float)(v147 * v142);
                  v151 = v147 * *(float *)v127;
                  v152 = v144 - v149;
                  v153 = v146 - v151;
                  v154 = fsqrt((float)((float)(v150 * v150) + (float)(v152 * v152)) + (float)(v153 * v153));
                  if ( v154 > 0.0 )
                  {
                    v155 = fminf(
                             fsqrt((float)((float)(v148 * v148) + (float)(v149 * v149)) + (float)(v151 * v151))
                           * *((float *)v127 + 1),
                             v154);
                    v149 = v149 + (float)((float)((float)(1.0 / v154) * v152) * v155);
                    v148 = v148 + (float)((float)((float)(1.0 / v154) * v150) * v155);
                    v151 = v151 + (float)((float)((float)(1.0 / v154) * v153) * v155);
                  }
                  flt_140384000[v143 + 4] = v149 + flt_140384000[v143 + 4];
                  flt_140384000[v143 + 5] = v148 + flt_140384000[v143 + 5];
                  flt_140384000[v143 + 6] = v151 + flt_140384000[v143 + 6];
                }
                break;
              case 2:
                v156 = *((float *)v127 - 3);
                v157 = *((float *)v127 - 7) * *((float *)v127 - 4);
                v158 = (int)*(v127 - 26);
                v159 = *((float *)v127 - 2);
                v160 = *((float *)v127 - 1);
                v161 = 8 * v158;
                v162 = 8LL * (int)*(v127 - 25);
                v163 = (float)((float)((float)-v156 * flt_140384000[8 * v158]) + (float)(v157 * v159))
                     + (float)(v156 * flt_140384000[v162]);
                v164 = (float)((float)((float)-v156 * flt_140384000[8 * v158 + 2]) + (float)(v157 * *(float *)v127))
                     + (float)(v156 * flt_140384000[v162 + 2]);
                v165 = (float)((float)((float)-v156 * flt_140384000[8 * v158 + 1]) + (float)(v157 * v160))
                     + (float)(v156 * flt_140384000[v162 + 1]);
                v166 = fsqrt((float)((float)(v165 * v165) + (float)(v163 * v163)) + (float)(v164 * v164));
                if ( v166 <= 0.000015258789 )
                {
                  v167 = 0.0;
                  v168 = 0.0;
                  v169 = 0.0;
                }
                else
                {
                  v167 = (float)(1.0 / v166) * v163;
                  v168 = (float)(1.0 / v166) * v165;
                  v169 = (float)(1.0 / v166) * v164;
                }
                v170 = *(float *)&dword_140404A6C[60 * *(v127 - 25) + 73007023];
                v171 = *(float *)&dword_140404A6C[60 * v158 + 73007023];
                v172 = v166 / (float)(v171 + v170);
                v173 = (float)((float)(v167 * v159) + (float)(v168 * v160)) + (float)(v169 * *(float *)v127);
                if ( v173 > 0.0 )
                {
                  v174 = v173 * v159;
                  v175 = v173 * *((float *)v127 - 1);
                  v176 = v173 * *(float *)v127;
                  v177 = v167 - v174;
                  v178 = v168 - v175;
                  v179 = v169 - v176;
                  v180 = fsqrt((float)((float)(v178 * v178) + (float)(v177 * v177)) + (float)(v179 * v179));
                  if ( v180 > 0.0 )
                  {
                    v181 = fminf(
                             fsqrt((float)((float)(v175 * v175) + (float)(v174 * v174)) + (float)(v176 * v176))
                           * *((float *)v127 + 1),
                             v180);
                    v174 = v174 + (float)((float)((float)(1.0 / v180) * v177) * v181);
                    v175 = v175 + (float)((float)((float)(1.0 / v180) * v178) * v181);
                    v176 = v176 + (float)((float)((float)(1.0 / v180) * v179) * v181);
                  }
                  v182 = v170 * v172;
                  flt_140384000[v161 + 4] = (float)(v182 * v174) + flt_140384000[v161 + 4];
                  v183 = -(float)(v171 * v172);
                  flt_140384000[v161 + 5] = (float)(v182 * v175) + flt_140384000[v161 + 5];
                  flt_140384000[v161 + 6] = (float)(v182 * v176) + flt_140384000[v161 + 6];
                  flt_140384000[v162 + 4] = (float)(v183 * v174) + flt_140384000[v162 + 4];
                  flt_140384000[v162 + 5] = (float)(v183 * v175) + flt_140384000[v162 + 5];
                  flt_140384000[v162 + 6] = (float)(v183 * v176) + flt_140384000[v162 + 6];
                }
                break;
              case 3:
                v184 = *((float *)v127 - 3);
                v185 = -v184;
                v186 = *((float *)v127 - 12);
                v187 = *((float *)v127 - 2);
                v188 = *((float *)v127 - 11);
                v189 = *((float *)v127 - 1);
                v190 = v188 * v184;
                v191 = 8LL * (int)*(v127 - 26);
                v192 = v186 * v184;
                v193 = 8LL * (int)*(v127 - 25);
                v194 = v184 * *((float *)v127 - 10);
                v195 = 8LL * (int)*(v127 - 24);
                v196 = 8LL * (int)*(v127 - 23);
                v197 = (float)((float)((float)((float)(v185 * flt_140384000[v191])
                                             + (float)((float)(*((float *)v127 - 7) * *((float *)v127 - 4)) * v187))
                                     + (float)(v192 * flt_140384000[v193]))
                             + (float)(v190 * flt_140384000[v195]))
                     + (float)(v194 * flt_140384000[v196]);
                v198 = (float)((float)((float)((float)((float)-*((float *)v127 - 3) * flt_140384000[v191 + 1])
                                             + (float)((float)(*((float *)v127 - 7) * *((float *)v127 - 4)) * v189))
                                     + (float)(v192 * flt_140384000[v193 + 1]))
                             + (float)(v190 * flt_140384000[v195 + 1]))
                     + (float)(v194 * flt_140384000[v196 + 1]);
                v199 = (float)((float)((float)((float)(v185 * flt_140384000[v191 + 2])
                                             + (float)((float)(*((float *)v127 - 7) * *((float *)v127 - 4))
                                                     * *(float *)v127))
                                     + (float)(v192 * flt_140384000[v193 + 2]))
                             + (float)(v190 * flt_140384000[v195 + 2]))
                     + (float)(v194 * flt_140384000[v196 + 2]);
                v200 = fsqrt((float)((float)(v198 * v198) + (float)(v197 * v197)) + (float)(v199 * v199));
                v201 = (float)(1.0 / v200) * v197;
                v202 = (float)(1.0 / v200) * v198;
                v203 = (float)(1.0 / v200) * v199;
                v204 = *((float *)v127 - 10);
                v398 = *(float *)&dword_140404A6C[60 * *(v127 - 26) + 73007023];
                v205 = (float)((float)(v186 * *(float *)&dword_140404A6C[60 * *(v127 - 25) + 73007023])
                             + (float)(v188 * *(float *)&dword_140404A6C[60 * *(v127 - 24) + 73007023]))
                     + (float)(v204 * *(float *)&dword_140404A6C[60 * *(v127 - 23) + 73007023]);
                v397 = v200 / (float)(v205 + v398);
                v206 = (float)((float)(v187 * v201) + (float)(v189 * v202)) + (float)(*(float *)v127 * v203);
                if ( v206 > 0.0 )
                {
                  v207 = v187 * v206;
                  v208 = v189 * v206;
                  v209 = *(float *)v127 * v206;
                  v210 = v201 - v207;
                  v211 = v202 - v208;
                  v212 = v203 - v209;
                  v213 = fsqrt((float)((float)(v211 * v211) + (float)(v210 * v210)) + (float)(v212 * v212));
                  if ( v213 > 0.0 )
                  {
                    v214 = fminf(
                             fsqrt((float)((float)(v208 * v208) + (float)(v207 * v207)) + (float)(v209 * v209))
                           * *((float *)v127 + 1),
                             v213);
                    v207 = v207 + (float)((float)(v210 * (float)(1.0 / v213)) * v214);
                    v208 = v208 + (float)((float)(v211 * (float)(1.0 / v213)) * v214);
                    v209 = v209 + (float)((float)(v212 * (float)(1.0 / v213)) * v214);
                  }
                  v215 = v205 * v397;
                  flt_140384000[v191 + 4] = (float)(v207 * v215) + flt_140384000[v191 + 4];
                  v216 = -(float)(v186 * (float)(v398 * v397));
                  v217 = -(float)(v188 * (float)(v398 * v397));
                  flt_140384000[v191 + 5] = (float)(v208 * v215) + flt_140384000[v191 + 5];
                  v218 = -(float)(v204 * (float)(v398 * v397));
                  flt_140384000[v191 + 6] = (float)(v209 * v215) + flt_140384000[v191 + 6];
                  flt_140384000[v193 + 4] = (float)(v207 * v216) + flt_140384000[v193 + 4];
                  flt_140384000[v193 + 5] = (float)(v208 * v216) + flt_140384000[v193 + 5];
                  flt_140384000[v193 + 6] = (float)(v209 * v216) + flt_140384000[v193 + 6];
                  flt_140384000[v195 + 4] = (float)(v207 * v217) + flt_140384000[v195 + 4];
                  flt_140384000[v195 + 5] = (float)(v208 * v217) + flt_140384000[v195 + 5];
                  flt_140384000[v195 + 6] = (float)(v209 * v217) + flt_140384000[v195 + 6];
                  flt_140384000[v196 + 4] = (float)(v207 * v218) + flt_140384000[v196 + 4];
                  flt_140384000[v196 + 5] = (float)(v208 * v218) + flt_140384000[v196 + 5];
                  flt_140384000[v196 + 6] = (float)(v209 * v218) + flt_140384000[v196 + 6];
                }
                break;
              case 5:
                v239 = *((float *)v128 - 1);
                v240 = *((float *)v128 - 3);
                v241 = *(float *)v128;
                v242 = *((float *)v128 - 6);
                v243 = *((float *)v128 - 2);
                v244 = *((float *)v128 - 5);
                v245 = *((float *)v128 - 4);
                v246 = -*((float *)v128 + 7);
                v247 = 47LL * *((unsigned __int16 *)v128 - 20);
                v248 = (float)((float)((float)((float)(v239 * *(float *)&dword_140404A6C[v247 + 18215738])
                                             - (float)(*(float *)v128 * *(float *)&dword_140404A6C[v247 + 18215737]))
                                     + *(float *)&dword_140404A6C[v247 + 18215718])
                             * v246)
                     + (float)(v242 * v240);
                v249 = (float)((float)((float)((float)(*(float *)v128 * *(float *)&dword_140404A6C[v247 + 18215736])
                                             - (float)(v243 * *(float *)&dword_140404A6C[v247 + 18215738]))
                                     + *(float *)&dword_140404A6C[v247 + 18215719])
                             * v246)
                     + (float)(v244 * v240);
                v250 = (float)((float)((float)((float)(v243 * *(float *)&dword_140404A6C[v247 + 18215737])
                                             - (float)(v239 * *(float *)&dword_140404A6C[v247 + 18215736]))
                                     + *(float *)&dword_140404A6C[v247 + 18215720])
                             * v246)
                     + (float)(v245 * v240);
                v251 = (float)((float)(v242 * v248) + (float)(v244 * v249)) + (float)(v245 * v250);
                if ( v251 > 0.0 )
                {
                  v252 = v242 * v251;
                  v253 = v244 * v251;
                  v254 = 0.0;
                  v255 = v245 * v251;
                  v256 = v248 - v252;
                  v257 = v249 - v253;
                  v258 = v250 - v255;
                  v259 = fsqrt((float)((float)(v257 * v257) + (float)(v256 * v256)) + (float)(v258 * v258));
                  if ( v259 > 0.0 )
                  {
                    v260 = (float)(1.0 / v259) * v256;
                    v261 = (float)(1.0 / v259) * v257;
                    v262 = fsqrt((float)((float)(v253 * v253) + (float)(v252 * v252)) + (float)(v255 * v255));
                    v263 = (float)(1.0 / v259) * v258;
                    v264 = v262 * *((float *)v128 + 8);
                    if ( v259 > v264 )
                    {
                      v265 = v259;
                      v259 = v262 * *((float *)v128 + 8);
                      v254 = (float)((float)(v265 - v264) * v262) * 480.0;
                    }
                    if ( v259 > 0.0068055559 )
                    {
                      v254 = v254 + (float)((float)((float)(v259 - 0.0068055559) * v262) * 480.0);
                      v259 = 0.0068055559;
                    }
                    v266 = v259 * v260;
                    v239 = *((float *)v128 - 1);
                    v252 = v252 + v266;
                    v253 = v253 + (float)(v259 * v261);
                    v255 = v255 + (float)(v259 * v263);
                  }
                  *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215755] = v254
                                                                                               + *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215755];
                  *(float *)&dword_140404A6C[v247 + 18215721] = v252 + *(float *)&dword_140404A6C[v247 + 18215721];
                  *(float *)&dword_140404A6C[v247 + 18215722] = v253 + *(float *)&dword_140404A6C[v247 + 18215722];
                  v267 = v241 * v253;
                  v268 = v253 * *((float *)v128 - 2);
                  *(float *)&dword_140404A6C[v247 + 18215723] = v255 + *(float *)&dword_140404A6C[v247 + 18215723];
                  v269 = v255 * v239;
                  v270 = (float)(v255 * *((float *)v128 - 2)) - (float)(v241 * v252);
                  *(float *)&dword_140404A6C[v247 + 18215739] = (float)(v267 - v269)
                                                              + *(float *)&dword_140404A6C[v247 + 18215739];
                  *(float *)&dword_140404A6C[v247 + 18215740] = v270 + *(float *)&dword_140404A6C[v247 + 18215740];
                  *(float *)&dword_140404A6C[v247 + 18215741] = (float)((float)(v252 * v239) - v268)
                                                              + *(float *)&dword_140404A6C[v247 + 18215741];
                }
                break;
              case 4:
                v271 = *(float *)v128;
                v272 = *((float *)v128 - 1);
                v273 = *((float *)v128 - 2);
                v274 = *((float *)v128 + 7);
                v275 = 47LL * *((unsigned __int16 *)v128 - 20);
                v276 = *(float *)&dword_140404A6C[v275 + 18215737];
                v277 = *(float *)&dword_140404A6C[v275 + 18215736];
                v278 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v275 + 18215738] * v272)
                                             - (float)(*(float *)v128 * v276))
                                     + *(float *)&dword_140404A6C[v275 + 18215718])
                             * v274)
                     + *((float *)v128 - 6);
                v279 = (float)((float)((float)((float)(*(float *)v128 * v277)
                                             - (float)(*(float *)&dword_140404A6C[v275 + 18215738] * v273))
                                     + *(float *)&dword_140404A6C[v275 + 18215719])
                             * v274)
                     + *((float *)v128 - 5);
                v280 = (float)((float)((float)((float)(v276 * v273) - (float)(v277 * v272))
                                     + *(float *)&dword_140404A6C[v275 + 18215720])
                             * v274)
                     + *((float *)v128 - 4);
                *(float *)&dword_140404A6C[v275 + 18215721] = *(float *)&dword_140404A6C[v275 + 18215721] - v278;
                *(float *)&dword_140404A6C[v275 + 18215722] = *(float *)&dword_140404A6C[v275 + 18215722] - v279;
                *(float *)&dword_140404A6C[v275 + 18215723] = *(float *)&dword_140404A6C[v275 + 18215723] - v280;
                *(float *)&dword_140404A6C[v275 + 18215739] = *(float *)&dword_140404A6C[v275 + 18215739]
                                                            - (float)((float)(v279 * v271) - (float)(v280 * v272));
                *(float *)&dword_140404A6C[v275 + 18215740] = *(float *)&dword_140404A6C[v275 + 18215740]
                                                            - (float)((float)(v280 * v273) - (float)(v278 * v271));
                *(float *)&dword_140404A6C[v275 + 18215741] = *(float *)&dword_140404A6C[v275 + 18215741]
                                                            - (float)((float)(v278 * v272) - (float)(v279 * v273));
                break;
              case 6:
                v281 = *((float *)v128 + 7);
                v282 = *(float *)v128;
                v283 = 47LL * *((unsigned __int16 *)v128 - 20);
                v284 = 47LL * *((unsigned __int16 *)v128 - 19);
                v285 = *(float *)&dword_140404A6C[v283 + 18215737];
                v286 = *(float *)&dword_140404A6C[v283 + 18215736];
                v287 = *((float *)v128 - 5);
                v288 = *((float *)v128 - 3);
                v289 = *((float *)v128 + 1);
                v290 = (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v283 + 18215738]
                                                             * *((float *)v128 - 1))
                                                     - (float)(*(float *)v128 * v285))
                                             + *(float *)&dword_140404A6C[v283 + 18215718])
                                     * (float)-v281)
                             + (float)(v288 * *((float *)v128 - 6)))
                     + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v284 + 18215738] * *((float *)v128 + 2))
                                             - (float)(*(float *)&dword_140404A6C[v284 + 18215737] * *((float *)v128 + 3)))
                                     + *(float *)&dword_140404A6C[v284 + 18215718])
                             * v281);
                v291 = *(float *)&dword_140404A6C[v284 + 18215736];
                v292 = (float)((float)((float)((float)((float)(v285 * *((float *)v128 - 2))
                                                     - (float)(v286 * *((float *)v128 - 1)))
                                             + *(float *)&dword_140404A6C[v283 + 18215720])
                                     * (float)-v281)
                             + (float)(v288 * *((float *)v128 - 4)))
                     + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v284 + 18215737] * v289)
                                             - (float)(v291 * *((float *)v128 + 2)))
                                     + *(float *)&dword_140404A6C[v284 + 18215720])
                             * v281);
                v293 = (float)((float)((float)((float)((float)(*(float *)v128 * v286)
                                                     - (float)(*(float *)&dword_140404A6C[v283 + 18215738]
                                                             * *((float *)v128 - 2)))
                                             + *(float *)&dword_140404A6C[v283 + 18215719])
                                     * (float)-v281)
                             + (float)(v288 * v287))
                     + (float)((float)((float)((float)(v291 * *((float *)v128 + 3))
                                             - (float)(*(float *)&dword_140404A6C[v284 + 18215738] * v289))
                                     + *(float *)&dword_140404A6C[v284 + 18215719])
                             * v281);
                v294 = *((float *)v128 - 4);
                v295 = (float)((float)(*((float *)v128 - 6) * v290) + (float)(v287 * v293)) + (float)(v292 * v294);
                if ( v295 > 0.0 )
                {
                  v296 = (float)((float)(*((float *)v128 - 6) * v290) + (float)(*((float *)v128 - 5) * v293))
                       + (float)(v292 * v294);
                  v297 = v295 * *((float *)v128 - 6);
                  v298 = v295 * v294;
                  v299 = v290 - v297;
                  v300 = v296 * v287;
                  v301 = v292 - v298;
                  v302 = v293 - v300;
                  v303 = fsqrt((float)((float)(v302 * v302) + (float)(v299 * v299)) + (float)(v301 * v301));
                  if ( v303 > 0.0 )
                  {
                    v304 = fminf(
                             fsqrt((float)((float)(v300 * v300) + (float)(v297 * v297)) + (float)(v298 * v298))
                           * *((float *)v128 + 8),
                             v303);
                    v297 = v297 + (float)((float)((float)(1.0 / v303) * v299) * v304);
                    v300 = v300 + (float)((float)((float)(1.0 / v303) * v302) * v304);
                    v298 = v298 + (float)((float)((float)(1.0 / v303) * v301) * v304);
                  }
                  v305 = *((float *)v128 + 5);
                  *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215721] = (float)(v297 * v305)
                                                                                               + *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215721];
                  *(float *)&dword_140404A6C[v283 + 18215722] = (float)(v300 * v305)
                                                              + *(float *)&dword_140404A6C[v283 + 18215722];
                  *(float *)&dword_140404A6C[v283 + 18215723] = (float)(v298 * v305)
                                                              + *(float *)&dword_140404A6C[v283 + 18215723];
                  v306 = (float)((float)(v298 * *((float *)v128 - 2)) - (float)(v282 * v297)) * v305;
                  *(float *)&dword_140404A6C[v283 + 18215739] = (float)((float)((float)(v282 * v300)
                                                                              - (float)(v298 * *((float *)v128 - 1)))
                                                                      * v305)
                                                              + *(float *)&dword_140404A6C[v283 + 18215739];
                  v307 = v297 * *((float *)v128 - 1);
                  *(float *)&dword_140404A6C[v283 + 18215740] = v306 + *(float *)&dword_140404A6C[v283 + 18215740];
                  v308 = (float)(v307 - (float)(v300 * *((float *)v128 - 2))) * v305;
                  v309 = -*((float *)v128 + 6);
                  *(float *)&dword_140404A6C[v283 + 18215741] = v308 + *(float *)&dword_140404A6C[v283 + 18215741];
                  *(float *)&dword_140404A6C[v284 + 18215721] = (float)(v297 * v309)
                                                              + *(float *)&dword_140404A6C[v284 + 18215721];
                  *(float *)&dword_140404A6C[v284 + 18215722] = (float)(v300 * v309)
                                                              + *(float *)&dword_140404A6C[v284 + 18215722];
                  v310 = v300 * *((float *)v128 + 3);
                  *(float *)&dword_140404A6C[v284 + 18215723] = (float)(v298 * v309)
                                                              + *(float *)&dword_140404A6C[v284 + 18215723];
                  v311 = v297 * *((float *)v128 + 3);
                  v312 = (float)((float)(v297 * *((float *)v128 + 2)) - (float)(v300 * v289)) * v309;
                  *(float *)&dword_140404A6C[v284 + 18215739] = (float)((float)(v310
                                                                              - (float)(v298 * *((float *)v128 + 2)))
                                                                      * v309)
                                                              + *(float *)&dword_140404A6C[v284 + 18215739];
                  *(float *)&dword_140404A6C[v284 + 18215740] = (float)((float)((float)(v298 * v289) - v311) * v309)
                                                              + *(float *)&dword_140404A6C[v284 + 18215740];
                  *(float *)&dword_140404A6C[v284 + 18215741] = v312 + *(float *)&dword_140404A6C[v284 + 18215741];
                }
                break;
              case 10:
                sub_14001BF70(v126);
                break;
            }
          }
          else
          {
            v131 = *((float *)v128 - 6);
            v132 = *((float *)v128 - 5);
            v133 = *((float *)v128 - 4);
            v134 = 8LL * *((unsigned __int16 *)v128 - 20);
            v135 = 8LL * *((unsigned __int16 *)v128 - 19);
            v136 = (float)((float)((float)((float)((float)(flt_140384000[v135 + 1] - flt_140384000[v134 + 1]) * v132)
                                         + (float)((float)(flt_140384000[v135] - flt_140384000[v134]) * v131))
                                 + (float)((float)(flt_140384000[v135 + 2] - flt_140384000[v134 + 2]) * v133))
                         * *((float *)v128 + 7))
                 + *((float *)v128 - 3);
            v137 = v136 * *((float *)v128 + 6);
            v138 = v136 * *((float *)v128 + 5);
            flt_140384000[v134 + 4] = (float)(v138 * v131) + flt_140384000[v134 + 4];
            flt_140384000[v134 + 5] = (float)(v138 * v132) + flt_140384000[v134 + 5];
            flt_140384000[v134 + 6] = (float)(v138 * v133) + flt_140384000[v134 + 6];
            flt_140384000[v135 + 4] = (float)((float)-v137 * v131) + flt_140384000[v135 + 4];
            flt_140384000[v135 + 5] = (float)((float)-v137 * v132) + flt_140384000[v135 + 5];
            flt_140384000[v135 + 6] = (float)((float)-v137 * v133) + flt_140384000[v135 + 6];
          }
          v219 = *(v128 - 7);
          if ( v219 == 7 )
          {
            sub_14001CBB0(v126);
            v219 = *(v128 - 7);
          }
          if ( v219 == 8 )
          {
            v220 = *((float *)v128 + 7);
            v221 = 47LL * *((unsigned __int16 *)v128 - 20);
            v222 = *(float *)&dword_140404A6C[v221 + 18215736];
            v223 = *(float *)&dword_140404A6C[v221 + 18215737];
            v224 = *(float *)&dword_140404A6C[v221 + 18215738];
            v225 = &dword_140404A6C[v221 + 18215736];
            v226 = 47LL * *((unsigned __int16 *)v128 - 19);
            v227 = *(float *)&dword_140404A6C[v226 + 18215736];
            v228 = *(float *)&dword_140404A6C[v226 + 18215737];
            v229 = *(float *)&dword_140404A6C[v226 + 18215738];
            v230 = (float)((float)(v222 * (float)-v220) + *((float *)v128 - 6)) + (float)(v227 * v220);
            v231 = (float)((float)(v223 * (float)-v220) + *((float *)v128 - 5)) + (float)(v228 * v220);
            v232 = (float)((float)(v224 * (float)-v220) + *((float *)v128 - 4)) + (float)(v229 * v220);
            if ( v128[13] )
            {
              v233 = -(float)((float)((float)(v230 * *((float *)v128 + 14)) + (float)(v231 * *((float *)v128 + 15)))
                            + (float)(v232 * *((float *)v128 + 16)));
              v234 = v233 * *((float *)v128 + 14);
              v235 = v233 * *((float *)v128 + 15);
              v232 = v232 + (float)(v233 * *((float *)v128 + 16));
              v224 = *(float *)&dword_140404A6C[v221 + 18215738];
              v230 = v230 + v234;
              v231 = v231 + v235;
            }
            if ( LOBYTE(dword_140404A6C[284024765]) )
            {
              v313 = 0.25;
              if ( !dword_140404A6C[v226 + 18215710] )
              {
                v314 = dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215713];
                if ( v314 == 6 || v314 == 9 )
                  v313 = 0.00390625;
                v315 = dword_140404A6C[v226 + 18215713];
                if ( v315 - 1 <= 2 )
                  v313 = 0.015625;
                if ( v315 - 2 <= 1 )
                  v313 = 0.0078125;
                if ( v315 == 3 )
                  v313 = 0.00390625;
                v316 = fsqrt((float)((float)(v231 * v231) + (float)(v230 * v230)) + (float)(v232 * v232));
                if ( v316 > v313 )
                {
                  v230 = v230 * (float)(v313 / v316);
                  v231 = v231 * (float)(v313 / v316);
                  v232 = v232 * (float)(v313 / v316);
                }
                v317 = v229 - v224;
                v318 = v228 - v223;
                v319 = v227 - v222;
                v320 = (float)(v229 - v224) * 0.125;
                v321 = (float)(v228 - v223) * 0.125;
                v322 = v319 * 0.125;
                v323 = fsqrt((float)((float)((float)(v318 * v318) + (float)(v319 * v319)) + (float)(v317 * v317)) * 0.015625);
                if ( v323 > v313 )
                {
                  v324 = v313 / v323;
                  v322 = v324 * v322;
                  v321 = v324 * v321;
                  v320 = v324 * v320;
                }
                v232 = v232 + v320;
                v222 = *(float *)&dword_140404A6C[v221 + 18215736];
                v230 = v230 + v322;
                v231 = v231 + v321;
              }
            }
            else
            {
              v236 = *((float *)v127 + 2);
              if ( v236 != 0.0 )
              {
                v237 = fsqrt((float)((float)(v231 * v231) + (float)(v230 * v230)) + (float)(v232 * v232));
                if ( v237 > v236 )
                {
                  v238 = v236 / v237;
                  v230 = v230 * v238;
                  v231 = v231 * v238;
                  v232 = v232 * v238;
                }
                v230 = v230 + (float)((float)(v227 - v222) * 0.125);
                v231 = v231 + (float)((float)(v228 - v223) * 0.125);
                v232 = v232 + (float)((float)(v229 - v224) * 0.125);
              }
            }
            if ( v128[9] )
            {
              v325 = *((float *)v128 + 10);
              v326 = v227 - v222;
              v327 = *((float *)v128 + 11);
              v328 = v228 - *((float *)v225 + 1);
              v329 = v229 - *((float *)v225 + 2);
              v330 = fsqrt(
                       (float)((float)(v325 * v325) + (float)(v327 * v327))
                     + (float)(*((float *)v128 + 12) * *((float *)v128 + 12)));
              if ( v330 == 0.0 )
              {
                v332 = 0.0;
                v333 = 0.0;
                v331 = 0.0;
              }
              else
              {
                v331 = (float)(1.0 / v330) * *((float *)v128 + 12);
                v332 = (float)(1.0 / v330) * v325;
                v333 = (float)(1.0 / v330) * v327;
              }
              v334 = (float)((float)(v332 * v326) + (float)(v333 * v328)) + (float)(v331 * v329);
              v230 = v230 + (float)((float)((float)(v334 * v332) + v325) * v220);
              v231 = v231 + (float)((float)((float)(v334 * v333) + v327) * v220);
              v232 = v232 + (float)((float)((float)(v334 * v331) + *((float *)v128 + 12)) * v220);
            }
            v335 = *((float *)v128 + 5);
            v336 = -*((float *)v128 + 6);
            *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215739] = (float)(v335 * v230)
                                                                                         + *(float *)&dword_140404A6C[47 * *((unsigned __int16 *)v128 - 20) + 18215739];
            *(float *)&dword_140404A6C[v221 + 18215740] = (float)(v335 * v231)
                                                        + *(float *)&dword_140404A6C[v221 + 18215740];
            *(float *)&dword_140404A6C[v221 + 18215741] = (float)(v335 * v232)
                                                        + *(float *)&dword_140404A6C[v221 + 18215741];
            *(float *)&dword_140404A6C[v226 + 18215739] = (float)(v336 * v230)
                                                        + *(float *)&dword_140404A6C[v226 + 18215739];
            *(float *)&dword_140404A6C[v226 + 18215740] = (float)(v336 * v231)
                                                        + *(float *)&dword_140404A6C[v226 + 18215740];
            *(float *)&dword_140404A6C[v226 + 18215741] = (float)(v336 * v232)
                                                        + *(float *)&dword_140404A6C[v226 + 18215741];
          }
          if ( *(v127 - 31) == 9 )
          {
            v337 = *((float *)v127 - 4);
            v338 = *((float *)v127 - 2);
            v339 = v337 * *((float *)v127 - 7);
            v340 = *((float *)v127 - 1);
            v341 = *((float *)v127 - 3);
            v342 = 47LL * (int)v127[6];
            v343 = (float)((float)((float)(v337 * 0.125) * *((float *)v127 - 18)) + (float)(v339 * v338))
                 + (float)((float)(*(float *)&dword_140404A6C[v342 + 18215718] - *((float *)v127 + 17)) * (float)-v341);
            v344 = (float)((float)((float)(v337 * 0.125) * *((float *)v127 - 16)) + (float)(v339 * *(float *)v127))
                 + (float)((float)(*(float *)&dword_140404A6C[v342 + 18215720] - *((float *)v127 + 19)) * (float)-v341);
            v345 = (float)((float)((float)(v337 * 0.125) * *((float *)v127 - 17)) + (float)(v339 * v340))
                 + (float)((float)(*(float *)&dword_140404A6C[v342 + 18215719] - *((float *)v127 + 18)) * (float)-v341);
            v346 = (float)((float)(v343 * v338) + (float)(v345 * v340)) + (float)(v344 * *(float *)v127);
            if ( v346 > 0.0 )
            {
              v347 = v338 * v346;
              v348 = v340 * v346;
              v349 = v343 - v347;
              v350 = *(float *)v127 * v346;
              v351 = v345 - v348;
              v352 = v344 - v350;
              v353 = fsqrt((float)((float)(v351 * v351) + (float)(v349 * v349)) + (float)(v352 * v352));
              if ( v353 > 0.0 )
              {
                v354 = fminf(
                         fsqrt((float)((float)(v348 * v348) + (float)(v347 * v347)) + (float)(v350 * v350))
                       * *((float *)v127 + 1),
                         v353);
                v347 = v347 + (float)((float)(v349 * (float)(1.0 / v353)) * v354);
                v348 = v348 + (float)((float)(v351 * (float)(1.0 / v353)) * v354);
                v350 = v350 + (float)((float)(v352 * (float)(1.0 / v353)) * v354);
              }
              v355 = *((float *)v127 - 12);
              v356 = v348 * *((float *)v127 - 11);
              *(float *)&dword_140404A6C[v342 + 18215721] = v347 + *(float *)&dword_140404A6C[v342 + 18215721];
              *(float *)&dword_140404A6C[v342 + 18215722] = v356 + *(float *)&dword_140404A6C[v342 + 18215722];
              v357 = fminf(v346 * 1024.0, 1.0);
              *(float *)&dword_140404A6C[v342 + 18215723] = v350 + *(float *)&dword_140404A6C[v342 + 18215723];
              v358 = (float)(v355 * v337) * v357;
              v359 = -(float)((float)(v355 * v341) * v357);
              v360 = *(float *)&dword_140404A6C[v342 + 18215737] * v359;
              v361 = v358 * *((float *)v127 - 20);
              *(float *)&v362 = (float)((float)(v358 * *((float *)v127 - 21))
                                      + (float)(v359 * *(float *)&dword_140404A6C[v342 + 18215736]))
                              + *(float *)&dword_140404A6C[v342 + 18215739];
              v363 = (float)(v358 * *((float *)v127 - 19)) + (float)(*(float *)&dword_140404A6C[v342 + 18215738] * v359);
              dword_140404A6C[v342 + 18215739] = v362;
              *(float *)&dword_140404A6C[v342 + 18215740] = (float)(v361 + v360)
                                                          + *(float *)&dword_140404A6C[v342 + 18215740];
              *(float *)&dword_140404A6C[v342 + 18215741] = v363 + *(float *)&dword_140404A6C[v342 + 18215741];
            }
          }
        }
        ++v126;
        v128 += 36;
        v127 += 61;
        --v129;
      }
      while ( v129 );
    }
    sub_140107ED0();
    v118 = dword_140404A6C[278520507];
    if ( dword_140404A6C[278520507] )
    {
      v101 = dword_140404A6C[73990061];
      if ( (int)dword_140404A6C[73990061] > 0 )
      {
        v371 = (__m128 *)flt_140384000;
        v372 = dword_140404A6C[73990061];
        do
        {
          *v371 = _mm_add_ps(v371[1], *v371);
          v371 += 2;
          --v372;
        }
        while ( v372 );
      }
    }
    else
    {
      v101 = dword_140404A6C[73990061];
      v364 = 0;
      v365 = 0;
      if ( (int)dword_140404A6C[73990061] >= 4 )
      {
        v366 = &flt_140384000[1];
        v367 = ((dword_140404A6C[73990061] - 4) >> 2) + 1;
        v368 = v367;
        v365 = 4LL * v367;
        v364 = 4 * v367;
        do
        {
          *(v366 - 1) = v366[3] + *(v366 - 1);
          *v366 = v366[4] + *v366;
          v366[1] = v366[5] + v366[1];
          v366[7] = v366[11] + v366[7];
          v366[8] = v366[12] + v366[8];
          v366[9] = v366[13] + v366[9];
          v366[15] = v366[19] + v366[15];
          v366[16] = v366[20] + v366[16];
          v366[17] = v366[21] + v366[17];
          v366[23] = v366[27] + v366[23];
          v366[24] = v366[28] + v366[24];
          v366[25] = v366[29] + v366[25];
          v366 += 32;
          --v368;
        }
        while ( v368 );
      }
      if ( v364 < v101 )
      {
        v369 = &flt_140384000[8 * v365 + 1];
        v370 = (unsigned int)(v101 - v364);
        do
        {
          *(v369 - 1) = v369[3] + *(v369 - 1);
          *v369 = v369[4] + *v369;
          v369[1] = v369[5] + v369[1];
          v369 += 8;
          --v370;
        }
        while ( v370 );
      }
    }
    v373 = (float *)&dword_140404A6C[18215719];
    do
    {
      if ( *((_DWORD *)v373 - 10) && !*((_DWORD *)v373 - 8) )
      {
        *(v373 - 1) = v373[2] + *(v373 - 1);
        *v373 = v373[3] + *v373;
        v373[1] = v373[4] + v373[1];
        v374 = v373[20] + v373[14];
        v373[14] = v374;
        v375 = v373[21] + v373[15];
        v373[15] = v375;
        v376 = v373[22] + v373[16];
        v373[16] = v376;
        v377 = v373[29] * 8.0;
        v378 = fsqrt((float)((float)(v375 * v375) + (float)(v374 * v374)) + (float)(v376 * v376));
        if ( v378 > v377 )
        {
          v379 = v377 / v378;
          v375 = v375 * v379;
          v373[14] = v374 * v379;
          v376 = v376 * v379;
          v373[15] = v375;
          v373[16] = v376;
        }
        v380 = v373[8];
        v381 = (float)((float)((float)(v373[14] * v373[5]) + (float)(v375 * v373[6])) + (float)(v376 * v373[7]))
             * v373[26];
        v382 = v373[11];
        v383 = (float)((float)((float)(v375 * v373[9]) + (float)(v373[14] * v380)) + (float)(v376 * v373[10]))
             * v373[27];
        v384 = (float)((float)((float)(v375 * v373[12]) + (float)(v373[14] * v382)) + (float)(v376 * v373[13]))
             * v373[28];
        v373[17] = (float)((float)(v380 * v383) + (float)(v381 * v373[5])) + (float)(v382 * v384);
        v373[18] = (float)((float)(v383 * v373[9]) + (float)(v381 * v373[6])) + (float)(v384 * v373[12]);
        v373[19] = (float)((float)(v383 * v373[10]) + (float)(v381 * v373[7])) + (float)(v384 * v373[13]);
      }
      v373 += 47;
    }
    while ( (__int64)v373 < (__int64)&dword_140404A6C[18600743] );
    ++v119;
  }
  while ( v119 < 32 );
  v385 = 0;
  if ( v101 < 4 )
  {
    if ( v101 > 0 )
    {
      v390 = 0;
      goto LABEL_192;
    }
  }
  else
  {
    v386 = ((unsigned int)(v101 - 4) >> 2) + 1;
    v387 = &dword_140404A6C[73007034];
    v388 = v386;
    v389 = &flt_140384000[2];
    v385 = 4 * v386;
    v390 = 4LL * v386;
    do
    {
      v391 = *((_DWORD *)v389 - 2);
      v389 += 32;
      *(v387 - 2) = v391;
      v387 += 240;
      *(v387 - 241) = *((_DWORD *)v389 - 33);
      *(v387 - 240) = *((_DWORD *)v389 - 32);
      *(v387 - 182) = *((_DWORD *)v389 - 26);
      *(v387 - 181) = *((_DWORD *)v389 - 25);
      *(v387 - 180) = *((_DWORD *)v389 - 24);
      *(v387 - 122) = *((_DWORD *)v389 - 18);
      *(v387 - 121) = *((_DWORD *)v389 - 17);
      *(v387 - 120) = *((_DWORD *)v389 - 16);
      *(v387 - 62) = *((_DWORD *)v389 - 10);
      *(v387 - 61) = *((_DWORD *)v389 - 9);
      *(v387 - 60) = *((_DWORD *)v389 - 8);
      --v388;
    }
    while ( v388 );
    if ( v385 >= v101 )
      goto LABEL_194;
LABEL_192:
    v392 = &dword_140404A6C[60 * v390 + 73007034];
    v393 = &flt_140384000[8 * v390 + 2];
    v394 = (unsigned int)(v101 - v385);
    do
    {
      v395 = *((_DWORD *)v393 - 2);
      v393 += 8;
      *(v392 - 2) = v395;
      v392 += 60;
      *(v392 - 61) = *((_DWORD *)v393 - 9);
      *(v392 - 60) = *((_DWORD *)v393 - 8);
      --v394;
    }
    while ( v394 );
  }
LABEL_194:
  result = &dword_140404A6C[486149253];
  do
  {
    if ( *result && !result[3] )
      *result = 0;
    if ( result[61] && !result[64] )
      result[61] = 0;
    if ( result[122] && !result[125] )
      result[122] = 0;
    if ( result[183] )
    {
      if ( !result[186] )
        result[183] = 0;
    }
    result += 244;
  }
  while ( (__int64)result < (__int64)&dword_140404A6C[487148677] );
  return result;
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
  unsigned int *v0; // rsi
  int i; // r10d
  int v2; // ecx
  int v3; // eax
  int *v4; // r11
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  signed int v8; // r8d
  unsigned int *v9; // r9
  int v10; // edx
  unsigned int *v11; // rax
  int v12; // eax
  int *v13; // r11
  __int64 v14; // rdi
  __int64 v15; // r8
  signed int v16; // ecx
  unsigned int *v17; // r9
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rbx

  v0 = &dword_140404A6C[486149256];
  for ( i = 0; i < 0x4000; ++i )
  {
    if ( *(v0 - 3) )
    {
      v2 = *v0;
      if ( (int)*v0 < 0x10000 )
        *v0 = --v2;
      if ( v2 <= 0 && (unsigned int)i <= 0x3FFF )
      {
        v3 = v0[2];
        if ( v3 > 0 )
        {
          v4 = (int *)(v0 + 3);
          v5 = (unsigned int)v3;
          do
          {
            v6 = *v4;
            if ( (_DWORD)v6 != -1 )
            {
              v7 = *v4;
              v8 = 0;
              v9 = &dword_140404A6C[60 * v6 + 73007041];
              v10 = *v9;
              if ( (int)*v9 > 0 )
              {
                v11 = &dword_140404A6C[60 * v7 + 73007042];
                do
                {
                  if ( *v11 == i )
                  {
                    *v9 = v10 - 1;
                    *v11 = dword_140404A6C[60 * v7 + 73007041 + v10];
                  }
                  else
                  {
                    ++v8;
                    ++v11;
                  }
                  v10 = *v9;
                }
                while ( v8 < (int)*v9 );
              }
            }
            ++v4;
            --v5;
          }
          while ( v5 );
        }
        v12 = v0[34];
        if ( v12 > 0 )
        {
          v13 = (int *)(v0 + 35);
          v14 = (unsigned int)v12;
          do
          {
            v15 = *v13;
            v16 = 0;
            v17 = &dword_140404A6C[5210 * v15 + 129716962];
            v18 = *v17;
            if ( (int)*v17 > 0 )
            {
              v19 = 5210 * v15;
              v20 = v19;
              do
              {
                if ( dword_140404A6C[v19 + 129716963] == i )
                {
                  *v17 = v18 - 1;
                  dword_140404A6C[v19 + 129716963] = dword_140404A6C[v20 + 129716962 + v18];
                }
                else
                {
                  ++v16;
                  ++v19;
                }
                v18 = *v17;
              }
              while ( v16 < (int)*v17 );
            }
            ++v13;
            --v14;
          }
          while ( v14 );
        }
        *(v0 - 3) = 0;
      }
    }
    v0 += 61;
  }
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

  qword_1402B27D0 = 0;
  dword_1402B27D8 = 1065353216;
  sub_14007A240((__int64)&qword_1402B27D0, (float *)&qword_1402B27D0);
  qword_1402B27DC = 1065353216;
  dword_1402B27E4 = 1065353216;
  sub_14007A240((__int64)&qword_1402B27DC, (float *)&qword_1402B27DC);
  dword_1402B27E8 = -1082130432;
  dword_1402B27EC = 0;
  dword_1402B27F0 = 1065353216;
  sub_14007A240((__int64)&dword_1402B27E8, (float *)&dword_1402B27E8);
  dword_1402B27F8 = 1061158912;
  dword_1402B27F4 = 0;
  dword_1402B27FC = 1065353216;
  sub_14007A240((__int64)&dword_1402B27F4, (float *)&dword_1402B27F4);
  dword_1402B2804 = -1086324736;
  dword_1402B2800 = 0;
  dword_1402B2808 = 1065353216;
  sub_14007A240((__int64)&dword_1402B2800, (float *)&dword_1402B2800);
  v4 = (float *)&dword_1402B27D8;
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
    if ( (__int64)v4 < (__int64)((float *)&off_1402B2810 + 1) )
      continue;
    return 1;
  }
}
