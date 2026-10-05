/* Address: 0x140002d00 | Name: sub_140002D00 | Size: 1886 bytes */
__int64 __fastcall sub_140002D00(float *a1, float a2, float a3, float a4)
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

