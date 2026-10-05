/* Address: 0x140003460 | Name: sub_140003460 | Size: 756 bytes */
__int64 __fastcall sub_140003460(float *a1, float a2, float a3, float a4)
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
  v47 = &dword_1402B3664;
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

