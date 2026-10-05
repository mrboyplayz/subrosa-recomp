/* Address: 0x1400a4cc0 | Name: sub_1400A4CC0 | Size: 1305 bytes */
__int64 __fastcall sub_1400A4CC0(int a1)
{
  __int64 v1; // rbx
  float v2; // xmm0_4
  float v3; // xmm0_4
  int v4; // r8d
  float v5; // xmm0_4
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10; // eax
  int v11; // eax
  int v12; // edx
  float v13; // xmm0_4
  int v14; // eax
  int v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  int v22; // xmm10_4
  float v23; // xmm8_4
  double v24; // xmm6_8
  float v25; // xmm0_4
  float v26; // xmm1_4
  int v27; // ecx
  int v28; // edx
  __int64 result; // rax

  v1 = 5210LL * a1;
  v2 = *(float *)&dword_16E6A3C60[v1 + 3459];
  if ( v2 <= 0.0 )
  {
    v3 = *(float *)&dword_16E6A3C60[v1 + 3623];
    if ( v3 <= 0.125 )
      dword_16E6A3C60[v1 + 3623] = 0;
    else
      *(float *)&dword_16E6A3C60[v1 + 3623] = v3 - 0.125;
  }
  else
  {
    *(float *)&dword_16E6A3C60[v1 + 3623] = fabs(v2);
  }
  v4 = dword_16E6A3C60[v1 + 3464];
  v5 = *(float *)&dword_16E6A3C60[v1 + 3636];
  dword_16E6A3C60[v1 + 3661] = 0;
  if ( (v4 & 2) != 0 )
  {
    if ( v5 <= 0.125 )
      dword_16E6A3C60[v1 + 3636] = 0;
    else
      *(float *)&dword_16E6A3C60[v1 + 3636] = v5 - 0.125;
  }
  else if ( v5 >= 0.875 )
  {
    dword_16E6A3C60[v1 + 3636] = 1065353216;
  }
  else
  {
    *(float *)&dword_16E6A3C60[v1 + 3636] = v5 + 0.125;
  }
  v6 = *(float *)&dword_16E6A3C60[v1 + 3458];
  v7 = 0;
  if ( v6 >= -0.5 )
  {
    if ( v6 <= 0.5 )
    {
      dword_16E6A3C60[v1 + 3636] = 0;
      dword_16E6A3C60[v1 + 3631] = 0;
    }
    else
    {
      v9 = *(float *)&dword_16E6A3C60[v1 + 3456];
      if ( v9 >= 0.5 )
      {
        v10 = -1;
        if ( v9 < 1.5 )
          v10 = 4;
        dword_16E6A3C60[v1 + 3631] = v10;
      }
      else
      {
        dword_16E6A3C60[v1 + 3631] = 2;
      }
    }
  }
  else
  {
    v8 = *(float *)&dword_16E6A3C60[v1 + 3456];
    if ( v8 >= 0.5 )
    {
      if ( v8 >= 1.5 )
      {
        dword_16E6A3C60[v1 + 3661] = 1;
        v7 = 1;
      }
      else
      {
        dword_16E6A3C60[v1 + 3631] = 3;
      }
    }
    else
    {
      dword_16E6A3C60[v1 + 3631] = 1;
    }
  }
  if ( v7 )
  {
    v11 = dword_16E6A3C60[v1 + 3631];
    if ( v11 < 1 )
    {
      v11 = 1;
      dword_16E6A3C60[v1 + 3631] = 1;
    }
    v12 = dword_16E6A3C60[v1 + 3662];
    if ( v12 <= 0 )
    {
      if ( (unsigned int)v11 > 1 && *(float *)&dword_16E6A3C60[v1 + 3622] < 4.363323129986111 )
      {
        --v11;
        dword_16E6A3C60[v1 + 3662] = 30;
        dword_16E6A3C60[v1 + 3631] = v11;
      }
      v13 = 10.471975;
      if ( dword_16E6A3C60[v1 + 1] == 9 )
        v13 = 7.8539815;
      if ( v11 < 4 && v13 < *(float *)&dword_16E6A3C60[v1 + 3622] )
      {
        dword_16E6A3C60[v1 + 3662] = 30;
        dword_16E6A3C60[v1 + 3631] = v11 + 1;
      }
    }
    else
    {
      dword_16E6A3C60[v1 + 3662] = v12 - 1;
    }
  }
  v14 = dword_16E6A3C60[v1 + 3631];
  if ( v14 >= -1 )
  {
    if ( v14 > 4 )
    {
      v14 = 4;
      dword_16E6A3C60[v1 + 3631] = 4;
    }
  }
  else
  {
    v14 = -1;
    dword_16E6A3C60[v1 + 3631] = -1;
  }
  dword_16E6A3C60[v1 + 3637] = 0;
  if ( v4 == -1 )
  {
    v14 = 0;
    *(float *)&v15 = *(float *)&dword_16E6A3C60[v1 + 3622] * 0.9375;
    dword_16E6A3C60[v1 + 3637] = 1065353216;
    dword_16E6A3C60[v1 + 3631] = 0;
    dword_16E6A3C60[v1 + 3622] = v15;
  }
  if ( !v7 && v14 != dword_16E6A3C60[v1 + 3632] )
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
    sub_140039BF0(dword_191536DB0, &dword_16E6A3C8C[v1], v17, v16);
  }
  v18 = dword_16E6A3C60[v1 + 3631];
  if ( v18 )
  {
    switch ( v18 )
    {
      case 1:
        dword_16E6A3C60[v1 + 3634] = 1093507481;
        break;
      case 2:
        dword_16E6A3C60[v1 + 3634] = 1089889895;
        break;
      case 3:
        dword_16E6A3C60[v1 + 3634] = 1084751872;
        break;
      case 4:
        dword_16E6A3C60[v1 + 3634] = 1080033280;
        break;
      case -1:
        dword_16E6A3C60[v1 + 3634] = -1054343168;
        break;
    }
  }
  else
  {
    dword_16E6A3C60[v1 + 3634] = 0;
  }
  v19 = *(float *)&dword_16E6A3C60[v1 + 3459];
  if ( v19 < 0.0 )
    *(float *)&dword_16E6A3C60[v1 + 3637] = -v19;
  if ( (dword_16E6A3C60[v1 + 3464] & 4) != 0 )
    dword_16E6A3C60[v1 + 3637] = 0x40000000;
  v20 = *(float *)&dword_16E6A3C60[v1 + 3634];
  if ( v20 == 0.0 )
    v21 = 0.0;
  else
    v21 = 1.0 / v20;
  *(float *)&dword_16E6A3C60[v1 + 3635] = v21;
  v22 = dword_16E6A3C60[v1 + 3457];
  dword_16E6A3C60[v1 + 3663] = v22;
  v23 = fabs(*(float *)&v22);
  if ( v23 <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v24 = *(float *)&dword_16E6A3C60[v1 + 5174];
    v25 = tan(1.570796326795 - v23) * v24 + *(float *)&dword_16E6A3C60[v1 + 5173];
    v26 = 1.570796326795 - atan2(v25, v24);
  }
  if ( *(float *)&v22 <= 0.0 )
  {
    *(float *)&dword_16E6A3C60[v1 + 3726] = -v26;
    v26 = -v23;
  }
  else
  {
    *(float *)&dword_16E6A3C60[v1 + 3726] = v23;
  }
  *(float *)&dword_16E6A3C60[v1 + 3683] = v26;
  if ( dword_16E6A3C60[v1 + 3] <= 0 || dword_16E6A3C60[v1 + 8] )
    dword_16E6A3C60[v1 + 3622] = 0;
  v27 = 0;
  v28 = dword_16E6A3C60[v1 + 3631];
  if ( (int)((float)(*(float *)&dword_16E6A3C60[v1 + 3622] * 3600.0) * 0.1591549430918849) >= 0 )
    v27 = (int)((float)(*(float *)&dword_16E6A3C60[v1 + 3622] * 3600.0) * 0.1591549430918849);
  result = (unsigned int)v27;
  if ( v28 <= 0 || v27 >= 1 )
  {
    if ( v27 > 0x1FFF )
      result = 0x1FFF;
    dword_16E6A3C60[v1 + 3660] = result;
  }
  else
  {
    dword_16E6A3C60[v1 + 3660] = 1;
  }
  if ( *(float *)&dword_16E6A3C60[v1 + 3459] > 0.0 )
  {
    dword_16E6A3C60[v1 + 3459] = 0;
    v28 = dword_16E6A3C60[v1 + 3631];
  }
  dword_16E6A3C60[v1 + 3632] = v28;
  return result;
}

