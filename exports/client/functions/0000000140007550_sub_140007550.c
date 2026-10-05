/* Address: 0x140007550 | Name: sub_140007550 | Size: 1715 bytes */
__int64 __fastcall sub_140007550(float *a1, float a2, float a3, float a4)
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
  v53 = &dword_1402B3664;
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

