/* Address: 0x1400066b0 | Name: sub_1400066B0 | Size: 2232 bytes */
__int64 __fastcall sub_1400066B0(float *a1, float *a2, float a3, float a4, float a5, int a6)
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

