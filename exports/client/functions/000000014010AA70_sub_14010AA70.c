/* Address: 0x14010aa70 | Name: sub_14010AA70 | Size: 1305 bytes */
__int64 __fastcall sub_14010AA70(int a1)
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
  unsigned int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  unsigned int v20; // xmm10_4
  float v21; // xmm8_4
  float v22; // xmm1_4
  int v23; // ecx
  int v24; // edx
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
    sub_1400515E0(dword_140404A6C[283786009], &dword_140404A6C[v1 + 129716720]);
  v16 = dword_140404A6C[v1 + 129720340];
  if ( v16 )
  {
    switch ( v16 )
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
  v17 = *(float *)&dword_140404A6C[v1 + 129720168];
  if ( v17 < 0.0 )
    *(float *)&dword_140404A6C[v1 + 129720346] = -v17;
  if ( (dword_140404A6C[v1 + 129720173] & 4) != 0 )
    dword_140404A6C[v1 + 129720346] = 0x40000000;
  v18 = *(float *)&dword_140404A6C[v1 + 129720343];
  if ( v18 == 0.0 )
    v19 = 0.0;
  else
    v19 = 1.0 / v18;
  *(float *)&dword_140404A6C[v1 + 129720344] = v19;
  v20 = dword_140404A6C[v1 + 129720166];
  dword_140404A6C[v1 + 129720372] = v20;
  v21 = fabs(*(float *)&v20);
  if ( v21 <= 0.0 )
  {
    v22 = 0.0;
  }
  else
  {
    tan(1.570796326795 - v21);
    v22 = 1.570796326795 - sub_14023EDE4();
  }
  if ( *(float *)&v20 <= 0.0 )
  {
    *(float *)&dword_140404A6C[v1 + 129720435] = -v22;
    v22 = -v21;
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 129720435] = v21;
  }
  *(float *)&dword_140404A6C[v1 + 129720392] = v22;
  if ( (int)dword_140404A6C[v1 + 129716712] <= 0 || dword_140404A6C[v1 + 129716717] )
    dword_140404A6C[v1 + 129720331] = 0;
  v23 = 0;
  v24 = dword_140404A6C[v1 + 129720340];
  if ( (int)((float)(*(float *)&dword_140404A6C[v1 + 129720331] * 3600.0) * 0.1591549430918849) >= 0 )
    v23 = (int)((float)(*(float *)&dword_140404A6C[v1 + 129720331] * 3600.0) * 0.1591549430918849);
  result = (unsigned int)v23;
  if ( v24 <= 0 || v23 >= 1 )
  {
    if ( v23 > 0x1FFF )
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
    v24 = dword_140404A6C[v1 + 129720340];
  }
  dword_140404A6C[v1 + 129720341] = v24;
  return result;
}

