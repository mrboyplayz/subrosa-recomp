/* Address: 0x140077230 | Name: sub_140077230 | Size: 1066 bytes */
__int64 sub_140077230()
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  unsigned int v6; // xmm0_4
  __int64 v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  unsigned int *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm8_4
  float v13; // xmm4_4
  unsigned int *v14; // rbx
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // eax
  signed int v21; // eax

  if ( !dword_140404A6C[70087029] )
  {
    dword_140404A6C[70087046] = -1;
    return 1;
  }
  v1 = (int)dword_140404A6C[70087046];
  if ( dword_140404A6C[70087046] == -1 )
    return 1;
  v2 = 0;
  if ( dword_140404A6C[70087105] == dword_140404A6C[70087046] )
  {
    v3 = 98LL * (int)dword_140404A6C[70087046];
    v4 = (float)(int)dword_140404A6C[137297772];
    dword_140404A6C[137297772] = 0;
    v5 = *(float *)&dword_140404A6C[v3 + 70290905] - (float)(v4 * 16.0);
    if ( v5 < 0.0 )
      v5 = 0.0;
    v6 = dword_140404A6C[v3 + 70290907];
    *(float *)&dword_140404A6C[v3 + 70290905] = v5;
    if ( v5 > *(float *)&v6 )
      dword_140404A6C[v3 + 70290905] = v6;
  }
  v7 = 98 * v1;
  v8 = 0.0;
  v9 = 0.0;
  v10 = &dword_140404A6C[70087122];
  v11 = 256;
  v12 = *(float *)&dword_140404A6C[98 * v1 + 70290983];
  v13 = *(float *)&dword_140404A6C[98 * v1 + 70290984];
  do
  {
    if ( *(v10 - 9) == 3 && *v10 == (_DWORD)v1 )
    {
      if ( *(v10 - 4) )
      {
        v8 = fmaxf(*((float *)v10 + 5) + *((float *)v10 + 3), v8);
        if ( v9 < (float)(*((float *)v10 + 6) + *((float *)v10 + 4)) )
          v9 = *((float *)v10 + 6) + *((float *)v10 + 4);
      }
    }
    if ( v10[113] == 3 && v10[122] == (_DWORD)v1 )
    {
      if ( v10[118] )
      {
        v8 = fmaxf(*((float *)v10 + 127) + *((float *)v10 + 125), v8);
        if ( v9 < (float)(*((float *)v10 + 128) + *((float *)v10 + 126)) )
          v9 = *((float *)v10 + 128) + *((float *)v10 + 126);
      }
    }
    if ( v10[235] == 3 && v10[244] == (_DWORD)v1 )
    {
      if ( v10[240] )
      {
        v8 = fmaxf(*((float *)v10 + 249) + *((float *)v10 + 247), v8);
        if ( v9 < (float)(*((float *)v10 + 250) + *((float *)v10 + 248)) )
          v9 = *((float *)v10 + 250) + *((float *)v10 + 248);
      }
    }
    if ( v10[357] == 3 && v10[366] == (_DWORD)v1 )
    {
      if ( v10[362] )
      {
        v8 = fmaxf(*((float *)v10 + 371) + *((float *)v10 + 369), v8);
        if ( v9 < (float)(*((float *)v10 + 372) + *((float *)v10 + 370)) )
          v9 = *((float *)v10 + 372) + *((float *)v10 + 370);
      }
    }
    v10 += 488;
    --v11;
  }
  while ( v11 );
  v14 = &dword_140404A6C[v7 + 70290905];
  if ( v9 <= v13 )
  {
    *v14 = 0;
    v15 = 0.0;
  }
  else
  {
    v15 = v9 - v13;
    sub_140070FF0(
      dword_140404A6C[v7 + 70290892],
      v12 - 16.0,
      *(float *)&dword_140404A6C[v7 + 70290905],
      16.0,
      COERCE_INT(v13 - 16.0),
      COERCE_UNSIGNED_INT(fmaxf((float)(v13 * (float)(v13 - 16.0)) / v9, 16.0)),
      (float *)&dword_140404A6C[v7 + 70290905],
      0.0,
      v9 - v13);
  }
  *(float *)&dword_140404A6C[v7 + 70290907] = v15;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v16 = v12 - 16.0;
  dword_140404A6C[70087069] = 1098907648;
  dword_140404A6C[70087070] = 1098907648;
  v17 = *(float *)v14 - 16.0;
  if ( (int)dword_140404A6C[70317929] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317929] + 70317930] = dword_140404A6C[70087067];
    dword_140404A6C[2 * dword_140404A6C[70317929]++ + 70317931] = dword_140404A6C[70087068];
  }
  *(float *)&dword_140404A6C[70087067] = v16;
  *(float *)&dword_140404A6C[70087068] = v17;
  v18 = (unsigned int)ui_button_candidate((__int64)"X") == 0;
  v19 = dword_140404A6C[70317929];
  if ( !v18 )
    v2 = 1;
  if ( (int)dword_140404A6C[70317929] > 0 )
  {
    --dword_140404A6C[70317929];
    dword_140404A6C[70087067] = dword_140404A6C[2 * (v19 - 1) + 70317930];
    dword_140404A6C[70087068] = dword_140404A6C[2 * (v19 - 1) + 70317931];
  }
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  v21 = dword_140404A6C[70087029] - 1;
  dword_140404A6C[70087029] = v21;
  if ( v21 <= 0 )
    dword_140404A6C[70087046] = -1;
  else
    dword_140404A6C[70087046] = dword_140404A6C[v21 + 70087029];
  return v2;
}

